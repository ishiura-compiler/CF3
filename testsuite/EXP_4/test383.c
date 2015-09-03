#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x59 = -398;
int32_t t2 = 6028799;
static volatile int8_t x69 = 1;
volatile int32_t t3 = -2814;
static int32_t t4 = 5;
int32_t x97 = 54043568;
int8_t x98 = -1;
int32_t t6 = -34;
int16_t x127 = INT16_MIN;
int16_t x136 = -3;
uint64_t x146 = 41979LLU;
uint64_t x148 = 45LLU;
uint64_t t10 = 680909LLU;
uint8_t x151 = UINT8_MAX;
int16_t x166 = 88;
volatile uint64_t x177 = 13LLU;
int64_t x179 = INT64_MIN;
static uint32_t x233 = 2U;
volatile int8_t x282 = -1;
uint32_t t19 = 10U;
int16_t x301 = INT16_MAX;
int32_t x303 = -1;
int64_t x344 = -58236885152404089LL;
static uint64_t x383 = 252296587596LLU;
int8_t x422 = 18;
static uint64_t x424 = 345LLU;
int8_t x453 = INT8_MAX;
volatile uint32_t x508 = 213180738U;
int64_t x512 = 1896LL;
uint16_t x553 = 3716U;
int32_t t34 = INT32_MAX;
int8_t x566 = -1;
int32_t t35 = -30916029;
int64_t x570 = -1LL;
int8_t x571 = INT8_MAX;
int64_t x572 = -1LL;
volatile int64_t x579 = 28LL;
uint8_t x601 = UINT8_MAX;
uint64_t x614 = UINT64_MAX;
static int32_t t39 = -1712;
uint8_t x626 = 1U;
volatile uint32_t x637 = 1729510109U;
int16_t x638 = 1;
volatile uint32_t t42 = 393046U;
uint16_t x655 = UINT16_MAX;
int32_t x678 = -1;
int8_t x680 = INT8_MIN;
uint32_t x683 = 498113U;
volatile uint64_t t46 = UINT64_MAX;
int64_t x751 = -130LL;
int32_t t48 = 3;
int8_t x793 = 9;
int64_t x846 = INT64_MIN;
int32_t x874 = INT32_MAX;
uint8_t x920 = 1U;
static int8_t x921 = INT8_MAX;
int64_t x923 = -1429842LL;
volatile int16_t x964 = -1;
volatile uint64_t t63 = 0LLU;
int32_t x971 = INT32_MIN;
static int32_t x977 = 1;
int32_t t65 = 61241873;
int32_t t66 = 185;
static volatile int8_t x1001 = INT8_MAX;
uint16_t x1031 = UINT16_MAX;
uint16_t x1047 = UINT16_MAX;
int16_t x1062 = -1;
int16_t x1064 = -1;
int32_t t72 = 4;
int64_t x1111 = 1LL;
volatile int32_t t74 = 39;
uint8_t x1121 = 9U;
static uint32_t x1142 = 61U;
static int32_t t77 = -488894336;
uint32_t x1161 = 28676U;
volatile int32_t t81 = -24;
static int16_t x1191 = -7056;
uint64_t x1216 = 719924316836759623LLU;
static int8_t x1258 = -1;
static int8_t x1259 = INT8_MAX;
volatile int64_t x1275 = -418405736286000709LL;
volatile uint32_t x1290 = 0U;
int8_t x1297 = INT8_MAX;
volatile int32_t t90 = -3160;
int64_t x1307 = -2LL;
uint64_t x1313 = 3271945277371878512LLU;
static volatile uint32_t x1321 = UINT32_MAX;
int8_t x1325 = 42;
static int64_t x1328 = -24520232645186LL;
int32_t t96 = 523236950;
int64_t x1347 = 79LL;
volatile uint64_t t97 = 1806LLU;
int16_t x1350 = INT16_MAX;
int16_t x1352 = INT16_MAX;
int16_t x1357 = INT16_MAX;


void f0(void) {
	uint32_t x9 = 1159U;
	int32_t x10 = INT32_MIN;
	uint8_t x11 = 31U;
	uint64_t x12 = UINT64_MAX;
	volatile uint32_t t0 = 1382189101U;

	t0 = (x9<<(x10/(x11*x12)));

	if (t0 != 1159U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x41 = 3635U;
	int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MAX;
	int64_t x44 = -1LL;
	volatile uint32_t t1 = 15U;

	t1 = (x41<<(x42/(x43*x44)));

	if (t1 != 3635U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x57 = 20U;
	int8_t x58 = INT8_MAX;
	int8_t x60 = INT8_MIN;

	t2 = (x57<<(x58/(x59*x60)));

	if (t2 != 20) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MAX;
	uint32_t x72 = UINT32_MAX;

	t3 = (x69<<(x70/(x71*x72)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x77 = INT8_MAX;
	uint8_t x78 = UINT8_MAX;
	static uint32_t x79 = 67882U;
	int16_t x80 = -10;

	t4 = (x77<<(x78/(x79*x80)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x89 = 8U;
	static int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	volatile uint8_t x92 = 9U;
	int32_t t5 = -24011347;

	t5 = (x89<<(x90/(x91*x92)));

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x99 = 1109302336LLU;
	static int64_t x100 = INT64_MAX;

	t6 = (x97<<(x98/(x99*x100)));

	if (t6 != 108087136) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x117 = 18LLU;
	uint32_t x118 = UINT32_MAX;
	uint32_t x119 = 14U;
	volatile uint64_t x120 = UINT64_MAX;
	uint64_t t7 = 23557616669950388LLU;

	t7 = (x117<<(x118/(x119*x120)));

	if (t7 != 18LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x125 = 692;
	int8_t x126 = INT8_MAX;
	static int8_t x128 = INT8_MAX;
	volatile int32_t t8 = -22;

	t8 = (x125<<(x126/(x127*x128)));

	if (t8 != 692) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x133 = UINT64_MAX;
	uint8_t x134 = 1U;
	uint16_t x135 = 2U;
	static volatile uint64_t t9 = UINT64_MAX;

	t9 = (x133<<(x134/(x135*x136)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x145 = 1298750329568LLU;
	uint64_t x147 = 3869957542288LLU;

	t10 = (x145<<(x146/(x147*x148)));

	if (t10 != 1298750329568LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x149 = INT8_MAX;
	uint8_t x150 = 11U;
	volatile int32_t x152 = -1;
	volatile int32_t t11 = 11407188;

	t11 = (x149<<(x150/(x151*x152)));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x165 = 4U;
	uint32_t x167 = 2010U;
	uint32_t x168 = 117835U;
	volatile int32_t t12 = 15350224;

	t12 = (x165<<(x166/(x167*x168)));

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x178 = 11666;
	uint64_t x180 = 40930654025LLU;
	static uint64_t t13 = 11LLU;

	t13 = (x177<<(x178/(x179*x180)));

	if (t13 != 13LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x185 = 3461LLU;
	uint16_t x186 = 902U;
	static int8_t x187 = -1;
	int8_t x188 = INT8_MIN;
	static volatile uint64_t t14 = 459207869443LLU;

	t14 = (x185<<(x186/(x187*x188)));

	if (t14 != 443008LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x189 = 82745578163501989LL;
	int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MAX;
	static uint8_t x192 = UINT8_MAX;
	static int64_t t15 = -322024413499871289LL;

	t15 = (x189<<(x190/(x191*x192)));

	if (t15 != 165491156327003978LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x205 = 28787503LLU;
	static uint32_t x206 = UINT32_MAX;
	uint8_t x207 = UINT8_MAX;
	static int8_t x208 = INT8_MIN;
	volatile uint64_t t16 = 302260553LLU;

	t16 = (x205<<(x206/(x207*x208)));

	if (t16 != 57575006LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x209 = 850;
	static uint32_t x210 = UINT32_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	volatile int64_t x212 = -14LL;
	int32_t t17 = -96681;

	t17 = (x209<<(x210/(x211*x212)));

	if (t17 != 850) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x234 = 28U;
	int8_t x235 = INT8_MAX;
	int8_t x236 = 21;
	uint32_t t18 = 309342072U;

	t18 = (x233<<(x234/(x235*x236)));

	if (t18 != 2U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x281 = UINT32_MAX;
	static uint64_t x283 = 5817047205370LLU;
	int32_t x284 = -1;

	t19 = (x281<<(x282/(x283*x284)));

	if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x289 = 9;
	volatile int8_t x290 = INT8_MIN;
	int64_t x291 = -1LL;
	uint64_t x292 = 25039030LLU;
	static volatile int32_t t20 = 64117;

	t20 = (x289<<(x290/(x291*x292)));

	if (t20 != 18) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x293 = 3813157580LLU;
	int64_t x294 = INT64_MIN;
	int16_t x295 = -16;
	uint64_t x296 = 422522292426204925LLU;
	volatile uint64_t t21 = 417LLU;

	t21 = (x293<<(x294/(x295*x296)));

	if (t21 != 3813157580LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x302 = 30881U;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t22 = -10;

	t22 = (x301<<(x302/(x303*x304)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x341 = INT32_MAX;
	static uint8_t x342 = 13U;
	uint64_t x343 = 223764273355LLU;
	volatile int32_t t23 = INT32_MAX;

	t23 = (x341<<(x342/(x343*x344)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = -2856;
	volatile int64_t x371 = -2597468930LL;
	static volatile uint64_t x372 = 7466LLU;
	int32_t t24 = -372761;

	t24 = (x369<<(x370/(x371*x372)));

	if (t24 != 510) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x381 = 82;
	int32_t x382 = INT32_MIN;
	int64_t x384 = -1LL;
	int32_t t25 = 30;

	t25 = (x381<<(x382/(x383*x384)));

	if (t25 != 164) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x397 = 1U;
	static uint32_t x398 = 105U;
	int16_t x399 = INT16_MAX;
	int8_t x400 = 54;
	int32_t t26 = -5;

	t26 = (x397<<(x398/(x399*x400)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x421 = 10;
	uint64_t x423 = 5LLU;
	int32_t t27 = 426519;

	t27 = (x421<<(x422/(x423*x424)));

	if (t27 != 10) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x454 = -1LL;
	static volatile int32_t x455 = -1;
	uint32_t x456 = 18U;
	int32_t t28 = 167095;

	t28 = (x453<<(x454/(x455*x456)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x485 = 3499790LLU;
	uint8_t x486 = 0U;
	uint8_t x487 = UINT8_MAX;
	uint32_t x488 = 11U;
	volatile uint64_t t29 = 52924298LLU;

	t29 = (x485<<(x486/(x487*x488)));

	if (t29 != 3499790LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x497 = UINT16_MAX;
	int64_t x498 = -1662503330LL;
	int16_t x499 = INT16_MIN;
	uint16_t x500 = 28242U;
	int32_t t30 = 21;

	t30 = (x497<<(x498/(x499*x500)));

	if (t30 != 131070) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x505 = 839;
	int8_t x506 = -1;
	int32_t x507 = INT32_MAX;
	volatile int32_t t31 = 87;

	t31 = (x505<<(x506/(x507*x508)));

	if (t31 != 1678) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x509 = UINT64_MAX;
	uint8_t x510 = 39U;
	uint64_t x511 = 545598635LLU;
	static uint64_t t32 = UINT64_MAX;

	t32 = (x509<<(x510/(x511*x512)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x554 = -10;
	static int16_t x555 = INT16_MIN;
	int8_t x556 = INT8_MIN;
	int32_t t33 = -9880415;

	t33 = (x553<<(x554/(x555*x556)));

	if (t33 != 3716) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x561 = INT32_MAX;
	int32_t x562 = -1;
	int32_t x563 = -34545;
	static volatile int8_t x564 = INT8_MIN;

	t34 = (x561<<(x562/(x563*x564)));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x565 = INT8_MAX;
	static int32_t x567 = 3090;
	static int16_t x568 = -1;

	t35 = (x565<<(x566/(x567*x568)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x569 = UINT64_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = (x569<<(x570/(x571*x572)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x577 = 14261LLU;
	int64_t x578 = INT64_MIN;
	static uint64_t x580 = UINT64_MAX;
	volatile uint64_t t37 = 3411011LLU;

	t37 = (x577<<(x578/(x579*x580)));

	if (t37 != 14261LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x602 = INT8_MIN;
	int32_t x603 = 899;
	int8_t x604 = INT8_MIN;
	int32_t t38 = 29344;

	t38 = (x601<<(x602/(x603*x604)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x613 = 43982;
	int8_t x615 = -1;
	uint16_t x616 = 47U;

	t39 = (x613<<(x614/(x615*x616)));

	if (t39 != 87964) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x621 = UINT16_MAX;
	uint16_t x622 = 15U;
	uint16_t x623 = 11561U;
	static int8_t x624 = INT8_MIN;
	int32_t t40 = 6;

	t40 = (x621<<(x622/(x623*x624)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x625 = UINT32_MAX;
	static int16_t x627 = INT16_MIN;
	uint32_t x628 = 4726U;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (x625<<(x626/(x627*x628)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x639 = -1LL;
	static int16_t x640 = -1;

	t42 = (x637<<(x638/(x639*x640)));

	if (t42 != 3459020218U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x653 = 19;
	int64_t x654 = -1LL;
	static uint8_t x656 = 105U;
	static int32_t t43 = -1;

	t43 = (x653<<(x654/(x655*x656)));

	if (t43 != 19) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x677 = UINT16_MAX;
	volatile uint8_t x679 = 3U;
	int32_t t44 = 3500;

	t44 = (x677<<(x678/(x679*x680)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x681 = 2U;
	uint8_t x682 = 1U;
	int16_t x684 = -1;
	int32_t t45 = 459;

	t45 = (x681<<(x682/(x683*x684)));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x693 = UINT64_MAX;
	uint32_t x694 = 584202U;
	int32_t x695 = INT32_MIN;
	uint8_t x696 = 1U;

	t46 = (x693<<(x694/(x695*x696)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x749 = 44305LLU;
	static uint8_t x750 = 5U;
	int16_t x752 = INT16_MAX;
	volatile uint64_t t47 = 72354138LLU;

	t47 = (x749<<(x750/(x751*x752)));

	if (t47 != 44305LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x753 = UINT8_MAX;
	int16_t x754 = -1;
	static int8_t x755 = INT8_MIN;
	int16_t x756 = INT16_MAX;

	t48 = (x753<<(x754/(x755*x756)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x785 = 15LL;
	uint8_t x786 = UINT8_MAX;
	volatile int64_t x787 = -461046LL;
	int8_t x788 = INT8_MAX;
	static volatile int64_t t49 = -59315133323176LL;

	t49 = (x785<<(x786/(x787*x788)));

	if (t49 != 15LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x794 = UINT64_MAX;
	static volatile int16_t x795 = INT16_MAX;
	static volatile int16_t x796 = INT16_MIN;
	volatile int32_t t50 = 5;

	t50 = (x793<<(x794/(x795*x796)));

	if (t50 != 18) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x797 = 1U;
	int8_t x798 = INT8_MAX;
	int8_t x799 = -14;
	uint32_t x800 = UINT32_MAX;
	int32_t t51 = 1;

	t51 = (x797<<(x798/(x799*x800)));

	if (t51 != 512) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x805 = UINT32_MAX;
	int32_t x806 = -1;
	uint64_t x807 = 72610580041LLU;
	volatile int64_t x808 = INT64_MAX;
	uint32_t t52 = 2495579U;

	t52 = (x805<<(x806/(x807*x808)));

	if (t52 != 4294967292U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x837 = UINT64_MAX;
	uint32_t x838 = UINT32_MAX;
	static uint32_t x839 = UINT32_MAX;
	int8_t x840 = INT8_MAX;
	static volatile uint64_t t53 = 258119156482555381LLU;

	t53 = (x837<<(x838/(x839*x840)));

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x841 = 216145576;
	static int64_t x842 = INT64_MIN;
	volatile int32_t x843 = INT32_MIN;
	static volatile uint64_t x844 = 4218661233839201LLU;
	static volatile int32_t t54 = 8164;

	t54 = (x841<<(x842/(x843*x844)));

	if (t54 != 864582304) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x845 = 148768737;
	uint32_t x847 = 8U;
	uint64_t x848 = 1487490546021133643LLU;
	volatile int32_t t55 = 32968571;

	t55 = (x845<<(x846/(x847*x848)));

	if (t55 != 148768737) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x857 = 1U;
	int8_t x858 = INT8_MAX;
	int16_t x859 = INT16_MAX;
	volatile uint32_t x860 = 337254272U;
	int32_t t56 = -18341602;

	t56 = (x857<<(x858/(x859*x860)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x873 = UINT16_MAX;
	uint32_t x875 = UINT32_MAX;
	uint64_t x876 = 20144393164LLU;
	volatile int32_t t57 = 465353795;

	t57 = (x873<<(x874/(x875*x876)));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x905 = 0;
	int32_t x906 = -1;
	int16_t x907 = INT16_MIN;
	int64_t x908 = 14731459LL;
	static int32_t t58 = 9;

	t58 = (x905<<(x906/(x907*x908)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x917 = UINT64_MAX;
	static int32_t x918 = INT32_MIN;
	int64_t x919 = INT64_MIN;
	uint64_t t59 = UINT64_MAX;

	t59 = (x917<<(x918/(x919*x920)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x922 = UINT16_MAX;
	static int16_t x924 = -165;
	volatile int32_t t60 = 169990923;

	t60 = (x921<<(x922/(x923*x924)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x929 = 15496;
	int16_t x930 = -117;
	static uint8_t x931 = 62U;
	int8_t x932 = INT8_MAX;
	int32_t t61 = 7019658;

	t61 = (x929<<(x930/(x931*x932)));

	if (t61 != 15496) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x953 = INT64_MAX;
	int8_t x954 = 1;
	volatile uint64_t x955 = 3396714450009873LLU;
	volatile int64_t x956 = -1LL;
	int64_t t62 = INT64_MAX;

	t62 = (x953<<(x954/(x955*x956)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x961 = 279110LLU;
	int16_t x962 = -364;
	uint16_t x963 = 664U;

	t63 = (x961<<(x962/(x963*x964)));

	if (t63 != 279110LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x969 = UINT32_MAX;
	static int32_t x970 = -1;
	uint64_t x972 = 178684994LLU;
	uint32_t t64 = 73U;

	t64 = (x969<<(x970/(x971*x972)));

	if (t64 != 4294967294U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x978 = UINT8_MAX;
	int64_t x979 = 2580737955893782LL;
	static int16_t x980 = -1;

	t65 = (x977<<(x978/(x979*x980)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x985 = INT8_MAX;
	static uint8_t x986 = 0U;
	static int16_t x987 = -6440;
	int16_t x988 = -4;

	t66 = (x985<<(x986/(x987*x988)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1002 = INT8_MIN;
	static int8_t x1003 = -1;
	int64_t x1004 = INT64_MAX;
	int32_t t67 = 1893;

	t67 = (x1001<<(x1002/(x1003*x1004)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x1021 = 1U;
	int32_t x1022 = 126307;
	static uint64_t x1023 = 23LLU;
	int32_t x1024 = INT32_MAX;
	int32_t t68 = 1;

	t68 = (x1021<<(x1022/(x1023*x1024)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1029 = UINT8_MAX;
	uint32_t x1030 = 60U;
	uint64_t x1032 = UINT64_MAX;
	volatile int32_t t69 = 1295;

	t69 = (x1029<<(x1030/(x1031*x1032)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1045 = UINT8_MAX;
	volatile int8_t x1046 = INT8_MIN;
	static int8_t x1048 = 2;
	int32_t t70 = 139579;

	t70 = (x1045<<(x1046/(x1047*x1048)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x1053 = 14U;
	static int64_t x1054 = -2LL;
	static int8_t x1055 = INT8_MIN;
	int64_t x1056 = -1LL;
	int32_t t71 = -6385147;

	t71 = (x1053<<(x1054/(x1055*x1056)));

	if (t71 != 14) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x1061 = 448;
	uint32_t x1063 = 618659U;

	t72 = (x1061<<(x1062/(x1063*x1064)));

	if (t72 != 896) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x1073 = 29341LLU;
	static uint8_t x1074 = UINT8_MAX;
	static int8_t x1075 = 12;
	static int8_t x1076 = INT8_MIN;
	volatile uint64_t t73 = 6116544379LLU;

	t73 = (x1073<<(x1074/(x1075*x1076)));

	if (t73 != 29341LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x1109 = INT8_MAX;
	uint8_t x1110 = 0U;
	int32_t x1112 = -36;

	t74 = (x1109<<(x1110/(x1111*x1112)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x1122 = 1;
	int64_t x1123 = 8655125617674829LL;
	static int8_t x1124 = 3;
	int32_t t75 = 3;

	t75 = (x1121<<(x1122/(x1123*x1124)));

	if (t75 != 9) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x1141 = 111640783632LLU;
	int16_t x1143 = INT16_MIN;
	int16_t x1144 = -1;
	volatile uint64_t t76 = 141294580234775LLU;

	t76 = (x1141<<(x1142/(x1143*x1144)));

	if (t76 != 111640783632LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1145 = 0;
	uint16_t x1146 = 5046U;
	static int32_t x1147 = -3962181;
	int8_t x1148 = INT8_MIN;

	t77 = (x1145<<(x1146/(x1147*x1148)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x1149 = INT16_MAX;
	int32_t x1150 = -1;
	volatile int16_t x1151 = -1;
	int64_t x1152 = 19233411171LL;
	int32_t t78 = 1;

	t78 = (x1149<<(x1150/(x1151*x1152)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x1157 = 8070U;
	int8_t x1158 = INT8_MIN;
	int64_t x1159 = 111809219725635444LL;
	int8_t x1160 = -13;
	static int32_t t79 = -765760820;

	t79 = (x1157<<(x1158/(x1159*x1160)));

	if (t79 != 8070) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x1162 = 1389713U;
	uint16_t x1163 = 11445U;
	volatile int16_t x1164 = INT16_MIN;
	volatile uint32_t t80 = 7117U;

	t80 = (x1161<<(x1162/(x1163*x1164)));

	if (t80 != 28676U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1181 = 0;
	int32_t x1182 = INT32_MAX;
	uint64_t x1183 = 452231410878497535LLU;
	volatile uint16_t x1184 = 15U;

	t81 = (x1181<<(x1182/(x1183*x1184)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x1189 = 47;
	volatile int8_t x1190 = -1;
	static int16_t x1192 = -1;
	static volatile int32_t t82 = 0;

	t82 = (x1189<<(x1190/(x1191*x1192)));

	if (t82 != 47) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x1213 = INT32_MAX;
	static int64_t x1214 = INT64_MAX;
	volatile int16_t x1215 = INT16_MAX;
	static int32_t t83 = INT32_MAX;

	t83 = (x1213<<(x1214/(x1215*x1216)));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x1221 = 23621U;
	static uint8_t x1222 = 25U;
	int16_t x1223 = INT16_MAX;
	int8_t x1224 = INT8_MIN;
	volatile int32_t t84 = -666023767;

	t84 = (x1221<<(x1222/(x1223*x1224)));

	if (t84 != 23621) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x1257 = UINT16_MAX;
	volatile uint64_t x1260 = UINT64_MAX;
	volatile int32_t t85 = -26189;

	t85 = (x1257<<(x1258/(x1259*x1260)));

	if (t85 != 131070) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1265 = 2685764439352262LLU;
	int32_t x1266 = -1;
	uint64_t x1267 = 5800913838LLU;
	volatile int16_t x1268 = -1;
	uint64_t t86 = 221894790LLU;

	t86 = (x1265<<(x1266/(x1267*x1268)));

	if (t86 != 5371528878704524LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1273 = 179U;
	static volatile int64_t x1274 = 5447903141918580LL;
	static int8_t x1276 = -1;
	volatile uint32_t t87 = 204314U;

	t87 = (x1273<<(x1274/(x1275*x1276)));

	if (t87 != 179U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x1289 = 21U;
	int16_t x1291 = INT16_MIN;
	volatile uint8_t x1292 = 5U;
	volatile int32_t t88 = 134;

	t88 = (x1289<<(x1290/(x1291*x1292)));

	if (t88 != 21) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1293 = UINT16_MAX;
	int32_t x1294 = -1;
	int8_t x1295 = -1;
	int16_t x1296 = INT16_MAX;
	int32_t t89 = 5242;

	t89 = (x1293<<(x1294/(x1295*x1296)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x1298 = 1923265LLU;
	int16_t x1299 = 4;
	static volatile int16_t x1300 = INT16_MIN;

	t90 = (x1297<<(x1298/(x1299*x1300)));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x1305 = INT64_MAX;
	static int32_t x1306 = -1;
	volatile int16_t x1308 = INT16_MIN;
	volatile int64_t t91 = INT64_MAX;

	t91 = (x1305<<(x1306/(x1307*x1308)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1314 = 18;
	volatile uint32_t x1315 = 1202675580U;
	int32_t x1316 = -578539;
	volatile uint64_t t92 = 390637123803550298LLU;

	t92 = (x1313<<(x1314/(x1315*x1316)));

	if (t92 != 3271945277371878512LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1322 = -3;
	static uint64_t x1323 = 165235107850187825LLU;
	uint64_t x1324 = UINT64_MAX;
	uint32_t t93 = 238U;

	t93 = (x1321<<(x1322/(x1323*x1324)));

	if (t93 != 4294967294U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1326 = INT32_MIN;
	volatile uint8_t x1327 = 3U;
	volatile int32_t t94 = -21930;

	t94 = (x1325<<(x1326/(x1327*x1328)));

	if (t94 != 42) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1333 = 590196305LL;
	int32_t x1334 = INT32_MIN;
	volatile int32_t x1335 = INT32_MAX;
	uint32_t x1336 = 626U;
	int64_t t95 = -2579LL;

	t95 = (x1333<<(x1334/(x1335*x1336)));

	if (t95 != 590196305LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1341 = 121736053;
	static int8_t x1342 = -1;
	int16_t x1343 = INT16_MIN;
	volatile uint16_t x1344 = 120U;

	t96 = (x1341<<(x1342/(x1343*x1344)));

	if (t96 != 121736053) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x1345 = 896368956LLU;
	static volatile int32_t x1346 = -6396;
	int8_t x1348 = INT8_MIN;

	t97 = (x1345<<(x1346/(x1347*x1348)));

	if (t97 != 896368956LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x1349 = UINT16_MAX;
	uint64_t x1351 = 12LLU;
	static volatile int32_t t98 = -252;

	t98 = (x1349<<(x1350/(x1351*x1352)));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1358 = INT16_MIN;
	volatile uint64_t x1359 = UINT64_MAX;
	uint32_t x1360 = 27U;
	int32_t t99 = -20;

	t99 = (x1357<<(x1358/(x1359*x1360)));

	if (t99 != 32767) { NG(); } else { ; }
	
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

