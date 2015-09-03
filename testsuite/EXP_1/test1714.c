#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
int8_t x9 = INT8_MIN;
int16_t x15 = -209;
volatile int16_t x20 = INT16_MIN;
volatile uint32_t t3 = 2274965U;
static int32_t x25 = INT32_MAX;
int16_t x27 = INT16_MAX;
int16_t x33 = INT16_MAX;
volatile uint32_t x37 = 527U;
int8_t x38 = -1;
static volatile int8_t x40 = 12;
volatile uint32_t t8 = 139U;
static int64_t x42 = INT64_MAX;
int32_t x43 = INT32_MAX;
uint32_t x49 = UINT32_MAX;
int32_t x52 = 3969616;
volatile uint64_t x53 = 132771193LLU;
int32_t x54 = INT32_MIN;
volatile uint64_t t13 = 3935447812339LLU;
int16_t x65 = INT16_MAX;
int32_t x71 = INT32_MIN;
volatile int32_t t17 = 1;
volatile uint64_t t20 = 920LLU;
static int64_t t22 = -49565972541LL;
static int32_t x97 = -1;
static int8_t x100 = INT8_MIN;
int32_t t23 = 0;
int8_t x109 = -1;
static int64_t x112 = -1LL;
int64_t t26 = -6659451187038LL;
volatile int8_t x123 = -3;
volatile int64_t x125 = 19938653701316142LL;
static int64_t x132 = -1LL;
int16_t x139 = 0;
static int32_t t33 = -5;
static uint8_t x145 = 45U;
int8_t x151 = INT8_MAX;
int64_t x157 = -8804LL;
int8_t x158 = 7;
static int16_t x163 = INT16_MIN;
int8_t x164 = -17;
volatile int16_t x165 = INT16_MIN;
int64_t x177 = -27932252LL;
int64_t t40 = -1452792494LL;
int64_t x182 = -15355720810LL;
static volatile uint32_t x185 = UINT32_MAX;
uint8_t x186 = 14U;
static volatile int32_t x187 = 3363;
volatile uint64_t t44 = 1689044085816LLU;
int8_t x198 = INT8_MIN;
volatile int8_t x200 = -2;
volatile int64_t x201 = INT64_MIN;
int64_t x205 = -1LL;
static uint64_t x216 = 437817542771LLU;
uint64_t t48 = 23LLU;
int16_t x217 = 2058;
int8_t x219 = -1;
volatile uint8_t x221 = 126U;
static volatile int32_t x224 = INT32_MAX;
int32_t t50 = -1;
int32_t x226 = -262612787;
int64_t x227 = 16852570105357537LL;
int32_t t52 = INT32_MIN;
int8_t x234 = 0;
uint16_t x236 = 1U;
volatile int64_t x237 = -388268623399580321LL;
static volatile uint32_t x238 = 2632U;
uint32_t x239 = 63406017U;
int64_t x243 = -1LL;
volatile int8_t x246 = INT8_MAX;
static uint16_t x248 = 42U;
int16_t x265 = 8156;
int64_t t60 = -85697856032LL;
int64_t x274 = INT64_MAX;
static volatile int32_t x279 = 165;
volatile int8_t x284 = -23;
uint16_t x287 = 22U;
volatile uint16_t x299 = UINT16_MAX;
uint64_t x309 = UINT64_MAX;
static uint8_t x315 = 3U;
static volatile int32_t t68 = -7;
uint8_t x326 = 36U;
volatile int8_t x327 = INT8_MIN;
int16_t x329 = INT16_MIN;
volatile uint16_t x332 = 7166U;
static volatile int32_t t72 = 23219;
static int8_t x333 = -1;
uint8_t x345 = 26U;
int64_t t76 = 4LL;
uint64_t x361 = UINT64_MAX;
int32_t x367 = INT32_MAX;
int64_t x372 = INT64_MAX;
volatile uint8_t x374 = UINT8_MAX;
int32_t x378 = INT32_MIN;
volatile uint64_t t83 = 720217480295LLU;
int64_t x387 = -1LL;
uint16_t x394 = 13459U;
int64_t x408 = INT64_MIN;
static int32_t t89 = INT32_MIN;
static volatile int64_t x418 = 716860102165755LL;
int64_t x420 = -124565233106102LL;
int64_t x428 = INT64_MIN;
volatile int64_t t92 = INT64_MIN;
int16_t x440 = -1;
volatile int16_t x441 = INT16_MIN;
static int8_t x442 = INT8_MIN;
int64_t x445 = -898LL;
static volatile int64_t t97 = -4197227902LL;
int16_t x449 = -1;


void f0(void) {
	uint16_t x2 = UINT16_MAX;
	int32_t x3 = 2280;
	volatile int64_t x4 = -1LL;
	static volatile int64_t t0 = -3285729LL;

	t0 = (((x1&x2)-x3)&x4);

	if (t0 != 63255LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x10 = 5550906911LLU;
	int32_t x11 = -1;
	int64_t x12 = INT64_MAX;
	uint64_t t1 = 176377897LLU;

	t1 = (((x9&x10)-x11)&x12);

	if (t1 != 5550906881LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x13 = UINT64_MAX;
	uint32_t x14 = 1809454U;
	volatile int8_t x16 = -1;
	volatile uint64_t t2 = 202115109191LLU;

	t2 = (((x13&x14)-x15)&x16);

	if (t2 != 1809663LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 2U;
	int16_t x18 = 78;
	static volatile uint32_t x19 = 1697U;

	t3 = (((x17&x18)-x19)&x20);

	if (t3 != 4294934528U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 11671628LLU;
	int32_t x22 = -2;
	static uint16_t x23 = 0U;
	int64_t x24 = -7477045833822LL;
	volatile uint64_t t4 = 250LLU;

	t4 = (((x21&x22)-x23)&x24);

	if (t4 != 1181696LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = INT64_MIN;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int64_t t5 = -3LL;

	t5 = (((x25&x26)-x27)&x28);

	if (t5 != 32769LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 462494031U;
	uint32_t x30 = UINT32_MAX;
	uint8_t x31 = 14U;
	int64_t x32 = INT64_MIN;
	int64_t t6 = -68270LL;

	t6 = (((x29&x30)-x31)&x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x34 = -1;
	int8_t x35 = INT8_MAX;
	int32_t x36 = -1;
	static volatile int32_t t7 = -1567;

	t7 = (((x33&x34)-x35)&x36);

	if (t7 != 32640) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x39 = INT32_MIN;

	t8 = (((x37&x38)-x39)&x40);

	if (t8 != 12U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	static int16_t x44 = -1;
	int64_t t9 = 107835020212LL;

	t9 = (((x41&x42)-x43)&x44);

	if (t9 != -2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -476;
	int32_t x46 = 71993;
	int32_t x47 = -1;
	volatile int32_t x48 = INT32_MAX;
	volatile int32_t t10 = -52;

	t10 = (((x45&x46)-x47)&x48);

	if (t10 != 71713) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x50 = INT32_MIN;
	static int16_t x51 = 50;
	volatile uint32_t t11 = 1006631360U;

	t11 = (((x49&x50)-x51)&x52);

	if (t11 != 3969600U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x55 = 69122U;
	int64_t x56 = INT64_MAX;
	volatile uint64_t t12 = 66075580754145311LLU;

	t12 = (((x53&x54)-x55)&x56);

	if (t12 != 9223372036854706686LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = -1;
	int8_t x59 = 2;
	uint64_t x60 = 911015531937337545LLU;

	t13 = (((x57&x58)-x59)&x60);

	if (t13 != 911015531937337544LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 578;
	static volatile uint32_t x62 = 31874U;
	int8_t x63 = -2;
	int64_t x64 = INT64_MIN;
	int64_t t14 = 6297961896001549LL;

	t14 = (((x61&x62)-x63)&x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x66 = INT8_MIN;
	volatile uint16_t x67 = 252U;
	static uint16_t x68 = UINT16_MAX;
	int32_t t15 = 248;

	t15 = (((x65&x66)-x67)&x68);

	if (t15 != 32388) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = -1LL;
	int64_t x72 = INT64_MAX;
	volatile int64_t t16 = -551820214212129427LL;

	t16 = (((x69&x70)-x71)&x72);

	if (t16 != 2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = -188217;
	int32_t x74 = -1;
	uint8_t x75 = 24U;
	static volatile int32_t x76 = -705825975;

	t17 = (((x73&x74)-x75)&x76);

	if (t17 != -705880055) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = -7786462;
	volatile int32_t x78 = -1;
	static int32_t x79 = 3;
	int64_t x80 = INT64_MAX;
	static volatile int64_t t18 = -227513290646634LL;

	t18 = (((x77&x78)-x79)&x80);

	if (t18 != 9223372036846989343LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 843604138LL;
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = -8299475LL;
	volatile int16_t x84 = INT16_MIN;
	static int64_t t19 = 331959902085LL;

	t19 = (((x81&x82)-x83)&x84);

	if (t19 != 851902464LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	uint64_t x86 = UINT64_MAX;
	uint64_t x87 = 2340676725LLU;
	int16_t x88 = -1;

	t20 = (((x85&x86)-x87)&x88);

	if (t20 != 9223372034514099083LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MAX;
	int16_t x90 = INT16_MAX;
	int8_t x91 = -37;
	int16_t x92 = INT16_MIN;
	static volatile int32_t t21 = 88;

	t21 = (((x89&x90)-x91)&x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MAX;
	uint8_t x94 = 2U;
	int64_t x95 = -1LL;
	int8_t x96 = 2;

	t22 = (((x93&x94)-x95)&x96);

	if (t22 != 2LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x98 = -493;
	int32_t x99 = -1;

	t23 = (((x97&x98)-x99)&x100);

	if (t23 != -512) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 1U;
	uint8_t x102 = 0U;
	volatile int64_t x103 = -1LL;
	volatile uint64_t x104 = 328175LLU;
	uint64_t t24 = 28LLU;

	t24 = (((x101&x102)-x103)&x104);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = INT8_MIN;
	int32_t x106 = 65628162;
	static uint8_t x107 = 39U;
	uint16_t x108 = 342U;
	volatile int32_t t25 = 265306521;

	t25 = (((x105&x106)-x107)&x108);

	if (t25 != 336) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x110 = -1;
	uint32_t x111 = 43289U;

	t26 = (((x109&x110)-x111)&x112);

	if (t26 != 4294924006LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = UINT32_MAX;
	int32_t x114 = INT32_MIN;
	volatile int32_t x115 = INT32_MAX;
	int8_t x116 = INT8_MIN;
	uint32_t t27 = 78092533U;

	t27 = (((x113&x114)-x115)&x116);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x117 = 3U;
	volatile uint8_t x118 = 59U;
	int32_t x119 = -3947;
	static int32_t x120 = 3405;
	int32_t t28 = -2589882;

	t28 = (((x117&x118)-x119)&x120);

	if (t28 != 3404) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -16;
	int64_t x122 = 4370480128661050LL;
	uint8_t x124 = UINT8_MAX;
	volatile int64_t t29 = -71LL;

	t29 = (((x121&x122)-x123)&x124);

	if (t29 != 51LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x126 = INT32_MIN;
	int8_t x127 = INT8_MIN;
	uint16_t x128 = 867U;
	volatile int64_t t30 = -267188527143374071LL;

	t30 = (((x125&x126)-x127)&x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 10U;
	uint64_t x130 = 103015126LLU;
	volatile int64_t x131 = INT64_MAX;
	volatile uint64_t t31 = 1059261603422282489LLU;

	t31 = (((x129&x130)-x131)&x132);

	if (t31 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = -2LL;
	int64_t x134 = INT64_MIN;
	static volatile uint64_t x135 = UINT64_MAX;
	uint64_t x136 = 475LLU;
	static volatile uint64_t t32 = 8266LLU;

	t32 = (((x133&x134)-x135)&x136);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	volatile int32_t x138 = -1;
	int8_t x140 = INT8_MAX;

	t33 = (((x137&x138)-x139)&x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x146 = -1;
	volatile uint8_t x147 = 124U;
	int16_t x148 = INT16_MIN;
	static volatile int32_t t34 = -5486;

	t34 = (((x145&x146)-x147)&x148);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	volatile uint16_t x150 = 3U;
	int16_t x152 = INT16_MAX;
	int64_t t35 = -2765411851079095679LL;

	t35 = (((x149&x150)-x151)&x152);

	if (t35 != 32641LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x159 = 1008365647389LLU;
	volatile int16_t x160 = INT16_MAX;
	uint64_t t36 = 273522398488705187LLU;

	t36 = (((x157&x158)-x159)&x160);

	if (t36 != 18919LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = 3713575349LL;
	int32_t x162 = 971;
	volatile int64_t t37 = -58129496447LL;

	t37 = (((x161&x162)-x163)&x164);

	if (t37 != 33153LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x166 = 2U;
	int16_t x167 = 61;
	uint64_t x168 = 67659427LLU;
	volatile uint64_t t38 = 28LLU;

	t38 = (((x165&x166)-x167)&x168);

	if (t38 != 67659395LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x169 = 392546111LLU;
	static volatile uint16_t x170 = 561U;
	static volatile int8_t x171 = INT8_MAX;
	uint32_t x172 = 72255638U;
	volatile uint64_t t39 = 6370LLU;

	t39 = (((x169&x170)-x171)&x172);

	if (t39 != 146LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x178 = -3;
	int16_t x179 = INT16_MIN;
	volatile uint16_t x180 = UINT16_MAX;

	t40 = (((x177&x178)-x179)&x180);

	if (t40 != 18852LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = -103;
	int32_t x183 = -704087292;
	static volatile int16_t x184 = -1;
	static int64_t t41 = 420596476007547LL;

	t41 = (((x181&x182)-x183)&x184);

	if (t41 != -14651633524LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x188 = 6;
	uint32_t t42 = 34U;

	t42 = (((x185&x186)-x187)&x188);

	if (t42 != 2U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -1221;
	int32_t x190 = -1;
	uint64_t x191 = 130LLU;
	int64_t x192 = -1LL;
	static volatile uint64_t t43 = 11964968027360836LLU;

	t43 = (((x189&x190)-x191)&x192);

	if (t43 != 18446744073709550265LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = INT64_MAX;
	int32_t x194 = INT32_MAX;
	static int16_t x195 = -1;
	uint64_t x196 = 145LLU;

	t44 = (((x193&x194)-x195)&x196);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 23U;
	uint16_t x199 = 5980U;
	uint32_t t45 = 646864424U;

	t45 = (((x197&x198)-x199)&x200);

	if (t45 != 4294961316U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x202 = INT64_MAX;
	int32_t x203 = INT32_MIN;
	int32_t x204 = INT32_MIN;
	volatile int64_t t46 = -288LL;

	t46 = (((x201&x202)-x203)&x204);

	if (t46 != 2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x206 = INT32_MIN;
	int8_t x207 = 10;
	volatile uint64_t x208 = 6LLU;
	uint64_t t47 = 32486593641627010LLU;

	t47 = (((x205&x206)-x207)&x208);

	if (t47 != 6LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x213 = UINT32_MAX;
	static int8_t x214 = 7;
	volatile uint64_t x215 = UINT64_MAX;

	t48 = (((x213&x214)-x215)&x216);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x218 = -1;
	uint16_t x220 = 32699U;
	volatile int32_t t49 = 582319506;

	t49 = (((x217&x218)-x219)&x220);

	if (t49 != 2059) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x222 = -1;
	int16_t x223 = -1;

	t50 = (((x221&x222)-x223)&x224);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x225 = UINT32_MAX;
	int64_t x228 = -1LL;
	static int64_t t51 = -176042811147LL;

	t51 = (((x225&x226)-x227)&x228);

	if (t51 != -16852566073003028LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = -1;
	int8_t x231 = -1;
	int32_t x232 = INT32_MIN;

	t52 = (((x229&x230)-x231)&x232);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = 8177616331922LLU;
	static uint32_t x235 = 461170U;
	volatile uint64_t t53 = 113348233293525581LLU;

	t53 = (((x233&x234)-x235)&x236);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x240 = -1;
	int64_t t54 = -1380211002735198LL;

	t54 = (((x237&x238)-x239)&x240);

	if (t54 != -63403897LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x241 = INT8_MIN;
	uint64_t x242 = 669987309148658LLU;
	int32_t x244 = -6365345;
	uint64_t t55 = 10540237LLU;

	t55 = (((x241&x242)-x243)&x244);

	if (t55 != 669987309148417LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = 16077847510309362LLU;
	int8_t x247 = INT8_MIN;
	volatile uint64_t t56 = 14749553101612991LLU;

	t56 = (((x245&x246)-x247)&x248);

	if (t56 != 34LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x249 = -1LL;
	volatile int8_t x250 = INT8_MAX;
	uint16_t x251 = 18741U;
	volatile uint32_t x252 = 10315547U;
	static int64_t t57 = -202748800669853567LL;

	t57 = (((x249&x250)-x251)&x252);

	if (t57 != 10299146LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x257 = 8809240000704625LLU;
	uint16_t x258 = 9043U;
	static int32_t x259 = INT32_MIN;
	int64_t x260 = -11116LL;
	volatile uint64_t t58 = 2718769230LLU;

	t58 = (((x257&x258)-x259)&x260);

	if (t58 != 2147483664LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x266 = 12U;
	uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MIN;
	volatile uint64_t t59 = 54040848551LLU;

	t59 = (((x265&x266)-x267)&x268);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x269 = UINT16_MAX;
	volatile int64_t x270 = -697LL;
	int8_t x271 = INT8_MIN;
	volatile uint32_t x272 = 1082U;

	t60 = (((x269&x270)-x271)&x272);

	if (t60 != 1026LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x273 = INT64_MIN;
	uint16_t x275 = 5U;
	int32_t x276 = 2925;
	static int64_t t61 = -130441499887LL;

	t61 = (((x273&x274)-x275)&x276);

	if (t61 != 2921LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x277 = 18908094557LL;
	int8_t x278 = -1;
	uint16_t x280 = 7012U;
	int64_t t62 = 726654046LL;

	t62 = (((x277&x278)-x279)&x280);

	if (t62 != 6944LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = INT8_MIN;
	static uint16_t x282 = 1U;
	int16_t x283 = INT16_MIN;
	int32_t t63 = 867276639;

	t63 = (((x281&x282)-x283)&x284);

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MAX;
	int32_t x288 = INT32_MIN;
	volatile int32_t t64 = 158518;

	t64 = (((x285&x286)-x287)&x288);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x297 = 24U;
	int16_t x298 = INT16_MAX;
	static int32_t x300 = 54504229;
	int32_t t65 = 324;

	t65 = (((x297&x298)-x299)&x300);

	if (t65 != 54460417) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x305 = 180U;
	int16_t x306 = 30;
	static volatile int64_t x307 = -1LL;
	volatile int32_t x308 = -1;
	volatile int64_t t66 = -462702326LL;

	t66 = (((x305&x306)-x307)&x308);

	if (t66 != 21LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x310 = 879U;
	int8_t x311 = INT8_MIN;
	volatile int8_t x312 = -1;
	uint64_t t67 = 7437736LLU;

	t67 = (((x309&x310)-x311)&x312);

	if (t67 != 1007LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x313 = 24U;
	static int16_t x314 = INT16_MAX;
	static int8_t x316 = -1;

	t68 = (((x313&x314)-x315)&x316);

	if (t68 != 21) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MAX;
	int8_t x319 = INT8_MAX;
	volatile int64_t x320 = INT64_MIN;
	int64_t t69 = 59527678267LL;

	t69 = (((x317&x318)-x319)&x320);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = -1;
	static int32_t x322 = INT32_MIN;
	int8_t x323 = -1;
	int16_t x324 = 9;
	volatile int32_t t70 = 518058;

	t70 = (((x321&x322)-x323)&x324);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = INT8_MAX;
	int16_t x328 = INT16_MIN;
	volatile int32_t t71 = 5038;

	t71 = (((x325&x326)-x327)&x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = -1;

	t72 = (((x329&x330)-x331)&x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = INT8_MIN;
	int64_t x336 = 16599440167722LL;
	static volatile int64_t t73 = 21751LL;

	t73 = (((x333&x334)-x335)&x336);

	if (t73 != 298LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = -3;
	int32_t x342 = -502378;
	int64_t x343 = INT64_MIN;
	int16_t x344 = -1;
	int64_t t74 = 3543438336563369407LL;

	t74 = (((x341&x342)-x343)&x344);

	if (t74 != 9223372036854273428LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x346 = 15U;
	int32_t x347 = INT32_MAX;
	uint8_t x348 = 1U;
	static int32_t t75 = -566310730;

	t75 = (((x345&x346)-x347)&x348);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x349 = INT64_MAX;
	uint32_t x350 = 1725046U;
	int64_t x351 = -1LL;
	uint16_t x352 = 754U;

	t76 = (((x349&x350)-x351)&x352);

	if (t76 != 626LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x357 = UINT32_MAX;
	volatile int16_t x358 = INT16_MIN;
	volatile int32_t x359 = -1;
	static int32_t x360 = 1074;
	uint32_t t77 = 1301388U;

	t77 = (((x357&x358)-x359)&x360);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x362 = 1523U;
	int64_t x363 = INT64_MIN;
	static uint64_t x364 = UINT64_MAX;
	static uint64_t t78 = 1238960443799LLU;

	t78 = (((x361&x362)-x363)&x364);

	if (t78 != 9223372036854777331LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x365 = -1LL;
	volatile int32_t x366 = INT32_MIN;
	int16_t x368 = INT16_MIN;
	volatile int64_t t79 = -6LL;

	t79 = (((x365&x366)-x367)&x368);

	if (t79 != -4294967296LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x369 = 0;
	int64_t x370 = INT64_MIN;
	volatile int32_t x371 = INT32_MIN;
	volatile int64_t t80 = 26517LL;

	t80 = (((x369&x370)-x371)&x372);

	if (t80 != 2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x373 = 34U;
	int8_t x375 = INT8_MIN;
	uint32_t x376 = 4U;
	volatile uint32_t t81 = 7U;

	t81 = (((x373&x374)-x375)&x376);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x377 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	static int64_t x380 = -274710246488210306LL;
	int64_t t82 = 30600LL;

	t82 = (((x377&x378)-x379)&x380);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x381 = 2U;
	int8_t x382 = 0;
	volatile uint64_t x383 = 36216134LLU;
	volatile uint16_t x384 = UINT16_MAX;

	t83 = (((x381&x382)-x383)&x384);

	if (t83 != 25274LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x385 = -555336225420LL;
	int32_t x386 = -204405;
	int8_t x388 = -1;
	volatile int64_t t84 = 409555LL;

	t84 = (((x385&x386)-x387)&x388);

	if (t84 != -555336294143LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = INT8_MAX;
	uint64_t x395 = 1514891140347510714LLU;
	volatile int64_t x396 = INT64_MIN;
	static volatile uint64_t t85 = 749418439LLU;

	t85 = (((x393&x394)-x395)&x396);

	if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x397 = 48726U;
	int16_t x398 = INT16_MIN;
	volatile int64_t x399 = -1LL;
	static int8_t x400 = -1;
	volatile int64_t t86 = 80553LL;

	t86 = (((x397&x398)-x399)&x400);

	if (t86 != 32769LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x401 = -1LL;
	static int16_t x402 = INT16_MIN;
	int8_t x403 = -1;
	uint8_t x404 = 0U;
	int64_t t87 = 6728LL;

	t87 = (((x401&x402)-x403)&x404);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x405 = -1LL;
	static int16_t x406 = INT16_MAX;
	static volatile uint16_t x407 = 1087U;
	volatile int64_t t88 = 605350751527LL;

	t88 = (((x405&x406)-x407)&x408);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x413 = INT16_MAX;
	int16_t x414 = INT16_MIN;
	int32_t x415 = INT32_MAX;
	int16_t x416 = INT16_MIN;

	t89 = (((x413&x414)-x415)&x416);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = INT32_MAX;
	uint16_t x419 = 153U;
	int64_t t90 = 4LL;

	t90 = (((x417&x418)-x419)&x420);

	if (t90 != 1703280706LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x421 = -1LL;
	int32_t x422 = INT32_MAX;
	volatile uint16_t x423 = UINT16_MAX;
	uint32_t x424 = UINT32_MAX;
	static int64_t t91 = -15226578703309396LL;

	t91 = (((x421&x422)-x423)&x424);

	if (t91 != 2147418112LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = -7075;
	volatile int8_t x426 = 0;
	uint16_t x427 = UINT16_MAX;

	t92 = (((x425&x426)-x427)&x428);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = INT32_MAX;
	int32_t x430 = 17998;
	volatile uint16_t x431 = 27U;
	volatile uint8_t x432 = 15U;
	int32_t t93 = 1100;

	t93 = (((x429&x430)-x431)&x432);

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = INT8_MIN;
	static int64_t x434 = INT64_MAX;
	int8_t x435 = -1;
	volatile int64_t x436 = -1LL;
	volatile int64_t t94 = -938537868787170LL;

	t94 = (((x433&x434)-x435)&x436);

	if (t94 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x437 = 167657037921044482LLU;
	int16_t x438 = INT16_MAX;
	int32_t x439 = 21;
	volatile uint64_t t95 = 5793825LLU;

	t95 = (((x437&x438)-x439)&x440);

	if (t95 != 18413LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x443 = INT32_MIN;
	int8_t x444 = 1;
	int32_t t96 = 284;

	t96 = (((x441&x442)-x443)&x444);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x446 = 1;
	int32_t x447 = -1;
	volatile uint32_t x448 = 474488U;

	t97 = (((x445&x446)-x447)&x448);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x450 = INT32_MAX;
	int64_t x451 = 15831112337LL;
	int8_t x452 = INT8_MAX;
	static int64_t t98 = -417269075948410LL;

	t98 = (((x449&x450)-x451)&x452);

	if (t98 != 110LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x453 = 316U;
	volatile int32_t x454 = -8650;
	static int8_t x455 = 1;
	volatile int32_t x456 = 210087281;
	uint32_t t99 = 1978620794U;

	t99 = (((x453&x454)-x455)&x456);

	if (t99 != 49U) { NG(); } else { ; }
	
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

