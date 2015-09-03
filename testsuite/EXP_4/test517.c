#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 1;
static volatile int32_t x4 = INT32_MIN;
int32_t t0 = -675564623;
uint32_t x7 = 2U;
int16_t x14 = INT16_MIN;
volatile int32_t t4 = 47756;
static volatile int32_t t5 = 5146;
int32_t x31 = INT32_MIN;
int32_t x34 = INT32_MIN;
volatile int32_t t8 = -27087;
static int8_t x40 = INT8_MIN;
int64_t x55 = INT64_MAX;
uint64_t x63 = 17494303933828634LLU;
int16_t x70 = -5;
static int32_t x71 = INT32_MAX;
int32_t x76 = -49060;
static int16_t x77 = INT16_MAX;
volatile uint16_t x78 = 587U;
volatile int32_t t18 = 51097228;
uint64_t x81 = 40338164LLU;
uint8_t x86 = 48U;
int8_t x88 = -1;
int64_t x91 = INT64_MIN;
volatile uint16_t x94 = UINT16_MAX;
int16_t x97 = -185;
int8_t x98 = INT8_MIN;
volatile int32_t t24 = 0;
volatile int32_t x107 = 2162;
int64_t x110 = INT64_MIN;
volatile uint32_t x112 = 282U;
uint8_t x116 = 50U;
volatile int32_t t27 = 417026967;
volatile int32_t x121 = 459112;
int32_t t29 = -4101200;
static int16_t x128 = INT16_MAX;
int32_t t30 = 142584;
int16_t x129 = -1;
uint32_t x132 = 7U;
volatile int32_t t31 = -1;
uint64_t x135 = 1795094651LLU;
uint32_t x141 = 2659578U;
int8_t x142 = INT8_MIN;
uint16_t x149 = UINT16_MAX;
int8_t x152 = INT8_MIN;
int8_t x158 = INT8_MIN;
static int32_t t39 = 833050;
static uint64_t x177 = 22147792083LLU;
int32_t x183 = INT32_MIN;
int32_t x191 = -1;
uint16_t x193 = 27U;
volatile int16_t x196 = INT16_MAX;
int64_t x200 = INT64_MAX;
volatile int64_t x205 = INT64_MAX;
int32_t t50 = 15601;
static int16_t x215 = -4;
int8_t x216 = INT8_MIN;
volatile int8_t x217 = INT8_MAX;
static int64_t x219 = -1LL;
volatile uint8_t x222 = 34U;
volatile int8_t x223 = 21;
int8_t x226 = -1;
uint32_t x227 = UINT32_MAX;
int8_t x230 = 1;
static int32_t x243 = INT32_MIN;
int16_t x247 = -1;
int32_t x248 = INT32_MAX;
uint64_t x250 = 38615LLU;
volatile int8_t x251 = -1;
int16_t x256 = -1;
uint8_t x280 = 6U;
int16_t x290 = INT16_MIN;
uint16_t x293 = 1U;
volatile int32_t t69 = -15;
int64_t x299 = -126601442456LL;
int32_t x308 = -1;
int32_t x310 = -532;
volatile int32_t x320 = INT32_MAX;
volatile uint16_t x327 = 0U;
uint16_t x329 = UINT16_MAX;
int64_t x330 = INT64_MAX;
uint64_t x349 = 712554184255348417LLU;
static int32_t x355 = -1514692;
static volatile int32_t t84 = 76;
static volatile uint64_t x359 = 35LLU;
volatile int8_t x367 = INT8_MAX;
static int32_t t90 = -2608912;
volatile int16_t x388 = INT16_MAX;
static int32_t t93 = -208830;
static int16_t x393 = INT16_MIN;
static uint32_t x396 = 527788U;
uint8_t x404 = 8U;
int32_t t96 = -37456;
volatile int32_t x406 = 638;
volatile int32_t t97 = -124233;
static int16_t x409 = INT16_MIN;
volatile int16_t x410 = INT16_MIN;
int32_t t98 = 747941480;
volatile int32_t t99 = 10;


void f0(void) {
	volatile int32_t x2 = INT32_MIN;
	int16_t x3 = -16;

	t0 = (x1<=(x2+(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int64_t x6 = INT64_MIN;
	uint8_t x8 = 65U;
	int32_t t1 = 0;

	t1 = (x5<=(x6+(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -21808209LL;
	volatile int64_t x10 = -1LL;
	int16_t x11 = INT16_MIN;
	int8_t x12 = -1;
	volatile int32_t t2 = -133219;

	t2 = (x9<=(x10+(x11/x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	static uint64_t x15 = 770675601LLU;
	int64_t x16 = INT64_MAX;
	volatile int32_t t3 = -341118;

	t3 = (x13<=(x14+(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 258152433;
	static int64_t x18 = 27228289920LL;
	static int32_t x19 = INT32_MIN;
	int64_t x20 = 82562LL;

	t4 = (x17<=(x18+(x19/x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static volatile int8_t x22 = 8;
	uint8_t x23 = UINT8_MAX;
	int64_t x24 = -500443070LL;

	t5 = (x21<=(x22+(x23/x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x26 = 0U;
	static volatile int8_t x27 = INT8_MAX;
	volatile int16_t x28 = -1;
	static int32_t t6 = 32893896;

	t6 = (x25<=(x26+(x27/x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 0U;
	static uint8_t x30 = 2U;
	volatile uint32_t x32 = UINT32_MAX;
	static volatile int32_t t7 = 3709;

	t7 = (x29<=(x30+(x31/x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int8_t x35 = -1;
	volatile int8_t x36 = INT8_MAX;

	t8 = (x33<=(x34+(x35/x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = UINT8_MAX;
	uint64_t x38 = 1026755642870715148LLU;
	uint8_t x39 = 13U;
	int32_t t9 = -2087;

	t9 = (x37<=(x38+(x39/x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = UINT8_MAX;
	volatile int8_t x42 = -1;
	int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 12826;

	t10 = (x41<=(x42+(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int8_t x46 = 0;
	int16_t x47 = 45;
	static uint64_t x48 = UINT64_MAX;
	int32_t t11 = -1782340;

	t11 = (x45<=(x46+(x47/x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 24951296572784LLU;
	uint16_t x50 = 32U;
	int64_t x51 = INT64_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 15949;

	t12 = (x49<=(x50+(x51/x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int16_t x54 = INT16_MIN;
	uint32_t x56 = 123636U;
	volatile int32_t t13 = -751026;

	t13 = (x53<=(x54+(x55/x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 0U;
	static volatile int16_t x62 = INT16_MIN;
	static uint32_t x64 = 27U;
	static volatile int32_t t14 = 452676;

	t14 = (x61<=(x62+(x63/x64)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = INT8_MIN;
	uint16_t x66 = 2U;
	uint8_t x67 = 0U;
	int8_t x68 = INT8_MIN;
	int32_t t15 = 18;

	t15 = (x65<=(x66+(x67/x68)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = 0LL;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t16 = 252;

	t16 = (x69<=(x70+(x71/x72)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = -1;
	int16_t x74 = -1;
	int64_t x75 = -206072LL;
	int32_t t17 = -61041;

	t17 = (x73<=(x74+(x75/x76)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x79 = INT64_MAX;
	int64_t x80 = INT64_MAX;

	t18 = (x77<=(x78+(x79/x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = -329;
	volatile int16_t x83 = INT16_MAX;
	static uint64_t x84 = UINT64_MAX;
	int32_t t19 = 1775;

	t19 = (x81<=(x82+(x83/x84)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 9U;
	uint64_t x87 = 74235841LLU;
	volatile int32_t t20 = -442;

	t20 = (x85<=(x86+(x87/x88)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = INT32_MIN;
	uint8_t x90 = 7U;
	int64_t x92 = INT64_MIN;
	volatile int32_t t21 = -16187810;

	t21 = (x89<=(x90+(x91/x92)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MAX;
	int64_t x95 = -1LL;
	static int64_t x96 = 2153644633LL;
	int32_t t22 = -470;

	t22 = (x93<=(x94+(x95/x96)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x99 = 0U;
	uint16_t x100 = UINT16_MAX;
	static volatile int32_t t23 = -1678;

	t23 = (x97<=(x98+(x99/x100)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = 23886939301745LL;
	volatile int16_t x102 = -271;
	int16_t x103 = INT16_MIN;
	uint64_t x104 = 33752633719434831LLU;

	t24 = (x101<=(x102+(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = UINT16_MAX;
	int32_t x106 = 18972;
	uint64_t x108 = 119118161568763LLU;
	volatile int32_t t25 = -1058468426;

	t25 = (x105<=(x106+(x107/x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	static int16_t x111 = -1;
	volatile int32_t t26 = -115635;

	t26 = (x109<=(x110+(x111/x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x113 = INT16_MAX;
	uint32_t x114 = UINT32_MAX;
	static volatile uint8_t x115 = 59U;

	t27 = (x113<=(x114+(x115/x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	int32_t x118 = -1;
	int64_t x119 = 2274546729LL;
	int16_t x120 = INT16_MAX;
	volatile int32_t t28 = -64754911;

	t28 = (x117<=(x118+(x119/x120)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x122 = INT16_MIN;
	int32_t x123 = -1;
	int8_t x124 = 3;

	t29 = (x121<=(x122+(x123/x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 53749U;
	volatile uint64_t x126 = UINT64_MAX;
	static int8_t x127 = INT8_MIN;

	t30 = (x125<=(x126+(x127/x128)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x130 = -1LL;
	int16_t x131 = -1;

	t31 = (x129<=(x130+(x131/x132)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MIN;
	uint32_t x136 = 498U;
	int32_t t32 = 18714;

	t32 = (x133<=(x134+(x135/x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = -247195610344321933LL;
	static uint8_t x138 = 3U;
	uint16_t x139 = 238U;
	int16_t x140 = INT16_MIN;
	int32_t t33 = -115297;

	t33 = (x137<=(x138+(x139/x140)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x143 = 210562284LLU;
	int64_t x144 = INT64_MIN;
	int32_t t34 = 124533652;

	t34 = (x141<=(x142+(x143/x144)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x145 = INT8_MIN;
	static int64_t x146 = -3423LL;
	int16_t x147 = -10894;
	uint64_t x148 = 31221066LLU;
	static volatile int32_t t35 = -37351;

	t35 = (x145<=(x146+(x147/x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x150 = INT64_MIN;
	int32_t x151 = -5;
	int32_t t36 = 0;

	t36 = (x149<=(x150+(x151/x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x153 = INT16_MIN;
	uint32_t x154 = 129554U;
	static int16_t x155 = -1;
	static uint8_t x156 = 26U;
	int32_t t37 = -58562996;

	t37 = (x153<=(x154+(x155/x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 107U;
	volatile int8_t x159 = 2;
	uint16_t x160 = 355U;
	int32_t t38 = 0;

	t38 = (x157<=(x158+(x159/x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = 3;
	static volatile uint64_t x162 = 973117LLU;
	int8_t x163 = 22;
	static volatile int32_t x164 = 5503;

	t39 = (x161<=(x162+(x163/x164)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = INT8_MIN;
	int8_t x166 = -1;
	static int8_t x167 = -1;
	static volatile int64_t x168 = 8006961002136695LL;
	static int32_t t40 = 993;

	t40 = (x165<=(x166+(x167/x168)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x173 = INT8_MIN;
	uint16_t x174 = 5U;
	static int64_t x175 = -418538LL;
	uint64_t x176 = 1303659LLU;
	static int32_t t41 = 1;

	t41 = (x173<=(x174+(x175/x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x178 = INT64_MAX;
	volatile int8_t x179 = -1;
	uint16_t x180 = 63U;
	int32_t t42 = 13464101;

	t42 = (x177<=(x178+(x179/x180)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = -1;
	uint32_t x182 = 228650U;
	volatile uint8_t x184 = 73U;
	volatile int32_t t43 = -301911825;

	t43 = (x181<=(x182+(x183/x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = 1050413961814733883LL;
	int16_t x186 = INT16_MAX;
	uint8_t x187 = UINT8_MAX;
	int64_t x188 = 80910LL;
	int32_t t44 = -5867539;

	t44 = (x185<=(x186+(x187/x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x189 = INT32_MAX;
	uint64_t x190 = UINT64_MAX;
	int16_t x192 = -2068;
	static int32_t t45 = 1756;

	t45 = (x189<=(x190+(x191/x192)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x194 = INT64_MIN;
	int16_t x195 = 85;
	int32_t t46 = 26;

	t46 = (x193<=(x194+(x195/x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = 28802311;
	volatile uint16_t x198 = UINT16_MAX;
	uint8_t x199 = 1U;
	volatile int32_t t47 = 13521765;

	t47 = (x197<=(x198+(x199/x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x201 = -6562843010LL;
	uint8_t x202 = 3U;
	uint8_t x203 = 3U;
	static uint32_t x204 = UINT32_MAX;
	volatile int32_t t48 = -51428009;

	t48 = (x201<=(x202+(x203/x204)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x206 = 42;
	int64_t x207 = INT64_MIN;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t49 = -5401769;

	t49 = (x205<=(x206+(x207/x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x209 = INT8_MAX;
	volatile int64_t x210 = INT64_MAX;
	volatile uint8_t x211 = UINT8_MAX;
	int16_t x212 = 15266;

	t50 = (x209<=(x210+(x211/x212)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MIN;
	volatile uint32_t x214 = 248U;
	volatile int32_t t51 = 32;

	t51 = (x213<=(x214+(x215/x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x218 = INT16_MIN;
	volatile int32_t x220 = INT32_MIN;
	volatile int32_t t52 = 0;

	t52 = (x217<=(x218+(x219/x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = UINT32_MAX;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t53 = 1;

	t53 = (x221<=(x222+(x223/x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MIN;
	uint32_t x228 = 100U;
	int32_t t54 = -1823360;

	t54 = (x225<=(x226+(x227/x228)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = UINT32_MAX;
	int64_t x231 = INT64_MIN;
	uint8_t x232 = UINT8_MAX;
	static volatile int32_t t55 = 1;

	t55 = (x229<=(x230+(x231/x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x241 = -1;
	static int8_t x242 = -1;
	int32_t x244 = INT32_MAX;
	int32_t t56 = -7730487;

	t56 = (x241<=(x242+(x243/x244)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = 7047;
	int64_t x246 = INT64_MAX;
	int32_t t57 = 232;

	t57 = (x245<=(x246+(x247/x248)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x249 = 11;
	static uint64_t x252 = 101986077LLU;
	volatile int32_t t58 = 2157916;

	t58 = (x249<=(x250+(x251/x252)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = 21384U;
	int32_t x254 = INT32_MIN;
	int64_t x255 = -68957029248860LL;
	static int32_t t59 = -109988917;

	t59 = (x253<=(x254+(x255/x256)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = 1363;
	uint16_t x258 = 70U;
	volatile int64_t x259 = -1LL;
	volatile int16_t x260 = INT16_MAX;
	volatile int32_t t60 = -6772;

	t60 = (x257<=(x258+(x259/x260)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = INT8_MIN;
	int8_t x262 = INT8_MAX;
	int8_t x263 = INT8_MAX;
	static uint32_t x264 = 2596U;
	volatile int32_t t61 = 15224;

	t61 = (x261<=(x262+(x263/x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x265 = INT64_MIN;
	int8_t x266 = INT8_MIN;
	int16_t x267 = -1;
	static uint8_t x268 = 66U;
	volatile int32_t t62 = -1;

	t62 = (x265<=(x266+(x267/x268)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x269 = -1;
	uint16_t x270 = UINT16_MAX;
	uint32_t x271 = 2980877U;
	int8_t x272 = INT8_MIN;
	int32_t t63 = 5;

	t63 = (x269<=(x270+(x271/x272)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x273 = 3;
	static int16_t x274 = INT16_MIN;
	volatile uint64_t x275 = 145LLU;
	static uint64_t x276 = UINT64_MAX;
	volatile int32_t t64 = -5971;

	t64 = (x273<=(x274+(x275/x276)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x277 = 1821086LLU;
	int32_t x278 = -40448281;
	uint8_t x279 = UINT8_MAX;
	int32_t t65 = -5502;

	t65 = (x277<=(x278+(x279/x280)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x281 = 4204U;
	int64_t x282 = 4192675792LL;
	volatile int32_t x283 = -1;
	volatile uint16_t x284 = 5U;
	volatile int32_t t66 = -92292;

	t66 = (x281<=(x282+(x283/x284)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = INT16_MAX;
	int64_t x286 = INT64_MIN;
	int8_t x287 = INT8_MIN;
	uint16_t x288 = UINT16_MAX;
	static volatile int32_t t67 = 6530;

	t67 = (x285<=(x286+(x287/x288)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x289 = 253618LLU;
	uint32_t x291 = 12337710U;
	static volatile int8_t x292 = INT8_MIN;
	int32_t t68 = -67000846;

	t68 = (x289<=(x290+(x291/x292)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x294 = 22955415306LL;
	uint64_t x295 = 3636902827LLU;
	int8_t x296 = INT8_MAX;

	t69 = (x293<=(x294+(x295/x296)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = 990LL;
	uint32_t x298 = 51U;
	int8_t x300 = 1;
	volatile int32_t t70 = 432;

	t70 = (x297<=(x298+(x299/x300)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x301 = 50U;
	volatile int8_t x302 = -1;
	static uint16_t x303 = 62U;
	volatile int32_t x304 = 2830;
	int32_t t71 = -71183297;

	t71 = (x301<=(x302+(x303/x304)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = UINT64_MAX;
	int16_t x306 = INT16_MAX;
	int64_t x307 = 0LL;
	int32_t t72 = 779145159;

	t72 = (x305<=(x306+(x307/x308)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = -29;
	static volatile int32_t x311 = -16198;
	volatile int16_t x312 = -795;
	int32_t t73 = 3;

	t73 = (x309<=(x310+(x311/x312)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = -12;
	static uint32_t x314 = UINT32_MAX;
	int8_t x315 = 1;
	uint8_t x316 = 10U;
	int32_t t74 = -101;

	t74 = (x313<=(x314+(x315/x316)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x317 = UINT8_MAX;
	volatile uint16_t x318 = 30332U;
	uint32_t x319 = UINT32_MAX;
	int32_t t75 = 0;

	t75 = (x317<=(x318+(x319/x320)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = INT32_MIN;
	volatile int8_t x322 = INT8_MIN;
	int8_t x323 = -1;
	int8_t x324 = INT8_MIN;
	int32_t t76 = -304;

	t76 = (x321<=(x322+(x323/x324)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x325 = UINT16_MAX;
	int16_t x326 = 42;
	volatile int32_t x328 = -124380;
	volatile int32_t t77 = 512138906;

	t77 = (x325<=(x326+(x327/x328)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x331 = -1;
	volatile int8_t x332 = 1;
	volatile int32_t t78 = 4680732;

	t78 = (x329<=(x330+(x331/x332)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MIN;
	volatile uint64_t x335 = 2206917LLU;
	int8_t x336 = -26;
	volatile int32_t t79 = 0;

	t79 = (x333<=(x334+(x335/x336)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -171863784;
	static int32_t x338 = 16;
	static int64_t x339 = 1806119765519541287LL;
	int32_t x340 = INT32_MAX;
	int32_t t80 = 0;

	t80 = (x337<=(x338+(x339/x340)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = UINT64_MAX;
	int32_t x342 = -1;
	static volatile int8_t x343 = INT8_MAX;
	int16_t x344 = INT16_MIN;
	int32_t t81 = -23685;

	t81 = (x341<=(x342+(x343/x344)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x345 = 1;
	volatile int32_t x346 = INT32_MAX;
	int64_t x347 = INT64_MAX;
	int16_t x348 = -1;
	int32_t t82 = 4544;

	t82 = (x345<=(x346+(x347/x348)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x350 = -1;
	uint32_t x351 = 2U;
	static int8_t x352 = -1;
	int32_t t83 = 1836;

	t83 = (x349<=(x350+(x351/x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x353 = INT16_MAX;
	int8_t x354 = 3;
	int16_t x356 = 9;

	t84 = (x353<=(x354+(x355/x356)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = -9658;
	uint16_t x360 = 14491U;
	static int32_t t85 = -13;

	t85 = (x357<=(x358+(x359/x360)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x361 = INT64_MAX;
	uint8_t x362 = 15U;
	static int16_t x363 = -24;
	uint32_t x364 = UINT32_MAX;
	int32_t t86 = 122682222;

	t86 = (x361<=(x362+(x363/x364)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x365 = -1;
	int32_t x366 = 0;
	uint16_t x368 = UINT16_MAX;
	static int32_t t87 = -22849150;

	t87 = (x365<=(x366+(x367/x368)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = 0;
	volatile int16_t x370 = -1;
	static int8_t x371 = INT8_MIN;
	int32_t x372 = -387672;
	volatile int32_t t88 = 170858693;

	t88 = (x369<=(x370+(x371/x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x373 = 2U;
	volatile int64_t x374 = -1LL;
	static volatile int32_t x375 = -1;
	static int16_t x376 = 16139;
	static volatile int32_t t89 = -76840;

	t89 = (x373<=(x374+(x375/x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x377 = 106562;
	int8_t x378 = INT8_MAX;
	uint64_t x379 = 30713681LLU;
	int64_t x380 = INT64_MIN;

	t90 = (x377<=(x378+(x379/x380)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x381 = INT8_MAX;
	static int64_t x382 = 1LL;
	int64_t x383 = 144139203415017LL;
	volatile uint32_t x384 = 47999563U;
	int32_t t91 = -1;

	t91 = (x381<=(x382+(x383/x384)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = -103;
	uint8_t x386 = 53U;
	uint64_t x387 = 17574074611952LLU;
	int32_t t92 = -620032159;

	t92 = (x385<=(x386+(x387/x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x389 = INT8_MIN;
	static uint64_t x390 = 257337501457431304LLU;
	int8_t x391 = 31;
	static int16_t x392 = INT16_MIN;

	t93 = (x389<=(x390+(x391/x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x394 = 1;
	volatile int8_t x395 = INT8_MAX;
	static volatile int32_t t94 = -846;

	t94 = (x393<=(x394+(x395/x396)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = -1LL;
	static int8_t x398 = 16;
	int16_t x399 = 916;
	int8_t x400 = INT8_MIN;
	int32_t t95 = -761278;

	t95 = (x397<=(x398+(x399/x400)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = 6597;
	volatile int16_t x402 = INT16_MIN;
	static int64_t x403 = 1LL;

	t96 = (x401<=(x402+(x403/x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x405 = UINT16_MAX;
	uint8_t x407 = 2U;
	int16_t x408 = -371;

	t97 = (x405<=(x406+(x407/x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x411 = 27U;
	static volatile int32_t x412 = 159;

	t98 = (x409<=(x410+(x411/x412)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = 704721154U;
	static int16_t x414 = INT16_MIN;
	volatile int32_t x415 = -1;
	static int16_t x416 = 14096;

	t99 = (x413<=(x414+(x415/x416)));

	if (t99 != 1) { NG(); } else { ; }
	
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

