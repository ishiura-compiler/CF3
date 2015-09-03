#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x19 = INT32_MIN;
static volatile uint32_t x56 = UINT32_MAX;
int32_t x105 = 8751;
int32_t x134 = -1;
volatile int8_t x141 = 4;
volatile int32_t t5 = -377;
uint8_t x150 = 31U;
int16_t x162 = INT16_MIN;
static int64_t x165 = INT64_MAX;
static volatile int64_t t8 = INT64_MAX;
int8_t x174 = -1;
uint64_t x176 = UINT64_MAX;
volatile int64_t t9 = -197LL;
int64_t x178 = INT64_MAX;
static uint64_t t10 = 0LLU;
volatile int64_t x199 = -1LL;
uint32_t x229 = 1391U;
int8_t x231 = 0;
static volatile int8_t x232 = INT8_MAX;
static uint32_t t12 = 226375941U;
int32_t x241 = INT32_MAX;
uint8_t x268 = 38U;
uint16_t x275 = UINT16_MAX;
static int16_t x276 = 38;
uint32_t x301 = 835U;
int64_t x302 = INT64_MAX;
int16_t x303 = -14;
uint32_t t16 = 0U;
uint32_t t17 = UINT32_MAX;
int16_t x327 = -1;
int8_t x379 = INT8_MIN;
int64_t x394 = 104634LL;
volatile int16_t x395 = INT16_MAX;
int16_t x422 = 776;
int8_t x424 = INT8_MAX;
static uint64_t x450 = UINT64_MAX;
int32_t x451 = INT32_MAX;
int64_t x468 = INT64_MIN;
static uint8_t x481 = UINT8_MAX;
uint8_t x485 = 7U;
int16_t x487 = INT16_MIN;
int16_t x494 = 0;
int32_t t30 = INT32_MAX;
uint8_t x505 = UINT8_MAX;
uint8_t x558 = 88U;
int16_t x559 = INT16_MIN;
static uint32_t t34 = UINT32_MAX;
int8_t x577 = 0;
uint8_t x579 = UINT8_MAX;
static int8_t x580 = INT8_MAX;
static volatile int32_t t36 = -5138;
uint32_t x601 = 49945U;
uint64_t x604 = 7100280880240571589LLU;
volatile uint32_t t37 = 1615517U;
volatile uint8_t x605 = UINT8_MAX;
volatile int32_t t38 = 13;
int16_t x623 = 0;
int64_t x641 = 1375519783148169LL;
volatile uint64_t x646 = 341675496183LLU;
static volatile int64_t x662 = 12037109322LL;
int32_t x664 = INT32_MIN;
int32_t x665 = 88179;
int64_t x668 = -66821LL;
int32_t t46 = 64486449;
volatile int16_t x700 = INT16_MIN;
static int32_t x786 = INT32_MIN;
int8_t x788 = -1;
int16_t x794 = INT16_MIN;
int16_t x796 = -1;
uint64_t x850 = 729138LLU;
int32_t t59 = 0;
int32_t x861 = INT32_MAX;
static int32_t x864 = -1;
uint64_t x865 = 37LLU;
int16_t x876 = INT16_MIN;
volatile int8_t x887 = -1;
uint8_t x888 = UINT8_MAX;
volatile int32_t t64 = 22;
int64_t x932 = 0LL;
uint64_t x941 = 115137296LLU;
static int16_t x943 = -61;
static uint32_t t69 = UINT32_MAX;
int8_t x991 = 0;
uint8_t x992 = 9U;
static int16_t x1037 = 713;
static uint8_t x1039 = UINT8_MAX;
uint64_t x1041 = 89656605805LLU;
static int16_t x1044 = INT16_MAX;
static uint8_t x1069 = 8U;
int32_t t75 = -873566;
static int64_t x1091 = INT64_MIN;
uint64_t t78 = 453LLU;
uint16_t x1098 = UINT16_MAX;
static int16_t x1153 = INT16_MAX;
uint16_t x1156 = 339U;
static volatile int32_t t81 = 229;
volatile int16_t x1184 = -306;
volatile uint64_t t83 = UINT64_MAX;
static int16_t x1210 = 88;
int8_t x1211 = INT8_MIN;
uint8_t x1212 = 3U;
int32_t x1252 = INT32_MIN;
static uint32_t x1261 = UINT32_MAX;
uint8_t x1264 = UINT8_MAX;
uint32_t t88 = UINT32_MAX;
int8_t x1272 = INT8_MIN;
int16_t x1296 = -1;
static int8_t x1310 = INT8_MIN;
uint16_t x1323 = UINT16_MAX;
uint8_t x1328 = 1U;
uint8_t x1337 = 0U;
int64_t x1342 = -1LL;
uint8_t x1364 = 7U;
int64_t x1376 = 26774373326457993LL;
int16_t x1393 = 0;
uint8_t x1396 = UINT8_MAX;


void f0(void) {
	volatile uint64_t x17 = 11805301898962051LLU;
	int16_t x18 = -127;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t0 = 130336721089221284LLU;

	t0 = (x17>>((x18<=x19)*x20));

	if (t0 != 11805301898962051LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x53 = INT64_MAX;
	static int8_t x54 = INT8_MIN;
	int64_t x55 = INT64_MIN;
	volatile int64_t t1 = INT64_MAX;

	t1 = (x53>>((x54<=x55)*x56));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x69 = UINT8_MAX;
	static uint8_t x70 = UINT8_MAX;
	int16_t x71 = 976;
	int8_t x72 = 0;
	int32_t t2 = 239686;

	t2 = (x69>>((x70<=x71)*x72));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x106 = 50171341350913LL;
	uint32_t x107 = 2802051U;
	int64_t x108 = -26829880LL;
	int32_t t3 = -8;

	t3 = (x105>>((x106<=x107)*x108));

	if (t3 != 8751) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x133 = 20U;
	int32_t x135 = -214617610;
	int64_t x136 = INT64_MIN;
	int32_t t4 = 123;

	t4 = (x133>>((x134<=x135)*x136));

	if (t4 != 20) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x142 = -1;
	int8_t x143 = INT8_MAX;
	volatile int16_t x144 = 0;

	t5 = (x141>>((x142<=x143)*x144));

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x149 = UINT16_MAX;
	int16_t x151 = 0;
	volatile int64_t x152 = 457686319LL;
	volatile int32_t t6 = 2;

	t6 = (x149>>((x150<=x151)*x152));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x161 = 111U;
	static int32_t x163 = INT32_MIN;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t7 = -379969;

	t7 = (x161>>((x162<=x163)*x164));

	if (t7 != 111) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x166 = UINT64_MAX;
	int32_t x167 = INT32_MIN;
	uint16_t x168 = 2U;

	t8 = (x165>>((x166<=x167)*x168));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x173 = 5269579LL;
	static int16_t x175 = INT16_MIN;

	t9 = (x173>>((x174<=x175)*x176));

	if (t9 != 5269579LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x177 = 2965110491999LLU;
	uint32_t x179 = 37U;
	int64_t x180 = INT64_MAX;

	t10 = (x177>>((x178<=x179)*x180));

	if (t10 != 2965110491999LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x197 = 210U;
	int16_t x198 = INT16_MAX;
	int64_t x200 = 2778827515698178LL;
	static int32_t t11 = -1;

	t11 = (x197>>((x198<=x199)*x200));

	if (t11 != 210) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x230 = 9880U;

	t12 = (x229>>((x230<=x231)*x232));

	if (t12 != 1391U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x242 = INT32_MAX;
	int8_t x243 = -11;
	volatile int16_t x244 = INT16_MAX;
	volatile int32_t t13 = INT32_MAX;

	t13 = (x241>>((x242<=x243)*x244));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x265 = 1U;
	volatile uint32_t x266 = UINT32_MAX;
	int16_t x267 = INT16_MIN;
	volatile int32_t t14 = 26717551;

	t14 = (x265>>((x266<=x267)*x268));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x273 = 16217765LLU;
	uint8_t x274 = 110U;
	uint64_t t15 = 2117654LLU;

	t15 = (x273>>((x274<=x275)*x276));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x304 = 0U;

	t16 = (x301>>((x302<=x303)*x304));

	if (t16 != 835U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x305 = UINT32_MAX;
	int8_t x306 = 36;
	static int16_t x307 = INT16_MIN;
	volatile int16_t x308 = INT16_MIN;

	t17 = (x305>>((x306<=x307)*x308));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x325 = 5790U;
	int64_t x326 = INT64_MAX;
	uint64_t x328 = 136140385177LLU;
	int32_t t18 = -42226043;

	t18 = (x325>>((x326<=x327)*x328));

	if (t18 != 5790) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x377 = 1U;
	int8_t x378 = INT8_MAX;
	volatile int8_t x380 = INT8_MAX;
	volatile int32_t t19 = 218307307;

	t19 = (x377>>((x378<=x379)*x380));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x393 = UINT64_MAX;
	static uint32_t x396 = UINT32_MAX;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x393>>((x394<=x395)*x396));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x397 = 375493LLU;
	static uint16_t x398 = UINT16_MAX;
	uint8_t x399 = 15U;
	int16_t x400 = 6;
	uint64_t t21 = 2633187LLU;

	t21 = (x397>>((x398<=x399)*x400));

	if (t21 != 375493LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x421 = UINT32_MAX;
	static uint8_t x423 = 98U;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = (x421>>((x422<=x423)*x424));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x441 = 2U;
	uint8_t x442 = 46U;
	uint8_t x443 = 17U;
	uint32_t x444 = UINT32_MAX;
	int32_t t23 = 113;

	t23 = (x441>>((x442<=x443)*x444));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x449 = INT8_MAX;
	static int8_t x452 = -58;
	static volatile int32_t t24 = -7;

	t24 = (x449>>((x450<=x451)*x452));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x461 = 1;
	int32_t x462 = INT32_MIN;
	int32_t x463 = -2870;
	int16_t x464 = 1;
	int32_t t25 = -22;

	t25 = (x461>>((x462<=x463)*x464));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x465 = UINT64_MAX;
	int16_t x466 = -1;
	uint32_t x467 = 2U;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x465>>((x466<=x467)*x468));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x482 = -2161996;
	volatile uint64_t x483 = 37LLU;
	static volatile int8_t x484 = -1;
	volatile int32_t t27 = -1673015;

	t27 = (x481>>((x482<=x483)*x484));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x486 = UINT16_MAX;
	uint32_t x488 = UINT32_MAX;
	static int32_t t28 = -12;

	t28 = (x485>>((x486<=x487)*x488));

	if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x493 = UINT16_MAX;
	static int16_t x495 = -1;
	int8_t x496 = INT8_MAX;
	int32_t t29 = -1;

	t29 = (x493>>((x494<=x495)*x496));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x497 = INT32_MAX;
	int64_t x498 = INT64_MAX;
	static int8_t x499 = 0;
	int32_t x500 = -1;

	t30 = (x497>>((x498<=x499)*x500));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x506 = 3771U;
	volatile uint8_t x507 = 7U;
	int16_t x508 = INT16_MIN;
	int32_t t31 = -17586;

	t31 = (x505>>((x506<=x507)*x508));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x533 = 910;
	volatile int64_t x534 = 52537158105734896LL;
	uint16_t x535 = 3154U;
	uint32_t x536 = 28U;
	int32_t t32 = -25;

	t32 = (x533>>((x534<=x535)*x536));

	if (t32 != 910) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x545 = UINT64_MAX;
	int16_t x546 = 843;
	uint8_t x547 = UINT8_MAX;
	volatile int64_t x548 = INT64_MIN;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x545>>((x546<=x547)*x548));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x557 = UINT32_MAX;
	int8_t x560 = INT8_MIN;

	t34 = (x557>>((x558<=x559)*x560));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x569 = 1;
	static int16_t x570 = 273;
	int64_t x571 = 0LL;
	volatile int8_t x572 = INT8_MAX;
	volatile int32_t t35 = 5826;

	t35 = (x569>>((x570<=x571)*x572));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x578 = 161848LLU;

	t36 = (x577>>((x578<=x579)*x580));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x602 = INT64_MAX;
	int8_t x603 = INT8_MIN;

	t37 = (x601>>((x602<=x603)*x604));

	if (t37 != 49945U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x606 = 15887U;
	volatile int32_t x607 = INT32_MIN;
	uint64_t x608 = UINT64_MAX;

	t38 = (x605>>((x606<=x607)*x608));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x609 = 417;
	uint16_t x610 = 840U;
	int64_t x611 = INT64_MIN;
	int8_t x612 = INT8_MIN;
	int32_t t39 = -44;

	t39 = (x609>>((x610<=x611)*x612));

	if (t39 != 417) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x621 = UINT32_MAX;
	uint16_t x622 = 5967U;
	int8_t x624 = 2;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (x621>>((x622<=x623)*x624));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x633 = UINT64_MAX;
	volatile int32_t x634 = -873664075;
	static uint16_t x635 = UINT16_MAX;
	uint32_t x636 = 48U;
	uint64_t t41 = 2LLU;

	t41 = (x633>>((x634<=x635)*x636));

	if (t41 != 65535LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x637 = 14;
	static uint16_t x638 = 14644U;
	int64_t x639 = -1LL;
	static uint32_t x640 = 2932U;
	volatile int32_t t42 = 442;

	t42 = (x637>>((x638<=x639)*x640));

	if (t42 != 14) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x642 = 38635425671LL;
	volatile int16_t x643 = -1;
	volatile uint8_t x644 = UINT8_MAX;
	volatile int64_t t43 = 27971LL;

	t43 = (x641>>((x642<=x643)*x644));

	if (t43 != 1375519783148169LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x645 = INT32_MAX;
	int64_t x647 = INT64_MAX;
	uint8_t x648 = 5U;
	int32_t t44 = 1707936;

	t44 = (x645>>((x646<=x647)*x648));

	if (t44 != 67108863) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x661 = 16U;
	static int64_t x663 = INT64_MIN;
	volatile int32_t t45 = 19245116;

	t45 = (x661>>((x662<=x663)*x664));

	if (t45 != 16) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x666 = UINT16_MAX;
	int8_t x667 = -1;

	t46 = (x665>>((x666<=x667)*x668));

	if (t46 != 88179) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x677 = INT8_MAX;
	int8_t x678 = INT8_MIN;
	int64_t x679 = INT64_MIN;
	int16_t x680 = INT16_MIN;
	volatile int32_t t47 = -160979206;

	t47 = (x677>>((x678<=x679)*x680));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x697 = UINT16_MAX;
	uint64_t x698 = UINT64_MAX;
	volatile int32_t x699 = -3;
	static int32_t t48 = 3062;

	t48 = (x697>>((x698<=x699)*x700));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x701 = INT64_MAX;
	int8_t x702 = -1;
	uint32_t x703 = 9900U;
	static int32_t x704 = INT32_MIN;
	static int64_t t49 = INT64_MAX;

	t49 = (x701>>((x702<=x703)*x704));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x705 = INT32_MAX;
	static uint8_t x706 = 0U;
	static volatile int8_t x707 = -6;
	uint8_t x708 = UINT8_MAX;
	int32_t t50 = INT32_MAX;

	t50 = (x705>>((x706<=x707)*x708));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x741 = INT32_MAX;
	int8_t x742 = 1;
	int32_t x743 = 0;
	volatile int16_t x744 = INT16_MIN;
	volatile int32_t t51 = INT32_MAX;

	t51 = (x741>>((x742<=x743)*x744));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x745 = 51028440335639LLU;
	int16_t x746 = INT16_MIN;
	static int32_t x747 = INT32_MIN;
	uint16_t x748 = 4427U;
	uint64_t t52 = 64411753LLU;

	t52 = (x745>>((x746<=x747)*x748));

	if (t52 != 51028440335639LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x757 = 87U;
	uint8_t x758 = UINT8_MAX;
	volatile int16_t x759 = INT16_MIN;
	int64_t x760 = INT64_MIN;
	int32_t t53 = -631;

	t53 = (x757>>((x758<=x759)*x760));

	if (t53 != 87) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x781 = INT32_MAX;
	volatile uint32_t x782 = 3437579U;
	uint16_t x783 = 42U;
	int8_t x784 = -1;
	volatile int32_t t54 = INT32_MAX;

	t54 = (x781>>((x782<=x783)*x784));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x785 = INT64_MAX;
	static int64_t x787 = -2125062667557904567LL;
	int64_t t55 = INT64_MAX;

	t55 = (x785>>((x786<=x787)*x788));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x793 = 31024314059LLU;
	volatile uint64_t x795 = 2084554978350971062LLU;
	volatile uint64_t t56 = 93151751430174037LLU;

	t56 = (x793>>((x794<=x795)*x796));

	if (t56 != 31024314059LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x809 = INT8_MAX;
	int16_t x810 = INT16_MIN;
	int32_t x811 = -504997;
	static volatile uint64_t x812 = UINT64_MAX;
	int32_t t57 = 0;

	t57 = (x809>>((x810<=x811)*x812));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x845 = 143668958U;
	uint64_t x846 = UINT64_MAX;
	volatile uint16_t x847 = 21U;
	volatile int16_t x848 = -1;
	volatile uint32_t t58 = 343572U;

	t58 = (x845>>((x846<=x847)*x848));

	if (t58 != 143668958U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x849 = 4283;
	volatile uint32_t x851 = 7U;
	static uint32_t x852 = UINT32_MAX;

	t59 = (x849>>((x850<=x851)*x852));

	if (t59 != 4283) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x862 = INT16_MAX;
	int8_t x863 = INT8_MIN;
	int32_t t60 = INT32_MAX;

	t60 = (x861>>((x862<=x863)*x864));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x866 = INT32_MAX;
	int8_t x867 = -59;
	uint64_t x868 = 214122370568LLU;
	static volatile uint64_t t61 = 7592996914130198LLU;

	t61 = (x865>>((x866<=x867)*x868));

	if (t61 != 37LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x873 = 4U;
	uint32_t x874 = UINT32_MAX;
	static volatile int64_t x875 = INT64_MIN;
	volatile int32_t t62 = 1052531404;

	t62 = (x873>>((x874<=x875)*x876));

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x885 = 2U;
	int16_t x886 = INT16_MAX;
	volatile int32_t t63 = 665888;

	t63 = (x885>>((x886<=x887)*x888));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x905 = 113U;
	volatile int8_t x906 = INT8_MIN;
	int16_t x907 = INT16_MIN;
	static uint16_t x908 = UINT16_MAX;

	t64 = (x905>>((x906<=x907)*x908));

	if (t64 != 113) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x909 = INT16_MAX;
	uint16_t x910 = 771U;
	int8_t x911 = INT8_MAX;
	int16_t x912 = INT16_MAX;
	int32_t t65 = -36020344;

	t65 = (x909>>((x910<=x911)*x912));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x929 = 34590797428949LL;
	uint32_t x930 = 21357U;
	volatile int32_t x931 = INT32_MAX;
	int64_t t66 = -287LL;

	t66 = (x929>>((x930<=x931)*x932));

	if (t66 != 34590797428949LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x933 = INT8_MAX;
	static volatile uint32_t x934 = 261457U;
	uint16_t x935 = UINT16_MAX;
	uint16_t x936 = 30554U;
	static volatile int32_t t67 = -113468619;

	t67 = (x933>>((x934<=x935)*x936));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x942 = INT8_MAX;
	uint16_t x944 = 16U;
	uint64_t t68 = 1468385LLU;

	t68 = (x941>>((x942<=x943)*x944));

	if (t68 != 115137296LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x945 = UINT32_MAX;
	uint64_t x946 = UINT64_MAX;
	static int8_t x947 = INT8_MIN;
	int64_t x948 = INT64_MAX;

	t69 = (x945>>((x946<=x947)*x948));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x989 = UINT16_MAX;
	volatile int64_t x990 = 214755156648LL;
	volatile int32_t t70 = -403149987;

	t70 = (x989>>((x990<=x991)*x992));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1029 = 34922172LL;
	static int16_t x1030 = -1;
	int32_t x1031 = INT32_MIN;
	int16_t x1032 = -1;
	volatile int64_t t71 = -632493475863237154LL;

	t71 = (x1029>>((x1030<=x1031)*x1032));

	if (t71 != 34922172LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1038 = 4166U;
	static uint8_t x1040 = 3U;
	int32_t t72 = -93858;

	t72 = (x1037>>((x1038<=x1039)*x1040));

	if (t72 != 713) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1042 = INT16_MAX;
	uint8_t x1043 = 1U;
	uint64_t t73 = 365337564LLU;

	t73 = (x1041>>((x1042<=x1043)*x1044));

	if (t73 != 89656605805LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x1053 = 15634;
	static volatile int16_t x1054 = -1;
	volatile int16_t x1055 = -6;
	static uint16_t x1056 = 25U;
	static volatile int32_t t74 = 2906;

	t74 = (x1053>>((x1054<=x1055)*x1056));

	if (t74 != 15634) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1070 = INT8_MIN;
	int16_t x1071 = INT16_MIN;
	uint64_t x1072 = 10945989915LLU;

	t75 = (x1069>>((x1070<=x1071)*x1072));

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x1073 = 12LLU;
	int8_t x1074 = INT8_MAX;
	static int64_t x1075 = -1LL;
	uint16_t x1076 = UINT16_MAX;
	volatile uint64_t t76 = 9263776128LLU;

	t76 = (x1073>>((x1074<=x1075)*x1076));

	if (t76 != 12LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1085 = 46;
	int64_t x1086 = INT64_MIN;
	uint64_t x1087 = 567819760593022632LLU;
	int8_t x1088 = 31;
	static volatile int32_t t77 = 1746298;

	t77 = (x1085>>((x1086<=x1087)*x1088));

	if (t77 != 46) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x1089 = 20147163498057LLU;
	int64_t x1090 = -215601241972429LL;
	int32_t x1092 = 86;

	t78 = (x1089>>((x1090<=x1091)*x1092));

	if (t78 != 20147163498057LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1097 = INT8_MAX;
	int16_t x1099 = INT16_MAX;
	static uint8_t x1100 = UINT8_MAX;
	volatile int32_t t79 = 114;

	t79 = (x1097>>((x1098<=x1099)*x1100));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1141 = INT16_MAX;
	uint16_t x1142 = 284U;
	volatile uint32_t x1143 = 65U;
	int8_t x1144 = INT8_MAX;
	static volatile int32_t t80 = 92;

	t80 = (x1141>>((x1142<=x1143)*x1144));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x1154 = 45U;
	int64_t x1155 = -3LL;

	t81 = (x1153>>((x1154<=x1155)*x1156));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x1177 = UINT16_MAX;
	int8_t x1178 = -1;
	int32_t x1179 = INT32_MIN;
	uint32_t x1180 = 1108371998U;
	static int32_t t82 = -442642;

	t82 = (x1177>>((x1178<=x1179)*x1180));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x1181 = UINT64_MAX;
	int32_t x1182 = INT32_MIN;
	int64_t x1183 = INT64_MIN;

	t83 = (x1181>>((x1182<=x1183)*x1184));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x1209 = 9761U;
	static int32_t t84 = 24742;

	t84 = (x1209>>((x1210<=x1211)*x1212));

	if (t84 != 9761) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1221 = 4U;
	volatile int16_t x1222 = INT16_MIN;
	int64_t x1223 = INT64_MIN;
	int32_t x1224 = INT32_MIN;
	int32_t t85 = -468310520;

	t85 = (x1221>>((x1222<=x1223)*x1224));

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1241 = 1;
	static int8_t x1242 = -1;
	static int16_t x1243 = INT16_MIN;
	static int32_t x1244 = INT32_MIN;
	static volatile int32_t t86 = -247091;

	t86 = (x1241>>((x1242<=x1243)*x1244));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x1249 = UINT64_MAX;
	static uint32_t x1250 = 31724842U;
	static int16_t x1251 = INT16_MAX;
	uint64_t t87 = UINT64_MAX;

	t87 = (x1249>>((x1250<=x1251)*x1252));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x1262 = 1;
	int16_t x1263 = -1;

	t88 = (x1261>>((x1262<=x1263)*x1264));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1265 = 115U;
	volatile uint16_t x1266 = 4538U;
	uint16_t x1267 = 1U;
	uint32_t x1268 = 235208819U;
	static uint32_t t89 = 1U;

	t89 = (x1265>>((x1266<=x1267)*x1268));

	if (t89 != 115U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1269 = 28007107LLU;
	int16_t x1270 = INT16_MIN;
	int32_t x1271 = -410036997;
	volatile uint64_t t90 = 2599LLU;

	t90 = (x1269>>((x1270<=x1271)*x1272));

	if (t90 != 28007107LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1293 = INT8_MAX;
	static int8_t x1294 = INT8_MIN;
	int16_t x1295 = INT16_MIN;
	volatile int32_t t91 = 3300;

	t91 = (x1293>>((x1294<=x1295)*x1296));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1309 = 1U;
	uint32_t x1311 = UINT32_MAX;
	uint16_t x1312 = 29U;
	int32_t t92 = -7264302;

	t92 = (x1309>>((x1310<=x1311)*x1312));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x1321 = INT8_MAX;
	uint64_t x1322 = 225405LLU;
	int8_t x1324 = INT8_MIN;
	int32_t t93 = 263100;

	t93 = (x1321>>((x1322<=x1323)*x1324));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x1325 = INT8_MAX;
	volatile int32_t x1326 = INT32_MAX;
	int16_t x1327 = -1;
	static volatile int32_t t94 = 2678;

	t94 = (x1325>>((x1326<=x1327)*x1328));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x1338 = INT8_MAX;
	static volatile int16_t x1339 = -1;
	int8_t x1340 = 9;
	int32_t t95 = 322;

	t95 = (x1337>>((x1338<=x1339)*x1340));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1341 = 37516319178LLU;
	volatile int64_t x1343 = -263476759267596LL;
	volatile uint32_t x1344 = UINT32_MAX;
	uint64_t t96 = 147997LLU;

	t96 = (x1341>>((x1342<=x1343)*x1344));

	if (t96 != 37516319178LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x1361 = INT8_MAX;
	int16_t x1362 = 3162;
	int8_t x1363 = 0;
	static int32_t t97 = 5685993;

	t97 = (x1361>>((x1362<=x1363)*x1364));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1373 = 5728841LLU;
	uint8_t x1374 = UINT8_MAX;
	static volatile uint16_t x1375 = 0U;
	uint64_t t98 = 4315177691431LLU;

	t98 = (x1373>>((x1374<=x1375)*x1376));

	if (t98 != 5728841LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1394 = UINT8_MAX;
	int32_t x1395 = INT32_MIN;
	volatile int32_t t99 = 10235685;

	t99 = (x1393>>((x1394<=x1395)*x1396));

	if (t99 != 0) { NG(); } else { ; }
	
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

