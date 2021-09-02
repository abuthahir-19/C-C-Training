#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int indexOfEqual (char str[], char op) {
    for (int i = 0; i < strlen (str); i++) {
        if (str[i] == op) {
            return i;
        }
    }
    return 0;
}

int indexOfOperator (char str[]) {
    for (int i = 0; i < strlen (str); i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
        str[i] == '%') return i;
    }return 0;
}

char findOperatorAtIndex (char sub[], int index) {
    if (sub[index] == '+') return '+';
    else if (sub[index] == '-') return '-';
    else if (sub[index] == '*') return '*';
    else if (sub[index] == '%') return '%';
}

int main ()
{
    char str[1001], rhs[501], lhs[501], befOp[251], aftOp[251];
    int k = 0, v = 0, b = 0, g = 0, op1, op2, res;
    scanf ("%[^\n]%*c", str);
    int equalIndex = indexOfEqual (str, '=');
    for (int i = 0; i < equalIndex; i++) {
        rhs[k++] = str[i];
    }
    rhs[k] = '\0';
    for (int i = equalIndex+1; i < strlen (str); i++) {
        lhs[v++] = str[i];
    }
    lhs[v] = '\0';
    if (v > k) {
        res = atoi (rhs);
        int operatorIndex = indexOfOperator (lhs);
        char oper = findOperatorAtIndex (lhs, operatorIndex);
        if (operatorIndex) {
            for (int j = 0; j < operatorIndex; j++) {
                befOp[b++] = lhs[j];
            }
            befOp[b] = '\0';
            for (int j = operatorIndex+1; j < strlen (lhs); j++) {
                aftOp[g++] = lhs[j];
            }
            aftOp[g] = '\0';
            op1 = atoi (befOp);
            op2 = atoi (aftOp);
            switch (oper) {
                case '+' :
                    if (op1 + op2 == res) printf ("Valid");
                    else printf ("Invalid");
                    break;
                case '-' :
                    if (op1 - op2 == res) printf ("Valid");
                    else printf ("Invalid");
                    break;
                case '*' :
                    if (op1 * op2 == res) printf ("Valid");
                    else printf ("Invalid");
                    break;
                case '%' :
                    if (op1 % op2 == res) printf ("Valid");
                    else printf ("Invalid");
                    break;
            }
        }else {
            int indexes[3], len = 0, op1, op2, op3, equalIndexInLHS = indexOfEqual (lhs, '=');
            char rightOrLeftOp[1001], y = 0;
            for (int i = 0; i < equalIndex; i++) {
                rightOrLeftOp[y++] = str[i];
            }
            rightOrLeftOp[y] = '\0';
            for (int j = 0; j < equalIndexInLHS; j++) {
                befOp[b++] = lhs[j];
            }
            befOp[b] = '\0';
            for (int j = equalIndexInLHS+1; j < strlen (lhs); j++) {
                aftOp[g++] = lhs[j];
            }
            aftOp[g] = '\0';
            op1 = atoi (rightOrLeftOp);
            op2 = atoi (befOp);
            op3 = atoi (aftOp);
            if (op1 == op2 && op2 == op3) {
                printf ("Valid");
            }
            else printf ("Invalid");
        }
    }
    else {
        res = atoi (lhs);
        int operatorIndex = indexOfOperator (rhs);
        char oper = findOperatorAtIndex (rhs, operatorIndex);
        if (operatorIndex) {
            for (int j = 0; j < operatorIndex; j++) {
                befOp[b++] = rhs[j];
            }
            befOp[b] = '\0';
            for (int j = operatorIndex+1; j < strlen (rhs); j++) {
                aftOp[g++] = rhs[j];
            }
            aftOp[g] = '\0';
            op1 = atoi (befOp);
            op2 = atoi (aftOp);
            switch (oper) {
                case '+' :
                    if (op1 + op2 == res) printf ("Valid");
                    else printf ("Invalid");
                    break;
                case '-' :
                    if (op1 - op2 == res) printf ("Valid");
                    else printf ("Invalid");
                    break;
                case '*' :
                    if (op1 * op2 == res) printf ("Valid");
                    else printf ("Invalid");
                    break;
                case '%' :
                    if (op1 % op2 == res) printf ("Valid");
                    else printf ("Invalid");
                    break;
            }
        }
    }
    return 0;
}