#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x18 = UINT8_MAX;
static int8_t x57 = INT8_MAX;
volatile uint16_t x97 = 2378U;
int8_t x100 = INT8_MIN;
volatile int32_t t5 = -2474339;
uint8_t x125 = 51U;
int8_t x127 = INT8_MAX;
uint8_t x134 = 0U;
volatile int32_t t9 = 525828;
volatile uint16_t x157 = UINT16_MAX;
int64_t t13 = -211021447554286LL;
volatile int8_t x179 = 0;
volatile int32_t t14 = 7;
volatile int64_t t15 = -2LL;
int64_t x257 = -222071LL;
uint8_t x268 = 11U;
uint64_t t19 = 1LLU;
uint64_t x291 = 2484090LLU;
static volatile int8_t x295 = INT8_MIN;
volatile uint16_t x296 = 2042U;
int8_t x299 = 1;
uint16_t x306 = UINT16_MAX;
static volatile uint32_t t24 = 9879842U;
int32_t t28 = -163040;
volatile int64_t x392 = -8735802799892LL;
uint8_t x398 = 2U;
int64_t x399 = -1LL;
static int32_t t31 = 1010;
uint32_t x414 = UINT32_MAX;
uint64_t x428 = 13825LLU;
uint64_t t33 = 1623958494639LLU;
static int8_t x448 = INT8_MIN;
int32_t x480 = INT32_MIN;
volatile int32_t t39 = INT32_MIN;
int64_t x520 = INT64_MIN;
static uint32_t t42 = 189629616U;
static uint16_t x538 = UINT16_MAX;
uint32_t x540 = 30970232U;
uint16_t x554 = 240U;
volatile int16_t x587 = 417;
static volatile uint32_t t47 = 2U;
volatile uint64_t x613 = 8637039188777846106LLU;
int16_t x616 = 16;
uint32_t x622 = UINT32_MAX;
int64_t x700 = INT64_MIN;
uint64_t t54 = 80997813076582024LLU;
volatile int8_t x721 = INT8_MAX;
volatile int32_t t55 = -146649;
uint8_t x739 = 1U;
static uint32_t x757 = 191U;
int64_t x811 = -3449088616914LL;
int32_t x817 = INT32_MAX;
static volatile uint64_t x820 = 81487LLU;
uint64_t x825 = 114348730831627792LLU;
uint32_t x826 = 452881364U;
int32_t x828 = -1;
uint16_t x830 = 7622U;
int16_t x855 = 10;
uint32_t x866 = UINT32_MAX;
int8_t x965 = INT8_MAX;
static volatile uint32_t x1006 = UINT32_MAX;
uint32_t t72 = 1999601U;
uint64_t x1017 = 198847718734657299LLU;
uint8_t x1018 = UINT8_MAX;
int8_t x1029 = -1;
static int32_t t76 = 52;
volatile uint16_t x1097 = 1U;
int32_t x1123 = -1;
uint16_t x1130 = 37U;
int8_t x1133 = INT8_MAX;
int16_t x1136 = 2333;
volatile uint32_t t84 = 6816U;
int64_t x1137 = INT64_MAX;
volatile int16_t x1139 = INT16_MIN;
volatile int64_t t85 = -77LL;
static uint64_t x1157 = 30LLU;
static int16_t x1158 = 180;
int64_t x1160 = 518841LL;
int32_t x1166 = 927;
static int16_t x1167 = -3148;
uint8_t x1183 = UINT8_MAX;
int64_t x1184 = INT64_MIN;
static uint8_t x1190 = 2U;
volatile uint16_t x1192 = 1314U;
int16_t x1215 = -1;
int16_t x1308 = INT16_MIN;
uint32_t t97 = 68U;


void f0(void) {
	volatile uint16_t x17 = UINT16_MAX;
	uint8_t x19 = UINT8_MAX;
	uint64_t x20 = UINT64_MAX;
	static volatile int32_t t0 = 570848;

	t0 = (x17-(x18>>(x19/x20)));

	if (t0 != 65280) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x37 = 1087848888363LLU;
	uint16_t x38 = 3810U;
	int16_t x39 = -1;
	volatile int32_t x40 = -12549;
	volatile uint64_t t1 = 105463604268919LLU;

	t1 = (x37-(x38>>(x39/x40)));

	if (t1 != 1087848884553LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x58 = INT8_MAX;
	static int32_t x59 = 1;
	int8_t x60 = INT8_MIN;
	volatile int32_t t2 = -1;

	t2 = (x57-(x58>>(x59/x60)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x69 = -1;
	uint16_t x70 = 1U;
	volatile int8_t x71 = INT8_MAX;
	uint16_t x72 = UINT16_MAX;
	int32_t t3 = 6173563;

	t3 = (x69-(x70>>(x71/x72)));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x89 = -97;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = -1LL;
	int16_t x92 = INT16_MAX;
	int32_t t4 = 181079732;

	t4 = (x89-(x90>>(x91/x92)));

	if (t4 != -65632) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x98 = INT32_MAX;
	uint64_t x99 = UINT64_MAX;

	t5 = (x97-(x98>>(x99/x100)));

	if (t5 != -1073739445) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x101 = 3254045711132272610LL;
	uint8_t x102 = 3U;
	int32_t x103 = 26;
	static int64_t x104 = 2LL;
	volatile int64_t t6 = -21618575LL;

	t6 = (x101-(x102>>(x103/x104)));

	if (t6 != 3254045711132272610LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x117 = 4024102U;
	uint32_t x118 = 123U;
	static int64_t x119 = -1LL;
	uint64_t x120 = 8540738439297211988LLU;
	volatile uint32_t t7 = 1U;

	t7 = (x117-(x118>>(x119/x120)));

	if (t7 != 4024072U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x126 = 4U;
	int8_t x128 = INT8_MIN;
	int32_t t8 = 3630440;

	t8 = (x125-(x126>>(x127/x128)));

	if (t8 != 47) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x133 = INT8_MIN;
	int16_t x135 = INT16_MIN;
	int16_t x136 = INT16_MIN;

	t9 = (x133-(x134>>(x135/x136)));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x145 = UINT16_MAX;
	uint32_t x146 = 1U;
	uint32_t x147 = 69127254U;
	static volatile int8_t x148 = -1;
	uint32_t t10 = 605412446U;

	t10 = (x145-(x146>>(x147/x148)));

	if (t10 != 65534U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x153 = INT32_MAX;
	int8_t x154 = 4;
	int16_t x155 = -179;
	static int64_t x156 = INT64_MIN;
	volatile int32_t t11 = -14216398;

	t11 = (x153-(x154>>(x155/x156)));

	if (t11 != 2147483643) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x158 = 340663493177804559LLU;
	int8_t x159 = 24;
	int16_t x160 = 14810;
	volatile uint64_t t12 = 16LLU;

	t12 = (x157-(x158>>(x159/x160)));

	if (t12 != 18106080580531812592LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x173 = -1LL;
	int32_t x174 = 1;
	int16_t x175 = -5;
	int16_t x176 = INT16_MIN;

	t13 = (x173-(x174>>(x175/x176)));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x177 = 3U;
	uint16_t x178 = 153U;
	static uint8_t x180 = UINT8_MAX;

	t14 = (x177-(x178>>(x179/x180)));

	if (t14 != -150) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x181 = -1;
	int64_t x182 = 86757023635403LL;
	volatile uint64_t x183 = 1LLU;
	static int64_t x184 = -1LL;

	t15 = (x181-(x182>>(x183/x184)));

	if (t15 != -86757023635404LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x193 = 186U;
	int16_t x194 = 0;
	int64_t x195 = -1LL;
	volatile uint16_t x196 = 12349U;
	volatile int32_t t16 = 94;

	t16 = (x193-(x194>>(x195/x196)));

	if (t16 != 186) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x253 = 123U;
	int8_t x254 = 0;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = INT16_MIN;
	static volatile int32_t t17 = -1;

	t17 = (x253-(x254>>(x255/x256)));

	if (t17 != 123) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x258 = 1407677254452542LLU;
	static uint8_t x259 = UINT8_MAX;
	int64_t x260 = 72LL;
	volatile uint64_t t18 = 6572349116596345LLU;

	t18 = (x257-(x258>>(x259/x260)));

	if (t18 != 18446568114052522978LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x265 = 30059366LLU;
	int64_t x266 = INT64_MAX;
	uint16_t x267 = 108U;

	t19 = (x265-(x266>>(x267/x268)));

	if (t19 != 18428729675230128999LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x289 = 139U;
	uint32_t x290 = 196782U;
	static uint64_t x292 = 1276857LLU;
	volatile uint32_t t20 = 176U;

	t20 = (x289-(x290>>(x291/x292)));

	if (t20 != 4294869044U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x293 = 13U;
	int8_t x294 = 11;
	static volatile int32_t t21 = -65032706;

	t21 = (x293-(x294>>(x295/x296)));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x297 = -128359498LL;
	static uint64_t x298 = 3430591874LLU;
	int8_t x300 = 19;
	uint64_t t22 = 445097LLU;

	t22 = (x297-(x298>>(x299/x300)));

	if (t22 != 18446744070150600244LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x305 = UINT64_MAX;
	int8_t x307 = -1;
	volatile int8_t x308 = INT8_MIN;
	volatile uint64_t t23 = 5503433671598458LLU;

	t23 = (x305-(x306>>(x307/x308)));

	if (t23 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x333 = 52;
	static uint32_t x334 = UINT32_MAX;
	volatile int32_t x335 = INT32_MIN;
	static int32_t x336 = INT32_MIN;

	t24 = (x333-(x334>>(x335/x336)));

	if (t24 != 2147483701U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x365 = -1LL;
	int64_t x366 = 6LL;
	int64_t x367 = 5502LL;
	uint64_t x368 = UINT64_MAX;
	static int64_t t25 = -1LL;

	t25 = (x365-(x366>>(x367/x368)));

	if (t25 != -7LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x369 = -1;
	int8_t x370 = 6;
	volatile uint32_t x371 = UINT32_MAX;
	volatile int8_t x372 = -1;
	volatile int32_t t26 = 92423;

	t26 = (x369-(x370>>(x371/x372)));

	if (t26 != -4) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x373 = INT32_MAX;
	uint32_t x374 = 127225430U;
	static uint32_t x375 = UINT32_MAX;
	int8_t x376 = INT8_MIN;
	uint32_t t27 = 27596U;

	t27 = (x373-(x374>>(x375/x376)));

	if (t27 != 2083870932U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x385 = INT16_MAX;
	int16_t x386 = 1437;
	static uint16_t x387 = 0U;
	int32_t x388 = -1;

	t28 = (x385-(x386>>(x387/x388)));

	if (t28 != 31330) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x389 = 3U;
	volatile int64_t x390 = 14608130270050LL;
	int8_t x391 = INT8_MIN;
	int64_t t29 = -52LL;

	t29 = (x389-(x390>>(x391/x392)));

	if (t29 != -14608130270047LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x397 = UINT64_MAX;
	int64_t x400 = INT64_MIN;
	volatile uint64_t t30 = 1988458309029LLU;

	t30 = (x397-(x398>>(x399/x400)));

	if (t30 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x405 = 954381985;
	uint8_t x406 = 4U;
	volatile uint8_t x407 = 63U;
	int16_t x408 = -1051;

	t31 = (x405-(x406>>(x407/x408)));

	if (t31 != 954381981) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x413 = INT64_MAX;
	int16_t x415 = -4;
	uint8_t x416 = UINT8_MAX;
	int64_t t32 = -4393621472013870262LL;

	t32 = (x413-(x414>>(x415/x416)));

	if (t32 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x425 = 103671252072973518LLU;
	uint32_t x426 = 5310996U;
	uint16_t x427 = UINT16_MAX;

	t33 = (x425-(x426>>(x427/x428)));

	if (t33 != 103671252072641581LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x429 = 6170503718927100LL;
	uint64_t x430 = 0LLU;
	uint16_t x431 = 1U;
	static int8_t x432 = 9;
	volatile uint64_t t34 = 30995563LLU;

	t34 = (x429-(x430>>(x431/x432)));

	if (t34 != 6170503718927100LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x441 = 906466;
	int64_t x442 = 3913157622344627940LL;
	volatile uint16_t x443 = 616U;
	uint16_t x444 = 559U;
	int64_t t35 = 944297228LL;

	t35 = (x441-(x442>>(x443/x444)));

	if (t35 != -1956578811171407504LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x445 = INT16_MIN;
	uint16_t x446 = 3991U;
	uint64_t x447 = UINT64_MAX;
	static int32_t t36 = -1;

	t36 = (x445-(x446>>(x447/x448)));

	if (t36 != -34763) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x453 = 0U;
	uint32_t x454 = 2961334U;
	int16_t x455 = -1;
	int16_t x456 = INT16_MIN;
	static volatile uint32_t t37 = 3456710U;

	t37 = (x453-(x454>>(x455/x456)));

	if (t37 != 4292005962U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x477 = INT8_MAX;
	int8_t x478 = 51;
	int32_t x479 = INT32_MAX;
	volatile int32_t t38 = -20372;

	t38 = (x477-(x478>>(x479/x480)));

	if (t38 != 76) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x481 = -1;
	int32_t x482 = INT32_MAX;
	uint8_t x483 = 109U;
	int8_t x484 = INT8_MAX;

	t39 = (x481-(x482>>(x483/x484)));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x497 = -126674139954767338LL;
	uint64_t x498 = 47LLU;
	uint64_t x499 = 3194LLU;
	int8_t x500 = INT8_MIN;
	static uint64_t t40 = 530279607LLU;

	t40 = (x497-(x498>>(x499/x500)));

	if (t40 != 18320069933754784231LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x513 = 89786224927LLU;
	static volatile uint64_t x514 = 1796927436LLU;
	int32_t x515 = 6;
	uint8_t x516 = 22U;
	static uint64_t t41 = 662402512LLU;

	t41 = (x513-(x514>>(x515/x516)));

	if (t41 != 87989297491LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x517 = -16;
	uint32_t x518 = UINT32_MAX;
	static int16_t x519 = INT16_MIN;

	t42 = (x517-(x518>>(x519/x520)));

	if (t42 != 4294967281U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x537 = 4U;
	uint8_t x539 = 1U;
	volatile int32_t t43 = -284;

	t43 = (x537-(x538>>(x539/x540)));

	if (t43 != -65531) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x549 = 26636LL;
	static int8_t x550 = 1;
	volatile uint16_t x551 = 499U;
	int64_t x552 = INT64_MIN;
	volatile int64_t t44 = 29391971995316200LL;

	t44 = (x549-(x550>>(x551/x552)));

	if (t44 != 26635LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x553 = INT32_MAX;
	int16_t x555 = INT16_MAX;
	int32_t x556 = INT32_MIN;
	int32_t t45 = 479421102;

	t45 = (x553-(x554>>(x555/x556)));

	if (t45 != 2147483407) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x585 = -1;
	uint16_t x586 = 79U;
	uint16_t x588 = UINT16_MAX;
	volatile int32_t t46 = 25;

	t46 = (x585-(x586>>(x587/x588)));

	if (t46 != -80) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x593 = 8;
	uint32_t x594 = 1240083547U;
	int8_t x595 = -1;
	volatile int16_t x596 = -95;

	t47 = (x593-(x594>>(x595/x596)));

	if (t47 != 3054883757U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x614 = 111;
	volatile uint8_t x615 = 40U;
	static volatile uint64_t t48 = 1281263085840492440LLU;

	t48 = (x613-(x614>>(x615/x616)));

	if (t48 != 8637039188777846079LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x621 = UINT64_MAX;
	static int8_t x623 = -1;
	static volatile int64_t x624 = -7718340LL;
	static uint64_t t49 = 139878456111001LLU;

	t49 = (x621-(x622>>(x623/x624)));

	if (t49 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x629 = -156;
	volatile uint32_t x630 = UINT32_MAX;
	int16_t x631 = 252;
	uint32_t x632 = UINT32_MAX;
	volatile uint32_t t50 = 19356344U;

	t50 = (x629-(x630>>(x631/x632)));

	if (t50 != 4294967141U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x645 = INT16_MIN;
	volatile int8_t x646 = 0;
	static uint64_t x647 = UINT64_MAX;
	int16_t x648 = INT16_MIN;
	volatile int32_t t51 = 136404;

	t51 = (x645-(x646>>(x647/x648)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x661 = 7U;
	int8_t x662 = 7;
	int16_t x663 = INT16_MAX;
	int64_t x664 = INT64_MAX;
	volatile int32_t t52 = -1;

	t52 = (x661-(x662>>(x663/x664)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x673 = 0LLU;
	static int32_t x674 = 1252;
	static int16_t x675 = INT16_MAX;
	volatile int16_t x676 = INT16_MIN;
	uint64_t t53 = 16045392915LLU;

	t53 = (x673-(x674>>(x675/x676)));

	if (t53 != 18446744073709550364LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x697 = 2U;
	uint64_t x698 = 124927LLU;
	static volatile int16_t x699 = 306;

	t54 = (x697-(x698>>(x699/x700)));

	if (t54 != 18446744073709426691LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x722 = 873;
	volatile int8_t x723 = INT8_MIN;
	uint32_t x724 = UINT32_MAX;

	t55 = (x721-(x722>>(x723/x724)));

	if (t55 != -746) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x737 = 1U;
	volatile int64_t x738 = 22231646LL;
	int16_t x740 = -7124;
	int64_t t56 = -14246258LL;

	t56 = (x737-(x738>>(x739/x740)));

	if (t56 != -22231645LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x758 = 2714U;
	int16_t x759 = INT16_MAX;
	static int32_t x760 = INT32_MAX;
	uint32_t t57 = 99U;

	t57 = (x757-(x758>>(x759/x760)));

	if (t57 != 4294964773U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x809 = INT16_MIN;
	uint32_t x810 = UINT32_MAX;
	static int64_t x812 = INT64_MIN;
	uint32_t t58 = 62U;

	t58 = (x809-(x810>>(x811/x812)));

	if (t58 != 4294934529U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x818 = 26542U;
	int16_t x819 = INT16_MAX;
	int32_t t59 = -1194;

	t59 = (x817-(x818>>(x819/x820)));

	if (t59 != 2147457105) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x827 = -1;
	static uint64_t t60 = 52492828LLU;

	t60 = (x825-(x826>>(x827/x828)));

	if (t60 != 114348730605187110LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x829 = UINT32_MAX;
	int32_t x831 = 3340529;
	volatile int64_t x832 = INT64_MIN;
	uint32_t t61 = 27U;

	t61 = (x829-(x830>>(x831/x832)));

	if (t61 != 4294959673U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x849 = INT8_MIN;
	uint16_t x850 = 902U;
	static int16_t x851 = INT16_MIN;
	static uint32_t x852 = UINT32_MAX;
	volatile int32_t t62 = 1;

	t62 = (x849-(x850>>(x851/x852)));

	if (t62 != -1030) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x853 = 224492951LLU;
	volatile int64_t x854 = 37435434LL;
	int16_t x856 = -30;
	volatile uint64_t t63 = 1684696LLU;

	t63 = (x853-(x854>>(x855/x856)));

	if (t63 != 187057517LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x865 = INT16_MIN;
	int32_t x867 = INT32_MAX;
	uint64_t x868 = UINT64_MAX;
	uint32_t t64 = 32U;

	t64 = (x865-(x866>>(x867/x868)));

	if (t64 != 4294934529U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x873 = 7458U;
	uint16_t x874 = 18U;
	static int64_t x875 = -1LL;
	int64_t x876 = -52072490560790240LL;
	volatile uint32_t t65 = 1053130U;

	t65 = (x873-(x874>>(x875/x876)));

	if (t65 != 7440U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x881 = 1U;
	int8_t x882 = 2;
	static int8_t x883 = INT8_MIN;
	volatile int32_t x884 = INT32_MIN;
	volatile int32_t t66 = -8775;

	t66 = (x881-(x882>>(x883/x884)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x909 = 0LL;
	int32_t x910 = INT32_MAX;
	int64_t x911 = -1LL;
	uint16_t x912 = UINT16_MAX;
	int64_t t67 = 22453195909584301LL;

	t67 = (x909-(x910>>(x911/x912)));

	if (t67 != -2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x966 = 1;
	static int8_t x967 = -1;
	volatile uint16_t x968 = 139U;
	int32_t t68 = -244547;

	t68 = (x965-(x966>>(x967/x968)));

	if (t68 != 126) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x977 = INT8_MAX;
	int32_t x978 = INT32_MAX;
	int64_t x979 = 22035736507449914LL;
	uint64_t x980 = UINT64_MAX;
	int32_t t69 = 0;

	t69 = (x977-(x978>>(x979/x980)));

	if (t69 != -2147483520) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x997 = 285;
	volatile uint64_t x998 = 115188971465LLU;
	int32_t x999 = -156;
	int16_t x1000 = -2790;
	static volatile uint64_t t70 = 426968LLU;

	t70 = (x997-(x998>>(x999/x1000)));

	if (t70 != 18446743958520580436LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x1001 = 70171U;
	static uint8_t x1002 = UINT8_MAX;
	uint64_t x1003 = 16LLU;
	volatile int8_t x1004 = INT8_MIN;
	volatile uint32_t t71 = 97U;

	t71 = (x1001-(x1002>>(x1003/x1004)));

	if (t71 != 69916U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1005 = INT16_MAX;
	int64_t x1007 = -1LL;
	int32_t x1008 = -50194113;

	t72 = (x1005-(x1006>>(x1007/x1008)));

	if (t72 != 32768U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1009 = -1;
	volatile uint16_t x1010 = 9U;
	int32_t x1011 = INT32_MIN;
	static int32_t x1012 = INT32_MIN;
	volatile int32_t t73 = -1;

	t73 = (x1009-(x1010>>(x1011/x1012)));

	if (t73 != -5) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1019 = 1U;
	uint32_t x1020 = 8U;
	volatile uint64_t t74 = 1434985197372428LLU;

	t74 = (x1017-(x1018>>(x1019/x1020)));

	if (t74 != 198847718734657044LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1030 = 322112615U;
	int32_t x1031 = INT32_MAX;
	int32_t x1032 = INT32_MAX;
	uint32_t t75 = 2543U;

	t75 = (x1029-(x1030>>(x1031/x1032)));

	if (t75 != 4133910988U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x1045 = -25;
	volatile int16_t x1046 = 45;
	static int16_t x1047 = -35;
	int64_t x1048 = INT64_MAX;

	t76 = (x1045-(x1046>>(x1047/x1048)));

	if (t76 != -70) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x1065 = INT64_MAX;
	uint32_t x1066 = 12U;
	int64_t x1067 = 0LL;
	volatile int16_t x1068 = 2;
	int64_t t77 = 5933LL;

	t77 = (x1065-(x1066>>(x1067/x1068)));

	if (t77 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1069 = -26;
	int16_t x1070 = 4105;
	int16_t x1071 = -1;
	int16_t x1072 = -4510;
	volatile int32_t t78 = -55211;

	t78 = (x1069-(x1070>>(x1071/x1072)));

	if (t78 != -4131) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1081 = -11;
	uint8_t x1082 = 9U;
	static volatile int8_t x1083 = 0;
	int32_t x1084 = INT32_MIN;
	int32_t t79 = -7159;

	t79 = (x1081-(x1082>>(x1083/x1084)));

	if (t79 != -20) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1093 = 305993664;
	volatile uint16_t x1094 = UINT16_MAX;
	static int16_t x1095 = INT16_MAX;
	int32_t x1096 = INT32_MIN;
	int32_t t80 = -292;

	t80 = (x1093-(x1094>>(x1095/x1096)));

	if (t80 != 305928129) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1098 = 11U;
	uint64_t x1099 = UINT64_MAX;
	static int32_t x1100 = -1;
	uint32_t t81 = 161U;

	t81 = (x1097-(x1098>>(x1099/x1100)));

	if (t81 != 4294967292U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x1121 = -1LL;
	uint8_t x1122 = 109U;
	uint32_t x1124 = UINT32_MAX;
	volatile int64_t t82 = 1902547906730133360LL;

	t82 = (x1121-(x1122>>(x1123/x1124)));

	if (t82 != -55LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1129 = -1;
	int8_t x1131 = INT8_MIN;
	static volatile uint16_t x1132 = 467U;
	int32_t t83 = 855394;

	t83 = (x1129-(x1130>>(x1131/x1132)));

	if (t83 != -38) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1134 = UINT32_MAX;
	int16_t x1135 = -388;

	t84 = (x1133-(x1134>>(x1135/x1136)));

	if (t84 != 128U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x1138 = INT32_MAX;
	uint32_t x1140 = UINT32_MAX;

	t85 = (x1137-(x1138>>(x1139/x1140)));

	if (t85 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1153 = 11155U;
	uint64_t x1154 = 71848LLU;
	uint64_t x1155 = 131LLU;
	volatile int16_t x1156 = INT16_MAX;
	volatile uint64_t t86 = 124148LLU;

	t86 = (x1153-(x1154>>(x1155/x1156)));

	if (t86 != 18446744073709490923LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1159 = INT16_MAX;
	static uint64_t t87 = 3917925LLU;

	t87 = (x1157-(x1158>>(x1159/x1160)));

	if (t87 != 18446744073709551466LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1165 = UINT16_MAX;
	int8_t x1168 = INT8_MIN;
	volatile int32_t t88 = 29468;

	t88 = (x1165-(x1166>>(x1167/x1168)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1169 = 26U;
	int8_t x1170 = INT8_MAX;
	int8_t x1171 = 0;
	int16_t x1172 = INT16_MIN;
	int32_t t89 = -475787;

	t89 = (x1169-(x1170>>(x1171/x1172)));

	if (t89 != -101) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x1181 = 1387950527U;
	volatile uint64_t x1182 = 18LLU;
	volatile uint64_t t90 = 1522482216715LLU;

	t90 = (x1181-(x1182>>(x1183/x1184)));

	if (t90 != 1387950509LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x1189 = 214997377744853LLU;
	int64_t x1191 = -1LL;
	uint64_t t91 = 4874752200LLU;

	t91 = (x1189-(x1190>>(x1191/x1192)));

	if (t91 != 214997377744851LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x1213 = -1;
	static uint32_t x1214 = 4437939U;
	int32_t x1216 = INT32_MIN;
	uint32_t t92 = 46U;

	t92 = (x1213-(x1214>>(x1215/x1216)));

	if (t92 != 4290529356U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x1257 = INT16_MAX;
	volatile uint16_t x1258 = 1U;
	static int16_t x1259 = INT16_MIN;
	uint64_t x1260 = UINT64_MAX;
	volatile int32_t t93 = 70;

	t93 = (x1257-(x1258>>(x1259/x1260)));

	if (t93 != 32766) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1281 = INT8_MIN;
	int16_t x1282 = INT16_MAX;
	uint8_t x1283 = 7U;
	uint32_t x1284 = UINT32_MAX;
	int32_t t94 = 2647;

	t94 = (x1281-(x1282>>(x1283/x1284)));

	if (t94 != -32895) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1285 = -6396;
	static uint16_t x1286 = 4219U;
	int64_t x1287 = -1LL;
	static uint64_t x1288 = UINT64_MAX;
	volatile int32_t t95 = 899234556;

	t95 = (x1285-(x1286>>(x1287/x1288)));

	if (t95 != -8505) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1289 = -1;
	volatile uint8_t x1290 = 0U;
	volatile uint64_t x1291 = 36LLU;
	int64_t x1292 = -1LL;
	volatile int32_t t96 = 441731075;

	t96 = (x1289-(x1290>>(x1291/x1292)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x1305 = 3522U;
	uint32_t x1306 = 101641U;
	uint16_t x1307 = 1U;

	t97 = (x1305-(x1306>>(x1307/x1308)));

	if (t97 != 4294869177U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x1309 = 1;
	uint16_t x1310 = UINT16_MAX;
	static int16_t x1311 = INT16_MIN;
	static int64_t x1312 = 646763462LL;
	static volatile int32_t t98 = 7482613;

	t98 = (x1309-(x1310>>(x1311/x1312)));

	if (t98 != -65534) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1313 = -1;
	volatile uint16_t x1314 = 26108U;
	volatile int8_t x1315 = -1;
	int16_t x1316 = -1;
	static int32_t t99 = -107;

	t99 = (x1313-(x1314>>(x1315/x1316)));

	if (t99 != -13055) { NG(); } else { ; }
	
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

