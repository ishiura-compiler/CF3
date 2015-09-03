#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x8 = INT64_MIN;
uint64_t x9 = UINT64_MAX;
int32_t x11 = -2;
int64_t x18 = INT64_MAX;
volatile uint64_t t3 = 44619LLU;
int8_t x26 = -1;
uint64_t x31 = 44280914153137LLU;
static volatile int32_t x37 = INT32_MIN;
int8_t x40 = -42;
int8_t x44 = INT8_MAX;
int64_t t8 = -84474259906LL;
uint64_t t10 = 8892584738145LLU;
uint64_t t14 = 24628665542713061LLU;
uint16_t x99 = UINT16_MAX;
volatile int32_t t15 = -83;
int8_t x103 = INT8_MIN;
uint8_t x121 = UINT8_MAX;
int8_t x126 = INT8_MIN;
int64_t x132 = -5296436LL;
volatile uint8_t x134 = 71U;
uint16_t x138 = 22U;
volatile int64_t t25 = 633620LL;
int8_t x156 = 1;
static volatile int64_t t27 = 15591658LL;
int16_t x158 = INT16_MAX;
int32_t x159 = -335403;
int64_t x163 = 3474LL;
uint64_t t29 = 15371452477234744LLU;
volatile uint64_t x182 = UINT64_MAX;
static uint32_t x188 = 872430476U;
static int8_t x190 = -1;
static uint8_t x191 = 7U;
int8_t x205 = INT8_MAX;
int64_t x206 = -1LL;
volatile int64_t t36 = 2079737314LL;
uint64_t x221 = 99275LLU;
static uint64_t x239 = UINT64_MAX;
static int8_t x251 = -7;
int64_t t43 = 16797426815607LL;
int16_t x253 = -3256;
volatile uint16_t x256 = 6U;
int16_t x267 = INT16_MIN;
uint64_t x280 = 9LLU;
uint64_t t49 = 7178822LLU;
static volatile uint8_t x292 = 0U;
static int8_t x296 = INT8_MIN;
int16_t x297 = 91;
volatile uint8_t x298 = 1U;
int8_t x301 = INT8_MIN;
int16_t x304 = -1;
int16_t x320 = INT16_MIN;
volatile int32_t t55 = 12583;
int32_t x325 = INT32_MIN;
int8_t x331 = -1;
volatile uint32_t x335 = 80441U;
int16_t x336 = -1;
volatile int64_t t58 = -110064555420378285LL;
int64_t t59 = 2806LL;
static int8_t x347 = INT8_MIN;
static uint32_t x348 = 43U;
static uint32_t t62 = 93836907U;
volatile int16_t x355 = INT16_MAX;
uint16_t x356 = UINT16_MAX;
static int16_t x363 = INT16_MIN;
volatile int32_t x387 = -1;
uint32_t x399 = 2075003U;
int16_t x404 = INT16_MIN;
uint16_t x412 = 5175U;
volatile int32_t t71 = 14;
uint16_t x438 = 25549U;
int32_t x439 = INT32_MIN;
static uint16_t x441 = 136U;
volatile uint64_t x444 = 189536223998LLU;
uint32_t t76 = 132964U;
static int16_t x471 = -1014;
uint64_t t78 = 107523450917LLU;
int32_t x477 = 0;
volatile uint64_t x485 = UINT64_MAX;
uint64_t t81 = 308089LLU;
uint32_t x492 = 1U;
static volatile int64_t x502 = INT64_MIN;
uint16_t x505 = 612U;
uint16_t x511 = 6516U;
static volatile int32_t t86 = 14274;
uint8_t x516 = 7U;
volatile int64_t x519 = 14788126LL;
volatile uint16_t x520 = 2155U;
int32_t x521 = -1;
int64_t x524 = 1637490207646LL;
volatile int64_t x530 = -1LL;
uint8_t x538 = UINT8_MAX;
int64_t x540 = INT64_MAX;
int8_t x546 = INT8_MIN;
uint64_t x547 = 489081774927673LLU;
int8_t x554 = INT8_MIN;
volatile int16_t x556 = -3172;
volatile int64_t t94 = -209405LL;
uint32_t t95 = 52113U;
int64_t x562 = -1LL;
uint8_t x569 = 2U;
volatile int16_t x574 = INT16_MAX;
uint8_t x575 = UINT8_MAX;
uint32_t x576 = UINT32_MAX;
volatile uint32_t t99 = 67U;


void f0(void) {
	int32_t x5 = INT32_MAX;
	uint16_t x6 = UINT16_MAX;
	static int8_t x7 = 1;
	int64_t t0 = -2137196LL;

	t0 = (x5%(x6+(x7*x8)));

	if (t0 != 2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x10 = -1LL;
	uint64_t x12 = 71865504963187LLU;
	volatile uint64_t t1 = 85LLU;

	t1 = (x9%(x10+(x11*x12)));

	if (t1 != 143731009926374LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = 0LL;
	int64_t x14 = -1LL;
	int16_t x15 = 30;
	int32_t x16 = -6;
	int64_t t2 = -26354200602148235LL;

	t2 = (x13%(x14+(x15*x16)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	uint64_t x19 = 50157483908LLU;
	static uint8_t x20 = 4U;

	t3 = (x17%(x18+(x19*x20)));

	if (t3 != 9223371836224840176LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 610U;
	static uint8_t x27 = 17U;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t4 = 14921;

	t4 = (x25%(x26+(x27*x28)));

	if (t4 != 610) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = -11677;
	volatile int32_t x30 = INT32_MIN;
	uint32_t x32 = UINT32_MAX;
	uint64_t t5 = 111952LLU;

	t5 = (x29%(x30+(x31*x32)));

	if (t5 != 853319521587978516LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x38 = INT16_MIN;
	int64_t x39 = -50206382179737LL;
	int64_t t6 = 3295453554LL;

	t6 = (x37%(x38+(x39*x40)));

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = INT64_MAX;
	uint64_t x42 = 1305827539079279552LLU;
	static uint64_t x43 = 8246773089LLU;
	uint64_t t7 = 5849737LLU;

	t7 = (x41%(x42+(x43*x44)));

	if (t7 != 82571931918542822LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = INT32_MAX;
	int32_t x50 = -5341;
	int64_t x51 = -1LL;
	static int8_t x52 = INT8_MAX;

	t8 = (x49%(x50+(x51*x52)));

	if (t8 != 3199LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MIN;
	int64_t x55 = -1LL;
	int64_t x56 = -1LL;
	int64_t t9 = 6239LL;

	t9 = (x53%(x54+(x55*x56)));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x57 = INT8_MAX;
	uint16_t x58 = UINT16_MAX;
	int16_t x59 = INT16_MIN;
	uint64_t x60 = 17236873367LLU;

	t10 = (x57%(x58+(x59*x60)));

	if (t10 != 127LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = INT32_MIN;
	uint8_t x70 = 5U;
	int8_t x71 = -1;
	int32_t x72 = -1;
	int32_t t11 = 460494;

	t11 = (x69%(x70+(x71*x72)));

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x81 = INT32_MAX;
	int8_t x82 = 3;
	uint32_t x83 = UINT32_MAX;
	static uint32_t x84 = UINT32_MAX;
	volatile uint32_t t12 = 2021749498U;

	t12 = (x81%(x82+(x83*x84)));

	if (t12 != 3U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x85 = 390U;
	int32_t x86 = INT32_MAX;
	int8_t x87 = INT8_MIN;
	volatile int16_t x88 = 4;
	volatile int32_t t13 = 383019;

	t13 = (x85%(x86+(x87*x88)));

	if (t13 != 390) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x89 = UINT64_MAX;
	static volatile int16_t x90 = 23;
	int16_t x91 = INT16_MAX;
	int16_t x92 = -1;

	t14 = (x89%(x90+(x91*x92)));

	if (t14 != 32743LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x97 = INT16_MIN;
	int32_t x98 = -124314701;
	int32_t x100 = -5;

	t15 = (x97%(x98+(x99*x100)));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x102 = UINT64_MAX;
	static uint8_t x104 = 0U;
	static uint64_t t16 = 379LLU;

	t16 = (x101%(x102+(x103*x104)));

	if (t16 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x113 = 0;
	int8_t x114 = INT8_MIN;
	int16_t x115 = -1;
	int16_t x116 = -694;
	static volatile int32_t t17 = -121176;

	t17 = (x113%(x114+(x115*x116)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x117 = INT32_MIN;
	volatile int16_t x118 = INT16_MIN;
	static uint64_t x119 = 250005800888086LLU;
	int16_t x120 = -920;
	volatile uint64_t t18 = 2020455206284876783LLU;

	t18 = (x117%(x118+(x119*x120)));

	if (t18 != 230005334669588240LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x122 = INT64_MIN;
	volatile uint64_t x123 = 1424522036794LLU;
	volatile uint64_t x124 = 14024578477LLU;
	static uint64_t t19 = 590LLU;

	t19 = (x121%(x122+(x123*x124)));

	if (t19 != 255LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x125 = -157;
	int32_t x127 = 13;
	uint32_t x128 = 120949865U;
	uint32_t t20 = 884485190U;

	t20 = (x125%(x126+(x127*x128)));

	if (t20 != 1150270905U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x129 = -2;
	int16_t x130 = -1;
	volatile int16_t x131 = INT16_MAX;
	volatile int64_t t21 = -957394185311LL;

	t21 = (x129%(x130+(x131*x132)));

	if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x133 = 401525558950LL;
	volatile int8_t x135 = INT8_MIN;
	uint16_t x136 = 59U;
	volatile int64_t t22 = 6192LL;

	t22 = (x133%(x134+(x135*x136)));

	if (t22 != 478LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = INT16_MIN;
	uint16_t x139 = 37U;
	volatile int8_t x140 = INT8_MIN;
	static volatile int32_t t23 = -2057696;

	t23 = (x137%(x138+(x139*x140)));

	if (t23 != -4484) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x141 = 20;
	static int8_t x142 = INT8_MIN;
	int64_t x143 = -1LL;
	static int8_t x144 = 1;
	volatile int64_t t24 = 259040106520416169LL;

	t24 = (x141%(x142+(x143*x144)));

	if (t24 != 20LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = INT32_MIN;
	uint16_t x147 = UINT16_MAX;
	int64_t x148 = -1LL;

	t25 = (x145%(x146+(x147*x148)));

	if (t25 != -128LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x149 = 0U;
	int32_t x150 = 3604;
	static volatile int8_t x151 = -1;
	uint8_t x152 = UINT8_MAX;
	volatile uint32_t t26 = 443394U;

	t26 = (x149%(x150+(x151*x152)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = INT8_MIN;
	int64_t x154 = INT64_MIN;
	static uint8_t x155 = UINT8_MAX;

	t27 = (x153%(x154+(x155*x156)));

	if (t27 != -128LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x157 = UINT16_MAX;
	uint64_t x160 = 5828LLU;
	volatile uint64_t t28 = 28526323LLU;

	t28 = (x157%(x158+(x159*x160)));

	if (t28 != 65535LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x161 = UINT64_MAX;
	volatile uint8_t x162 = 112U;
	static uint8_t x164 = 56U;

	t29 = (x161%(x162+(x163*x164)));

	if (t29 != 38207LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x169 = INT8_MIN;
	static uint8_t x170 = 10U;
	int16_t x171 = INT16_MIN;
	static int16_t x172 = INT16_MIN;
	int32_t t30 = 63;

	t30 = (x169%(x170+(x171*x172)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x181 = 829374283649LLU;
	static uint8_t x183 = UINT8_MAX;
	uint8_t x184 = 18U;
	static uint64_t t31 = 18LLU;

	t31 = (x181%(x182+(x183*x184)));

	if (t31 != 4578LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x185 = 173112LL;
	int32_t x186 = -3074;
	int16_t x187 = INT16_MIN;
	int64_t t32 = 5594540LL;

	t32 = (x185%(x186+(x187*x188)));

	if (t32 != 173112LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x189 = UINT8_MAX;
	uint8_t x192 = 1U;
	int32_t t33 = 11517224;

	t33 = (x189%(x190+(x191*x192)));

	if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x193 = 536733481LLU;
	volatile int16_t x194 = -1;
	static int16_t x195 = 4;
	int8_t x196 = -51;
	uint64_t t34 = 127LLU;

	t34 = (x193%(x194+(x195*x196)));

	if (t34 != 536733481LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x207 = 1;
	uint64_t x208 = 6834121314681LLU;
	uint64_t t35 = 15537421602872LLU;

	t35 = (x205%(x206+(x207*x208)));

	if (t35 != 127LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x209 = INT16_MAX;
	uint32_t x210 = UINT32_MAX;
	static int8_t x211 = INT8_MIN;
	int64_t x212 = 783837027433LL;

	t36 = (x209%(x210+(x211*x212)));

	if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x217 = INT16_MAX;
	static int32_t x218 = -1;
	int16_t x219 = INT16_MAX;
	int32_t x220 = -1;
	static int32_t t37 = 98402771;

	t37 = (x217%(x218+(x219*x220)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x222 = UINT32_MAX;
	uint16_t x223 = 181U;
	uint8_t x224 = UINT8_MAX;
	static volatile uint64_t t38 = 4558145165LLU;

	t38 = (x221%(x222+(x223*x224)));

	if (t38 != 6967LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x225 = 79U;
	static int16_t x226 = INT16_MIN;
	volatile int16_t x227 = -1;
	uint16_t x228 = 2U;
	int32_t t39 = 0;

	t39 = (x225%(x226+(x227*x228)));

	if (t39 != 79) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x229 = 266U;
	volatile uint64_t x230 = 1020147428LLU;
	int8_t x231 = INT8_MIN;
	static int16_t x232 = INT16_MAX;
	volatile uint64_t t40 = 356228730608590LLU;

	t40 = (x229%(x230+(x231*x232)));

	if (t40 != 266LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x237 = 1U;
	int32_t x238 = -1;
	int8_t x240 = INT8_MIN;
	volatile uint64_t t41 = 1876LLU;

	t41 = (x237%(x238+(x239*x240)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x245 = INT32_MAX;
	int16_t x246 = 40;
	int64_t x247 = 14LL;
	int64_t x248 = 29427965430LL;
	volatile int64_t t42 = 41101LL;

	t42 = (x245%(x246+(x247*x248)));

	if (t42 != 2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MIN;
	uint32_t x252 = 171U;

	t43 = (x249%(x250+(x251*x252)));

	if (t43 != -2148360798LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x254 = INT16_MIN;
	volatile uint16_t x255 = UINT16_MAX;
	static volatile int32_t t44 = -126979168;

	t44 = (x253%(x254+(x255*x256)));

	if (t44 != -3256) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x257 = -1;
	int8_t x258 = INT8_MIN;
	int8_t x259 = INT8_MAX;
	uint32_t x260 = 407U;
	uint32_t t45 = 909U;

	t45 = (x257%(x258+(x259*x260)));

	if (t45 != 39117U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x265 = UINT8_MAX;
	volatile int8_t x266 = INT8_MIN;
	volatile int16_t x268 = -1528;
	volatile int32_t t46 = 56;

	t46 = (x265%(x266+(x267*x268)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x269 = 40906575U;
	int8_t x270 = -1;
	int64_t x271 = -1LL;
	int16_t x272 = 6;
	int64_t t47 = 137064973754245LL;

	t47 = (x269%(x270+(x271*x272)));

	if (t47 != 3LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x273 = INT64_MAX;
	static uint8_t x274 = 5U;
	volatile int8_t x275 = -1;
	volatile int64_t x276 = INT64_MAX;
	volatile int64_t t48 = 4171771LL;

	t48 = (x273%(x274+(x275*x276)));

	if (t48 != 5LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x277 = -1;
	int32_t x278 = INT32_MIN;
	static volatile int32_t x279 = -1;

	t49 = (x277%(x278+(x279*x280)));

	if (t49 != 2147483656LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x285 = INT32_MIN;
	static int8_t x286 = INT8_MIN;
	int32_t x287 = INT32_MIN;
	static int64_t x288 = -6LL;
	volatile int64_t t50 = 195408164505885034LL;

	t50 = (x285%(x286+(x287*x288)));

	if (t50 != -2147483648LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x289 = 1567504328023LLU;
	volatile int64_t x290 = INT64_MIN;
	static int64_t x291 = -1LL;
	static uint64_t t51 = 8877170710LLU;

	t51 = (x289%(x290+(x291*x292)));

	if (t51 != 1567504328023LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x293 = UINT32_MAX;
	uint64_t x294 = 16823678LLU;
	int64_t x295 = -1LL;
	static uint64_t t52 = 8673427LLU;

	t52 = (x293%(x294+(x295*x296)));

	if (t52 != 4896765LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x299 = -1;
	volatile int16_t x300 = -6677;
	int32_t t53 = -4;

	t53 = (x297%(x298+(x299*x300)));

	if (t53 != 91) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x302 = UINT64_MAX;
	int32_t x303 = 15433058;
	volatile uint64_t t54 = 639LLU;

	t54 = (x301%(x302+(x303*x304)));

	if (t54 != 15432931LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x317 = INT8_MAX;
	int32_t x318 = INT32_MAX;
	uint16_t x319 = UINT16_MAX;

	t55 = (x317%(x318+(x319*x320)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x326 = 0U;
	uint64_t x327 = 6622826LLU;
	static int8_t x328 = -8;
	volatile uint64_t t56 = 55731758037884799LLU;

	t56 = (x325%(x326+(x327*x328)));

	if (t56 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x329 = INT8_MAX;
	int8_t x330 = INT8_MIN;
	static int16_t x332 = -1;
	int32_t t57 = -216;

	t57 = (x329%(x330+(x331*x332)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = -1;
	int64_t x334 = -2LL;

	t58 = (x333%(x334+(x335*x336)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x337 = 277158603U;
	uint8_t x338 = 75U;
	int32_t x339 = INT32_MAX;
	int64_t x340 = -1658901527LL;

	t59 = (x337%(x338+(x339*x340)));

	if (t59 != 277158603LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x341 = 2;
	volatile int32_t x342 = -1;
	uint16_t x343 = 185U;
	int8_t x344 = INT8_MIN;
	int32_t t60 = 54551;

	t60 = (x341%(x342+(x343*x344)));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x345 = -1;
	int32_t x346 = -1;
	volatile uint32_t t61 = 9306075U;

	t61 = (x345%(x346+(x347*x348)));

	if (t61 != 5504U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x349 = 2921U;
	int32_t x350 = INT32_MIN;
	static uint32_t x351 = 192552U;
	static uint16_t x352 = 1888U;

	t62 = (x349%(x350+(x351*x352)));

	if (t62 != 2921U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x353 = 34U;
	static volatile uint8_t x354 = 13U;
	int32_t t63 = -1;

	t63 = (x353%(x354+(x355*x356)));

	if (t63 != 34) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x361 = INT64_MAX;
	volatile int32_t x362 = INT32_MIN;
	uint32_t x364 = 57505U;
	volatile int64_t t64 = 1680LL;

	t64 = (x361%(x362+(x363*x364)));

	if (t64 != 1409023LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x385 = INT32_MAX;
	int64_t x386 = 7LL;
	uint32_t x388 = UINT32_MAX;
	int64_t t65 = -16003707658017626LL;

	t65 = (x385%(x386+(x387*x388)));

	if (t65 != 7LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x397 = 31136339LLU;
	int8_t x398 = INT8_MAX;
	int32_t x400 = INT32_MIN;
	volatile uint64_t t66 = 1993720209193LLU;

	t66 = (x397%(x398+(x399*x400)));

	if (t66 != 31136339LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = -3;
	volatile uint8_t x403 = UINT8_MAX;
	volatile int32_t t67 = 0;

	t67 = (x401%(x402+(x403*x404)));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x409 = -1;
	int16_t x410 = -11016;
	int64_t x411 = -1LL;
	int64_t t68 = -1740218LL;

	t68 = (x409%(x410+(x411*x412)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x413 = -44;
	uint64_t x414 = 1196292485278434LLU;
	uint32_t x415 = 495078U;
	volatile int16_t x416 = INT16_MAX;
	volatile uint64_t t69 = 4246167319399361898LLU;

	t69 = (x413%(x414+(x415*x416)));

	if (t69 != 1058785080672704LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x421 = -27708;
	static uint16_t x422 = 4076U;
	static int16_t x423 = -1;
	uint32_t x424 = UINT32_MAX;
	volatile uint32_t t70 = 2U;

	t70 = (x421%(x422+(x423*x424)));

	if (t70 != 3553U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x433 = INT32_MIN;
	static int16_t x434 = INT16_MAX;
	int16_t x435 = INT16_MIN;
	uint16_t x436 = UINT16_MAX;

	t71 = (x433%(x434+(x435*x436)));

	if (t71 != -65535) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x437 = -1;
	uint32_t x440 = UINT32_MAX;
	volatile uint32_t t72 = 189540U;

	t72 = (x437%(x438+(x439*x440)));

	if (t72 != 2147458098U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x442 = -1LL;
	uint32_t x443 = UINT32_MAX;
	volatile uint64_t t73 = 166LLU;

	t73 = (x441%(x442+(x443*x444)));

	if (t73 != 136LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x457 = 1;
	volatile int64_t x458 = INT64_MIN;
	int16_t x459 = -31;
	static int8_t x460 = -1;
	int64_t t74 = 249560840743085612LL;

	t74 = (x457%(x458+(x459*x460)));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x461 = -1LL;
	uint64_t x462 = 123825636123601LLU;
	uint16_t x463 = UINT16_MAX;
	int16_t x464 = -16;
	uint64_t t75 = 117614305328653726LLU;

	t75 = (x461%(x462+(x463*x464)));

	if (t75 != 67739675468722LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x465 = UINT16_MAX;
	int32_t x466 = INT32_MAX;
	int8_t x467 = -1;
	uint32_t x468 = 31087260U;

	t76 = (x465%(x466+(x467*x468)));

	if (t76 != 65535U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x469 = 1U;
	int16_t x470 = INT16_MAX;
	static volatile uint32_t x472 = UINT32_MAX;
	static uint32_t t77 = 304499U;

	t77 = (x469%(x470+(x471*x472)));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x473 = INT16_MAX;
	static uint64_t x474 = UINT64_MAX;
	uint32_t x475 = 1U;
	int64_t x476 = INT64_MIN;

	t78 = (x473%(x474+(x475*x476)));

	if (t78 != 32767LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x478 = 7U;
	uint16_t x479 = UINT16_MAX;
	volatile uint64_t x480 = 5792006LLU;
	uint64_t t79 = 551875490030955107LLU;

	t79 = (x477%(x478+(x479*x480)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x481 = INT16_MIN;
	int8_t x482 = INT8_MIN;
	uint32_t x483 = 3082U;
	uint64_t x484 = UINT64_MAX;
	static volatile uint64_t t80 = 284717962734530625LLU;

	t80 = (x481%(x482+(x483*x484)));

	if (t80 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x486 = 48U;
	static uint64_t x487 = UINT64_MAX;
	static uint32_t x488 = UINT32_MAX;

	t81 = (x485%(x486+(x487*x488)));

	if (t81 != 4294967246LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x489 = 2091U;
	int32_t x490 = -1;
	volatile uint16_t x491 = 2U;
	volatile uint32_t t82 = 232U;

	t82 = (x489%(x490+(x491*x492)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x493 = -1;
	int8_t x494 = -1;
	static int16_t x495 = -1;
	int8_t x496 = INT8_MAX;
	int32_t t83 = 98;

	t83 = (x493%(x494+(x495*x496)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x501 = UINT32_MAX;
	int8_t x503 = INT8_MIN;
	int64_t x504 = -31LL;
	volatile int64_t t84 = -471307881788716LL;

	t84 = (x501%(x502+(x503*x504)));

	if (t84 != 4294967295LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x506 = -23;
	int16_t x507 = -29;
	int8_t x508 = -7;
	int32_t t85 = 9496;

	t85 = (x505%(x506+(x507*x508)));

	if (t85 != 72) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x509 = -1;
	static int8_t x510 = INT8_MIN;
	int16_t x512 = INT16_MIN;

	t86 = (x509%(x510+(x511*x512)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x513 = 1U;
	int8_t x514 = -1;
	int16_t x515 = INT16_MIN;
	volatile int32_t t87 = -6;

	t87 = (x513%(x514+(x515*x516)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x517 = -1LL;
	int16_t x518 = INT16_MAX;
	static volatile int64_t t88 = 13184155842LL;

	t88 = (x517%(x518+(x519*x520)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x522 = UINT32_MAX;
	int8_t x523 = INT8_MIN;
	int64_t t89 = 41681849LL;

	t89 = (x521%(x522+(x523*x524)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x525 = -1;
	volatile int16_t x526 = INT16_MIN;
	volatile int8_t x527 = -42;
	uint8_t x528 = 90U;
	static volatile int32_t t90 = 57;

	t90 = (x525%(x526+(x527*x528)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x529 = UINT32_MAX;
	uint32_t x531 = UINT32_MAX;
	static uint32_t x532 = 6U;
	volatile int64_t t91 = 23811002621LL;

	t91 = (x529%(x530+(x531*x532)));

	if (t91 != 6LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x537 = -1;
	int8_t x539 = 0;
	int64_t t92 = 240LL;

	t92 = (x537%(x538+(x539*x540)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x545 = 1;
	uint8_t x548 = 41U;
	uint64_t t93 = 9101057866770809383LLU;

	t93 = (x545%(x546+(x547*x548)));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x553 = INT64_MAX;
	static uint32_t x555 = 1553082U;

	t94 = (x553%(x554+(x555*x556)));

	if (t94 != 938460607LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x557 = INT32_MIN;
	static uint8_t x558 = UINT8_MAX;
	int8_t x559 = -1;
	uint32_t x560 = 13180U;

	t95 = (x557%(x558+(x559*x560)));

	if (t95 != 2147483648U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x561 = -1LL;
	uint64_t x563 = UINT64_MAX;
	int8_t x564 = INT8_MAX;
	uint64_t t96 = 8984922652LLU;

	t96 = (x561%(x562+(x563*x564)));

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x565 = INT8_MIN;
	volatile uint16_t x566 = 30U;
	int16_t x567 = 13;
	volatile int8_t x568 = -6;
	int32_t t97 = -144401;

	t97 = (x565%(x566+(x567*x568)));

	if (t97 != -32) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x570 = 151;
	static int8_t x571 = INT8_MIN;
	uint16_t x572 = 59U;
	int32_t t98 = 5069;

	t98 = (x569%(x570+(x571*x572)));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x573 = 0U;

	t99 = (x573%(x574+(x575*x576)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

