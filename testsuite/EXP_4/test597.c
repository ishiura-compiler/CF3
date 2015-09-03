#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x23 = INT16_MAX;
int8_t x57 = -2;
volatile int32_t x77 = -1;
int64_t x93 = 19LL;
uint16_t x100 = UINT16_MAX;
volatile uint64_t t12 = 1LLU;
uint64_t x122 = UINT64_MAX;
volatile uint8_t x126 = UINT8_MAX;
static volatile uint16_t x127 = 481U;
int32_t x150 = 11965;
volatile int64_t t17 = INT64_MIN;
static int64_t x160 = 713126510918807758LL;
uint8_t x181 = UINT8_MAX;
volatile int16_t x191 = INT16_MAX;
static int32_t x201 = INT32_MIN;
volatile int32_t x205 = -1;
volatile int32_t t25 = -284897;
uint64_t x262 = 251LLU;
uint32_t x264 = 11742800U;
uint32_t t27 = UINT32_MAX;
uint32_t x302 = UINT32_MAX;
int16_t x333 = INT16_MIN;
uint16_t x345 = 172U;
int8_t x346 = 3;
int32_t t31 = -860;
volatile int16_t x354 = INT16_MAX;
static int64_t x357 = -1LL;
int8_t x405 = 6;
volatile int32_t x406 = INT32_MAX;
int64_t x408 = 71588776225671188LL;
volatile int32_t t36 = INT32_MAX;
int32_t x409 = 5373433;
static volatile uint32_t t37 = 7608U;
uint16_t x428 = UINT16_MAX;
int32_t t38 = -1786936;
volatile uint64_t t40 = 228948010099812LLU;
int32_t x467 = 259626;
uint64_t x472 = UINT64_MAX;
int64_t x514 = INT64_MAX;
int64_t x578 = 3LL;
uint8_t x611 = 2U;
int32_t x612 = INT32_MAX;
uint32_t x638 = UINT32_MAX;
uint32_t t52 = UINT32_MAX;
int32_t x641 = -1;
uint8_t x645 = UINT8_MAX;
int64_t x669 = 15732LL;
static int64_t t56 = 1341510532LL;
int8_t x683 = -19;
volatile int16_t x733 = INT16_MIN;
int8_t x757 = -1;
static int16_t x789 = 0;
static int16_t x796 = INT16_MIN;
volatile int32_t t62 = 141997;
int8_t x810 = 1;
static uint8_t x811 = 120U;
int64_t x812 = INT64_MIN;
volatile int32_t t63 = -3;
int8_t x814 = INT8_MAX;
int64_t t65 = -76LL;
uint8_t x837 = 6U;
uint16_t x838 = UINT16_MAX;
int32_t x866 = 4;
static int64_t x872 = 7407578LL;
uint32_t x962 = 1422776633U;
int16_t x964 = INT16_MAX;
int32_t x967 = -1;
volatile int32_t t74 = 1066108;
int8_t x976 = -3;
volatile int64_t t82 = INT64_MAX;
int16_t x1047 = INT16_MAX;
static uint8_t x1059 = UINT8_MAX;
static volatile int16_t x1081 = 6;
uint16_t x1088 = 746U;
volatile int32_t t86 = 372920;
static uint32_t x1129 = UINT32_MAX;
int8_t x1131 = 5;
volatile uint32_t t87 = UINT32_MAX;
uint8_t x1139 = 1U;
int32_t x1140 = INT32_MIN;
uint8_t x1154 = UINT8_MAX;
uint32_t x1155 = 190870U;
uint16_t x1212 = UINT16_MAX;
static int32_t x1226 = 1;
volatile uint32_t x1272 = 175116052U;
uint8_t x1299 = 0U;
volatile int8_t x1300 = -1;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile uint16_t x2 = UINT16_MAX;
	static int16_t x3 = -3;
	uint8_t x4 = UINT8_MAX;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x1|(x2>>(x3/x4)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint32_t x6 = 46U;
	int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MAX;
	uint32_t t1 = 7118857U;

	t1 = (x5|(x6>>(x7/x8)));

	if (t1 != 65535U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 9031797366256632557LLU;
	int8_t x14 = 0;
	static int8_t x15 = -26;
	volatile int64_t x16 = INT64_MIN;
	uint64_t t2 = 13877282LLU;

	t2 = (x13|(x14>>(x15/x16)));

	if (t2 != 9031797366256632557LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MIN;
	volatile uint16_t x22 = 908U;
	int32_t x24 = -10578557;
	static volatile int64_t t3 = 9967272545353LL;

	t3 = (x21|(x22>>(x23/x24)));

	if (t3 != -9223372036854774900LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = UINT16_MAX;
	uint8_t x26 = 64U;
	static volatile int16_t x27 = -1;
	static volatile uint16_t x28 = 18U;
	int32_t t4 = 287589;

	t4 = (x25|(x26>>(x27/x28)));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x33 = 11211U;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = -1;
	int64_t x36 = -1LL;
	volatile uint64_t t5 = 383LLU;

	t5 = (x33|(x34>>(x35/x36)));

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x41 = UINT16_MAX;
	static uint8_t x42 = UINT8_MAX;
	static int64_t x43 = INT64_MAX;
	volatile uint64_t x44 = UINT64_MAX;
	volatile int32_t t6 = -4601823;

	t6 = (x41|(x42>>(x43/x44)));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x45 = 69U;
	uint16_t x46 = 28085U;
	int16_t x47 = -2;
	uint32_t x48 = UINT32_MAX;
	int32_t t7 = 75364548;

	t7 = (x45|(x46>>(x47/x48)));

	if (t7 != 28149) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x49 = INT16_MAX;
	int8_t x50 = 7;
	int8_t x51 = -31;
	static int16_t x52 = -1;
	volatile int32_t t8 = 0;

	t8 = (x49|(x50>>(x51/x52)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x58 = 23019741011344964LLU;
	uint16_t x59 = 6064U;
	int64_t x60 = INT64_MIN;
	uint64_t t9 = 16226078649182LLU;

	t9 = (x57|(x58>>(x59/x60)));

	if (t9 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x78 = UINT64_MAX;
	static int64_t x79 = -1LL;
	static uint8_t x80 = 52U;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x77|(x78>>(x79/x80)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x94 = UINT16_MAX;
	uint64_t x95 = 1LLU;
	int64_t x96 = 339733887762836874LL;
	int64_t t11 = -1LL;

	t11 = (x93|(x94>>(x95/x96)));

	if (t11 != 65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x97 = 4U;
	volatile uint64_t x98 = 114571090LLU;
	uint16_t x99 = 32168U;

	t12 = (x97|(x98>>(x99/x100)));

	if (t12 != 114571094LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x109 = INT16_MAX;
	static int8_t x110 = 14;
	uint8_t x111 = 3U;
	volatile uint16_t x112 = UINT16_MAX;
	int32_t t13 = 607;

	t13 = (x109|(x110>>(x111/x112)));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x121 = 6U;
	int16_t x123 = 472;
	volatile uint32_t x124 = 14131366U;
	uint64_t t14 = UINT64_MAX;

	t14 = (x121|(x122>>(x123/x124)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x125 = 0;
	volatile uint64_t x128 = 1965236435216518826LLU;
	static volatile int32_t t15 = -145465;

	t15 = (x125|(x126>>(x127/x128)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x149 = 2888U;
	uint16_t x151 = 23U;
	int16_t x152 = INT16_MAX;
	volatile int32_t t16 = 19970;

	t16 = (x149|(x150>>(x151/x152)));

	if (t16 != 12285) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x153 = INT64_MIN;
	uint8_t x154 = 0U;
	static int8_t x155 = 0;
	uint16_t x156 = 119U;

	t17 = (x153|(x154>>(x155/x156)));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	int32_t x159 = 8242844;
	volatile int32_t t18 = 0;

	t18 = (x157|(x158>>(x159/x160)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x177 = INT8_MAX;
	int16_t x178 = 2;
	uint64_t x179 = 19LLU;
	int32_t x180 = -1;
	volatile int32_t t19 = -83379;

	t19 = (x177|(x178>>(x179/x180)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x182 = INT8_MAX;
	int16_t x183 = -1633;
	int64_t x184 = -5289472400250LL;
	volatile int32_t t20 = -1358;

	t20 = (x181|(x182>>(x183/x184)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x189 = INT16_MIN;
	uint32_t x190 = 11U;
	static int16_t x192 = INT16_MAX;
	uint32_t t21 = 32228440U;

	t21 = (x189|(x190>>(x191/x192)));

	if (t21 != 4294934533U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x197 = INT16_MIN;
	static int64_t x198 = INT64_MAX;
	int32_t x199 = 0;
	static uint16_t x200 = UINT16_MAX;
	int64_t t22 = 460185845914613258LL;

	t22 = (x197|(x198>>(x199/x200)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x202 = 210;
	int32_t x203 = -1;
	int64_t x204 = 4211491782537370861LL;
	volatile int32_t t23 = 980410;

	t23 = (x201|(x202>>(x203/x204)));

	if (t23 != -2147483438) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x206 = 466U;
	int32_t x207 = 590348081;
	uint64_t x208 = 61774557991558LLU;
	int32_t t24 = 6228;

	t24 = (x205|(x206>>(x207/x208)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x245 = UINT8_MAX;
	static uint8_t x246 = 3U;
	int32_t x247 = INT32_MIN;
	static int32_t x248 = INT32_MIN;

	t25 = (x245|(x246>>(x247/x248)));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x261 = INT16_MIN;
	int16_t x263 = 285;
	static uint64_t t26 = 0LLU;

	t26 = (x261|(x262>>(x263/x264)));

	if (t26 != 18446744073709519099LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x281 = UINT32_MAX;
	int32_t x282 = 362295;
	static uint16_t x283 = UINT16_MAX;
	static int64_t x284 = -475028848LL;

	t27 = (x281|(x282>>(x283/x284)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x301 = 9907524087792967LLU;
	volatile int8_t x303 = INT8_MAX;
	volatile int8_t x304 = INT8_MIN;
	static uint64_t t28 = 4383154481LLU;

	t28 = (x301|(x302>>(x303/x304)));

	if (t28 != 9907527479197695LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x309 = 12;
	static volatile uint16_t x310 = 2U;
	static int64_t x311 = -12LL;
	static int16_t x312 = -1;
	volatile int32_t t29 = 1011;

	t29 = (x309|(x310>>(x311/x312)));

	if (t29 != 12) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x334 = 3U;
	volatile uint8_t x335 = UINT8_MAX;
	uint64_t x336 = 552936911LLU;
	volatile int32_t t30 = -302544;

	t30 = (x333|(x334>>(x335/x336)));

	if (t30 != -32765) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x347 = 193U;
	int32_t x348 = INT32_MIN;

	t31 = (x345|(x346>>(x347/x348)));

	if (t31 != 175) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x353 = -1;
	uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 73119777635241400LLU;
	volatile int32_t t32 = 4144358;

	t32 = (x353|(x354>>(x355/x356)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x358 = 34LL;
	static int8_t x359 = INT8_MAX;
	int16_t x360 = INT16_MIN;
	volatile int64_t t33 = 3993526880814132387LL;

	t33 = (x357|(x358>>(x359/x360)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x389 = 30U;
	static volatile uint8_t x390 = 16U;
	volatile int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MIN;
	volatile uint32_t t34 = 47155U;

	t34 = (x389|(x390>>(x391/x392)));

	if (t34 != 30U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x393 = INT8_MIN;
	static int64_t x394 = INT64_MAX;
	int8_t x395 = -1;
	int64_t x396 = INT64_MIN;
	volatile int64_t t35 = 8332320357LL;

	t35 = (x393|(x394>>(x395/x396)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x407 = -7171320527861LL;

	t36 = (x405|(x406>>(x407/x408)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x410 = 29050U;
	int32_t x411 = INT32_MIN;
	int64_t x412 = INT64_MAX;

	t37 = (x409|(x410>>(x411/x412)));

	if (t37 != 5373435U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x425 = INT8_MIN;
	int16_t x426 = 7482;
	int32_t x427 = -46;

	t38 = (x425|(x426>>(x427/x428)));

	if (t38 != -70) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x429 = INT8_MIN;
	uint64_t x430 = UINT64_MAX;
	int32_t x431 = -93322;
	int32_t x432 = -501682;
	static volatile uint64_t t39 = UINT64_MAX;

	t39 = (x429|(x430>>(x431/x432)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x433 = 2349224994205LLU;
	uint8_t x434 = 14U;
	static int64_t x435 = -1LL;
	volatile uint16_t x436 = UINT16_MAX;

	t40 = (x433|(x434>>(x435/x436)));

	if (t40 != 2349224994207LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x441 = 77U;
	uint32_t x442 = 7U;
	uint64_t x443 = 8033717954LLU;
	int64_t x444 = INT64_MIN;
	uint32_t t41 = 893U;

	t41 = (x441|(x442>>(x443/x444)));

	if (t41 != 79U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x453 = 9;
	int64_t x454 = 2LL;
	static int8_t x455 = INT8_MIN;
	int64_t x456 = INT64_MAX;
	volatile int64_t t42 = -1LL;

	t42 = (x453|(x454>>(x455/x456)));

	if (t42 != 11LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x465 = -4;
	int16_t x466 = 1312;
	int64_t x468 = INT64_MIN;
	int32_t t43 = -91482503;

	t43 = (x465|(x466>>(x467/x468)));

	if (t43 != -4) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x469 = INT16_MAX;
	static volatile int32_t x470 = INT32_MAX;
	uint16_t x471 = UINT16_MAX;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x469|(x470>>(x471/x472)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x493 = 3U;
	volatile uint32_t x494 = UINT32_MAX;
	uint16_t x495 = 1934U;
	int32_t x496 = INT32_MIN;
	static volatile uint32_t t45 = UINT32_MAX;

	t45 = (x493|(x494>>(x495/x496)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x513 = UINT64_MAX;
	volatile int8_t x515 = INT8_MIN;
	uint16_t x516 = UINT16_MAX;
	uint64_t t46 = UINT64_MAX;

	t46 = (x513|(x514>>(x515/x516)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x521 = UINT64_MAX;
	int64_t x522 = 19LL;
	uint64_t x523 = 5454048654188877LLU;
	int16_t x524 = -3957;
	uint64_t t47 = UINT64_MAX;

	t47 = (x521|(x522>>(x523/x524)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x577 = INT32_MIN;
	uint8_t x579 = 65U;
	int64_t x580 = -413756LL;
	int64_t t48 = -3249255885LL;

	t48 = (x577|(x578>>(x579/x580)));

	if (t48 != -2147483645LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x605 = -6;
	static uint32_t x606 = 46815U;
	volatile uint16_t x607 = UINT16_MAX;
	static volatile int32_t x608 = -423228;
	volatile uint32_t t49 = UINT32_MAX;

	t49 = (x605|(x606>>(x607/x608)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x609 = -63;
	uint64_t x610 = UINT64_MAX;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x609|(x610>>(x611/x612)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x613 = INT8_MAX;
	uint8_t x614 = 15U;
	uint64_t x615 = 369584LLU;
	int32_t x616 = 42182929;
	int32_t t51 = 5602;

	t51 = (x613|(x614>>(x615/x616)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x637 = 0;
	uint8_t x639 = 88U;
	int16_t x640 = INT16_MIN;

	t52 = (x637|(x638>>(x639/x640)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x642 = 2013U;
	int16_t x643 = -58;
	int64_t x644 = -7539969LL;
	volatile int32_t t53 = -19826668;

	t53 = (x641|(x642>>(x643/x644)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x646 = 740689447LLU;
	volatile uint32_t x647 = 27U;
	uint8_t x648 = 7U;
	uint64_t t54 = 517025079334583740LLU;

	t54 = (x645|(x646>>(x647/x648)));

	if (t54 != 92586239LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x661 = INT32_MIN;
	int8_t x662 = INT8_MAX;
	static uint64_t x663 = 1574896LLU;
	int32_t x664 = INT32_MIN;
	volatile int32_t t55 = -263217580;

	t55 = (x661|(x662>>(x663/x664)));

	if (t55 != -2147483521) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x670 = UINT16_MAX;
	int16_t x671 = -1;
	int64_t x672 = -1LL;

	t56 = (x669|(x670>>(x671/x672)));

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x681 = 9880624;
	static int16_t x682 = INT16_MAX;
	volatile int32_t x684 = INT32_MAX;
	volatile int32_t t57 = -42377783;

	t57 = (x681|(x682>>(x683/x684)));

	if (t57 != 9895935) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x734 = INT16_MAX;
	int64_t x735 = -1LL;
	volatile int64_t x736 = 576360737175LL;
	volatile int32_t t58 = -2539074;

	t58 = (x733|(x734>>(x735/x736)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x758 = 19700;
	int16_t x759 = -1;
	static uint8_t x760 = 2U;
	int32_t t59 = -3;

	t59 = (x757|(x758>>(x759/x760)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x781 = 0;
	static volatile uint8_t x782 = 0U;
	uint64_t x783 = UINT64_MAX;
	static uint64_t x784 = UINT64_MAX;
	volatile int32_t t60 = 33182974;

	t60 = (x781|(x782>>(x783/x784)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x790 = 95589U;
	int16_t x791 = -1;
	volatile int32_t x792 = -46370;
	uint32_t t61 = 12858843U;

	t61 = (x789|(x790>>(x791/x792)));

	if (t61 != 95589U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x793 = UINT16_MAX;
	uint16_t x794 = 1U;
	volatile int8_t x795 = INT8_MAX;

	t62 = (x793|(x794>>(x795/x796)));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x809 = INT16_MIN;

	t63 = (x809|(x810>>(x811/x812)));

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x813 = 20U;
	int8_t x815 = 12;
	uint16_t x816 = 69U;
	int32_t t64 = 506614;

	t64 = (x813|(x814>>(x815/x816)));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x829 = 27U;
	static int64_t x830 = 17LL;
	int16_t x831 = INT16_MAX;
	int64_t x832 = INT64_MAX;

	t65 = (x829|(x830>>(x831/x832)));

	if (t65 != 27LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x839 = 24U;
	volatile int32_t x840 = INT32_MIN;
	volatile int32_t t66 = -20793;

	t66 = (x837|(x838>>(x839/x840)));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x865 = INT16_MIN;
	uint16_t x867 = 56U;
	volatile int64_t x868 = INT64_MIN;
	static volatile int32_t t67 = -865901534;

	t67 = (x865|(x866>>(x867/x868)));

	if (t67 != -32764) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x869 = UINT16_MAX;
	int32_t x870 = INT32_MAX;
	int8_t x871 = INT8_MIN;
	int32_t t68 = INT32_MAX;

	t68 = (x869|(x870>>(x871/x872)));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x897 = 180;
	int32_t x898 = INT32_MAX;
	uint16_t x899 = 2538U;
	uint64_t x900 = UINT64_MAX;
	static volatile int32_t t69 = INT32_MAX;

	t69 = (x897|(x898>>(x899/x900)));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x913 = 5U;
	int16_t x914 = 3664;
	int16_t x915 = -7024;
	int32_t x916 = INT32_MIN;
	int32_t t70 = 519;

	t70 = (x913|(x914>>(x915/x916)));

	if (t70 != 3669) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x929 = INT16_MAX;
	volatile int8_t x930 = 1;
	uint8_t x931 = 3U;
	static uint16_t x932 = 789U;
	volatile int32_t t71 = 7;

	t71 = (x929|(x930>>(x931/x932)));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x941 = INT16_MAX;
	int8_t x942 = 8;
	uint32_t x943 = UINT32_MAX;
	int8_t x944 = -1;
	int32_t t72 = 59811;

	t72 = (x941|(x942>>(x943/x944)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x961 = UINT8_MAX;
	int16_t x963 = 26;
	volatile uint32_t t73 = 970495985U;

	t73 = (x961|(x962>>(x963/x964)));

	if (t73 != 1422776831U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x965 = INT32_MIN;
	volatile int8_t x966 = 40;
	volatile int8_t x968 = INT8_MAX;

	t74 = (x965|(x966>>(x967/x968)));

	if (t74 != -2147483608) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x973 = INT16_MAX;
	volatile int32_t x974 = 404;
	uint64_t x975 = UINT64_MAX;
	int32_t t75 = -1443;

	t75 = (x973|(x974>>(x975/x976)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x989 = INT16_MAX;
	volatile uint32_t x990 = 1168910273U;
	int8_t x991 = INT8_MAX;
	int32_t x992 = INT32_MAX;
	static volatile uint32_t t76 = 7U;

	t76 = (x989|(x990>>(x991/x992)));

	if (t76 != 1168932863U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x997 = INT32_MIN;
	uint8_t x998 = 10U;
	volatile uint8_t x999 = UINT8_MAX;
	static uint16_t x1000 = UINT16_MAX;
	volatile int32_t t77 = -39529421;

	t77 = (x997|(x998>>(x999/x1000)));

	if (t77 != -2147483638) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x1009 = 118LLU;
	uint8_t x1010 = UINT8_MAX;
	uint16_t x1011 = UINT16_MAX;
	int16_t x1012 = INT16_MAX;
	volatile uint64_t t78 = 50339401876582553LLU;

	t78 = (x1009|(x1010>>(x1011/x1012)));

	if (t78 != 127LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x1017 = INT64_MIN;
	int64_t x1018 = INT64_MAX;
	uint16_t x1019 = UINT16_MAX;
	static int64_t x1020 = INT64_MIN;
	volatile int64_t t79 = -5079231LL;

	t79 = (x1017|(x1018>>(x1019/x1020)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x1033 = UINT8_MAX;
	volatile int32_t x1034 = 610149;
	int8_t x1035 = -1;
	volatile int32_t x1036 = -1;
	int32_t t80 = -20898;

	t80 = (x1033|(x1034>>(x1035/x1036)));

	if (t80 != 305151) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x1037 = INT16_MAX;
	volatile int64_t x1038 = 3716LL;
	static uint32_t x1039 = 55U;
	int64_t x1040 = INT64_MAX;
	int64_t t81 = -6066LL;

	t81 = (x1037|(x1038>>(x1039/x1040)));

	if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1041 = 5;
	static int64_t x1042 = INT64_MAX;
	int64_t x1043 = -1LL;
	static uint32_t x1044 = 50875803U;

	t82 = (x1041|(x1042>>(x1043/x1044)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1045 = INT16_MIN;
	volatile uint64_t x1046 = 1959841LLU;
	uint64_t x1048 = 3636LLU;
	uint64_t t83 = 25078780658887LLU;

	t83 = (x1045|(x1046>>(x1047/x1048)));

	if (t83 != 18446744073709522675LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x1057 = -1;
	static uint64_t x1058 = 7931677565824LLU;
	volatile int64_t x1060 = INT64_MIN;
	uint64_t t84 = UINT64_MAX;

	t84 = (x1057|(x1058>>(x1059/x1060)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x1082 = INT64_MAX;
	static int32_t x1083 = -58859;
	static int16_t x1084 = INT16_MIN;
	int64_t t85 = 53627232LL;

	t85 = (x1081|(x1082>>(x1083/x1084)));

	if (t85 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1085 = INT32_MIN;
	uint16_t x1086 = UINT16_MAX;
	int8_t x1087 = INT8_MIN;

	t86 = (x1085|(x1086>>(x1087/x1088)));

	if (t86 != -2147418113) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1130 = 113U;
	int32_t x1132 = INT32_MIN;

	t87 = (x1129|(x1130>>(x1131/x1132)));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1137 = INT8_MIN;
	volatile uint64_t x1138 = 0LLU;
	uint64_t t88 = 232LLU;

	t88 = (x1137|(x1138>>(x1139/x1140)));

	if (t88 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x1153 = -8319724585LL;
	int32_t x1156 = INT32_MAX;
	volatile int64_t t89 = 230529LL;

	t89 = (x1153|(x1154>>(x1155/x1156)));

	if (t89 != -8319724545LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x1209 = 0U;
	int8_t x1210 = 0;
	volatile int16_t x1211 = -1;
	static uint32_t t90 = 7207885U;

	t90 = (x1209|(x1210>>(x1211/x1212)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x1221 = UINT64_MAX;
	int16_t x1222 = INT16_MAX;
	static int32_t x1223 = INT32_MIN;
	volatile int64_t x1224 = INT64_MAX;
	uint64_t t91 = UINT64_MAX;

	t91 = (x1221|(x1222>>(x1223/x1224)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x1225 = 117U;
	static uint64_t x1227 = UINT64_MAX;
	static int8_t x1228 = -1;
	static uint32_t t92 = 5646U;

	t92 = (x1225|(x1226>>(x1227/x1228)));

	if (t92 != 117U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x1233 = 921U;
	int8_t x1234 = INT8_MAX;
	int16_t x1235 = -1;
	int32_t x1236 = 1045;
	int32_t t93 = -160;

	t93 = (x1233|(x1234>>(x1235/x1236)));

	if (t93 != 1023) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x1237 = -1LL;
	static volatile uint8_t x1238 = 55U;
	int32_t x1239 = 2551;
	uint16_t x1240 = 19698U;
	volatile int64_t t94 = 2173402084275292LL;

	t94 = (x1237|(x1238>>(x1239/x1240)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1241 = UINT32_MAX;
	volatile uint16_t x1242 = UINT16_MAX;
	volatile int8_t x1243 = -1;
	int64_t x1244 = 1346124795903782394LL;
	uint32_t t95 = UINT32_MAX;

	t95 = (x1241|(x1242>>(x1243/x1244)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x1265 = -1;
	int64_t x1266 = INT64_MAX;
	static int8_t x1267 = 13;
	volatile int32_t x1268 = -2702;
	int64_t t96 = 15530105995436LL;

	t96 = (x1265|(x1266>>(x1267/x1268)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1269 = UINT32_MAX;
	int32_t x1270 = 20717;
	static uint16_t x1271 = 319U;
	static uint32_t t97 = UINT32_MAX;

	t97 = (x1269|(x1270>>(x1271/x1272)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1297 = -17716729069263LL;
	uint64_t x1298 = 35LLU;
	static volatile uint64_t t98 = 2041LLU;

	t98 = (x1297|(x1298>>(x1299/x1300)));

	if (t98 != 18446726356980482355LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x1309 = 0;
	int16_t x1310 = INT16_MAX;
	uint64_t x1311 = 138079635892101269LLU;
	static int16_t x1312 = INT16_MIN;
	int32_t t99 = -198;

	t99 = (x1309|(x1310>>(x1311/x1312)));

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

