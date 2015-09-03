#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x8 = 9895U;
volatile int64_t t1 = 3108167513313LL;
volatile uint32_t x9 = UINT32_MAX;
uint16_t x10 = 1U;
int32_t x18 = INT32_MIN;
int32_t x19 = -1;
uint64_t x21 = UINT64_MAX;
int64_t x35 = INT64_MIN;
int32_t x41 = INT32_MIN;
static int32_t x46 = INT32_MAX;
uint64_t x57 = 3101LLU;
uint32_t x60 = UINT32_MAX;
volatile int64_t t15 = 456577827LL;
static uint32_t x69 = 31151U;
uint64_t x74 = 2935155LLU;
static int16_t x91 = INT16_MAX;
static uint16_t x101 = 27U;
int8_t x104 = INT8_MAX;
int16_t x106 = INT16_MIN;
int8_t x108 = INT8_MIN;
int32_t x109 = INT32_MAX;
static int64_t x114 = INT64_MAX;
static uint16_t x117 = 7131U;
volatile int64_t t30 = -190986990979LL;
int8_t x133 = -1;
int8_t x143 = INT8_MAX;
static int64_t x158 = -1LL;
int16_t x159 = 3;
int64_t t40 = -6585942023444168LL;
static int8_t x165 = 55;
volatile uint64_t x173 = UINT64_MAX;
uint8_t x176 = 83U;
static uint64_t x177 = 125929041LLU;
volatile uint64_t t44 = 3905LLU;
int16_t x181 = INT16_MAX;
uint8_t x189 = 20U;
static int32_t x191 = 786488;
uint16_t x193 = 6955U;
uint32_t x195 = UINT32_MAX;
int32_t x196 = INT32_MIN;
volatile uint32_t t48 = 2727396U;
static volatile int8_t x204 = -1;
int32_t x208 = INT32_MIN;
int8_t x213 = INT8_MIN;
static int32_t x222 = -114;
int64_t x225 = INT64_MAX;
uint32_t x229 = UINT32_MAX;
static volatile uint32_t x230 = 2029708794U;
volatile int8_t x234 = INT8_MIN;
uint64_t t57 = 7640554534LLU;
volatile int32_t t58 = 59428701;
volatile int32_t x242 = INT32_MAX;
uint64_t x253 = UINT64_MAX;
int64_t x259 = INT64_MIN;
int64_t t63 = -2836LL;
int64_t x261 = -1LL;
int32_t x262 = -1;
int32_t x271 = -4;
volatile int16_t x273 = INT16_MAX;
volatile int16_t x280 = 472;
uint64_t t70 = 2778746979023295LLU;
int8_t x290 = -1;
volatile int64_t t71 = -27941626220421LL;
int64_t x299 = -352957LL;
int8_t x302 = -1;
uint64_t x304 = 8952024516227607LLU;
volatile int64_t x305 = -682339772303495306LL;
int16_t x307 = INT16_MAX;
volatile int16_t x310 = INT16_MIN;
static volatile int32_t t76 = 49852;
static int32_t x316 = -1;
int64_t x325 = 903LL;
volatile int64_t t80 = 1022090LL;
static int32_t t81 = -26045;
uint8_t x341 = 36U;
volatile uint8_t x361 = 15U;
int64_t t88 = -395259624770LL;
volatile int32_t x369 = -1;
uint32_t x372 = 649565U;
volatile int64_t t90 = 268329533260LL;
static uint8_t x375 = 5U;
static int64_t x376 = INT64_MIN;
int8_t x379 = INT8_MIN;
int64_t x382 = INT64_MAX;
volatile int64_t x386 = INT64_MAX;
volatile int8_t x387 = -1;
uint16_t x395 = UINT16_MAX;
static int32_t x398 = -294404677;
uint8_t x401 = 82U;
uint64_t x402 = 1025240275440LLU;
int16_t x404 = 2;
static volatile int16_t x407 = 1;


void f0(void) {
	volatile uint16_t x1 = 13545U;
	int16_t x2 = INT16_MAX;
	uint32_t x3 = 94790163U;
	static int16_t x4 = 1845;
	volatile uint32_t t0 = 2798249U;

	t0 = ((x1/(x2|x3))/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x5 = 3603U;
	int64_t x6 = INT64_MIN;
	uint32_t x7 = UINT32_MAX;

	t1 = ((x5/(x6|x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x11 = INT8_MAX;
	volatile int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 14867815444596740LL;

	t2 = ((x9/(x10|x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	static uint16_t x14 = 8U;
	int64_t x15 = -1LL;
	int8_t x16 = 1;
	volatile int64_t t3 = 2LL;

	t3 = ((x13/(x14|x15))/x16);

	if (t3 != -127LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 10U;
	uint64_t x20 = UINT64_MAX;
	uint64_t t4 = 105LLU;

	t4 = ((x17/(x18|x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x22 = 105LLU;
	volatile int64_t x23 = -5LL;
	volatile uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 3237858354LLU;

	t5 = ((x21/(x22|x23))/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 831LL;
	int16_t x26 = -9905;
	int32_t x27 = -27592775;
	uint32_t x28 = 8157U;
	static int64_t t6 = 238LL;

	t6 = ((x25/(x26|x27))/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = UINT32_MAX;
	volatile int32_t x30 = -1;
	int32_t x31 = 0;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 50962261817638938LL;

	t7 = ((x29/(x30|x31))/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	int16_t x36 = INT16_MIN;
	static int64_t t8 = -1846175586167LL;

	t8 = ((x33/(x34|x35))/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	volatile int8_t x38 = -3;
	uint32_t x39 = UINT32_MAX;
	static int64_t x40 = -124353LL;
	int64_t t9 = -4167289239839LL;

	t9 = ((x37/(x38|x39))/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x42 = 2U;
	volatile uint8_t x43 = UINT8_MAX;
	static volatile uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -2;

	t10 = ((x41/(x42|x43))/x44);

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 506;
	volatile int8_t x47 = INT8_MIN;
	static volatile uint32_t x48 = 19489U;
	uint32_t t11 = 15U;

	t11 = ((x45/(x46|x47))/x48);

	if (t11 != 220379U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = 1;
	uint64_t x50 = 10708600615386068LLU;
	int8_t x51 = INT8_MIN;
	volatile int64_t x52 = 35034894LL;
	volatile uint64_t t12 = 7LLU;

	t12 = ((x49/(x50|x51))/x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	static uint32_t x54 = 384U;
	uint32_t x55 = 6312401U;
	uint64_t x56 = 9258006671LLU;
	static volatile uint64_t t13 = 856219575560430371LLU;

	t13 = ((x53/(x54|x55))/x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = -1;
	uint64_t x59 = UINT64_MAX;
	uint64_t t14 = 128283774095153LLU;

	t14 = ((x57/(x58|x59))/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 9989594LL;
	int8_t x62 = INT8_MIN;
	volatile int16_t x63 = INT16_MIN;
	uint16_t x64 = 3U;

	t15 = ((x61/(x62|x63))/x64);

	if (t15 != -26014LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MAX;
	int8_t x66 = 6;
	int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MAX;
	volatile int64_t t16 = -302135066658099310LL;

	t16 = ((x65/(x66|x67))/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x70 = 1U;
	int32_t x71 = INT32_MAX;
	volatile int64_t x72 = 327776413LL;
	volatile int64_t t17 = -8454035128LL;

	t17 = ((x69/(x70|x71))/x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	int32_t x75 = -560841796;
	uint64_t x76 = 211LLU;
	uint64_t t18 = 80514LLU;

	t18 = ((x73/(x74|x75))/x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int8_t x78 = INT8_MIN;
	int8_t x79 = -6;
	int16_t x80 = -6848;
	volatile int32_t t19 = 443;

	t19 = ((x77/(x78|x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	static volatile int16_t x82 = INT16_MAX;
	uint8_t x83 = 7U;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 102737778;

	t20 = ((x81/(x82|x83))/x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1658;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = UINT16_MAX;
	static uint16_t x88 = UINT16_MAX;
	int32_t t21 = -1;

	t21 = ((x85/(x86|x87))/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	uint64_t x90 = UINT64_MAX;
	static int64_t x92 = INT64_MAX;
	uint64_t t22 = 46967969257862106LLU;

	t22 = ((x89/(x90|x91))/x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	int32_t x94 = -1;
	int8_t x95 = -1;
	int32_t x96 = 1047269778;
	int32_t t23 = -1671;

	t23 = ((x93/(x94|x95))/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = UINT64_MAX;
	volatile uint16_t x98 = UINT16_MAX;
	int8_t x99 = -1;
	static volatile int32_t x100 = INT32_MIN;
	volatile uint64_t t24 = 4135930126592LLU;

	t24 = ((x97/(x98|x99))/x100);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = 40U;
	static uint64_t x103 = UINT64_MAX;
	uint64_t t25 = 57233893669454931LLU;

	t25 = ((x101/(x102|x103))/x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x105 = UINT16_MAX;
	volatile int16_t x107 = INT16_MIN;
	int32_t t26 = -188801781;

	t26 = ((x105/(x106|x107))/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x110 = -1;
	static int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MIN;
	int64_t t27 = 0LL;

	t27 = ((x109/(x110|x111))/x112);

	if (t27 != 65535LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MAX;
	int32_t x115 = 1477465;
	int8_t x116 = -9;
	volatile int64_t t28 = 210537LL;

	t28 = ((x113/(x114|x115))/x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = -1;
	volatile int32_t x119 = INT32_MAX;
	uint64_t x120 = 6LLU;
	static volatile uint64_t t29 = 24050855112LLU;

	t29 = ((x117/(x118|x119))/x120);

	if (t29 != 3074457345618257414LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	int64_t x122 = 5468207884843LL;
	int16_t x123 = 11717;
	volatile int64_t x124 = 751229368694008117LL;

	t30 = ((x121/(x122|x123))/x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -24698;
	uint64_t x126 = UINT64_MAX;
	volatile int64_t x127 = 54959450LL;
	uint32_t x128 = UINT32_MAX;
	uint64_t t31 = 25316LLU;

	t31 = ((x125/(x126|x127))/x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	volatile int16_t x130 = 0;
	int64_t x131 = INT64_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t32 = 965981301107952LLU;

	t32 = ((x129/(x130|x131))/x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = 148544914U;
	int8_t x135 = -1;
	int32_t x136 = 35622;
	uint32_t t33 = 1U;

	t33 = ((x133/(x134|x135))/x136);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	uint32_t x138 = 6U;
	int64_t x139 = INT64_MIN;
	volatile int8_t x140 = INT8_MIN;
	volatile int64_t t34 = -5830LL;

	t34 = ((x137/(x138|x139))/x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 1720839U;
	volatile int32_t x142 = INT32_MIN;
	volatile uint16_t x144 = UINT16_MAX;
	uint32_t t35 = 1U;

	t35 = ((x141/(x142|x143))/x144);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	volatile uint64_t x146 = 5590606298788115LLU;
	int64_t x147 = INT64_MIN;
	volatile int8_t x148 = INT8_MIN;
	volatile uint64_t t36 = 760902LLU;

	t36 = ((x145/(x146|x147))/x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x149 = -1;
	int64_t x150 = INT64_MAX;
	volatile uint8_t x151 = UINT8_MAX;
	int8_t x152 = INT8_MIN;
	static volatile int64_t t37 = -5264LL;

	t37 = ((x149/(x150|x151))/x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile uint8_t x154 = UINT8_MAX;
	int32_t x155 = INT32_MAX;
	int32_t x156 = 26366258;
	volatile int32_t t38 = -15524;

	t38 = ((x153/(x154|x155))/x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -2LL;
	int32_t x160 = 1316;
	static volatile int64_t t39 = -15LL;

	t39 = ((x157/(x158|x159))/x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -5792080;
	int32_t x162 = -1;
	int64_t x163 = -1LL;
	volatile int8_t x164 = INT8_MIN;

	t40 = ((x161/(x162|x163))/x164);

	if (t40 != -45250LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x166 = -12;
	int8_t x167 = INT8_MIN;
	uint16_t x168 = 60U;
	int32_t t41 = -968498548;

	t41 = ((x165/(x166|x167))/x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = 360U;
	static int32_t x170 = INT32_MIN;
	static uint64_t x171 = 7347LLU;
	int64_t x172 = -28679348839LL;
	uint64_t t42 = 62123800LLU;

	t42 = ((x169/(x170|x171))/x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x174 = INT8_MIN;
	uint8_t x175 = 31U;
	uint64_t t43 = 933LLU;

	t43 = ((x173/(x174|x175))/x176);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x178 = INT16_MIN;
	static volatile uint64_t x179 = UINT64_MAX;
	uint8_t x180 = 74U;

	t44 = ((x177/(x178|x179))/x180);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = UINT32_MAX;
	volatile int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	int64_t t45 = -4433175825704539619LL;

	t45 = ((x181/(x182|x183))/x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 107U;
	volatile int16_t x186 = -15;
	int64_t x187 = INT64_MIN;
	int32_t x188 = INT32_MIN;
	int64_t t46 = 686599873040047648LL;

	t46 = ((x185/(x186|x187))/x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x190 = 448;
	int64_t x192 = -1LL;
	int64_t t47 = 4248889243LL;

	t47 = ((x189/(x190|x191))/x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x194 = INT32_MIN;

	t48 = ((x193/(x194|x195))/x196);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x201 = 1;
	uint32_t x202 = 976794192U;
	static int8_t x203 = INT8_MAX;
	static volatile uint32_t t49 = 203328916U;

	t49 = ((x201/(x202|x203))/x204);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = -31;
	int16_t x206 = INT16_MIN;
	uint32_t x207 = UINT32_MAX;
	volatile uint32_t t50 = 9597U;

	t50 = ((x205/(x206|x207))/x208);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = 11334331LL;
	static int8_t x210 = 13;
	volatile int32_t x211 = INT32_MIN;
	static int64_t x212 = -1LL;
	volatile int64_t t51 = -39208584429LL;

	t51 = ((x209/(x210|x211))/x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x214 = UINT16_MAX;
	int32_t x215 = -30;
	int16_t x216 = -1;
	int32_t t52 = -18288;

	t52 = ((x213/(x214|x215))/x216);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = -860273965612LL;
	uint16_t x218 = UINT16_MAX;
	int32_t x219 = -11674818;
	int32_t x220 = INT32_MIN;
	volatile int64_t t53 = -1596622959422LL;

	t53 = ((x217/(x218|x219))/x220);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = 13U;
	static uint8_t x223 = UINT8_MAX;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t54 = -137209356885LL;

	t54 = ((x221/(x222|x223))/x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x226 = 44U;
	int8_t x227 = INT8_MIN;
	int32_t x228 = -40210;
	volatile int64_t t55 = 495055029983116LL;

	t55 = ((x225/(x226|x227))/x228);

	if (t55 != -53406LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;
	int64_t t56 = -6507779LL;

	t56 = ((x229/(x230|x231))/x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x233 = INT16_MIN;
	uint64_t x235 = UINT64_MAX;
	volatile int32_t x236 = INT32_MAX;

	t57 = ((x233/(x234|x235))/x236);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = -1;
	int8_t x239 = -1;
	static volatile int32_t x240 = INT32_MIN;

	t58 = ((x237/(x238|x239))/x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = -1;
	int16_t x243 = INT16_MAX;
	int8_t x244 = -1;
	static volatile int32_t t59 = -12;

	t59 = ((x241/(x242|x243))/x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = -3233;
	int32_t x246 = INT32_MIN;
	volatile int64_t x247 = INT64_MAX;
	static volatile int64_t x248 = INT64_MIN;
	int64_t t60 = -2109099105839769LL;

	t60 = ((x245/(x246|x247))/x248);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x249 = 19958U;
	uint8_t x250 = UINT8_MAX;
	static int8_t x251 = 14;
	int16_t x252 = 1;
	volatile int32_t t61 = 101336;

	t61 = ((x249/(x250|x251))/x252);

	if (t61 != 78) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x254 = 1;
	int64_t x255 = INT64_MAX;
	int64_t x256 = -1LL;
	uint64_t t62 = 43685967459LLU;

	t62 = ((x253/(x254|x255))/x256);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x257 = UINT32_MAX;
	int32_t x258 = INT32_MIN;
	int8_t x260 = -1;

	t63 = ((x257/(x258|x259))/x260);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x263 = -1;
	volatile int32_t x264 = 2;
	static int64_t t64 = 565649469LL;

	t64 = ((x261/(x262|x263))/x264);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = INT64_MIN;
	int8_t x266 = 2;
	int8_t x267 = INT8_MIN;
	int16_t x268 = 84;
	volatile int64_t t65 = 15532140941LL;

	t65 = ((x265/(x266|x267))/x268);

	if (t65 != 871444825855515LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = UINT32_MAX;
	volatile uint32_t x270 = 947U;
	volatile int16_t x272 = INT16_MIN;
	uint32_t t66 = 13543380U;

	t66 = ((x269/(x270|x271))/x272);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x274 = UINT8_MAX;
	static uint32_t x275 = 274U;
	uint16_t x276 = UINT16_MAX;
	uint32_t t67 = 1944949313U;

	t67 = ((x273/(x274|x275))/x276);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x277 = -50;
	int32_t x278 = INT32_MIN;
	int64_t x279 = INT64_MAX;
	volatile int64_t t68 = 91LL;

	t68 = ((x277/(x278|x279))/x280);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x281 = UINT64_MAX;
	static uint16_t x282 = UINT16_MAX;
	int32_t x283 = INT32_MIN;
	static int32_t x284 = INT32_MAX;
	uint64_t t69 = 4LLU;

	t69 = ((x281/(x282|x283))/x284);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x285 = 3U;
	int64_t x286 = INT64_MAX;
	uint64_t x287 = 128LLU;
	volatile int16_t x288 = -1;

	t70 = ((x285/(x286|x287))/x288);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = UINT16_MAX;
	volatile int8_t x291 = INT8_MIN;
	int64_t x292 = -73033609332LL;

	t71 = ((x289/(x290|x291))/x292);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x293 = INT16_MAX;
	int32_t x294 = -5896687;
	int16_t x295 = -1;
	uint32_t x296 = UINT32_MAX;
	uint32_t t72 = 6251U;

	t72 = ((x293/(x294|x295))/x296);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = 225;
	int64_t x298 = -61828097108262LL;
	int16_t x300 = -66;
	volatile int64_t t73 = 1868389000483LL;

	t73 = ((x297/(x298|x299))/x300);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x301 = INT64_MAX;
	uint64_t x303 = UINT64_MAX;
	uint64_t t74 = 315391032857LLU;

	t74 = ((x301/(x302|x303))/x304);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x306 = INT32_MIN;
	uint32_t x308 = 48749801U;
	volatile int64_t t75 = 131622364357813109LL;

	t75 = ((x305/(x306|x307))/x308);

	if (t75 != 6LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MIN;
	volatile int16_t x311 = INT16_MIN;
	static int16_t x312 = -285;

	t76 = ((x309/(x310|x311))/x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x313 = -1LL;
	int16_t x314 = INT16_MIN;
	volatile uint64_t x315 = 41629063448LLU;
	uint64_t t77 = 1021701308611787LLU;

	t77 = ((x313/(x314|x315))/x316);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = INT16_MAX;
	int32_t x318 = 120031;
	volatile uint16_t x319 = UINT16_MAX;
	int64_t x320 = -10793197LL;
	volatile int64_t t78 = -28418596LL;

	t78 = ((x317/(x318|x319))/x320);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x321 = 27U;
	volatile int8_t x322 = -1;
	static int16_t x323 = 1;
	uint32_t x324 = 21U;
	volatile uint32_t t79 = 53U;

	t79 = ((x321/(x322|x323))/x324);

	if (t79 != 204522250U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x326 = INT64_MIN;
	int64_t x327 = INT64_MAX;
	static volatile uint32_t x328 = UINT32_MAX;

	t80 = ((x325/(x326|x327))/x328);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x329 = UINT16_MAX;
	static int32_t x330 = INT32_MAX;
	static uint16_t x331 = 1992U;
	int32_t x332 = 5;

	t81 = ((x329/(x330|x331))/x332);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x333 = INT16_MIN;
	volatile uint32_t x334 = 7U;
	uint32_t x335 = 51339018U;
	volatile int64_t x336 = -1LL;
	int64_t t82 = -2988910985747LL;

	t82 = ((x333/(x334|x335))/x336);

	if (t82 != -83LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MAX;
	int8_t x339 = INT8_MIN;
	int16_t x340 = -1;
	volatile uint64_t t83 = 1453925762625786844LLU;

	t83 = ((x337/(x338|x339))/x340);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x342 = -1;
	int64_t x343 = -2945LL;
	static int16_t x344 = INT16_MIN;
	volatile int64_t t84 = -811927416400513506LL;

	t84 = ((x341/(x342|x343))/x344);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = -1;
	int8_t x346 = 1;
	int32_t x347 = -1;
	int16_t x348 = -1;
	static int32_t t85 = 2262;

	t85 = ((x345/(x346|x347))/x348);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x353 = 232610444936201607LL;
	int16_t x354 = INT16_MIN;
	static int16_t x355 = -1;
	volatile uint8_t x356 = UINT8_MAX;
	volatile int64_t t86 = 1707LL;

	t86 = ((x353/(x354|x355))/x356);

	if (t86 != -912197823279221LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x357 = UINT64_MAX;
	volatile int8_t x358 = -1;
	static uint16_t x359 = 24U;
	int64_t x360 = 13743LL;
	volatile uint64_t t87 = 1651LLU;

	t87 = ((x357/(x358|x359))/x360);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x362 = INT64_MIN;
	int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MIN;

	t88 = ((x361/(x362|x363))/x364);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x366 = 1U;
	volatile int16_t x367 = -503;
	static uint64_t x368 = 23799670342611869LLU;
	uint64_t t89 = 524909965081857844LLU;

	t89 = ((x365/(x366|x367))/x368);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x370 = INT16_MIN;
	static int64_t x371 = -1LL;

	t90 = ((x369/(x370|x371))/x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = -3195227175567413520LL;
	volatile int16_t x374 = -1;
	int64_t t91 = -9877299570LL;

	t91 = ((x373/(x374|x375))/x376);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x377 = 38226U;
	int16_t x378 = INT16_MAX;
	static uint32_t x380 = 21U;
	volatile uint32_t t92 = 69U;

	t92 = ((x377/(x378|x379))/x380);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = INT32_MIN;
	volatile int8_t x383 = INT8_MIN;
	uint64_t x384 = 32862506676418LLU;
	static volatile uint64_t t93 = 21548295098040LLU;

	t93 = ((x381/(x382|x383))/x384);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x385 = 4301U;
	int16_t x388 = INT16_MAX;
	volatile int64_t t94 = -19317708282LL;

	t94 = ((x385/(x386|x387))/x388);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x389 = 81U;
	volatile int16_t x390 = 419;
	int16_t x391 = INT16_MAX;
	int16_t x392 = 106;
	static volatile int32_t t95 = -248;

	t95 = ((x389/(x390|x391))/x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x393 = 3U;
	static int8_t x394 = 48;
	static int64_t x396 = INT64_MAX;
	int64_t t96 = -37953LL;

	t96 = ((x393/(x394|x395))/x396);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x397 = INT32_MIN;
	volatile int64_t x399 = 26423LL;
	int8_t x400 = -1;
	int64_t t97 = 16529349553124LL;

	t97 = ((x397/(x398|x399))/x400);

	if (t97 != -7LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x403 = 7431012273800LLU;
	volatile uint64_t t98 = 6430780401LLU;

	t98 = ((x401/(x402|x403))/x404);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = -1;
	static uint16_t x406 = UINT16_MAX;
	static int32_t x408 = 1000;
	int32_t t99 = 974166;

	t99 = ((x405/(x406|x407))/x408);

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

