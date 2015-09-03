#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = INT64_MIN;
volatile uint64_t x27 = UINT64_MAX;
static volatile int16_t x32 = 7;
int8_t x33 = -1;
int32_t t8 = 10450884;
int8_t x38 = INT8_MAX;
int8_t x39 = INT8_MIN;
uint64_t x45 = 1387849288379LLU;
static int32_t x48 = -1;
int32_t t11 = -15937431;
static uint64_t x50 = 16131287521LLU;
volatile uint64_t t12 = 3302725862LLU;
int64_t x53 = INT64_MIN;
int32_t t13 = -81235741;
volatile int64_t t15 = -7829901402420621LL;
volatile int64_t x65 = -1LL;
int8_t x66 = -1;
int64_t x67 = INT64_MAX;
int16_t x75 = -1;
uint64_t x77 = 75825237LLU;
volatile uint64_t x80 = UINT64_MAX;
uint64_t t19 = 17LLU;
volatile int32_t t21 = 283058135;
uint16_t x93 = 31854U;
uint32_t x94 = 288U;
int16_t x100 = INT16_MAX;
uint32_t x104 = 13U;
int32_t x111 = -1;
int32_t x121 = INT32_MIN;
static int16_t x124 = -1;
int64_t x129 = INT64_MIN;
volatile uint64_t x143 = 1761242750873LLU;
int32_t t35 = 57;
static int64_t x160 = -1LL;
uint32_t x161 = 88079345U;
uint32_t x164 = UINT32_MAX;
int16_t x165 = INT16_MIN;
static volatile uint16_t x171 = UINT16_MAX;
volatile uint64_t t41 = 2LLU;
uint16_t x182 = 0U;
int64_t t42 = -14842444288136857LL;
int32_t x187 = 11568;
volatile int8_t x191 = 62;
static int32_t x193 = INT32_MIN;
int64_t x194 = -6195558857147LL;
static uint32_t x195 = 39564U;
static int8_t x196 = INT8_MIN;
uint32_t t45 = 1805U;
uint32_t x206 = 126847U;
static volatile int32_t x211 = 2290;
uint64_t x212 = 122814669861730003LLU;
int32_t x223 = 85288902;
static int64_t t53 = 2969528630LL;
uint64_t x229 = UINT64_MAX;
int32_t x230 = -1;
int32_t t54 = 2503;
static volatile int8_t x234 = -7;
static volatile int16_t x237 = 0;
uint8_t x238 = 9U;
uint32_t x246 = 5933U;
int64_t x252 = -1LL;
static int8_t x254 = INT8_MIN;
volatile int16_t x257 = -1;
int32_t x263 = INT32_MIN;
static volatile int32_t t62 = -14;
volatile uint8_t x266 = UINT8_MAX;
uint8_t x272 = UINT8_MAX;
static int8_t x281 = -1;
volatile int8_t x285 = INT8_MIN;
int16_t x293 = 0;
static volatile int32_t x307 = INT32_MAX;
static int32_t t72 = 191180729;
int64_t x317 = INT64_MAX;
static volatile int8_t x321 = INT8_MAX;
int32_t t76 = 25165;
static volatile uint64_t t77 = 218647LLU;
int64_t x338 = 0LL;
uint64_t t80 = 825943639944772LLU;
static int32_t x346 = INT32_MAX;
static uint64_t x351 = 175574LLU;
int16_t x353 = -1;
volatile int64_t x356 = INT64_MIN;
static int64_t x361 = 19449616LL;
int16_t x362 = -25;
uint16_t x363 = 1911U;
uint64_t x365 = UINT64_MAX;
volatile uint64_t x367 = UINT64_MAX;
static int64_t x374 = INT64_MAX;
volatile uint64_t x379 = UINT64_MAX;
uint32_t x386 = UINT32_MAX;
volatile int8_t x388 = INT8_MIN;
int32_t t94 = -13292175;
int16_t x404 = -1;
int32_t x405 = 13;
uint32_t x406 = 177U;
volatile int32_t t97 = -7878;
volatile int64_t t98 = 370546LL;
volatile uint8_t x418 = 12U;
static uint16_t x420 = 333U;


void f0(void) {
	volatile uint16_t x1 = 501U;
	int64_t x2 = INT64_MAX;
	int32_t x4 = INT32_MIN;
	volatile int64_t t0 = 188717657928LL;

	t0 = (((x1==x2)/x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int64_t x6 = 2576290540073457LL;
	int64_t x7 = INT64_MIN;
	static int32_t x8 = -1;
	volatile int64_t t1 = -1814LL;

	t1 = (((x5==x6)/x7)/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MIN;
	static volatile int64_t x11 = INT64_MIN;
	volatile uint32_t x12 = 14409U;
	int64_t t2 = -240973376413971LL;

	t2 = (((x9==x10)/x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MIN;
	int32_t x15 = 3693;
	volatile int32_t x16 = -6746;
	int32_t t3 = -1;

	t3 = (((x13==x14)/x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	volatile int32_t x18 = INT32_MIN;
	uint32_t x19 = 861520U;
	volatile uint16_t x20 = UINT16_MAX;
	volatile uint32_t t4 = 29U;

	t4 = (((x17==x18)/x19)/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	uint32_t x22 = 348512U;
	volatile int64_t x23 = 432401912LL;
	uint64_t x24 = 9799LLU;
	uint64_t t5 = 399011LLU;

	t5 = (((x21==x22)/x23)/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static uint16_t x26 = 2U;
	int64_t x28 = INT64_MIN;
	uint64_t t6 = 1LLU;

	t6 = (((x25==x26)/x27)/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	volatile int64_t x30 = -401149905826242LL;
	static int32_t x31 = -75069772;
	volatile int32_t t7 = 1638524;

	t7 = (((x29==x30)/x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = INT8_MIN;
	volatile int32_t x35 = 22;
	int8_t x36 = 1;

	t8 = (((x33==x34)/x35)/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	static int16_t x40 = 2;
	int32_t t9 = 94;

	t9 = (((x37==x38)/x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static int64_t x42 = INT64_MIN;
	static volatile int16_t x43 = INT16_MAX;
	uint64_t x44 = 2710106309LLU;
	volatile uint64_t t10 = 18LLU;

	t10 = (((x41==x42)/x43)/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	volatile int16_t x47 = INT16_MIN;

	t11 = (((x45==x46)/x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int32_t x51 = INT32_MAX;
	uint64_t x52 = UINT64_MAX;

	t12 = (((x49==x50)/x51)/x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x54 = UINT16_MAX;
	int8_t x55 = 1;
	volatile int16_t x56 = INT16_MAX;

	t13 = (((x53==x54)/x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	uint8_t x59 = UINT8_MAX;
	static int16_t x60 = -13;
	volatile int32_t t14 = 208918;

	t14 = (((x57==x58)/x59)/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 30256U;
	int32_t x62 = -1;
	int32_t x63 = INT32_MIN;
	int64_t x64 = -4418965929851332914LL;

	t15 = (((x61==x62)/x63)/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x68 = INT8_MIN;
	volatile int64_t t16 = -2LL;

	t16 = (((x65==x66)/x67)/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int8_t x70 = 1;
	static int8_t x71 = INT8_MIN;
	int16_t x72 = 160;
	volatile int32_t t17 = -6686347;

	t17 = (((x69==x70)/x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 2906229838600401LL;
	int32_t x74 = INT32_MAX;
	static uint32_t x76 = UINT32_MAX;
	volatile uint32_t t18 = 14U;

	t18 = (((x73==x74)/x75)/x76);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = INT32_MAX;
	volatile int8_t x79 = -10;

	t19 = (((x77==x78)/x79)/x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -1;
	int64_t x82 = INT64_MIN;
	static int32_t x83 = INT32_MAX;
	int32_t x84 = 195581;
	int32_t t20 = 349066;

	t20 = (((x81==x82)/x83)/x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MAX;
	int32_t x87 = INT32_MIN;
	uint8_t x88 = 4U;

	t21 = (((x85==x86)/x87)/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x95 = 1882U;
	int64_t x96 = INT64_MIN;
	int64_t t22 = -1747623LL;

	t22 = (((x93==x94)/x95)/x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 1930U;
	int8_t x98 = -7;
	static int32_t x99 = INT32_MAX;
	int32_t t23 = 144800435;

	t23 = (((x97==x98)/x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -664089043780LL;
	int32_t x102 = INT32_MAX;
	static int32_t x103 = -1;
	volatile uint32_t t24 = 3U;

	t24 = (((x101==x102)/x103)/x104);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -264691445162337649LL;
	int16_t x106 = INT16_MIN;
	static int16_t x107 = -6996;
	uint8_t x108 = 11U;
	volatile int32_t t25 = -359118;

	t25 = (((x105==x106)/x107)/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = 76;
	uint32_t x110 = 54375U;
	int16_t x112 = INT16_MAX;
	int32_t t26 = -18512;

	t26 = (((x109==x110)/x111)/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = -1;
	static int32_t x114 = -146;
	uint64_t x115 = 2120126LLU;
	volatile int32_t x116 = INT32_MAX;
	uint64_t t27 = 3539806392880308LLU;

	t27 = (((x113==x114)/x115)/x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 1018U;
	int64_t x118 = INT64_MIN;
	int16_t x119 = -118;
	uint32_t x120 = 387771U;
	static volatile uint32_t t28 = 3939U;

	t28 = (((x117==x118)/x119)/x120);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x122 = -1;
	uint16_t x123 = 597U;
	static volatile int32_t t29 = 1578;

	t29 = (((x121==x122)/x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x130 = -1;
	int8_t x131 = INT8_MAX;
	volatile int32_t x132 = -595;
	static volatile int32_t t30 = 365442034;

	t30 = (((x129==x130)/x131)/x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 1LLU;
	int16_t x134 = -1;
	static int32_t x135 = -1;
	static volatile int64_t x136 = INT64_MIN;
	int64_t t31 = -2033LL;

	t31 = (((x133==x134)/x135)/x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = INT32_MIN;
	static volatile int64_t x138 = INT64_MIN;
	uint16_t x139 = UINT16_MAX;
	int64_t x140 = 2302470865LL;
	int64_t t32 = 2152480931779LL;

	t32 = (((x137==x138)/x139)/x140);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x141 = INT32_MAX;
	int8_t x142 = INT8_MIN;
	int8_t x144 = -1;
	uint64_t t33 = 3161LLU;

	t33 = (((x141==x142)/x143)/x144);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 33U;
	int16_t x146 = -1;
	volatile int32_t x147 = INT32_MIN;
	static int64_t x148 = -1LL;
	volatile int64_t t34 = -422380022LL;

	t34 = (((x145==x146)/x147)/x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x153 = 6571U;
	int32_t x154 = INT32_MAX;
	volatile uint16_t x155 = 9U;
	uint16_t x156 = 4U;

	t35 = (((x153==x154)/x155)/x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = -7864;
	static int32_t x158 = INT32_MIN;
	int8_t x159 = -2;
	volatile int64_t t36 = 3878LL;

	t36 = (((x157==x158)/x159)/x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x162 = INT8_MAX;
	int64_t x163 = INT64_MIN;
	volatile int64_t t37 = 574429452901522LL;

	t37 = (((x161==x162)/x163)/x164);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x166 = 7248738433174438LL;
	int32_t x167 = INT32_MIN;
	int32_t x168 = -36706126;
	int32_t t38 = -771;

	t38 = (((x165==x166)/x167)/x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MIN;
	volatile uint32_t x170 = UINT32_MAX;
	int32_t x172 = INT32_MIN;
	int32_t t39 = 1;

	t39 = (((x169==x170)/x171)/x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	static int64_t x174 = INT64_MIN;
	int64_t x175 = INT64_MIN;
	int8_t x176 = INT8_MAX;
	volatile int64_t t40 = 115800827LL;

	t40 = (((x173==x174)/x175)/x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x177 = INT8_MAX;
	int8_t x178 = INT8_MIN;
	int16_t x179 = 102;
	uint64_t x180 = 18234714681LLU;

	t41 = (((x177==x178)/x179)/x180);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = -6723682319LL;
	int64_t x183 = 91446864870248LL;
	int16_t x184 = 48;

	t42 = (((x181==x182)/x183)/x184);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x185 = 178116LL;
	int16_t x186 = -1;
	int16_t x188 = INT16_MAX;
	static volatile int32_t t43 = 2750956;

	t43 = (((x185==x186)/x187)/x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MIN;
	uint8_t x190 = 0U;
	static volatile int32_t x192 = INT32_MIN;
	volatile int32_t t44 = -29014;

	t44 = (((x189==x190)/x191)/x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {


	t45 = (((x193==x194)/x195)/x196);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x197 = 14549U;
	uint16_t x198 = 73U;
	uint64_t x199 = UINT64_MAX;
	static volatile int8_t x200 = INT8_MIN;
	uint64_t t46 = 20378632550716LLU;

	t46 = (((x197==x198)/x199)/x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = 0;
	int32_t x202 = -190969783;
	int64_t x203 = INT64_MIN;
	volatile uint8_t x204 = 49U;
	static int64_t t47 = -18189027907457LL;

	t47 = (((x201==x202)/x203)/x204);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = 38U;
	int8_t x207 = INT8_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t48 = 31;

	t48 = (((x205==x206)/x207)/x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x209 = 453U;
	int16_t x210 = INT16_MAX;
	uint64_t t49 = 2LLU;

	t49 = (((x209==x210)/x211)/x212);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x213 = INT16_MAX;
	int64_t x214 = INT64_MIN;
	int8_t x215 = -3;
	int64_t x216 = INT64_MAX;
	int64_t t50 = 1110111LL;

	t50 = (((x213==x214)/x215)/x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x217 = INT32_MIN;
	volatile uint16_t x218 = 0U;
	int16_t x219 = -1;
	int64_t x220 = -1LL;
	volatile int64_t t51 = -143363120200975042LL;

	t51 = (((x217==x218)/x219)/x220);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = 5980;
	uint8_t x222 = UINT8_MAX;
	uint32_t x224 = UINT32_MAX;
	uint32_t t52 = 89U;

	t52 = (((x221==x222)/x223)/x224);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x225 = 478U;
	int64_t x226 = INT64_MIN;
	volatile int32_t x227 = -16242350;
	int64_t x228 = -1LL;

	t53 = (((x225==x226)/x227)/x228);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x231 = -89;
	int32_t x232 = -22;

	t54 = (((x229==x230)/x231)/x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = INT64_MIN;
	int64_t x235 = INT64_MAX;
	int16_t x236 = -7;
	volatile int64_t t55 = 31226189616LL;

	t55 = (((x233==x234)/x235)/x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x239 = INT64_MIN;
	int32_t x240 = INT32_MAX;
	volatile int64_t t56 = 23951096960929LL;

	t56 = (((x237==x238)/x239)/x240);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x241 = -1;
	uint16_t x242 = 2U;
	static volatile uint8_t x243 = 6U;
	static uint16_t x244 = 1U;
	int32_t t57 = 1641184;

	t57 = (((x241==x242)/x243)/x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MIN;
	int32_t x247 = -540;
	int16_t x248 = -1;
	int32_t t58 = 4186386;

	t58 = (((x245==x246)/x247)/x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x249 = INT32_MIN;
	uint32_t x250 = UINT32_MAX;
	int8_t x251 = -1;
	volatile int64_t t59 = 335884128755LL;

	t59 = (((x249==x250)/x251)/x252);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = 262028255LLU;
	int8_t x255 = INT8_MAX;
	int16_t x256 = INT16_MIN;
	int32_t t60 = 1;

	t60 = (((x253==x254)/x255)/x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x258 = INT64_MIN;
	volatile int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MIN;
	volatile int32_t t61 = 15056;

	t61 = (((x257==x258)/x259)/x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x261 = 36570985048LLU;
	int64_t x262 = INT64_MIN;
	volatile int8_t x264 = -1;

	t62 = (((x261==x262)/x263)/x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = UINT16_MAX;
	volatile uint32_t x267 = UINT32_MAX;
	int8_t x268 = 32;
	volatile uint32_t t63 = 258219957U;

	t63 = (((x265==x266)/x267)/x268);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = -21LL;
	int8_t x270 = -1;
	uint8_t x271 = UINT8_MAX;
	volatile int32_t t64 = -462217651;

	t64 = (((x269==x270)/x271)/x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x273 = INT64_MIN;
	int64_t x274 = INT64_MIN;
	int32_t x275 = -1;
	volatile uint8_t x276 = 1U;
	int32_t t65 = -7;

	t65 = (((x273==x274)/x275)/x276);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = INT32_MIN;
	volatile int8_t x278 = -1;
	uint32_t x279 = 61184U;
	int32_t x280 = INT32_MIN;
	volatile uint32_t t66 = 693809820U;

	t66 = (((x277==x278)/x279)/x280);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x282 = 6425346U;
	static volatile int64_t x283 = INT64_MAX;
	int8_t x284 = INT8_MIN;
	int64_t t67 = 355456300430LL;

	t67 = (((x281==x282)/x283)/x284);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x286 = INT16_MIN;
	uint16_t x287 = 7980U;
	uint32_t x288 = 847987U;
	uint32_t t68 = 1823272207U;

	t68 = (((x285==x286)/x287)/x288);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = -1;
	volatile int8_t x290 = INT8_MAX;
	int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MAX;
	int64_t t69 = 4223643447129943285LL;

	t69 = (((x289==x290)/x291)/x292);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x294 = INT64_MIN;
	static int16_t x295 = INT16_MAX;
	int32_t x296 = 119;
	volatile int32_t t70 = -1;

	t70 = (((x293==x294)/x295)/x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x301 = 23250LL;
	int32_t x302 = INT32_MIN;
	int64_t x303 = -1LL;
	int64_t x304 = -16686302795LL;
	int64_t t71 = 1652251192935LL;

	t71 = (((x301==x302)/x303)/x304);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = UINT8_MAX;
	int16_t x306 = INT16_MIN;
	volatile uint16_t x308 = 350U;

	t72 = (((x305==x306)/x307)/x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = 193U;
	int32_t x310 = -75;
	int64_t x311 = -1LL;
	uint8_t x312 = UINT8_MAX;
	int64_t t73 = -291388LL;

	t73 = (((x309==x310)/x311)/x312);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x313 = INT64_MIN;
	uint32_t x314 = 170U;
	static int8_t x315 = -1;
	static int8_t x316 = INT8_MIN;
	static int32_t t74 = 421270761;

	t74 = (((x313==x314)/x315)/x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x318 = 604714713LLU;
	uint32_t x319 = UINT32_MAX;
	uint8_t x320 = 1U;
	uint32_t t75 = 185116330U;

	t75 = (((x317==x318)/x319)/x320);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x322 = INT8_MAX;
	static int32_t x323 = -13;
	int16_t x324 = INT16_MIN;

	t76 = (((x321==x322)/x323)/x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x325 = 465242713LLU;
	int8_t x326 = 9;
	uint64_t x327 = 95724LLU;
	uint8_t x328 = 30U;

	t77 = (((x325==x326)/x327)/x328);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x329 = INT8_MIN;
	int16_t x330 = INT16_MIN;
	static uint8_t x331 = UINT8_MAX;
	int32_t x332 = -1;
	int32_t t78 = -90611;

	t78 = (((x329==x330)/x331)/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = 382305;
	int64_t x334 = -1LL;
	volatile uint8_t x335 = UINT8_MAX;
	volatile int16_t x336 = INT16_MIN;
	static volatile int32_t t79 = -5814692;

	t79 = (((x333==x334)/x335)/x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x337 = 56U;
	int16_t x339 = 1000;
	static uint64_t x340 = 57628627340LLU;

	t80 = (((x337==x338)/x339)/x340);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = -14;
	uint64_t x342 = 3921LLU;
	static uint32_t x343 = 127U;
	volatile uint16_t x344 = UINT16_MAX;
	static volatile uint32_t t81 = 165575197U;

	t81 = (((x341==x342)/x343)/x344);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = INT32_MAX;
	volatile int16_t x347 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	int64_t t82 = 4424484534124814917LL;

	t82 = (((x345==x346)/x347)/x348);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = 57U;
	int16_t x350 = INT16_MIN;
	int8_t x352 = INT8_MIN;
	static volatile uint64_t t83 = 7953LLU;

	t83 = (((x349==x350)/x351)/x352);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x354 = -1;
	uint64_t x355 = 883652642567901LLU;
	uint64_t t84 = 135361207376626390LLU;

	t84 = (((x353==x354)/x355)/x356);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = 49386;
	int8_t x358 = -1;
	int16_t x359 = -58;
	uint32_t x360 = UINT32_MAX;
	volatile uint32_t t85 = 257397725U;

	t85 = (((x357==x358)/x359)/x360);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x364 = INT8_MIN;
	volatile int32_t t86 = 11211488;

	t86 = (((x361==x362)/x363)/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x366 = UINT16_MAX;
	int16_t x368 = -78;
	uint64_t t87 = 436110LLU;

	t87 = (((x365==x366)/x367)/x368);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x373 = 1;
	int32_t x375 = -7073;
	volatile uint8_t x376 = 6U;
	static volatile int32_t t88 = -915;

	t88 = (((x373==x374)/x375)/x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = INT8_MIN;
	uint64_t x378 = 13LLU;
	uint64_t x380 = UINT64_MAX;
	static volatile uint64_t t89 = 516974631LLU;

	t89 = (((x377==x378)/x379)/x380);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = -1876;
	uint16_t x382 = UINT16_MAX;
	volatile uint32_t x383 = 7034U;
	static uint8_t x384 = 18U;
	static volatile uint32_t t90 = 0U;

	t90 = (((x381==x382)/x383)/x384);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x385 = 0;
	int8_t x387 = INT8_MAX;
	int32_t t91 = -543584829;

	t91 = (((x385==x386)/x387)/x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = -31167;
	int32_t x390 = INT32_MIN;
	uint8_t x391 = UINT8_MAX;
	int64_t x392 = INT64_MAX;
	int64_t t92 = -25074962841461LL;

	t92 = (((x389==x390)/x391)/x392);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MIN;
	int8_t x395 = -1;
	volatile int8_t x396 = INT8_MIN;
	static volatile int32_t t93 = -498017048;

	t93 = (((x393==x394)/x395)/x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x397 = -7;
	volatile int8_t x398 = -1;
	uint8_t x399 = 1U;
	int32_t x400 = INT32_MIN;

	t94 = (((x397==x398)/x399)/x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x401 = 1U;
	int16_t x402 = -163;
	volatile int16_t x403 = INT16_MIN;
	static volatile int32_t t95 = -83593977;

	t95 = (((x401==x402)/x403)/x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x407 = -1;
	int8_t x408 = INT8_MIN;
	volatile int32_t t96 = 36;

	t96 = (((x405==x406)/x407)/x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = -136014999084422LL;
	uint16_t x410 = 6U;
	volatile uint8_t x411 = 47U;
	int32_t x412 = -1;

	t97 = (((x409==x410)/x411)/x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = INT32_MIN;
	int32_t x414 = 45560372;
	volatile int64_t x415 = INT64_MAX;
	int32_t x416 = INT32_MIN;

	t98 = (((x413==x414)/x415)/x416);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x417 = 1;
	int64_t x419 = INT64_MIN;
	volatile int64_t t99 = -224058001358LL;

	t99 = (((x417==x418)/x419)/x420);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

