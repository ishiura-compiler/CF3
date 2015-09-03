#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 64U;
int32_t x2 = INT32_MIN;
uint64_t x8 = 23LLU;
uint16_t x11 = 710U;
int32_t x14 = -78;
static int8_t x19 = INT8_MIN;
int8_t x20 = -1;
static volatile int32_t t4 = -182864;
int8_t x21 = INT8_MIN;
int8_t x24 = -1;
uint64_t x29 = 6975745508531999501LLU;
static volatile uint64_t x32 = UINT64_MAX;
int16_t x41 = -1;
static volatile int16_t x43 = -13;
int32_t x54 = -2;
int64_t x55 = -34021608182153186LL;
int64_t x56 = INT64_MIN;
uint8_t x57 = 4U;
static int64_t x58 = 26566314LL;
volatile uint16_t x75 = UINT16_MAX;
static uint8_t x76 = 1U;
int64_t x79 = -1LL;
volatile int32_t x81 = INT32_MIN;
volatile int8_t x83 = INT8_MIN;
int64_t x93 = INT64_MIN;
uint64_t t22 = 46745LLU;
uint64_t x114 = 1LLU;
uint64_t t25 = 182941LLU;
int8_t x121 = INT8_MIN;
static uint8_t x125 = 81U;
uint16_t x135 = 1759U;
int8_t x136 = INT8_MAX;
int8_t x137 = 13;
uint32_t t30 = 200435U;
static int32_t t32 = 95;
static uint32_t x161 = 768562555U;
uint32_t t35 = UINT32_MAX;
int64_t x177 = 10892667914231LL;
int64_t t38 = -57942377LL;
int8_t x185 = INT8_MAX;
static int8_t x189 = INT8_MIN;
int64_t x201 = -1446LL;
int16_t x204 = -1;
int64_t t43 = -30861438LL;
volatile int64_t x205 = -1LL;
uint32_t x206 = 36U;
uint32_t x210 = UINT32_MAX;
volatile int16_t x212 = INT16_MIN;
uint32_t t45 = 1572769U;
int32_t x214 = INT32_MIN;
uint32_t t46 = 3U;
int32_t x229 = -1;
volatile uint64_t x230 = 96154753167386LLU;
volatile uint64_t t50 = 15655735LLU;
int32_t x234 = -1;
uint64_t x236 = UINT64_MAX;
static uint32_t x241 = 551229832U;
int8_t x242 = -1;
volatile uint64_t x243 = UINT64_MAX;
volatile uint64_t t53 = 2042950483494LLU;
static int32_t x248 = -1;
int32_t t54 = -460456;
int64_t t55 = -1LL;
volatile int64_t x263 = -29416489975LL;
int64_t x264 = INT64_MIN;
static int64_t t56 = 3531LL;
int16_t x267 = -16;
int8_t x269 = INT8_MAX;
uint8_t x271 = UINT8_MAX;
static volatile int32_t x273 = -1;
int64_t t59 = -2980159LL;
uint64_t x279 = 14LLU;
int8_t x280 = INT8_MAX;
static int32_t x289 = -1;
static volatile int64_t x296 = -14037293998347LL;
static int16_t x299 = INT16_MIN;
int16_t x301 = INT16_MIN;
uint8_t x304 = 3U;
uint32_t t69 = 269333672U;
uint16_t x325 = UINT16_MAX;
static uint32_t x327 = 2U;
int8_t x328 = INT8_MAX;
int64_t x331 = -1LL;
uint32_t x347 = UINT32_MAX;
volatile uint16_t x348 = UINT16_MAX;
uint16_t x366 = 0U;
int16_t x372 = INT16_MIN;
int64_t x373 = 74542LL;
int64_t t80 = 2898426259LL;
int64_t x379 = INT64_MAX;
uint16_t x388 = 3964U;
static uint32_t x389 = 6U;
int64_t x390 = -1LL;
uint64_t t84 = 1226919912386126LLU;
int64_t t85 = 25077LL;
volatile int64_t t86 = -118612117766694LL;
uint16_t x415 = UINT16_MAX;
int16_t x416 = INT16_MIN;
int32_t x417 = -1;
int16_t x420 = INT16_MIN;
volatile uint32_t t89 = 1U;
int64_t x421 = 47715LL;
volatile uint16_t x422 = 1828U;
static int64_t x427 = INT64_MIN;
uint32_t x433 = UINT32_MAX;
int32_t x440 = -1840;
static uint8_t x447 = 6U;
int16_t x450 = -91;
int16_t x461 = INT16_MIN;
static int8_t x463 = -12;


void f0(void) {
	uint16_t x3 = UINT16_MAX;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -61219897275303558LL;

	t0 = (((x1+x2)/x3)|x4);

	if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = UINT16_MAX;
	static uint8_t x6 = UINT8_MAX;
	volatile uint16_t x7 = 16073U;
	volatile uint64_t t1 = 101950LLU;

	t1 = (((x5+x6)/x7)|x8);

	if (t1 != 23LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 6652LLU;
	int16_t x10 = 7269;
	int32_t x12 = 2083;
	volatile uint64_t t2 = 3441235908LLU;

	t2 = (((x9+x10)/x11)|x12);

	if (t2 != 2099LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	static int64_t x15 = 91LL;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = INT64_MIN;

	t3 = (((x13+x14)/x15)|x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MAX;
	uint8_t x18 = UINT8_MAX;

	t4 = (((x17+x18)/x19)|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x22 = -242;
	int64_t x23 = INT64_MIN;
	int64_t t5 = 12368112LL;

	t5 = (((x21+x22)/x23)|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	uint64_t x26 = UINT64_MAX;
	volatile uint64_t x27 = 58436LLU;
	static uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (((x25+x26)/x27)|x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -1;
	static volatile int8_t x31 = INT8_MIN;
	static volatile uint64_t t7 = UINT64_MAX;

	t7 = (((x29+x30)/x31)|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 6U;
	uint16_t x34 = UINT16_MAX;
	volatile int32_t x35 = INT32_MIN;
	volatile int32_t x36 = 6964;
	int32_t t8 = 6;

	t8 = (((x33+x34)/x35)|x36);

	if (t8 != 6964) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 34;
	int8_t x38 = 3;
	static int32_t x39 = 897080;
	volatile int16_t x40 = INT16_MAX;
	int32_t t9 = 99;

	t9 = (((x37+x38)/x39)|x40);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = -39152;
	int32_t x44 = -200517;
	static volatile int32_t t10 = -3;

	t10 = (((x41+x42)/x43)|x44);

	if (t10 != -197637) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 528333696063269LLU;
	static uint32_t x46 = 830437235U;
	int16_t x47 = 14551;
	int16_t x48 = -205;
	static uint64_t t11 = 53LLU;

	t11 = (((x45+x46)/x47)|x48);

	if (t11 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 16284;
	uint16_t x50 = 0U;
	int64_t x51 = 915LL;
	int16_t x52 = 16288;
	static int64_t t12 = 131309959453540LL;

	t12 = (((x49+x50)/x51)|x52);

	if (t12 != 16305LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 5455478LLU;
	uint64_t t13 = 202740790938392LLU;

	t13 = (((x53+x54)/x55)|x56);

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x59 = 20604443;
	int64_t x60 = INT64_MIN;
	int64_t t14 = 0LL;

	t14 = (((x57+x58)/x59)|x60);

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 356107377503LLU;
	int64_t x62 = -1LL;
	int64_t x63 = -1LL;
	int16_t x64 = -1;
	uint64_t t15 = UINT64_MAX;

	t15 = (((x61+x62)/x63)|x64);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 15U;
	static int32_t x74 = -9410974;
	static volatile int32_t t16 = -16750802;

	t16 = (((x73+x74)/x75)|x76);

	if (t16 != -143) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x77 = 2340213U;
	static int16_t x78 = INT16_MAX;
	int16_t x80 = INT16_MAX;
	static volatile int64_t t17 = -1991LL;

	t17 = (((x77+x78)/x79)|x80);

	if (t17 != -2359297LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x82 = 32;
	volatile int8_t x84 = -39;
	volatile int32_t t18 = -218860;

	t18 = (((x81+x82)/x83)|x84);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 16;
	int8_t x86 = INT8_MAX;
	static volatile int16_t x87 = 13847;
	int32_t x88 = INT32_MAX;
	volatile int32_t t19 = INT32_MAX;

	t19 = (((x85+x86)/x87)|x88);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = 11;
	int8_t x90 = INT8_MAX;
	uint64_t x91 = 6595661319040863093LLU;
	int8_t x92 = 2;
	uint64_t t20 = 68959493665972253LLU;

	t20 = (((x89+x90)/x91)|x92);

	if (t20 != 2LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x94 = 503433364LL;
	static uint8_t x95 = UINT8_MAX;
	static int64_t x96 = INT64_MIN;
	int64_t t21 = -272657822LL;

	t21 = (((x93+x94)/x95)|x96);

	if (t21 != -36170086417064088LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 14316023476300848LLU;
	int8_t x98 = INT8_MAX;
	int8_t x99 = -61;
	volatile uint16_t x100 = 28U;

	t22 = (((x97+x98)/x99)|x100);

	if (t22 != 28LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x101 = 694U;
	static int16_t x102 = INT16_MAX;
	int8_t x103 = INT8_MAX;
	uint32_t x104 = 12899023U;
	volatile uint32_t t23 = 16923U;

	t23 = (((x101+x102)/x103)|x104);

	if (t23 != 12899279U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x105 = 1;
	int64_t x106 = INT64_MIN;
	int8_t x107 = 1;
	uint8_t x108 = UINT8_MAX;
	volatile int64_t t24 = -1894471250LL;

	t24 = (((x105+x106)/x107)|x108);

	if (t24 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x113 = 781500;
	volatile int64_t x115 = -1LL;
	volatile uint64_t x116 = 364265646924LLU;

	t25 = (((x113+x114)/x115)|x116);

	if (t25 != 364265646924LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x122 = 284116U;
	int32_t x123 = INT32_MIN;
	static uint32_t x124 = 192721U;
	static volatile uint32_t t26 = 3U;

	t26 = (((x121+x122)/x123)|x124);

	if (t26 != 192721U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MIN;
	int32_t x128 = -1;
	volatile int32_t t27 = 164;

	t27 = (((x125+x126)/x127)|x128);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = UINT64_MAX;
	uint64_t x130 = UINT64_MAX;
	static int8_t x131 = -3;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t28 = 58714LLU;

	t28 = (((x129+x130)/x131)|x132);

	if (t28 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x134 = 3U;
	static volatile int32_t t29 = -235;

	t29 = (((x133+x134)/x135)|x136);

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x138 = 57U;
	uint8_t x139 = UINT8_MAX;
	int32_t x140 = INT32_MIN;

	t30 = (((x137+x138)/x139)|x140);

	if (t30 != 2147483648U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = 5894070;
	static int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = 2U;
	int64_t t31 = 272247788614035330LL;

	t31 = (((x141+x142)/x143)|x144);

	if (t31 != 281474976710478LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = UINT8_MAX;
	uint16_t x146 = 9535U;
	int8_t x147 = INT8_MAX;
	int32_t x148 = -20330;

	t32 = (((x145+x146)/x147)|x148);

	if (t32 != -20257) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = 55U;
	volatile int8_t x154 = 55;
	int16_t x155 = INT16_MIN;
	volatile int8_t x156 = -1;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = (((x153+x154)/x155)|x156);

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = 18448959887296748LLU;
	uint8_t x158 = 17U;
	int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	volatile uint64_t t34 = 1046939679LLU;

	t34 = (((x157+x158)/x159)|x160);

	if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x162 = INT16_MIN;
	volatile uint32_t x163 = UINT32_MAX;
	int16_t x164 = -1;

	t35 = (((x161+x162)/x163)|x164);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x165 = -1;
	int8_t x166 = INT8_MIN;
	uint8_t x167 = 94U;
	int16_t x168 = INT16_MAX;
	int32_t t36 = 54840;

	t36 = (((x165+x166)/x167)|x168);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x173 = UINT16_MAX;
	int8_t x174 = INT8_MIN;
	uint8_t x175 = 26U;
	int64_t x176 = INT64_MIN;
	int64_t t37 = -396664472419007292LL;

	t37 = (((x173+x174)/x175)|x176);

	if (t37 != -9223372036854773293LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = 5898U;

	t38 = (((x177+x178)/x179)|x180);

	if (t38 != -198LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x186 = INT32_MIN;
	uint64_t x187 = 671889390409LLU;
	int8_t x188 = 0;
	uint64_t t39 = 50LLU;

	t39 = (((x185+x186)/x187)|x188);

	if (t39 != 27455031LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x190 = 19U;
	uint32_t x191 = 7268U;
	uint64_t x192 = 1LLU;
	volatile uint64_t t40 = 7075771LLU;

	t40 = (((x189+x190)/x191)|x192);

	if (t40 != 590943LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x193 = 16318U;
	int8_t x194 = INT8_MAX;
	static uint8_t x195 = 3U;
	static uint16_t x196 = UINT16_MAX;
	volatile uint32_t t41 = 19995044U;

	t41 = (((x193+x194)/x195)|x196);

	if (t41 != 65535U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x197 = 28LLU;
	volatile uint8_t x198 = UINT8_MAX;
	volatile int32_t x199 = -959733303;
	uint64_t x200 = 27349912088924155LLU;
	uint64_t t42 = 5744973LLU;

	t42 = (((x197+x198)/x199)|x200);

	if (t42 != 27349912088924155LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x202 = 7420;
	int16_t x203 = -1;

	t43 = (((x201+x202)/x203)|x204);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x207 = -1;
	volatile int32_t x208 = INT32_MAX;
	volatile int64_t t44 = 0LL;

	t44 = (((x205+x206)/x207)|x208);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x209 = 1410U;
	int16_t x211 = -1;

	t45 = (((x209+x210)/x211)|x212);

	if (t45 != 4294934528U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = INT32_MAX;
	uint32_t x215 = UINT32_MAX;
	int16_t x216 = 3;

	t46 = (((x213+x214)/x215)|x216);

	if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x217 = -1;
	uint64_t x218 = 1117LLU;
	static int32_t x219 = -8;
	int32_t x220 = 39;
	uint64_t t47 = 545LLU;

	t47 = (((x217+x218)/x219)|x220);

	if (t47 != 39LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MAX;
	volatile int32_t x223 = -1;
	uint64_t x224 = UINT64_MAX;
	uint64_t t48 = UINT64_MAX;

	t48 = (((x221+x222)/x223)|x224);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = -1;
	static int32_t x226 = -446;
	uint8_t x227 = UINT8_MAX;
	int64_t x228 = INT64_MIN;
	int64_t t49 = 535848457880898LL;

	t49 = (((x225+x226)/x227)|x228);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x231 = INT32_MAX;
	int8_t x232 = INT8_MAX;

	t50 = (((x229+x230)/x231)|x232);

	if (t50 != 44799LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = 24532U;
	int8_t x235 = -1;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (((x233+x234)/x235)|x236);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = 1;
	volatile int32_t x238 = 11223;
	static volatile int64_t x239 = INT64_MIN;
	uint8_t x240 = UINT8_MAX;
	volatile int64_t t52 = -173897192035473LL;

	t52 = (((x237+x238)/x239)|x240);

	if (t52 != 255LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x244 = 368011522U;

	t53 = (((x241+x242)/x243)|x244);

	if (t53 != 368011522LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = -1;
	static int16_t x247 = INT16_MIN;

	t54 = (((x245+x246)/x247)|x248);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x253 = UINT32_MAX;
	volatile int64_t x254 = INT64_MIN;
	uint32_t x255 = 7453U;
	int16_t x256 = INT16_MAX;

	t55 = (((x253+x254)/x255)|x256);

	if (t55 != -1237538176892929LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x261 = -1713156817664730LL;
	int16_t x262 = -1;

	t56 = (((x261+x262)/x263)|x264);

	if (t56 != -9223372036854717571LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = INT64_MAX;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (((x265+x266)/x267)|x268);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x270 = 3U;
	static int8_t x272 = INT8_MAX;
	static int32_t t58 = 63546;

	t58 = (((x269+x270)/x271)|x272);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x274 = 1;
	uint32_t x275 = 2U;
	volatile int64_t x276 = 62571143017311LL;

	t59 = (((x273+x274)/x275)|x276);

	if (t59 != 62571143017311LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = -3;
	uint64_t t60 = 3540289LLU;

	t60 = (((x277+x278)/x279)|x280);

	if (t60 != 4735LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x285 = 129U;
	int16_t x286 = 34;
	int64_t x287 = INT64_MAX;
	uint32_t x288 = UINT32_MAX;
	volatile int64_t t61 = -15146469260121LL;

	t61 = (((x285+x286)/x287)|x288);

	if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x290 = 15;
	volatile int64_t x291 = -1LL;
	uint16_t x292 = 0U;
	int64_t t62 = 34490725412LL;

	t62 = (((x289+x290)/x291)|x292);

	if (t62 != -14LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x293 = UINT16_MAX;
	int32_t x294 = INT32_MIN;
	uint8_t x295 = 63U;
	static volatile int64_t t63 = 8116324803LL;

	t63 = (((x293+x294)/x295)|x296);

	if (t63 != -34078721LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x297 = -1;
	int32_t x298 = INT32_MAX;
	int32_t x300 = INT32_MAX;
	int32_t t64 = 3;

	t64 = (((x297+x298)/x299)|x300);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x302 = UINT32_MAX;
	uint16_t x303 = 490U;
	volatile uint32_t t65 = 1U;

	t65 = (((x301+x302)/x303)|x304);

	if (t65 != 8765175U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = 12LLU;
	uint32_t x306 = 43539694U;
	static uint32_t x307 = 1895U;
	static int16_t x308 = INT16_MIN;
	volatile uint64_t t66 = 118319583700623LLU;

	t66 = (((x305+x306)/x307)|x308);

	if (t66 != 18446744073709541824LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x309 = 668435LLU;
	int16_t x310 = -1;
	uint8_t x311 = 25U;
	uint16_t x312 = 14782U;
	volatile uint64_t t67 = 5608078LLU;

	t67 = (((x309+x310)/x311)|x312);

	if (t67 != 31231LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x313 = INT8_MAX;
	uint16_t x314 = 1U;
	static int16_t x315 = INT16_MAX;
	static uint16_t x316 = 16U;
	int32_t t68 = 2;

	t68 = (((x313+x314)/x315)|x316);

	if (t68 != 16) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x317 = -1;
	uint32_t x318 = 553401597U;
	int16_t x319 = INT16_MIN;
	uint8_t x320 = UINT8_MAX;

	t69 = (((x317+x318)/x319)|x320);

	if (t69 != 255U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x326 = INT16_MIN;
	uint32_t t70 = 7308564U;

	t70 = (((x325+x326)/x327)|x328);

	if (t70 != 16383U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x329 = -1LL;
	int64_t x330 = 617771170626203LL;
	uint32_t x332 = UINT32_MAX;
	int64_t t71 = 11553096LL;

	t71 = (((x329+x330)/x331)|x332);

	if (t71 != -617770915987457LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x333 = 2LL;
	static uint64_t x334 = 4731LLU;
	int16_t x335 = INT16_MIN;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (((x333+x334)/x335)|x336);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x337 = 4;
	int32_t x338 = -780;
	int64_t x339 = INT64_MIN;
	int16_t x340 = -13470;
	volatile int64_t t73 = -6LL;

	t73 = (((x337+x338)/x339)|x340);

	if (t73 != -13470LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x341 = INT32_MIN;
	int16_t x342 = 169;
	int64_t x343 = INT64_MIN;
	uint32_t x344 = UINT32_MAX;
	volatile int64_t t74 = -30061759895489LL;

	t74 = (((x341+x342)/x343)|x344);

	if (t74 != 4294967295LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x345 = 57U;
	uint8_t x346 = 3U;
	uint32_t t75 = 738768768U;

	t75 = (((x345+x346)/x347)|x348);

	if (t75 != 65535U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x349 = UINT8_MAX;
	int32_t x350 = -1;
	static uint32_t x351 = 27757U;
	int8_t x352 = 21;
	uint32_t t76 = 3U;

	t76 = (((x349+x350)/x351)|x352);

	if (t76 != 21U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = INT16_MIN;
	static int64_t x362 = -1LL;
	volatile uint16_t x363 = 1U;
	static uint16_t x364 = UINT16_MAX;
	volatile int64_t t77 = 8140LL;

	t77 = (((x361+x362)/x363)|x364);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x365 = 7;
	uint64_t x367 = UINT64_MAX;
	int32_t x368 = INT32_MAX;
	volatile uint64_t t78 = 1543826665LLU;

	t78 = (((x365+x366)/x367)|x368);

	if (t78 != 2147483647LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = INT16_MIN;
	volatile int8_t x370 = 61;
	volatile int64_t x371 = INT64_MAX;
	volatile int64_t t79 = 106502239LL;

	t79 = (((x369+x370)/x371)|x372);

	if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x374 = 316U;
	int8_t x375 = 13;
	int64_t x376 = 342877018688LL;

	t80 = (((x373+x374)/x375)|x376);

	if (t80 != 342877019774LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x377 = INT8_MAX;
	int16_t x378 = INT16_MIN;
	uint64_t x380 = 1LLU;
	static volatile uint64_t t81 = 1875LLU;

	t81 = (((x377+x378)/x379)|x380);

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x385 = -1LL;
	int16_t x386 = 12278;
	int16_t x387 = INT16_MIN;
	int64_t t82 = -19844604LL;

	t82 = (((x385+x386)/x387)|x388);

	if (t82 != 3964LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x391 = 26U;
	int8_t x392 = INT8_MIN;
	int64_t t83 = 12300299219963LL;

	t83 = (((x389+x390)/x391)|x392);

	if (t83 != -128LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x393 = UINT32_MAX;
	uint64_t x394 = 31802LLU;
	int16_t x395 = INT16_MAX;
	int8_t x396 = 3;

	t84 = (((x393+x394)/x395)|x396);

	if (t84 != 131079LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x401 = -972;
	static volatile int16_t x402 = -255;
	uint16_t x403 = 15U;
	int64_t x404 = -1LL;

	t85 = (((x401+x402)/x403)|x404);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x405 = -384960379441LL;
	static int32_t x406 = INT32_MIN;
	int32_t x407 = -13408746;
	int16_t x408 = -1;

	t86 = (((x405+x406)/x407)|x408);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x409 = 149727U;
	static int8_t x410 = INT8_MAX;
	int64_t x411 = -1LL;
	int32_t x412 = 15673608;
	int64_t t87 = -707629LL;

	t87 = (((x409+x410)/x411)|x412);

	if (t87 != -16470LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x413 = INT8_MIN;
	int64_t x414 = -100208369759888LL;
	volatile int64_t t88 = -2901740207617LL;

	t88 = (((x413+x414)/x415)|x416);

	if (t88 != -28524LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x418 = 6894425U;
	static int8_t x419 = INT8_MAX;

	t89 = (((x417+x418)/x419)|x420);

	if (t89 != 4294956046U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x423 = -54;
	static int64_t x424 = INT64_MIN;
	int64_t t90 = 16036LL;

	t90 = (((x421+x422)/x423)|x424);

	if (t90 != -917LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x425 = INT64_MAX;
	static int64_t x426 = INT64_MIN;
	static uint32_t x428 = UINT32_MAX;
	int64_t t91 = -201372LL;

	t91 = (((x425+x426)/x427)|x428);

	if (t91 != 4294967295LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x429 = 0;
	int64_t x430 = INT64_MIN;
	volatile int8_t x431 = INT8_MIN;
	uint32_t x432 = 8669U;
	volatile int64_t t92 = 28872868337136LL;

	t92 = (((x429+x430)/x431)|x432);

	if (t92 != 72057594037936605LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x434 = 264U;
	int32_t x435 = INT32_MIN;
	int64_t x436 = 12549022384446LL;
	static volatile int64_t t93 = 4820LL;

	t93 = (((x433+x434)/x435)|x436);

	if (t93 != 12549022384446LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x437 = UINT32_MAX;
	static uint16_t x438 = 1040U;
	volatile uint32_t x439 = 300U;
	uint32_t t94 = 248U;

	t94 = (((x437+x438)/x439)|x440);

	if (t94 != 4294965459U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x441 = INT32_MIN;
	volatile uint8_t x442 = UINT8_MAX;
	int16_t x443 = -1;
	uint32_t x444 = 823623861U;
	volatile uint32_t t95 = 0U;

	t95 = (((x441+x442)/x443)|x444);

	if (t95 != 2147483573U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x445 = INT32_MAX;
	int16_t x446 = -1;
	uint32_t x448 = UINT32_MAX;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = (((x445+x446)/x447)|x448);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x449 = INT64_MAX;
	uint32_t x451 = 1023608182U;
	int32_t x452 = 2;
	int64_t t97 = 4082442881318632323LL;

	t97 = (((x449+x450)/x451)|x452);

	if (t97 != 9010647043LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x453 = INT64_MAX;
	int8_t x454 = INT8_MIN;
	uint8_t x455 = 14U;
	int64_t x456 = -53079331969LL;
	volatile int64_t t98 = 25964012LL;

	t98 = (((x453+x454)/x455)|x456);

	if (t98 != -18711057537LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x462 = INT16_MIN;
	volatile uint16_t x464 = 7707U;
	int32_t t99 = -5;

	t99 = (((x461+x462)/x463)|x464);

	if (t99 != 8031) { NG(); } else { ; }
	
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

