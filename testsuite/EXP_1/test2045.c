#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = -1LL;
uint32_t x5 = UINT32_MAX;
int32_t x11 = -1;
int16_t x15 = INT16_MAX;
int8_t x19 = -5;
int64_t x41 = INT64_MIN;
int8_t x48 = INT8_MIN;
static int32_t t11 = 21476337;
int64_t x52 = INT64_MIN;
volatile int64_t t12 = 112LL;
uint16_t x67 = 0U;
volatile int64_t t16 = 3259LL;
uint32_t x74 = 6U;
static int16_t x76 = 505;
volatile uint32_t t17 = 16129694U;
int32_t x80 = INT32_MAX;
static int32_t t18 = -3;
uint64_t x84 = 715982173754LLU;
int64_t x87 = 2121LL;
uint32_t x91 = 53U;
static int64_t x94 = 207914994373LL;
static uint64_t x95 = UINT64_MAX;
volatile int64_t x96 = -3405630317693LL;
volatile int16_t x100 = -1;
volatile int32_t t23 = 0;
int8_t x114 = INT8_MIN;
static uint16_t x120 = 1U;
volatile uint64_t t28 = 5301470494035112797LLU;
volatile int64_t t30 = 2369LL;
volatile int32_t x131 = -104940091;
volatile int32_t x147 = INT32_MAX;
uint32_t t34 = 548248U;
uint32_t x149 = 75276U;
int32_t x150 = -3084162;
int64_t t35 = -1530LL;
volatile uint64_t x161 = 3694728685156724LLU;
uint16_t x164 = UINT16_MAX;
int64_t x168 = INT64_MIN;
volatile int32_t x178 = 3526;
static int32_t x180 = INT32_MAX;
volatile int32_t t42 = -1255324;
static int64_t x182 = -1LL;
static volatile uint16_t x200 = 43U;
int16_t x202 = -1;
uint8_t x203 = 0U;
volatile int32_t t48 = -6520;
int8_t x212 = INT8_MIN;
static uint64_t x223 = UINT64_MAX;
uint64_t t51 = 7992701124LLU;
volatile uint32_t x225 = 1281879294U;
static volatile uint16_t x227 = 32U;
uint16_t x228 = UINT16_MAX;
int64_t x229 = 3108197441LL;
volatile uint8_t x239 = 30U;
volatile int64_t x240 = -3925409542LL;
uint64_t x242 = UINT64_MAX;
uint16_t x246 = UINT16_MAX;
volatile int16_t x248 = INT16_MIN;
int64_t x251 = INT64_MIN;
uint64_t x258 = UINT64_MAX;
int64_t x263 = INT64_MAX;
uint16_t x282 = 87U;
static int8_t x284 = -1;
static uint64_t t63 = 14966961LLU;
int64_t x299 = -1LL;
volatile int32_t x310 = -1;
int32_t x318 = INT32_MAX;
uint32_t t70 = 7901883U;
static uint32_t x322 = 893292866U;
int16_t x329 = INT16_MIN;
static int8_t x331 = -1;
static volatile int8_t x340 = INT8_MIN;
volatile int32_t t75 = 13;
int8_t x356 = INT8_MAX;
static int16_t x359 = -7372;
static volatile int32_t t79 = -254;
volatile uint64_t t81 = 61LLU;
volatile uint32_t x372 = 3U;
int64_t x373 = INT64_MAX;
static uint16_t x377 = 0U;
uint64_t x380 = 89980LLU;
volatile int32_t x392 = 38506;
uint8_t x397 = 1U;
volatile int16_t x401 = INT16_MAX;
uint32_t x404 = 817143U;
int32_t x419 = INT32_MAX;
uint64_t x422 = UINT64_MAX;
uint32_t x436 = 12U;
uint16_t x438 = UINT16_MAX;
uint8_t x439 = UINT8_MAX;
int8_t x440 = INT8_MAX;
volatile int8_t x444 = INT8_MIN;


void f0(void) {
	uint64_t x2 = UINT64_MAX;
	int32_t x3 = 198835;
	int8_t x4 = INT8_MIN;
	static volatile uint64_t t0 = 6146910954195189181LLU;

	t0 = (((x1^x2)-x3)/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 96024476206273LL;
	int64_t x7 = -2205809LL;
	int16_t x8 = INT16_MAX;
	int64_t t1 = -6242004827744LL;

	t1 = (((x5^x6)-x7)/x8);

	if (t1 != 2930539525LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int32_t x10 = INT32_MIN;
	static uint32_t x12 = 201625U;
	uint32_t t2 = 755655269U;

	t2 = (((x9^x10)-x11)/x12);

	if (t2 != 10651U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int64_t x14 = -1256430306605LL;
	volatile int8_t x16 = INT8_MIN;
	int64_t t3 = -39494313LL;

	t3 = (((x13^x14)-x15)/x16);

	if (t3 != 9815862027LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 332108U;
	int16_t x18 = INT16_MIN;
	int16_t x20 = -520;
	volatile uint32_t t4 = 668U;

	t4 = (((x17^x18)-x19)/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MAX;
	int64_t x24 = 382917818828LL;
	int64_t t5 = 52620962862719588LL;

	t5 = (((x21^x22)-x23)/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int8_t x26 = INT8_MIN;
	static int16_t x27 = -86;
	static uint32_t x28 = 1190495U;
	uint32_t t6 = 7683254U;

	t6 = (((x25^x26)-x27)/x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1199921U;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = -1;
	static int64_t x32 = -1LL;
	volatile int64_t t7 = 13600937LL;

	t7 = (((x29^x30)-x31)/x32);

	if (t7 != -1224911LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -36;
	static uint64_t x34 = 924LLU;
	static uint8_t x35 = 3U;
	int32_t x36 = -1;
	uint64_t t8 = 70640893761465068LLU;

	t8 = (((x33^x34)-x35)/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = INT32_MIN;
	static volatile int32_t x38 = -1881362;
	int64_t x39 = 1572917324304LL;
	int32_t x40 = -1;
	static int64_t t9 = 37923LL;

	t9 = (((x37^x38)-x39)/x40);

	if (t9 != 1570771722018LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -851816248153LL;
	uint16_t x43 = UINT16_MAX;
	volatile uint16_t x44 = 26U;
	int64_t t10 = 1317659049936LL;

	t10 = (((x41^x42)-x43)/x44);

	if (t10 != 354745045578402389LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	uint8_t x46 = 7U;
	static int8_t x47 = 22;

	t11 = (((x45^x46)-x47)/x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 43;
	volatile int32_t x50 = -1;
	uint32_t x51 = 613066357U;

	t12 = (((x49^x50)-x51)/x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	int8_t x54 = -31;
	volatile uint32_t x55 = 0U;
	int8_t x56 = 11;
	static uint64_t t13 = 18288LLU;

	t13 = (((x53^x54)-x55)/x56);

	if (t13 != 2LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	static volatile int8_t x58 = INT8_MAX;
	static int64_t x59 = -718LL;
	uint32_t x60 = 315U;
	volatile int64_t t14 = -1198786493LL;

	t14 = (((x57^x58)-x59)/x60);

	if (t14 != 2LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 1U;
	int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MIN;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = -11855089;

	t15 = (((x61^x62)-x63)/x64);

	if (t15 != 8421376) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	volatile int8_t x66 = INT8_MIN;
	int64_t x68 = INT64_MIN;

	t16 = (((x65^x66)-x67)/x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 3223U;
	int16_t x75 = 24;

	t17 = (((x73^x74)-x75)/x76);

	if (t17 != 6U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MAX;
	int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MAX;

	t18 = (((x77^x78)-x79)/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	uint8_t x82 = 50U;
	static volatile uint64_t x83 = 1681263508115LLU;
	uint64_t t19 = 897030476LLU;

	t19 = (((x81^x82)-x83)/x84);

	if (t19 != 25764248LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = -1LL;
	volatile int32_t x88 = INT32_MIN;
	volatile int64_t t20 = -2LL;

	t20 = (((x85^x86)-x87)/x88);

	if (t20 != -4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = 307897526;
	static int64_t x90 = -1LL;
	int32_t x92 = -2752176;
	static int64_t t21 = -1632LL;

	t21 = (((x89^x90)-x91)/x92);

	if (t21 != 111LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = INT64_MIN;
	volatile uint64_t t22 = 174864602914641LLU;

	t22 = (((x93^x94)-x95)/x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -2;
	volatile int16_t x98 = INT16_MIN;
	static int8_t x99 = INT8_MIN;

	t23 = (((x97^x98)-x99)/x100);

	if (t23 != -32894) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 0U;
	uint16_t x102 = UINT16_MAX;
	volatile int64_t x103 = 15LL;
	int32_t x104 = -1;
	volatile int64_t t24 = 486LL;

	t24 = (((x101^x102)-x103)/x104);

	if (t24 != -65520LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	int8_t x106 = 1;
	static int8_t x107 = INT8_MIN;
	volatile uint32_t x108 = 103U;
	static uint32_t t25 = 96664U;

	t25 = (((x105^x106)-x107)/x108);

	if (t25 != 319U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	static int16_t x110 = -1;
	volatile int64_t x111 = INT64_MIN;
	uint32_t x112 = 47082U;
	int64_t t26 = 4989756LL;

	t26 = (((x109^x110)-x111)/x112);

	if (t26 != 195900174947002LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	int16_t x115 = -1;
	uint16_t x116 = 49U;
	static volatile int64_t t27 = -2948476593LL;

	t27 = (((x113^x114)-x115)/x116);

	if (t27 != 188232082384791340LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x117 = 49912212899LLU;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = INT8_MIN;

	t28 = (((x117^x118)-x119)/x120);

	if (t28 != 48872035036LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 3U;
	int8_t x122 = INT8_MAX;
	int8_t x123 = INT8_MAX;
	static uint32_t x124 = UINT32_MAX;
	volatile uint32_t t29 = 9U;

	t29 = (((x121^x122)-x123)/x124);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = UINT16_MAX;
	static int16_t x126 = -371;
	static int64_t x127 = INT64_MIN;
	int64_t x128 = -2802691816LL;

	t30 = (((x125^x126)-x127)/x128);

	if (t30 != -3290897694LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x129 = 819;
	uint8_t x130 = 4U;
	uint32_t x132 = 16U;
	volatile uint32_t t31 = 20255U;

	t31 = (((x129^x130)-x131)/x132);

	if (t31 != 6558807U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = -1;
	int64_t x134 = 1LL;
	int64_t x135 = INT64_MIN;
	int8_t x136 = INT8_MAX;
	static int64_t t32 = 5620215LL;

	t32 = (((x133^x134)-x135)/x136);

	if (t32 != 72624976668147840LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x137 = -7;
	int8_t x138 = 1;
	volatile int32_t x139 = -1;
	volatile int64_t x140 = -25812064354849LL;
	volatile int64_t t33 = -45447726294LL;

	t33 = (((x137^x138)-x139)/x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = INT16_MIN;
	int16_t x148 = -1;

	t34 = (((x145^x146)-x147)/x148);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x151 = INT64_MAX;
	int16_t x152 = -1;

	t35 = (((x149^x150)-x151)/x152);

	if (t35 != 9223372032562833805LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x153 = 4091950791623502LLU;
	volatile int16_t x154 = INT16_MIN;
	volatile uint64_t x155 = 4124097615977LLU;
	int8_t x156 = -15;
	volatile uint64_t t36 = 44LLU;

	t36 = (((x153^x154)-x155)/x156);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x157 = INT8_MIN;
	int16_t x158 = INT16_MAX;
	uint8_t x159 = UINT8_MAX;
	static int8_t x160 = -1;
	volatile int32_t t37 = -5994;

	t37 = (((x157^x158)-x159)/x160);

	if (t37 != 32896) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x162 = 4;
	int8_t x163 = -1;
	static uint64_t t38 = 3279448LLU;

	t38 = (((x161^x162)-x163)/x164);

	if (t38 != 56377945909LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x165 = 14159417U;
	int8_t x166 = 24;
	int32_t x167 = -4279305;
	static int64_t t39 = -28710873516775679LL;

	t39 = (((x165^x166)-x167)/x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x169 = INT16_MIN;
	static int32_t x170 = -1;
	uint8_t x171 = 54U;
	static int16_t x172 = 2;
	int32_t t40 = -7;

	t40 = (((x169^x170)-x171)/x172);

	if (t40 != 16356) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 105U;
	int64_t x174 = -32756771LL;
	int16_t x175 = INT16_MAX;
	static uint8_t x176 = UINT8_MAX;
	int64_t t41 = -7954863LL;

	t41 = (((x173^x174)-x175)/x176);

	if (t41 != -128586LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	volatile int16_t x179 = 32;

	t42 = (((x177^x178)-x179)/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = 10;
	static uint64_t x183 = UINT64_MAX;
	int16_t x184 = -3266;
	static volatile uint64_t t43 = 1938LLU;

	t43 = (((x181^x182)-x183)/x184);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = 1;
	static int8_t x186 = -1;
	int16_t x187 = 1226;
	static int16_t x188 = INT16_MIN;
	int32_t t44 = -1923;

	t44 = (((x185^x186)-x187)/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = 8;
	uint16_t x190 = UINT16_MAX;
	uint16_t x191 = 6812U;
	int32_t x192 = -13244271;
	volatile int32_t t45 = 31;

	t45 = (((x189^x190)-x191)/x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MAX;
	int32_t x194 = INT32_MAX;
	static volatile uint8_t x195 = 1U;
	uint8_t x196 = 83U;
	int32_t t46 = -42;

	t46 = (((x193^x194)-x195)/x196);

	if (t46 != 25872902) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x197 = UINT32_MAX;
	uint8_t x198 = UINT8_MAX;
	int32_t x199 = -3;
	uint32_t t47 = 223U;

	t47 = (((x197^x198)-x199)/x200);

	if (t47 != 99882954U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = UINT8_MAX;
	int16_t x204 = INT16_MIN;

	t48 = (((x201^x202)-x203)/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = INT32_MIN;
	volatile int32_t x210 = INT32_MIN;
	uint16_t x211 = 580U;
	static volatile int32_t t49 = -84;

	t49 = (((x209^x210)-x211)/x212);

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = 17;
	volatile int32_t x218 = -57;
	static int8_t x219 = INT8_MIN;
	static int8_t x220 = INT8_MIN;
	volatile int32_t t50 = 6526285;

	t50 = (((x217^x218)-x219)/x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = UINT64_MAX;
	int16_t x222 = INT16_MIN;
	int64_t x224 = -8113652491854LL;

	t51 = (((x221^x222)-x223)/x224);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x226 = -3;
	volatile uint32_t t52 = 32666068U;

	t52 = (((x225^x226)-x227)/x228);

	if (t52 != 45976U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x230 = -3;
	int32_t x231 = -850;
	volatile uint64_t x232 = 48364622702731LLU;
	uint64_t t53 = 0LLU;

	t53 = (((x229^x230)-x231)/x232);

	if (t53 != 381409LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = -1;
	static uint64_t x238 = 8195341887927052422LLU;
	uint64_t t54 = 134417610539305LLU;

	t54 = (((x237^x238)-x239)/x240);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x241 = 938796378172LLU;
	static int32_t x243 = -1;
	static int64_t x244 = INT64_MIN;
	volatile uint64_t t55 = 3369232LLU;

	t55 = (((x241^x242)-x243)/x244);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = -3160;
	int16_t x247 = 12;
	volatile int32_t t56 = -1;

	t56 = (((x245^x246)-x247)/x248);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = UINT32_MAX;
	uint64_t x250 = 862038913232163LLU;
	int8_t x252 = -8;
	static volatile uint64_t t57 = 157513913LLU;

	t57 = (((x249^x250)-x251)/x252);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x253 = UINT8_MAX;
	static int32_t x254 = INT32_MAX;
	volatile uint64_t x255 = UINT64_MAX;
	int64_t x256 = -1LL;
	uint64_t t58 = 83207525302481828LLU;

	t58 = (((x253^x254)-x255)/x256);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = -1;
	uint64_t x259 = 28426486LLU;
	int32_t x260 = 982;
	static uint64_t t59 = 162LLU;

	t59 = (((x257^x258)-x259)/x260);

	if (t59 != 18784871765459394LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x261 = UINT32_MAX;
	uint32_t x262 = 227924346U;
	static int64_t x264 = -2697229LL;
	volatile int64_t t60 = -2229789243299057LL;

	t60 = (((x261^x262)-x263)/x264);

	if (t60 != 3419573211168LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x269 = 1642427671962LLU;
	int8_t x270 = INT8_MIN;
	static uint8_t x271 = UINT8_MAX;
	volatile int64_t x272 = 265250LL;
	static volatile uint64_t t61 = 695030176766284639LLU;

	t61 = (((x269^x270)-x271)/x272);

	if (t61 != 69544740551486LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MIN;
	uint64_t x278 = 9LLU;
	static volatile int32_t x279 = INT32_MIN;
	volatile uint64_t x280 = 9193037103312974LLU;
	volatile uint64_t t62 = 50114028LLU;

	t62 = (((x277^x278)-x279)/x280);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x281 = INT64_MAX;
	uint64_t x283 = 1279LLU;

	t63 = (((x281^x282)-x283)/x284);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x285 = 0U;
	uint64_t x286 = 43397658434378LLU;
	static int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MAX;
	static uint64_t t64 = 3922189621211LLU;

	t64 = (((x285^x286)-x287)/x288);

	if (t64 != 341713845681LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x293 = INT16_MIN;
	uint8_t x294 = 3U;
	int16_t x295 = -1;
	uint64_t x296 = UINT64_MAX;
	uint64_t t65 = 31537283740760LLU;

	t65 = (((x293^x294)-x295)/x296);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x297 = -1;
	uint16_t x298 = UINT16_MAX;
	uint32_t x300 = 172391U;
	volatile int64_t t66 = 450557186LL;

	t66 = (((x297^x298)-x299)/x300);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x305 = 32831573U;
	int64_t x306 = -1LL;
	int32_t x307 = 0;
	static int8_t x308 = INT8_MIN;
	int64_t t67 = 103211813115LL;

	t67 = (((x305^x306)-x307)/x308);

	if (t67 != 256496LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = INT8_MIN;
	volatile int32_t x311 = -1;
	static volatile int16_t x312 = INT16_MIN;
	volatile int32_t t68 = -14;

	t68 = (((x309^x310)-x311)/x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = 56212449;
	int32_t x314 = -1;
	int32_t x315 = 408234;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t69 = 4;

	t69 = (((x313^x314)-x315)/x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x317 = 2U;
	uint32_t x319 = 1305608546U;
	int32_t x320 = INT32_MIN;

	t70 = (((x317^x318)-x319)/x320);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x321 = 4965425088140369LL;
	int64_t x323 = INT64_MAX;
	static uint32_t x324 = 47U;
	int64_t t71 = -4418251357LL;

	t71 = (((x321^x322)-x323)/x324);

	if (t71 != -196136310883947949LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x325 = -1LL;
	static int8_t x326 = 0;
	int32_t x327 = 376810;
	volatile int16_t x328 = -1;
	volatile int64_t t72 = 11839456LL;

	t72 = (((x325^x326)-x327)/x328);

	if (t72 != 376811LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x330 = 0;
	static uint8_t x332 = 98U;
	volatile int32_t t73 = 965331895;

	t73 = (((x329^x330)-x331)/x332);

	if (t73 != -334) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = INT64_MIN;
	uint16_t x334 = UINT16_MAX;
	int8_t x335 = 3;
	static int32_t x336 = INT32_MIN;
	int64_t t74 = -12LL;

	t74 = (((x333^x334)-x335)/x336);

	if (t74 != 4294967295LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x337 = INT8_MIN;
	volatile uint8_t x338 = UINT8_MAX;
	volatile int32_t x339 = 15380055;

	t75 = (((x337^x338)-x339)/x340);

	if (t75 != 120157) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = 462621803045693560LL;
	int64_t x346 = INT64_MIN;
	int64_t x347 = 984652598115088LL;
	int64_t x348 = -1LL;
	int64_t t76 = 1LL;

	t76 = (((x345^x346)-x347)/x348);

	if (t76 != 8761734886407197336LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x349 = UINT64_MAX;
	volatile uint32_t x350 = UINT32_MAX;
	int64_t x351 = 61381074LL;
	volatile int32_t x352 = -128668038;
	uint64_t t77 = 1744012480506234LLU;

	t77 = (((x349^x350)-x351)/x352);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x353 = INT8_MAX;
	int16_t x354 = -1;
	static volatile int32_t x355 = INT32_MIN;
	volatile int32_t t78 = 40558;

	t78 = (((x353^x354)-x355)/x356);

	if (t78 != 16909319) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = INT16_MIN;
	volatile int32_t x358 = -1;
	int16_t x360 = INT16_MAX;

	t79 = (((x357^x358)-x359)/x360);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x361 = 144U;
	volatile int8_t x362 = INT8_MAX;
	volatile int8_t x363 = INT8_MIN;
	int8_t x364 = -1;
	volatile int32_t t80 = -54237;

	t80 = (((x361^x362)-x363)/x364);

	if (t80 != -367) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x365 = UINT16_MAX;
	uint64_t x366 = 1521LLU;
	int64_t x367 = -1LL;
	int8_t x368 = 1;

	t81 = (((x365^x366)-x367)/x368);

	if (t81 != 64015LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = INT32_MIN;
	int64_t x371 = -101581195835696691LL;
	static int64_t t82 = -249337446LL;

	t82 = (((x369^x370)-x371)/x372);

	if (t82 != 33860399327726737LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x374 = -1;
	int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MIN;
	volatile int64_t t83 = 4728505598443LL;

	t83 = (((x373^x374)-x375)/x376);

	if (t83 != 281474976710655LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x378 = 1U;
	static volatile int16_t x379 = INT16_MAX;
	uint64_t t84 = 527162548LLU;

	t84 = (((x377^x378)-x379)/x380);

	if (t84 != 205009380681368LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x381 = 94293121199928LLU;
	volatile int32_t x382 = 153;
	int16_t x383 = -1;
	int32_t x384 = -97892204;
	volatile uint64_t t85 = 5732171164261967LLU;

	t85 = (((x381^x382)-x383)/x384);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x389 = 0U;
	static int16_t x390 = INT16_MIN;
	uint8_t x391 = UINT8_MAX;
	static volatile int32_t t86 = -523031;

	t86 = (((x389^x390)-x391)/x392);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x393 = INT8_MAX;
	uint32_t x394 = 3U;
	static int64_t x395 = 453210LL;
	static volatile int8_t x396 = -1;
	static int64_t t87 = -8557215559760LL;

	t87 = (((x393^x394)-x395)/x396);

	if (t87 != 453086LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x398 = 6338U;
	volatile uint64_t x399 = UINT64_MAX;
	volatile uint32_t x400 = 11069492U;
	static uint64_t t88 = 976LLU;

	t88 = (((x397^x398)-x399)/x400);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x402 = 979U;
	int64_t x403 = -1LL;
	volatile int64_t t89 = -65660795LL;

	t89 = (((x401^x402)-x403)/x404);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x405 = 921U;
	int16_t x406 = INT16_MIN;
	uint8_t x407 = 2U;
	uint64_t x408 = 1052425LLU;
	static uint64_t t90 = 12744846LLU;

	t90 = (((x405^x406)-x407)/x408);

	if (t90 != 17527846709940LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x409 = -15727897;
	static int64_t x410 = INT64_MIN;
	volatile uint16_t x411 = 3U;
	int64_t x412 = INT64_MIN;
	volatile int64_t t91 = -174335315852126LL;

	t91 = (((x409^x410)-x411)/x412);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = 3;
	uint16_t x414 = UINT16_MAX;
	int64_t x415 = INT64_MAX;
	uint64_t x416 = UINT64_MAX;
	uint64_t t92 = 450LLU;

	t92 = (((x413^x414)-x415)/x416);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x417 = -5352467;
	uint32_t x418 = UINT32_MAX;
	int64_t x420 = INT64_MIN;
	int64_t t93 = 8LL;

	t93 = (((x417^x418)-x419)/x420);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x421 = INT8_MIN;
	static uint8_t x423 = 49U;
	volatile int32_t x424 = INT32_MIN;
	volatile uint64_t t94 = 21LLU;

	t94 = (((x421^x422)-x423)/x424);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = -40;
	int32_t x426 = INT32_MIN;
	int8_t x427 = 3;
	static uint16_t x428 = 20987U;
	static int32_t t95 = 192835476;

	t95 = (((x425^x426)-x427)/x428);

	if (t95 != 102324) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x429 = INT64_MAX;
	volatile int64_t x430 = INT64_MIN;
	uint8_t x431 = 22U;
	uint8_t x432 = UINT8_MAX;
	volatile int64_t t96 = 3810LL;

	t96 = (((x429^x430)-x431)/x432);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = 0;
	volatile int64_t x434 = INT64_MAX;
	int64_t x435 = 24633LL;
	volatile int64_t t97 = 7270837816058448LL;

	t97 = (((x433^x434)-x435)/x436);

	if (t97 != 768614336404562597LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x437 = 1U;
	uint32_t t98 = 674786502U;

	t98 = (((x437^x438)-x439)/x440);

	if (t98 != 514U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x441 = INT32_MAX;
	int8_t x442 = -1;
	uint16_t x443 = 0U;
	static int32_t t99 = 5814;

	t99 = (((x441^x442)-x443)/x444);

	if (t99 != 16777216) { NG(); } else { ; }
	
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

