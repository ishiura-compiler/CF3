#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x40 = INT16_MAX;
uint16_t x41 = UINT16_MAX;
int8_t x42 = INT8_MAX;
volatile int64_t t2 = 12LL;
volatile uint32_t t3 = 19740U;
int32_t t4 = -25207;
volatile int32_t x62 = INT32_MAX;
int16_t x69 = -1;
static uint8_t x82 = 3U;
volatile int64_t t8 = 3LL;
int8_t x107 = 1;
volatile uint8_t x133 = UINT8_MAX;
static volatile int32_t t10 = 0;
int8_t x182 = 3;
int16_t x183 = -1;
uint64_t x209 = 46LLU;
static int32_t x217 = INT32_MIN;
volatile int64_t x218 = 7918215708LL;
int32_t x220 = INT32_MIN;
volatile uint32_t t16 = 220U;
int8_t x271 = -1;
int32_t x316 = 4958;
uint32_t t18 = 1389557955U;
static volatile int8_t x385 = INT8_MIN;
static int8_t x387 = 1;
uint64_t x402 = 7102308847260299910LLU;
volatile uint16_t x434 = 56U;
int16_t x436 = INT16_MIN;
int32_t t22 = -709;
int16_t x460 = INT16_MIN;
volatile int32_t t23 = -16597094;
int32_t x492 = INT32_MIN;
volatile uint32_t x514 = 1U;
uint8_t x515 = 105U;
uint8_t x517 = 111U;
volatile int8_t x519 = 17;
int16_t x520 = INT16_MAX;
static volatile int8_t x525 = INT8_MIN;
int32_t x527 = -11932;
volatile int8_t x555 = INT8_MIN;
volatile int8_t x559 = INT8_MIN;
volatile uint64_t t33 = 2LLU;
uint16_t x566 = 473U;
int8_t x577 = INT8_MAX;
volatile uint64_t x578 = UINT64_MAX;
uint64_t x598 = 20794327LLU;
uint64_t x599 = 2031743LLU;
int32_t x624 = 125;
volatile uint64_t t37 = 11LLU;
volatile int32_t t39 = 675700904;
uint32_t x699 = UINT32_MAX;
int32_t x788 = INT32_MAX;
static int64_t x795 = -7LL;
volatile int8_t x796 = -13;
int32_t t47 = 8118038;
int16_t x845 = -1;
uint64_t x882 = UINT64_MAX;
static volatile int16_t x883 = -14;
volatile int64_t x884 = INT64_MIN;
static uint16_t x889 = 11503U;
static volatile int8_t x891 = -2;
uint32_t x968 = 3413279U;
uint8_t x984 = 23U;
uint16_t x1003 = 986U;
static int8_t x1013 = 7;
uint64_t x1026 = 135444867840064LLU;
static uint64_t x1048 = 33480492LLU;
static volatile uint32_t t59 = 502447U;
uint16_t x1057 = UINT16_MAX;
uint8_t x1070 = 0U;
volatile int32_t t61 = -1;
uint64_t x1075 = 1418205097LLU;
volatile uint64_t t62 = 52360444199460LLU;
static uint8_t x1087 = UINT8_MAX;
uint16_t x1088 = UINT16_MAX;
uint64_t x1138 = 27006176303LLU;
int8_t x1140 = INT8_MIN;
uint32_t x1170 = UINT32_MAX;
volatile uint32_t x1190 = 3921559U;
volatile int64_t t70 = 1156559397LL;
uint64_t x1226 = UINT64_MAX;
int8_t x1227 = 16;
uint8_t x1251 = 13U;
int16_t x1286 = 4;
int64_t x1293 = INT64_MIN;
int32_t x1298 = INT32_MAX;
int32_t x1303 = -37400;
static uint8_t x1307 = 1U;
int32_t t82 = 44706;
int64_t x1360 = -58463419LL;
uint32_t x1363 = 3272U;
int8_t x1395 = INT8_MAX;
uint8_t x1406 = 18U;
uint32_t t89 = 1U;
volatile uint16_t x1418 = UINT16_MAX;
int32_t t91 = 98;
uint32_t x1462 = UINT32_MAX;
uint64_t x1480 = UINT64_MAX;
int32_t x1498 = 0;
static int32_t x1499 = -1;
static uint32_t x1505 = 9U;
int8_t x1507 = -1;
uint64_t x1510 = 1401299711289733206LLU;
volatile uint32_t x1511 = UINT32_MAX;
static int8_t x1512 = -28;
uint8_t x1539 = 92U;
int32_t x1540 = -117088997;
int16_t x1544 = INT16_MIN;


void f0(void) {
	int64_t x37 = -1LL;
	int16_t x38 = INT16_MAX;
	int16_t x39 = 14401;
	int64_t t0 = 4520464875LL;

	t0 = (x37+(x38<<(x39/x40)));

	if (t0 != 32766LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x43 = -1LL;
	volatile int64_t x44 = -16299216865902675LL;
	volatile int32_t t1 = 19592712;

	t1 = (x41+(x42<<(x43/x44)));

	if (t1 != 65662) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x49 = INT64_MIN;
	static uint16_t x50 = UINT16_MAX;
	volatile uint16_t x51 = 3U;
	volatile uint16_t x52 = 217U;

	t2 = (x49+(x50<<(x51/x52)));

	if (t2 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x53 = INT32_MIN;
	static uint32_t x54 = UINT32_MAX;
	static volatile int8_t x55 = INT8_MIN;
	volatile int64_t x56 = 215LL;

	t3 = (x53+(x54<<(x55/x56)));

	if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x57 = UINT16_MAX;
	uint8_t x58 = 97U;
	int8_t x59 = INT8_MIN;
	int64_t x60 = INT64_MAX;

	t4 = (x57+(x58<<(x59/x60)));

	if (t4 != 65632) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x61 = INT16_MIN;
	static int64_t x63 = 2LL;
	static int32_t x64 = INT32_MIN;
	static int32_t t5 = -896755;

	t5 = (x61+(x62<<(x63/x64)));

	if (t5 != 2147450879) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x70 = 30LLU;
	volatile int8_t x71 = INT8_MAX;
	uint64_t x72 = 950456584LLU;
	static uint64_t t6 = 258953LLU;

	t6 = (x69+(x70<<(x71/x72)));

	if (t6 != 29LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x81 = INT16_MAX;
	int8_t x83 = -57;
	volatile int16_t x84 = INT16_MIN;
	int32_t t7 = 1736;

	t7 = (x81+(x82<<(x83/x84)));

	if (t7 != 32770) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x93 = -19133LL;
	static uint32_t x94 = 150697687U;
	volatile uint64_t x95 = 10532442985412153LLU;
	int64_t x96 = -476849158391LL;

	t8 = (x93+(x94<<(x95/x96)));

	if (t8 != 150678554LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x105 = 1044081968501361815LL;
	uint32_t x106 = 6U;
	static int16_t x108 = 3749;
	int64_t t9 = -54338267900092309LL;

	t9 = (x105+(x106<<(x107/x108)));

	if (t9 != 1044081968501361821LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x134 = 26;
	uint16_t x135 = 700U;
	int32_t x136 = INT32_MIN;

	t10 = (x133+(x134<<(x135/x136)));

	if (t10 != 281) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x157 = 0;
	uint64_t x158 = 5962611024061629882LLU;
	uint32_t x159 = 11161310U;
	int16_t x160 = INT16_MIN;
	static volatile uint64_t t11 = 4011852331LLU;

	t11 = (x157+(x158<<(x159/x160)));

	if (t11 != 5962611024061629882LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x181 = 94557287735582LL;
	int16_t x184 = INT16_MIN;
	static int64_t t12 = 253388LL;

	t12 = (x181+(x182<<(x183/x184)));

	if (t12 != 94557287735585LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x210 = 208LLU;
	uint64_t x211 = 1010832571LLU;
	int32_t x212 = INT32_MIN;
	uint64_t t13 = 858973LLU;

	t13 = (x209+(x210<<(x211/x212)));

	if (t13 != 254LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x219 = -1LL;
	int64_t t14 = -14LL;

	t14 = (x217+(x218<<(x219/x220)));

	if (t14 != 5770732060LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x229 = -1LL;
	uint64_t x230 = 929362893423LLU;
	volatile int8_t x231 = -3;
	volatile int8_t x232 = -21;
	uint64_t t15 = 189542845540088423LLU;

	t15 = (x229+(x230<<(x231/x232)));

	if (t15 != 929362893422LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x265 = UINT32_MAX;
	volatile uint32_t x266 = 834297U;
	static int8_t x267 = INT8_MIN;
	int64_t x268 = 674897LL;

	t16 = (x265+(x266<<(x267/x268)));

	if (t16 != 834296U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x269 = UINT8_MAX;
	static volatile uint8_t x270 = 4U;
	int16_t x272 = -145;
	int32_t t17 = 462651;

	t17 = (x269+(x270<<(x271/x272)));

	if (t17 != 259) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x313 = UINT32_MAX;
	int32_t x314 = 202307664;
	int8_t x315 = INT8_MIN;

	t18 = (x313+(x314<<(x315/x316)));

	if (t18 != 202307663U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x353 = UINT32_MAX;
	static uint64_t x354 = 1040018155726288LLU;
	uint32_t x355 = UINT32_MAX;
	static volatile int16_t x356 = INT16_MIN;
	uint64_t t19 = 262490217714LLU;

	t19 = (x353+(x354<<(x355/x356)));

	if (t19 != 2080040606419871LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x386 = 548536154432982038LL;
	int32_t x388 = INT32_MIN;
	volatile int64_t t20 = 4611110845375506746LL;

	t20 = (x385+(x386<<(x387/x388)));

	if (t20 != 548536154432981910LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x401 = INT16_MIN;
	int8_t x403 = 1;
	int16_t x404 = 252;
	static uint64_t t21 = 38314571600LLU;

	t21 = (x401+(x402<<(x403/x404)));

	if (t21 != 7102308847260267142LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x433 = 28U;
	static int8_t x435 = -2;

	t22 = (x433+(x434<<(x435/x436)));

	if (t22 != 84) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x457 = INT16_MAX;
	volatile uint8_t x458 = UINT8_MAX;
	uint32_t x459 = 77U;

	t23 = (x457+(x458<<(x459/x460)));

	if (t23 != 33022) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x469 = 27U;
	uint32_t x470 = UINT32_MAX;
	int32_t x471 = -1;
	volatile int8_t x472 = INT8_MAX;
	volatile uint32_t t24 = 24007U;

	t24 = (x469+(x470<<(x471/x472)));

	if (t24 != 26U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x473 = -1;
	uint64_t x474 = 18LLU;
	volatile int64_t x475 = INT64_MAX;
	volatile int64_t x476 = INT64_MIN;
	uint64_t t25 = 238333520LLU;

	t25 = (x473+(x474<<(x475/x476)));

	if (t25 != 17LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x485 = -1LL;
	uint64_t x486 = UINT64_MAX;
	static uint16_t x487 = 1373U;
	volatile uint64_t x488 = 145220257507045LLU;
	volatile uint64_t t26 = 11248462LLU;

	t26 = (x485+(x486<<(x487/x488)));

	if (t26 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x489 = INT8_MAX;
	int8_t x490 = INT8_MAX;
	int16_t x491 = 1239;
	volatile int32_t t27 = 1;

	t27 = (x489+(x490<<(x491/x492)));

	if (t27 != 254) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x513 = -46280381858LL;
	volatile int8_t x516 = INT8_MIN;
	int64_t t28 = -3662449351LL;

	t28 = (x513+(x514<<(x515/x516)));

	if (t28 != -46280381857LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x518 = 2U;
	int32_t t29 = 37086;

	t29 = (x517+(x518<<(x519/x520)));

	if (t29 != 113) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x526 = 735624875648LLU;
	int16_t x528 = INT16_MAX;
	volatile uint64_t t30 = 8723581292763LLU;

	t30 = (x525+(x526<<(x527/x528)));

	if (t30 != 735624875520LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x529 = UINT16_MAX;
	uint64_t x530 = UINT64_MAX;
	int32_t x531 = INT32_MIN;
	int64_t x532 = INT64_MIN;
	volatile uint64_t t31 = 722944977841739LLU;

	t31 = (x529+(x530<<(x531/x532)));

	if (t31 != 65534LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x553 = INT8_MAX;
	uint16_t x554 = 31317U;
	int16_t x556 = INT16_MIN;
	volatile int32_t t32 = 3;

	t32 = (x553+(x554<<(x555/x556)));

	if (t32 != 31444) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x557 = 74859LL;
	static uint64_t x558 = 28743574309LLU;
	int16_t x560 = -3853;

	t33 = (x557+(x558<<(x559/x560)));

	if (t33 != 28743649168LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x565 = 226LLU;
	uint16_t x567 = UINT16_MAX;
	uint32_t x568 = UINT32_MAX;
	volatile uint64_t t34 = 0LLU;

	t34 = (x565+(x566<<(x567/x568)));

	if (t34 != 699LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x579 = INT64_MIN;
	static uint64_t x580 = UINT64_MAX;
	volatile uint64_t t35 = 258871637901377LLU;

	t35 = (x577+(x578<<(x579/x580)));

	if (t35 != 126LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x597 = INT8_MIN;
	static uint32_t x600 = UINT32_MAX;
	uint64_t t36 = 175432788874LLU;

	t36 = (x597+(x598<<(x599/x600)));

	if (t36 != 20794199LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x621 = UINT64_MAX;
	uint64_t x622 = 211930LLU;
	static int64_t x623 = -1LL;

	t37 = (x621+(x622<<(x623/x624)));

	if (t37 != 211929LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x645 = INT8_MIN;
	volatile uint32_t x646 = 982863128U;
	uint16_t x647 = 1107U;
	uint16_t x648 = 81U;
	static uint32_t t38 = 32083094U;

	t38 = (x645+(x646<<(x647/x648)));

	if (t38 != 2846031744U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x653 = UINT16_MAX;
	uint16_t x654 = 177U;
	int32_t x655 = 828560;
	uint32_t x656 = UINT32_MAX;

	t39 = (x653+(x654<<(x655/x656)));

	if (t39 != 65712) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x697 = -1;
	uint8_t x698 = 15U;
	volatile int32_t x700 = INT32_MIN;
	volatile int32_t t40 = -220794629;

	t40 = (x697+(x698<<(x699/x700)));

	if (t40 != 29) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x729 = -1;
	uint16_t x730 = 2987U;
	uint32_t x731 = 297U;
	static int16_t x732 = -1;
	int32_t t41 = -4;

	t41 = (x729+(x730<<(x731/x732)));

	if (t41 != 2986) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x773 = INT16_MIN;
	uint16_t x774 = 1094U;
	uint32_t x775 = 8U;
	uint64_t x776 = 1LLU;
	volatile int32_t t42 = 878;

	t42 = (x773+(x774<<(x775/x776)));

	if (t42 != 247296) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x781 = 534765296567426720LLU;
	int8_t x782 = INT8_MAX;
	static uint8_t x783 = UINT8_MAX;
	int64_t x784 = INT64_MIN;
	uint64_t t43 = 9054823636878686LLU;

	t43 = (x781+(x782<<(x783/x784)));

	if (t43 != 534765296567426847LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x785 = -6;
	uint8_t x786 = 46U;
	static int64_t x787 = -1LL;
	volatile int32_t t44 = 3;

	t44 = (x785+(x786<<(x787/x788)));

	if (t44 != 40) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x789 = 20099806U;
	uint32_t x790 = 0U;
	static int64_t x791 = -1LL;
	volatile uint64_t x792 = 673737435635797323LLU;
	static uint32_t t45 = 1168700U;

	t45 = (x789+(x790<<(x791/x792)));

	if (t45 != 20099806U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x793 = INT16_MAX;
	volatile uint64_t x794 = UINT64_MAX;
	volatile uint64_t t46 = 26937LLU;

	t46 = (x793+(x794<<(x795/x796)));

	if (t46 != 32766LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x813 = 7;
	volatile uint16_t x814 = 10226U;
	int16_t x815 = -1;
	static volatile uint8_t x816 = 23U;

	t47 = (x813+(x814<<(x815/x816)));

	if (t47 != 10233) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x846 = 0U;
	static uint64_t x847 = UINT64_MAX;
	int32_t x848 = INT32_MIN;
	volatile int32_t t48 = 385460915;

	t48 = (x845+(x846<<(x847/x848)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x881 = 40204LLU;
	static volatile uint64_t t49 = 521331LLU;

	t49 = (x881+(x882<<(x883/x884)));

	if (t49 != 40203LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x890 = 345790225LLU;
	static uint32_t x892 = 810306475U;
	uint64_t t50 = 61LLU;

	t50 = (x889+(x890<<(x891/x892)));

	if (t50 != 11065298703LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x897 = 37;
	uint16_t x898 = 1199U;
	int8_t x899 = -1;
	int64_t x900 = -45952805LL;
	int32_t t51 = -6371948;

	t51 = (x897+(x898<<(x899/x900)));

	if (t51 != 1236) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x965 = 408052775161056071LLU;
	uint64_t x966 = 402LLU;
	volatile uint32_t x967 = 12U;
	volatile uint64_t t52 = 77LLU;

	t52 = (x965+(x966<<(x967/x968)));

	if (t52 != 408052775161056473LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x969 = INT16_MAX;
	uint64_t x970 = UINT64_MAX;
	volatile int8_t x971 = INT8_MIN;
	static uint8_t x972 = UINT8_MAX;
	volatile uint64_t t53 = 38643LLU;

	t53 = (x969+(x970<<(x971/x972)));

	if (t53 != 32766LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x981 = 3222;
	uint8_t x982 = UINT8_MAX;
	int8_t x983 = INT8_MAX;
	int32_t t54 = -59008922;

	t54 = (x981+(x982<<(x983/x984)));

	if (t54 != 11382) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x989 = UINT64_MAX;
	uint64_t x990 = UINT64_MAX;
	static uint64_t x991 = UINT64_MAX;
	static int8_t x992 = INT8_MIN;
	volatile uint64_t t55 = 14LLU;

	t55 = (x989+(x990<<(x991/x992)));

	if (t55 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1001 = -1511737532LL;
	uint32_t x1002 = 19U;
	static uint32_t x1004 = 89U;
	volatile int64_t t56 = 1474599388498LL;

	t56 = (x1001+(x1002<<(x1003/x1004)));

	if (t56 != -1511698620LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x1014 = 3778U;
	volatile int64_t x1015 = -1LL;
	int16_t x1016 = INT16_MIN;
	volatile int32_t t57 = -52;

	t57 = (x1013+(x1014<<(x1015/x1016)));

	if (t57 != 3785) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1025 = INT32_MIN;
	volatile int32_t x1027 = -1;
	uint8_t x1028 = UINT8_MAX;
	uint64_t t58 = 3364401915LLU;

	t58 = (x1025+(x1026<<(x1027/x1028)));

	if (t58 != 135442720356416LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1045 = INT16_MAX;
	uint32_t x1046 = UINT32_MAX;
	int8_t x1047 = INT8_MAX;

	t59 = (x1045+(x1046<<(x1047/x1048)));

	if (t59 != 32766U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1058 = 10LLU;
	int16_t x1059 = INT16_MIN;
	int32_t x1060 = INT32_MIN;
	volatile uint64_t t60 = 191143LLU;

	t60 = (x1057+(x1058<<(x1059/x1060)));

	if (t60 != 65545LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x1069 = INT8_MIN;
	int16_t x1071 = 205;
	uint32_t x1072 = UINT32_MAX;

	t61 = (x1069+(x1070<<(x1071/x1072)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x1073 = INT16_MAX;
	uint64_t x1074 = UINT64_MAX;
	volatile int64_t x1076 = -1LL;

	t62 = (x1073+(x1074<<(x1075/x1076)));

	if (t62 != 32766LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x1077 = -1624LL;
	uint8_t x1078 = 3U;
	static int8_t x1079 = 37;
	volatile int32_t x1080 = INT32_MIN;
	int64_t t63 = 6401036328313LL;

	t63 = (x1077+(x1078<<(x1079/x1080)));

	if (t63 != -1621LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x1085 = INT8_MIN;
	uint8_t x1086 = UINT8_MAX;
	int32_t t64 = 15010716;

	t64 = (x1085+(x1086<<(x1087/x1088)));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1121 = -28;
	uint32_t x1122 = 79102515U;
	uint64_t x1123 = 4062533917LLU;
	static volatile int16_t x1124 = -1;
	uint32_t t65 = 5059881U;

	t65 = (x1121+(x1122<<(x1123/x1124)));

	if (t65 != 79102487U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x1137 = 38U;
	static int32_t x1139 = -1;
	volatile uint64_t t66 = 6760109504002483LLU;

	t66 = (x1137+(x1138<<(x1139/x1140)));

	if (t66 != 27006176341LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1141 = INT64_MIN;
	uint32_t x1142 = 30317U;
	static int16_t x1143 = INT16_MAX;
	volatile uint32_t x1144 = 42673U;
	volatile int64_t t67 = -249458331602381700LL;

	t67 = (x1141+(x1142<<(x1143/x1144)));

	if (t67 != -9223372036854745491LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1169 = UINT64_MAX;
	int32_t x1171 = INT32_MAX;
	static uint64_t x1172 = 1046608741LLU;
	volatile uint64_t t68 = 9LLU;

	t68 = (x1169+(x1170<<(x1171/x1172)));

	if (t68 != 4294967291LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x1173 = 302U;
	int16_t x1174 = INT16_MAX;
	static volatile int16_t x1175 = 2;
	int8_t x1176 = 52;
	int32_t t69 = -16;

	t69 = (x1173+(x1174<<(x1175/x1176)));

	if (t69 != 33069) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x1189 = 60476910897697704LL;
	uint8_t x1191 = 1U;
	int8_t x1192 = INT8_MIN;

	t70 = (x1189+(x1190<<(x1191/x1192)));

	if (t70 != 60476910901619263LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x1193 = 77U;
	uint64_t x1194 = 29331LLU;
	volatile int16_t x1195 = -23;
	uint16_t x1196 = 30265U;
	volatile uint64_t t71 = 26LLU;

	t71 = (x1193+(x1194<<(x1195/x1196)));

	if (t71 != 29408LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1217 = -1;
	uint64_t x1218 = 67593575243LLU;
	static uint32_t x1219 = 203965U;
	int64_t x1220 = INT64_MIN;
	volatile uint64_t t72 = 1992LLU;

	t72 = (x1217+(x1218<<(x1219/x1220)));

	if (t72 != 67593575242LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1225 = -2119LL;
	int16_t x1228 = 173;
	static uint64_t t73 = 6441901065LLU;

	t73 = (x1225+(x1226<<(x1227/x1228)));

	if (t73 != 18446744073709549496LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1249 = UINT16_MAX;
	uint8_t x1250 = UINT8_MAX;
	volatile int16_t x1252 = -15715;
	volatile int32_t t74 = -1920943;

	t74 = (x1249+(x1250<<(x1251/x1252)));

	if (t74 != 65790) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1285 = INT8_MIN;
	int32_t x1287 = 0;
	uint16_t x1288 = UINT16_MAX;
	static int32_t t75 = -9;

	t75 = (x1285+(x1286<<(x1287/x1288)));

	if (t75 != -124) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x1294 = UINT8_MAX;
	int16_t x1295 = 35;
	static int32_t x1296 = 15;
	int64_t t76 = 76298638819574539LL;

	t76 = (x1293+(x1294<<(x1295/x1296)));

	if (t76 != -9223372036854774788LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1297 = INT8_MIN;
	static uint32_t x1299 = 449U;
	static uint32_t x1300 = UINT32_MAX;
	volatile int32_t t77 = 2234309;

	t77 = (x1297+(x1298<<(x1299/x1300)));

	if (t77 != 2147483519) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1301 = 5U;
	volatile int64_t x1302 = 29613304104127919LL;
	int32_t x1304 = INT32_MAX;
	int64_t t78 = 2226452212571LL;

	t78 = (x1301+(x1302<<(x1303/x1304)));

	if (t78 != 29613304104127924LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x1305 = 699782236U;
	uint16_t x1306 = UINT16_MAX;
	volatile int16_t x1308 = INT16_MIN;
	uint32_t t79 = 15737U;

	t79 = (x1305+(x1306<<(x1307/x1308)));

	if (t79 != 699847771U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x1317 = INT64_MIN;
	uint64_t x1318 = 16366LLU;
	int16_t x1319 = -1;
	static int32_t x1320 = -1;
	static uint64_t t80 = 310528988623079629LLU;

	t80 = (x1317+(x1318<<(x1319/x1320)));

	if (t80 != 9223372036854808540LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x1329 = -1;
	uint8_t x1330 = 30U;
	uint8_t x1331 = 32U;
	int32_t x1332 = 235753763;
	int32_t t81 = -16252871;

	t81 = (x1329+(x1330<<(x1331/x1332)));

	if (t81 != 29) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x1341 = INT8_MIN;
	static int8_t x1342 = INT8_MAX;
	int32_t x1343 = 497174309;
	int32_t x1344 = INT32_MIN;

	t82 = (x1341+(x1342<<(x1343/x1344)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x1349 = 3448468393418121LL;
	uint16_t x1350 = 2U;
	volatile int8_t x1351 = INT8_MAX;
	int64_t x1352 = INT64_MIN;
	int64_t t83 = -390386LL;

	t83 = (x1349+(x1350<<(x1351/x1352)));

	if (t83 != 3448468393418123LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x1357 = INT64_MIN;
	uint64_t x1358 = 14LLU;
	volatile uint16_t x1359 = UINT16_MAX;
	uint64_t t84 = 4LLU;

	t84 = (x1357+(x1358<<(x1359/x1360)));

	if (t84 != 9223372036854775822LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x1361 = INT32_MIN;
	uint16_t x1362 = 2U;
	int8_t x1364 = INT8_MAX;
	volatile int32_t t85 = 34822690;

	t85 = (x1361+(x1362<<(x1363/x1364)));

	if (t85 != -2080374784) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x1385 = -1;
	uint64_t x1386 = 82278747211LLU;
	volatile int64_t x1387 = INT64_MIN;
	volatile int64_t x1388 = INT64_MIN;
	uint64_t t86 = 25641373LLU;

	t86 = (x1385+(x1386<<(x1387/x1388)));

	if (t86 != 164557494421LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x1393 = INT8_MIN;
	int16_t x1394 = INT16_MAX;
	int32_t x1396 = 983656;
	int32_t t87 = -525189;

	t87 = (x1393+(x1394<<(x1395/x1396)));

	if (t87 != 32639) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1405 = -35;
	static uint32_t x1407 = UINT32_MAX;
	int32_t x1408 = INT32_MAX;
	static int32_t t88 = 1;

	t88 = (x1405+(x1406<<(x1407/x1408)));

	if (t88 != 37) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x1409 = UINT32_MAX;
	uint16_t x1410 = UINT16_MAX;
	volatile int32_t x1411 = -1;
	int64_t x1412 = -550856535LL;

	t89 = (x1409+(x1410<<(x1411/x1412)));

	if (t89 != 65534U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1417 = -1;
	uint16_t x1419 = 10U;
	static int64_t x1420 = -1913201LL;
	int32_t t90 = 17;

	t90 = (x1417+(x1418<<(x1419/x1420)));

	if (t90 != 65534) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x1437 = 2U;
	int8_t x1438 = INT8_MAX;
	int32_t x1439 = 3;
	int64_t x1440 = INT64_MAX;

	t91 = (x1437+(x1438<<(x1439/x1440)));

	if (t91 != 129) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x1461 = 0U;
	int64_t x1463 = 1750725041LL;
	int64_t x1464 = INT64_MIN;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (x1461+(x1462<<(x1463/x1464)));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x1477 = UINT64_MAX;
	uint32_t x1478 = UINT32_MAX;
	int64_t x1479 = INT64_MIN;
	volatile uint64_t t93 = 136235143057531329LLU;

	t93 = (x1477+(x1478<<(x1479/x1480)));

	if (t93 != 4294967294LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x1497 = 20U;
	int32_t x1500 = INT32_MAX;
	volatile int32_t t94 = 1887;

	t94 = (x1497+(x1498<<(x1499/x1500)));

	if (t94 != 20) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x1506 = 46U;
	int64_t x1508 = INT64_MAX;
	static volatile uint32_t t95 = 744U;

	t95 = (x1505+(x1506<<(x1507/x1508)));

	if (t95 != 55U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1509 = -1;
	volatile uint64_t t96 = 3460079797596096LLU;

	t96 = (x1509+(x1510<<(x1511/x1512)));

	if (t96 != 2802599422579466411LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1521 = UINT8_MAX;
	static uint16_t x1522 = 7U;
	volatile uint32_t x1523 = UINT32_MAX;
	volatile int32_t x1524 = -1;
	volatile int32_t t97 = -24;

	t97 = (x1521+(x1522<<(x1523/x1524)));

	if (t97 != 269) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1537 = 0U;
	int64_t x1538 = INT64_MAX;
	volatile int64_t t98 = INT64_MAX;

	t98 = (x1537+(x1538<<(x1539/x1540)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x1541 = -1LL;
	static uint64_t x1542 = 451838552LLU;
	uint16_t x1543 = 15U;
	volatile uint64_t t99 = 429950LLU;

	t99 = (x1541+(x1542<<(x1543/x1544)));

	if (t99 != 451838551LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

