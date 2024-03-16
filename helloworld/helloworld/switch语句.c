//#include <stdio.h>
//
//int main() {
//	/*
//		执行流程：
//			首先计算表达式的值
//			依次和case后面的值进行比较，如果有对应的值，就会执行相应的语句，在执行的过程中，遇到break就会结束
//			如果所有的case后面的值和表达式的值都不匹配，就会执行default里面的语句体，然后结束整个switch语句
//		细节说明：
//			表达式：计算结果只能为(字符/整数)
//			case：值只能是(字符/整数)的字面量，不能是变量
//			case：值不允许重复
//			break：表示中断，结束的意思，结束switch语句
//			default：所有情况都不匹配，执行该处的内容，可以写在任意，甚至可以省略不写
//	*/
//	int num = 1;
//	switch (num) {
//	case 1:
//		printf("今天是星期一");
//		break;
//	case 2:
//		printf("今天是星期二");
//		break;
//	case 3:
//		printf("今天是星期三");
//		break;
//	case 4:
//		printf("今天是星期四");
//		break;
//	case 5:
//		printf("今天是星期五");
//		break;
//	case 6:
//		printf("今天是星期六");
//		break;
//	case 7:
//		printf("今天是星期日");
//		break;
//	default:
//		printf("没有这个星期");
//	}
//
//	// case穿透
//	/*
//	case穿透的规则：
//		1.还是根据小括号中表达式的结果去匹配对应的case
//		2.执行对应case里面的代码
//		3.如果在执行的过程中，遇到了break，那么直接结束整个switch，但是如果没有遇到break，就会继续执行下面case中的代码，直到遇到break，或者把整个switch中所有的代码全部执行完了，才会结束
//		4.细节：case穿透只会往下穿，不会回到上面
//
//	*/
//	int number = 1;
//	switch (number) {
//	case 1:
//		printf("当前数字是1\n");
//		break;
//	case 2:
//		printf("当前数字是2\n");
//		break;
//	default:
//		printf("当前数字是其他\n");
//	}
//}
