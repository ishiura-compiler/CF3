#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = INT16_MAX;
static int16_t x2 = -10;
int32_t t4 = 44;
volatile int32_t x21 = INT32_MIN;
int64_t x29 = INT64_MAX;
static uint64_t x36 = UINT64_MAX;
int32_t x39 = 12268;
volatile uint32_t x44 = 2033612876U;
static uint32_t x46 = UINT32_MAX;
int32_t x58 = -1;
volatile int32_t t14 = INT32_MIN;
int8_t x70 = -60;
volatile int32_t x73 = INT32_MAX;
volatile uint16_t x74 = UINT16_MAX;
static int64_t x80 = INT64_MAX;
int64_t t19 = INT64_MAX;
volatile int32_t t20 = -51664;
int64_t x86 = -1LL;
static volatile int16_t x91 = INT16_MIN;
volatile int16_t x99 = 0;
int8_t x100 = 1;
uint32_t x102 = UINT32_MAX;
uint8_t x113 = 126U;
int32_t t28 = -648;
uint32_t x119 = 121617U;
static int32_t t29 = -2261249;
uint8_t x121 = 0U;
int64_t t30 = 371098713LL;
int64_t x129 = 363535LL;
int8_t x132 = -28;
int64_t x133 = -11598604641142518LL;
volatile int64_t x138 = INT64_MIN;
int16_t x145 = INT16_MAX;
static uint64_t x152 = UINT64_MAX;
int32_t x159 = INT32_MIN;
volatile int64_t t40 = 4084900655347787LL;
static int8_t x166 = INT8_MAX;
int8_t x168 = INT8_MAX;
volatile int32_t t41 = -53;
volatile int16_t x174 = -1;
int32_t x179 = INT32_MIN;
static uint8_t x185 = 117U;
volatile int64_t x192 = INT64_MIN;
int32_t x199 = INT32_MIN;
volatile int16_t x200 = 445;
static uint32_t x203 = 1476186U;
int8_t x205 = -1;
uint32_t x213 = 282261U;
int32_t t53 = 5792859;
int64_t x225 = 2415LL;
volatile int32_t t56 = -931650;
int32_t x231 = 6;
static int32_t x238 = 43565683;
int32_t x240 = -1;
volatile uint8_t x242 = 5U;
uint16_t x250 = 18U;
uint32_t x254 = 5606U;
int32_t x262 = 702050188;
static uint8_t x269 = 1U;
volatile int32_t t68 = 167684617;
static int64_t x277 = -32609LL;
volatile int64_t x288 = INT64_MIN;
int32_t x291 = INT32_MIN;
static volatile int16_t x296 = -1;
int32_t t73 = -489650;
volatile uint32_t x307 = 880U;
int8_t x311 = -1;
int32_t t77 = 800406222;
static int8_t x314 = 1;
volatile int32_t x321 = INT32_MAX;
static volatile int32_t x322 = INT32_MAX;
int32_t x326 = 375528372;
volatile int32_t x327 = -1;
uint16_t x336 = 52U;
volatile int8_t x337 = INT8_MIN;
volatile int64_t t84 = -23235172106403LL;
volatile int64_t t87 = 1272607823814LL;
volatile int8_t x356 = -1;
uint64_t x359 = 136473LLU;
volatile int32_t t89 = 212;
int8_t x367 = -1;
int32_t x368 = INT32_MIN;
int32_t x369 = INT32_MIN;
int8_t x370 = -41;
int64_t x371 = INT64_MIN;
int16_t x374 = INT16_MAX;
int32_t t94 = 0;
int32_t x387 = INT32_MAX;
int32_t t96 = 6652;
static volatile uint16_t x390 = UINT16_MAX;
volatile uint64_t t98 = 96734LLU;


void f0(void) {
	int8_t x3 = 1;
	static int32_t x4 = INT32_MIN;
	int32_t t0 = INT32_MIN;

	t0 = ((x1<(x2^x3))^x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	uint8_t x6 = 11U;
	int16_t x7 = 11;
	static volatile int8_t x8 = -1;
	int32_t t1 = -47888;

	t1 = ((x5<(x6^x7))^x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int8_t x10 = 23;
	static int64_t x11 = INT64_MIN;
	int64_t x12 = INT64_MAX;
	int64_t t2 = INT64_MAX;

	t2 = ((x9<(x10^x11))^x12);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static int16_t x14 = INT16_MIN;
	uint16_t x15 = 4062U;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 833;

	t3 = ((x13<(x14^x15))^x16);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 5151443152280266009LLU;
	volatile int32_t x18 = 493513723;
	int64_t x19 = -1LL;
	static volatile int16_t x20 = INT16_MIN;

	t4 = ((x17<(x18^x19))^x20);

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	int32_t x23 = -1;
	volatile uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -6110369;

	t5 = ((x21<(x22^x23))^x24);

	if (t5 != 254) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	int8_t x26 = -1;
	int64_t x27 = 1578817088840724LL;
	int64_t x28 = 7004604848909LL;
	int64_t t6 = -3508751664684598LL;

	t6 = ((x25<(x26^x27))^x28);

	if (t6 != 7004604848909LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	static int16_t x31 = -186;
	int64_t x32 = -4019070LL;
	volatile int64_t t7 = -4796906042LL;

	t7 = ((x29<(x30^x31))^x32);

	if (t7 != -4019070LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = 43072606660478734LL;
	uint16_t x35 = 148U;
	uint64_t t8 = 43083067729125LLU;

	t8 = ((x33<(x34^x35))^x36);

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 161U;
	int32_t x38 = INT32_MIN;
	volatile uint16_t x40 = UINT16_MAX;
	int32_t t9 = 14;

	t9 = ((x37<(x38^x39))^x40);

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 223834;
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = -5;
	uint32_t t10 = 18777436U;

	t10 = ((x41<(x42^x43))^x44);

	if (t10 != 2033612876U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile uint32_t x47 = UINT32_MAX;
	int8_t x48 = 1;
	volatile int32_t t11 = 950156;

	t11 = ((x45<(x46^x47))^x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 696026674532131LLU;
	int8_t x50 = INT8_MIN;
	uint8_t x51 = 3U;
	int8_t x52 = INT8_MAX;
	int32_t t12 = -588;

	t12 = ((x49<(x50^x51))^x52);

	if (t12 != 126) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = 97671573;
	uint8_t x54 = 3U;
	static uint8_t x55 = 59U;
	volatile int64_t x56 = INT64_MAX;
	static volatile int64_t t13 = INT64_MAX;

	t13 = ((x53<(x54^x55))^x56);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1;
	int32_t x59 = 22;
	int32_t x60 = INT32_MIN;

	t14 = ((x57<(x58^x59))^x60);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = -27571926023385014LL;
	uint64_t x62 = 0LLU;
	int32_t x63 = -1;
	static volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 868157766;

	t15 = ((x61<(x62^x63))^x64);

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = UINT32_MAX;
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MAX;
	int16_t x68 = -6160;
	int32_t t16 = -20288;

	t16 = ((x65<(x66^x67))^x68);

	if (t16 != -6160) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MAX;
	static int16_t x71 = -2;
	static volatile int32_t x72 = INT32_MIN;
	volatile int32_t t17 = INT32_MIN;

	t17 = ((x69<(x70^x71))^x72);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x75 = 2521602769656669309LLU;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 1;

	t18 = ((x73<(x74^x75))^x76);

	if (t18 != 2147483646) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	static uint32_t x78 = 7423533U;
	static int64_t x79 = -810145248306997761LL;

	t19 = ((x77<(x78^x79))^x80);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	static int64_t x82 = INT64_MIN;
	static uint64_t x83 = UINT64_MAX;
	uint8_t x84 = 10U;

	t20 = ((x81<(x82^x83))^x84);

	if (t20 != 10) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	static int32_t x87 = 189240804;
	volatile int64_t x88 = INT64_MIN;
	volatile int64_t t21 = 41525350744393LL;

	t21 = ((x85<(x86^x87))^x88);

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = 3904U;
	uint32_t x90 = UINT32_MAX;
	static volatile int8_t x92 = INT8_MIN;
	int32_t t22 = 205324;

	t22 = ((x89<(x90^x91))^x92);

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MIN;
	static volatile int32_t x96 = -61210;
	int32_t t23 = 5;

	t23 = ((x93<(x94^x95))^x96);

	if (t23 != -61209) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -1;
	int64_t x98 = 13189LL;
	int32_t t24 = 8300071;

	t24 = ((x97<(x98^x99))^x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	static uint16_t x103 = 1732U;
	volatile int8_t x104 = 1;
	volatile int32_t t25 = -1;

	t25 = ((x101<(x102^x103))^x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = 0LLU;
	int16_t x106 = INT16_MIN;
	volatile int64_t x107 = -22595658585LL;
	volatile uint8_t x108 = 3U;
	volatile int32_t t26 = -51416;

	t26 = ((x105<(x106^x107))^x108);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	static int64_t x110 = INT64_MIN;
	int64_t x111 = INT64_MIN;
	volatile uint8_t x112 = 27U;
	static volatile int32_t t27 = 222847699;

	t27 = ((x109<(x110^x111))^x112);

	if (t27 != 27) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x114 = INT8_MIN;
	volatile int64_t x115 = 219414752850LL;
	volatile int16_t x116 = INT16_MIN;

	t28 = ((x113<(x114^x115))^x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	volatile int32_t x118 = INT32_MIN;
	int16_t x120 = INT16_MAX;

	t29 = ((x117<(x118^x119))^x120);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = 848963;
	uint64_t x123 = 1629352654813411LLU;
	int64_t x124 = INT64_MIN;

	t30 = ((x121<(x122^x123))^x124);

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x125 = -1LL;
	static int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	int64_t x128 = 53247584082567557LL;
	int64_t t31 = -2213LL;

	t31 = ((x125<(x126^x127))^x128);

	if (t31 != 53247584082567556LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x130 = INT8_MAX;
	uint16_t x131 = 22U;
	volatile int32_t t32 = -8185;

	t32 = ((x129<(x130^x131))^x132);

	if (t32 != -28) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = UINT32_MAX;
	static int16_t x135 = INT16_MIN;
	volatile int8_t x136 = -1;
	static volatile int32_t t33 = 2671400;

	t33 = ((x133<(x134^x135))^x136);

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 1468668159U;
	int64_t x139 = INT64_MIN;
	uint32_t x140 = 843278666U;
	uint32_t t34 = 1974630U;

	t34 = ((x137<(x138^x139))^x140);

	if (t34 != 843278666U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	static int32_t x142 = INT32_MIN;
	volatile uint16_t x143 = 1003U;
	uint16_t x144 = 31859U;
	volatile int32_t t35 = -1018;

	t35 = ((x141<(x142^x143))^x144);

	if (t35 != 31858) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x146 = INT8_MIN;
	int64_t x147 = 5009878LL;
	uint8_t x148 = 1U;
	static volatile int32_t t36 = 9;

	t36 = ((x145<(x146^x147))^x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 9U;
	int32_t x150 = INT32_MAX;
	int64_t x151 = -1LL;
	static volatile uint64_t t37 = UINT64_MAX;

	t37 = ((x149<(x150^x151))^x152);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 16703119U;
	int32_t x154 = INT32_MIN;
	static uint32_t x155 = 61545437U;
	static int64_t x156 = INT64_MIN;
	int64_t t38 = 1256059LL;

	t38 = ((x153<(x154^x155))^x156);

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -2023435770678317479LL;
	int64_t x158 = INT64_MIN;
	int8_t x160 = 1;
	int32_t t39 = 913421590;

	t39 = ((x157<(x158^x159))^x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int64_t x162 = INT64_MIN;
	int16_t x163 = INT16_MAX;
	int64_t x164 = -8056924089664LL;

	t40 = ((x161<(x162^x163))^x164);

	if (t40 != -8056924089664LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MIN;
	volatile int8_t x167 = -1;

	t41 = ((x165<(x166^x167))^x168);

	if (t41 != 126) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	static volatile uint64_t x170 = 0LLU;
	int16_t x171 = INT16_MIN;
	uint16_t x172 = 135U;
	int32_t t42 = 2045479;

	t42 = ((x169<(x170^x171))^x172);

	if (t42 != 135) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int64_t x175 = INT64_MIN;
	int64_t x176 = 851LL;
	static int64_t t43 = 0LL;

	t43 = ((x173<(x174^x175))^x176);

	if (t43 != 850LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 15092647;
	int8_t x178 = -1;
	static int64_t x180 = INT64_MIN;
	volatile int64_t t44 = -2LL;

	t44 = ((x177<(x178^x179))^x180);

	if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x181 = 1716376926407742LLU;
	int32_t x182 = INT32_MIN;
	static volatile int16_t x183 = -245;
	int16_t x184 = 79;
	static volatile int32_t t45 = 636749371;

	t45 = ((x181<(x182^x183))^x184);

	if (t45 != 79) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x186 = 3;
	int64_t x187 = INT64_MIN;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t46 = 520005569;

	t46 = ((x185<(x186^x187))^x188);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 0U;
	uint32_t x190 = UINT32_MAX;
	uint8_t x191 = UINT8_MAX;
	static int64_t t47 = -67664331864LL;

	t47 = ((x189<(x190^x191))^x192);

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 14U;
	static int16_t x194 = -1;
	static uint8_t x195 = 0U;
	int8_t x196 = -1;
	static int32_t t48 = -202981;

	t48 = ((x193<(x194^x195))^x196);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 2193971LLU;
	int32_t x198 = -1;
	volatile int32_t t49 = 1327244;

	t49 = ((x197<(x198^x199))^x200);

	if (t49 != 444) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x201 = INT64_MIN;
	static int32_t x202 = -5503355;
	int8_t x204 = -1;
	volatile int32_t t50 = -1016;

	t50 = ((x201<(x202^x203))^x204);

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = -1;
	volatile int64_t x207 = -1LL;
	volatile int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 938;

	t51 = ((x205<(x206^x207))^x208);

	if (t51 != 32766) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	uint64_t x210 = UINT64_MAX;
	static int8_t x211 = INT8_MAX;
	static int16_t x212 = 12919;
	static int32_t t52 = 827009205;

	t52 = ((x209<(x210^x211))^x212);

	if (t52 != 12918) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x214 = 1167767U;
	static int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;

	t53 = ((x213<(x214^x215))^x216);

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int16_t x218 = INT16_MIN;
	volatile int16_t x219 = INT16_MAX;
	int32_t x220 = 525655;
	int32_t t54 = 3;

	t54 = ((x217<(x218^x219))^x220);

	if (t54 != 525654) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 843U;
	volatile int8_t x222 = 1;
	static uint64_t x223 = UINT64_MAX;
	int64_t x224 = INT64_MIN;
	int64_t t55 = -375236LL;

	t55 = ((x221<(x222^x223))^x224);

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = -110576991213141063LL;
	volatile int32_t x227 = INT32_MIN;
	static int16_t x228 = INT16_MAX;

	t56 = ((x225<(x226^x227))^x228);

	if (t56 != 32766) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	uint8_t x230 = 11U;
	int64_t x232 = 174LL;
	volatile int64_t t57 = -1697LL;

	t57 = ((x229<(x230^x231))^x232);

	if (t57 != 175LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	static int64_t x234 = INT64_MIN;
	int64_t x235 = INT64_MIN;
	int16_t x236 = -14661;
	volatile int32_t t58 = 71;

	t58 = ((x233<(x234^x235))^x236);

	if (t58 != -14661) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	int32_t t59 = -65188;

	t59 = ((x237<(x238^x239))^x240);

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	uint32_t x243 = 1939U;
	int16_t x244 = 12;
	static int32_t t60 = -269;

	t60 = ((x241<(x242^x243))^x244);

	if (t60 != 12) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	volatile int8_t x246 = -6;
	int64_t x247 = -270LL;
	int64_t x248 = -1LL;
	int64_t t61 = 7863448632978LL;

	t61 = ((x245<(x246^x247))^x248);

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MAX;
	volatile uint32_t x251 = 1166857575U;
	uint8_t x252 = UINT8_MAX;
	int32_t t62 = 60280;

	t62 = ((x249<(x250^x251))^x252);

	if (t62 != 254) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	static volatile int32_t x255 = INT32_MIN;
	int16_t x256 = INT16_MIN;
	static volatile int32_t t63 = 980895214;

	t63 = ((x253<(x254^x255))^x256);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 156202242283492310LLU;
	static int16_t x258 = INT16_MIN;
	int64_t x259 = -1LL;
	int16_t x260 = INT16_MAX;
	static int32_t t64 = -429206659;

	t64 = ((x257<(x258^x259))^x260);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 295;
	volatile uint64_t x263 = UINT64_MAX;
	int16_t x264 = 14696;
	volatile int32_t t65 = 0;

	t65 = ((x261<(x262^x263))^x264);

	if (t65 != 14697) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x265 = 5219U;
	int64_t x266 = INT64_MAX;
	volatile int8_t x267 = INT8_MAX;
	int8_t x268 = 17;
	volatile int32_t t66 = -17764;

	t66 = ((x265<(x266^x267))^x268);

	if (t66 != 16) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x270 = INT8_MAX;
	volatile uint16_t x271 = 11623U;
	int64_t x272 = INT64_MIN;
	volatile int64_t t67 = -86760431425LL;

	t67 = ((x269<(x270^x271))^x272);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 1LLU;
	int32_t x274 = INT32_MIN;
	int64_t x275 = 5744219LL;
	int8_t x276 = INT8_MAX;

	t68 = ((x273<(x274^x275))^x276);

	if (t68 != 126) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x278 = 5281;
	volatile int32_t x279 = -29;
	int32_t x280 = -6002886;
	int32_t t69 = 33608532;

	t69 = ((x277<(x278^x279))^x280);

	if (t69 != -6002885) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	static int16_t x282 = -1;
	uint64_t x283 = 3613LLU;
	int64_t x284 = -1LL;
	volatile int64_t t70 = 54843424887712428LL;

	t70 = ((x281<(x282^x283))^x284);

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	int8_t x286 = INT8_MIN;
	volatile uint8_t x287 = UINT8_MAX;
	int64_t t71 = INT64_MIN;

	t71 = ((x285<(x286^x287))^x288);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = 476263U;
	uint64_t x290 = 171798361LLU;
	static int16_t x292 = INT16_MIN;
	int32_t t72 = 1184;

	t72 = ((x289<(x290^x291))^x292);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MIN;
	volatile int32_t x295 = INT32_MIN;

	t73 = ((x293<(x294^x295))^x296);

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 65345402LLU;
	static uint16_t x298 = 134U;
	volatile int8_t x299 = 1;
	static int32_t x300 = INT32_MIN;
	volatile int32_t t74 = INT32_MIN;

	t74 = ((x297<(x298^x299))^x300);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 14;
	int8_t x302 = INT8_MIN;
	uint16_t x303 = 116U;
	int16_t x304 = 4;
	volatile int32_t t75 = 470816288;

	t75 = ((x301<(x302^x303))^x304);

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1924119176631LL;
	int64_t x306 = INT64_MIN;
	static int64_t x308 = INT64_MAX;
	int64_t t76 = INT64_MAX;

	t76 = ((x305<(x306^x307))^x308);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 183U;
	int64_t x310 = -1LL;
	uint16_t x312 = 2U;

	t77 = ((x309<(x310^x311))^x312);

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = -73LL;
	static uint64_t x315 = 7LLU;
	int16_t x316 = INT16_MIN;
	int32_t t78 = -23642074;

	t78 = ((x313<(x314^x315))^x316);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MIN;
	int64_t x318 = -12424574847203LL;
	int64_t x319 = INT64_MAX;
	volatile int32_t x320 = INT32_MAX;
	volatile int32_t t79 = INT32_MAX;

	t79 = ((x317<(x318^x319))^x320);

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x323 = 22495U;
	static uint16_t x324 = 1339U;
	volatile int32_t t80 = 6;

	t80 = ((x321<(x322^x323))^x324);

	if (t80 != 1339) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -7;
	uint64_t x328 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = ((x325<(x326^x327))^x328);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	static int32_t x330 = INT32_MIN;
	static uint64_t x331 = 30386611026LLU;
	static int8_t x332 = 6;
	static volatile int32_t t82 = -153160293;

	t82 = ((x329<(x330^x331))^x332);

	if (t82 != 6) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 3716201U;
	uint8_t x334 = 1U;
	volatile int32_t x335 = INT32_MIN;
	int32_t t83 = -7499;

	t83 = ((x333<(x334^x335))^x336);

	if (t83 != 53) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x338 = 2U;
	int8_t x339 = -1;
	static int64_t x340 = -1LL;

	t84 = ((x337<(x338^x339))^x340);

	if (t84 != -2LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -51;
	static int16_t x342 = -1;
	uint8_t x343 = 9U;
	int16_t x344 = INT16_MIN;
	int32_t t85 = 11202602;

	t85 = ((x341<(x342^x343))^x344);

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = UINT16_MAX;
	int32_t x346 = 183;
	uint32_t x347 = UINT32_MAX;
	uint16_t x348 = 25U;
	static int32_t t86 = -237;

	t86 = ((x345<(x346^x347))^x348);

	if (t86 != 24) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 0U;
	volatile int16_t x350 = INT16_MIN;
	static uint64_t x351 = UINT64_MAX;
	int64_t x352 = INT64_MAX;

	t87 = ((x349<(x350^x351))^x352);

	if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	uint64_t x354 = 1859264417820595LLU;
	uint8_t x355 = UINT8_MAX;
	int32_t t88 = -45;

	t88 = ((x353<(x354^x355))^x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = 1;
	uint32_t x358 = UINT32_MAX;
	int8_t x360 = INT8_MAX;

	t89 = ((x357<(x358^x359))^x360);

	if (t89 != 126) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = 23;
	static volatile uint32_t x362 = 51U;
	volatile int32_t x363 = INT32_MAX;
	volatile uint64_t x364 = 47LLU;
	volatile uint64_t t90 = 186589428LLU;

	t90 = ((x361<(x362^x363))^x364);

	if (t90 != 46LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = 51U;
	uint16_t x366 = 2U;
	int32_t t91 = INT32_MIN;

	t91 = ((x365<(x366^x367))^x368);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x372 = INT64_MAX;
	int64_t t92 = -6981068880LL;

	t92 = ((x369<(x370^x371))^x372);

	if (t92 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x373 = 5;
	volatile uint16_t x375 = UINT16_MAX;
	static int8_t x376 = -2;
	static volatile int32_t t93 = -888609392;

	t93 = ((x373<(x374^x375))^x376);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 12063875U;
	static volatile int8_t x378 = -2;
	int32_t x379 = INT32_MIN;
	uint16_t x380 = 31U;

	t94 = ((x377<(x378^x379))^x380);

	if (t94 != 30) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = 22;
	int8_t x382 = -6;
	volatile int64_t x383 = -1LL;
	uint8_t x384 = 10U;
	volatile int32_t t95 = -93;

	t95 = ((x381<(x382^x383))^x384);

	if (t95 != 10) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	int32_t x386 = INT32_MAX;
	int8_t x388 = INT8_MIN;

	t96 = ((x385<(x386^x387))^x388);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	int8_t x391 = INT8_MAX;
	int16_t x392 = 404;
	volatile int32_t t97 = -588745013;

	t97 = ((x389<(x390^x391))^x392);

	if (t97 != 404) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = 1LL;
	volatile int16_t x394 = INT16_MIN;
	static int64_t x395 = INT64_MAX;
	uint64_t x396 = 6367441959LLU;

	t98 = ((x393<(x394^x395))^x396);

	if (t98 != 6367441959LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	int8_t x398 = -1;
	int32_t x399 = INT32_MAX;
	int32_t x400 = INT32_MAX;
	int32_t t99 = INT32_MAX;

	t99 = ((x397<(x398^x399))^x400);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

