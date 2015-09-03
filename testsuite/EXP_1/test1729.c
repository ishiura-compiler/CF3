#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
static uint32_t x8 = 59636U;
static int64_t x14 = INT64_MIN;
uint64_t x15 = 1409481LLU;
volatile uint8_t x19 = 1U;
uint64_t x20 = 4059950LLU;
volatile uint64_t t3 = 54326LLU;
int32_t x38 = 14;
int8_t x40 = -9;
volatile uint64_t t5 = 130269618843LLU;
static int64_t x48 = INT64_MIN;
int64_t x50 = -113035858676894971LL;
static int32_t x59 = INT32_MAX;
uint64_t t10 = 3920364LLU;
int16_t x63 = INT16_MIN;
static volatile uint8_t x65 = UINT8_MAX;
static uint64_t x68 = UINT64_MAX;
uint64_t x73 = UINT64_MAX;
volatile uint64_t t16 = 0LLU;
static int16_t x94 = -24;
static int16_t x95 = INT16_MIN;
int32_t x97 = INT32_MIN;
static volatile uint8_t x102 = 10U;
uint16_t x113 = UINT16_MAX;
int64_t x116 = -1LL;
uint16_t x119 = UINT16_MAX;
uint32_t x122 = 2U;
int32_t x137 = INT32_MIN;
uint8_t x140 = 13U;
int64_t x153 = -47027382626718412LL;
static volatile int64_t t33 = 14LL;
static uint16_t x169 = 465U;
int64_t x180 = -1LL;
int8_t x181 = -1;
int8_t x182 = INT8_MAX;
uint32_t x184 = 26U;
static int64_t x186 = 37903124LL;
static int32_t x195 = INT32_MAX;
int64_t x196 = -3LL;
int64_t x201 = 77549LL;
uint64_t x207 = UINT64_MAX;
static uint16_t x208 = UINT16_MAX;
int8_t x214 = -14;
volatile uint32_t t43 = 134785U;
uint16_t x229 = 15735U;
static uint16_t x237 = 3U;
int32_t x248 = INT32_MIN;
static int64_t t50 = 24429340LL;
static uint64_t x257 = 61LLU;
uint64_t x259 = 334LLU;
static int8_t x268 = INT8_MAX;
volatile uint64_t t53 = 302LLU;
int32_t x281 = -1;
static int16_t x286 = INT16_MAX;
static uint64_t x288 = 128054103LLU;
uint32_t x296 = 38475U;
int64_t x297 = INT64_MIN;
static volatile int16_t x306 = INT16_MIN;
int32_t x308 = INT32_MAX;
int8_t x319 = INT8_MIN;
static int32_t t65 = 25321;
int8_t x339 = 1;
volatile uint32_t t66 = 2863U;
int64_t x342 = 28LL;
static int32_t x344 = INT32_MIN;
volatile uint32_t x360 = 788894U;
int64_t x362 = 8686007301864LL;
int8_t x365 = 36;
static int32_t x369 = INT32_MIN;
uint16_t x370 = 32179U;
static int16_t x375 = -1;
volatile uint16_t x379 = 13137U;
volatile uint32_t x380 = UINT32_MAX;
uint16_t x383 = UINT16_MAX;
uint16_t x388 = UINT16_MAX;
static uint64_t t78 = 68340887585190LLU;
static int8_t x392 = -1;
int32_t t82 = -2121094;
volatile uint64_t x414 = 15903178283322243LLU;
static uint64_t t85 = 690513704965LLU;
uint64_t x417 = 46483363LLU;
int32_t x430 = INT32_MAX;
uint64_t x434 = UINT64_MAX;
int32_t x435 = INT32_MIN;
volatile uint32_t x444 = UINT32_MAX;
static uint64_t x446 = 1760776115LLU;
int8_t x451 = -1;
static uint8_t x462 = 3U;
int32_t x466 = -14541;
volatile uint32_t t97 = 0U;
static int16_t x478 = 0;
int8_t x482 = INT8_MAX;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	int16_t x3 = INT16_MAX;
	uint32_t x4 = 176509U;
	int64_t t0 = 32690931LL;

	t0 = (((x1&x2)*x3)^x4);

	if (t0 != 1073590652LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = INT64_MAX;
	int16_t x7 = 1;
	volatile int64_t t1 = -153881139434LL;

	t1 = (((x5&x6)*x7)^x8);

	if (t1 != 9223372034707351796LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -1;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t2 = 189786898457531968LLU;

	t2 = (((x13&x14)*x15)^x16);

	if (t2 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = -1;
	static volatile int8_t x18 = INT8_MIN;

	t3 = (((x17&x18)*x19)^x20);

	if (t3 != 18446744073705491630LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x33 = INT8_MAX;
	int16_t x34 = -1;
	volatile uint8_t x35 = UINT8_MAX;
	int32_t x36 = -104;
	int32_t t4 = 460391535;

	t4 = (((x33&x34)*x35)^x36);

	if (t4 != -32487) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 15LLU;
	static volatile uint64_t x39 = 179721895LLU;

	t5 = (((x37&x38)*x39)^x40);

	if (t5 != 18446744071193445077LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = -1LL;
	uint8_t x42 = 0U;
	int16_t x43 = -37;
	int16_t x44 = INT16_MIN;
	volatile int64_t t6 = -2868872400LL;

	t6 = (((x41&x42)*x43)^x44);

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x45 = UINT64_MAX;
	static uint64_t x46 = 868LLU;
	uint8_t x47 = UINT8_MAX;
	static volatile uint64_t t7 = 1962767259070LLU;

	t7 = (((x45&x46)*x47)^x48);

	if (t7 != 9223372036854997148LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x49 = 1U;
	int8_t x51 = 6;
	volatile uint32_t x52 = UINT32_MAX;
	static volatile int64_t t8 = -41LL;

	t8 = (((x49&x50)*x51)^x52);

	if (t8 != 4294967289LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x53 = -5;
	volatile uint64_t x54 = 9876407474LLU;
	uint16_t x55 = UINT16_MAX;
	static uint8_t x56 = 2U;
	uint64_t t9 = 6LLU;

	t9 = (((x53&x54)*x55)^x56);

	if (t9 != 647250363808588LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -29;
	volatile uint32_t x58 = 30150U;
	volatile uint64_t x60 = 1657LLU;

	t10 = (((x57&x58)*x59)^x60);

	if (t10 != 4294937671LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = 10U;
	int32_t x62 = -1;
	int64_t x64 = INT64_MAX;
	volatile int64_t t11 = 14287435594184853LL;

	t11 = (((x61&x62)*x63)^x64);

	if (t11 != 9223372032560136191LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x66 = INT64_MIN;
	int64_t x67 = 59601224LL;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (((x65&x66)*x67)^x68);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x69 = 180068811216748LLU;
	volatile int64_t x70 = 8LL;
	volatile uint16_t x71 = UINT16_MAX;
	uint8_t x72 = UINT8_MAX;
	volatile uint64_t t13 = 2LLU;

	t13 = (((x69&x70)*x71)^x72);

	if (t13 != 524039LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x74 = INT16_MAX;
	int32_t x75 = INT32_MIN;
	int64_t x76 = -1LL;
	uint64_t t14 = 1938LLU;

	t14 = (((x73&x74)*x75)^x76);

	if (t14 != 70366596694015LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = 2U;
	static int8_t x78 = INT8_MIN;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = -1;
	uint32_t t15 = UINT32_MAX;

	t15 = (((x77&x78)*x79)^x80);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = UINT64_MAX;
	int8_t x86 = -62;
	uint64_t x87 = 2425797931LLU;
	int32_t x88 = -1;

	t16 = (((x85&x86)*x87)^x88);

	if (t16 != 150399471721LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x89 = -1;
	int8_t x90 = INT8_MAX;
	uint32_t x91 = 101U;
	int32_t x92 = INT32_MIN;
	static volatile uint32_t t17 = 136129633U;

	t17 = (((x89&x90)*x91)^x92);

	if (t17 != 2147496475U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = INT8_MAX;
	int32_t x96 = INT32_MIN;
	volatile int32_t t18 = -7037;

	t18 = (((x93&x94)*x95)^x96);

	if (t18 != 2144075776) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x98 = -50169535788LL;
	int8_t x99 = INT8_MIN;
	uint32_t x100 = 3165175U;
	volatile int64_t t19 = 6LL;

	t19 = (((x97&x98)*x99)^x100);

	if (t19 != 6597072931831LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = 1;
	static uint64_t x103 = 13LLU;
	int64_t x104 = INT64_MIN;
	uint64_t t20 = 116402LLU;

	t20 = (((x101&x102)*x103)^x104);

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = 0U;
	int64_t x106 = 2LL;
	static int8_t x107 = INT8_MIN;
	int16_t x108 = -1;
	volatile int64_t t21 = 4LL;

	t21 = (((x105&x106)*x107)^x108);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = 256LLU;
	int32_t x110 = -1;
	volatile int16_t x111 = -1;
	static uint8_t x112 = 9U;
	volatile uint64_t t22 = 19699LLU;

	t22 = (((x109&x110)*x111)^x112);

	if (t22 != 18446744073709551369LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x114 = INT16_MAX;
	int16_t x115 = -1;
	volatile int64_t t23 = 20328958824375856LL;

	t23 = (((x113&x114)*x115)^x116);

	if (t23 != 32766LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x117 = 213U;
	int8_t x118 = INT8_MIN;
	volatile int8_t x120 = INT8_MIN;
	int32_t t24 = 266301962;

	t24 = (((x117&x118)*x119)^x120);

	if (t24 != -8388608) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = INT32_MAX;
	int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MIN;
	int64_t t25 = 3726LL;

	t25 = (((x121&x122)*x123)^x124);

	if (t25 != -9223372032559874048LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MIN;
	uint8_t x127 = 87U;
	volatile int16_t x128 = INT16_MIN;
	static volatile int32_t t26 = 6848;

	t26 = (((x125&x126)*x127)^x128);

	if (t26 != 2818048) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x133 = 5187626U;
	static int8_t x134 = 0;
	volatile int32_t x135 = INT32_MIN;
	int16_t x136 = -80;
	static uint32_t t27 = 362099U;

	t27 = (((x133&x134)*x135)^x136);

	if (t27 != 4294967216U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x138 = INT8_MAX;
	volatile uint32_t x139 = 0U;
	volatile uint32_t t28 = 82U;

	t28 = (((x137&x138)*x139)^x140);

	if (t28 != 13U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = 20;
	int64_t x142 = -1LL;
	static int64_t x143 = -35LL;
	uint64_t x144 = 3281310184LLU;
	uint64_t t29 = 1857LLU;

	t29 = (((x141&x142)*x143)^x144);

	if (t29 != 18446744070428241068LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x149 = 25U;
	static int16_t x150 = INT16_MAX;
	static uint32_t x151 = UINT32_MAX;
	int8_t x152 = INT8_MIN;
	static volatile uint32_t t30 = 275081U;

	t30 = (((x149&x150)*x151)^x152);

	if (t30 != 103U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x154 = INT64_MAX;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MIN;
	volatile uint64_t t31 = 1479673821959114LLU;

	t31 = (((x153&x154)*x155)^x156);

	if (t31 != 9176344654228057420LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = -1;
	int8_t x158 = -30;
	uint16_t x159 = UINT16_MAX;
	int64_t x160 = -7374LL;
	int64_t t32 = -19088LL;

	t32 = (((x157&x158)*x159)^x160);

	if (t32 != 1958700LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = 124709942LL;
	int8_t x162 = INT8_MAX;
	static int32_t x163 = 24239;
	volatile int64_t x164 = INT64_MIN;

	t33 = (((x161&x162)*x163)^x164);

	if (t33 != -9223372036853466902LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x170 = INT16_MIN;
	uint32_t x171 = 4849U;
	uint16_t x172 = 0U;
	volatile uint32_t t34 = 3784487U;

	t34 = (((x169&x170)*x171)^x172);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x173 = 2U;
	static uint32_t x174 = 547643345U;
	volatile int16_t x175 = -1;
	static int16_t x176 = 0;
	volatile uint32_t t35 = 2187766U;

	t35 = (((x173&x174)*x175)^x176);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x177 = UINT8_MAX;
	int64_t x178 = -1LL;
	int8_t x179 = 1;
	volatile int64_t t36 = -113532019033057LL;

	t36 = (((x177&x178)*x179)^x180);

	if (t36 != -256LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x183 = -1;
	volatile uint32_t t37 = 2052430U;

	t37 = (((x181&x182)*x183)^x184);

	if (t37 != 4294967195U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x185 = INT32_MAX;
	uint8_t x187 = 4U;
	int32_t x188 = INT32_MIN;
	int64_t t38 = 157030LL;

	t38 = (((x185&x186)*x187)^x188);

	if (t38 != -1995871152LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x193 = 235;
	uint64_t x194 = UINT64_MAX;
	volatile uint64_t t39 = 1LLU;

	t39 = (((x193&x194)*x195)^x196);

	if (t39 != 18446743569050894568LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x197 = UINT16_MAX;
	static uint64_t x198 = 32615966LLU;
	int32_t x199 = INT32_MIN;
	volatile uint64_t x200 = 9LLU;
	static uint64_t t40 = 3LLU;

	t40 = (((x197&x198)*x199)^x200);

	if (t40 != 18446648351773425673LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x202 = 27;
	uint32_t x203 = UINT32_MAX;
	int8_t x204 = INT8_MIN;
	int64_t t41 = 89LL;

	t41 = (((x201&x202)*x203)^x204);

	if (t41 != -38654705545LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x205 = 903U;
	uint32_t x206 = 20984583U;
	volatile uint64_t t42 = 45191317171LLU;

	t42 = (((x205&x206)*x207)^x208);

	if (t42 != 18446744073709486854LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x213 = UINT32_MAX;
	volatile int32_t x215 = INT32_MIN;
	int8_t x216 = -7;

	t43 = (((x213&x214)*x215)^x216);

	if (t43 != 4294967289U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x217 = UINT64_MAX;
	int8_t x218 = -22;
	static int32_t x219 = -6;
	uint64_t x220 = 49612983LLU;
	volatile uint64_t t44 = 1LLU;

	t44 = (((x217&x218)*x219)^x220);

	if (t44 != 49612851LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x221 = 1;
	uint8_t x222 = UINT8_MAX;
	int64_t x223 = 930566183LL;
	int64_t x224 = -1LL;
	int64_t t45 = 494216475901552472LL;

	t45 = (((x221&x222)*x223)^x224);

	if (t45 != -930566184LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x230 = UINT32_MAX;
	uint16_t x231 = 29U;
	int16_t x232 = INT16_MIN;
	uint32_t t46 = 0U;

	t46 = (((x229&x230)*x231)^x232);

	if (t46 != 4294538875U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x238 = INT16_MIN;
	volatile uint16_t x239 = 106U;
	static volatile int32_t x240 = INT32_MAX;
	int32_t t47 = INT32_MAX;

	t47 = (((x237&x238)*x239)^x240);

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x241 = UINT8_MAX;
	int8_t x242 = 8;
	static int16_t x243 = INT16_MAX;
	uint64_t x244 = 564LLU;
	volatile uint64_t t48 = 561434530463411LLU;

	t48 = (((x241&x242)*x243)^x244);

	if (t48 != 261580LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x245 = -49;
	uint16_t x246 = 5939U;
	int16_t x247 = -400;
	volatile int32_t t49 = 14796;

	t49 = (((x245&x246)*x247)^x248);

	if (t49 != 2145127248) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x249 = 967681786U;
	int64_t x250 = INT64_MIN;
	int32_t x251 = -848287034;
	int8_t x252 = INT8_MAX;

	t50 = (((x249&x250)*x251)^x252);

	if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x258 = 2437;
	int16_t x260 = INT16_MAX;
	uint64_t t51 = 11758LLU;

	t51 = (((x257&x258)*x259)^x260);

	if (t51 != 31097LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = 7;
	static uint16_t x262 = 2225U;
	uint64_t x263 = 106434160LLU;
	static int64_t x264 = INT64_MAX;
	uint64_t t52 = 30372004393LLU;

	t52 = (((x261&x262)*x263)^x264);

	if (t52 != 9223372036748341647LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x265 = INT64_MAX;
	uint8_t x266 = 7U;
	uint64_t x267 = UINT64_MAX;

	t53 = (((x265&x266)*x267)^x268);

	if (t53 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = INT32_MIN;
	uint64_t x271 = UINT64_MAX;
	int8_t x272 = INT8_MAX;
	volatile uint64_t t54 = 437633105327889506LLU;

	t54 = (((x269&x270)*x271)^x272);

	if (t54 != 2147483775LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x273 = 3577186861978855LL;
	int64_t x274 = INT64_MIN;
	uint32_t x275 = 14U;
	int16_t x276 = 3661;
	volatile int64_t t55 = 338603347186141LL;

	t55 = (((x273&x274)*x275)^x276);

	if (t55 != 3661LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x282 = INT8_MAX;
	volatile uint32_t x283 = UINT32_MAX;
	uint16_t x284 = UINT16_MAX;
	uint32_t t56 = 1053547610U;

	t56 = (((x281&x282)*x283)^x284);

	if (t56 != 4294901886U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x285 = -1LL;
	uint16_t x287 = UINT16_MAX;
	uint64_t t57 = 45LLU;

	t57 = (((x285&x286)*x287)^x288);

	if (t57 != 2019521366LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x293 = 10328951335435047LLU;
	static int8_t x294 = -8;
	int8_t x295 = INT8_MAX;
	uint64_t t58 = 34LLU;

	t58 = (((x293&x294)*x295)^x296);

	if (t58 != 1311776819600278187LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x298 = INT8_MAX;
	int32_t x299 = INT32_MIN;
	int64_t x300 = -1LL;
	volatile int64_t t59 = 702118634LL;

	t59 = (((x297&x298)*x299)^x300);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x305 = INT8_MIN;
	uint32_t x307 = UINT32_MAX;
	uint32_t t60 = 64712U;

	t60 = (((x305&x306)*x307)^x308);

	if (t60 != 2147450879U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x309 = 5494U;
	static int64_t x310 = -1LL;
	int32_t x311 = -1;
	static uint16_t x312 = 240U;
	int64_t t61 = 125823275358LL;

	t61 = (((x309&x310)*x311)^x312);

	if (t61 != -5510LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x313 = 1U;
	uint16_t x314 = 0U;
	int32_t x315 = INT32_MIN;
	volatile int64_t x316 = INT64_MAX;
	volatile int64_t t62 = INT64_MAX;

	t62 = (((x313&x314)*x315)^x316);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x317 = 2361U;
	volatile uint64_t x318 = UINT64_MAX;
	uint64_t x320 = UINT64_MAX;
	static volatile uint64_t t63 = 460895559973481LLU;

	t63 = (((x317&x318)*x319)^x320);

	if (t63 != 302207LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x321 = 9;
	static int8_t x322 = INT8_MIN;
	static int16_t x323 = -8004;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t64 = -167554;

	t64 = (((x321&x322)*x323)^x324);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x325 = INT32_MIN;
	uint16_t x326 = UINT16_MAX;
	volatile uint16_t x327 = UINT16_MAX;
	static volatile int16_t x328 = -1073;

	t65 = (((x325&x326)*x327)^x328);

	if (t65 != -1073) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x337 = INT32_MAX;
	int8_t x338 = 0;
	uint32_t x340 = 32267478U;

	t66 = (((x337&x338)*x339)^x340);

	if (t66 != 32267478U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x341 = UINT64_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	static volatile uint64_t t67 = 4061388LLU;

	t67 = (((x341&x342)*x343)^x344);

	if (t67 != 18446744071563902948LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x345 = -40459348;
	volatile int8_t x346 = 7;
	static int16_t x347 = INT16_MAX;
	static int16_t x348 = INT16_MAX;
	int32_t t68 = 151378;

	t68 = (((x345&x346)*x347)^x348);

	if (t68 != 98307) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x349 = 0LL;
	uint16_t x350 = UINT16_MAX;
	volatile int32_t x351 = INT32_MIN;
	volatile int8_t x352 = INT8_MIN;
	int64_t t69 = -727LL;

	t69 = (((x349&x350)*x351)^x352);

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x353 = INT16_MIN;
	static uint32_t x354 = 32328U;
	int8_t x355 = 1;
	int64_t x356 = -1LL;
	volatile int64_t t70 = 14714142537LL;

	t70 = (((x353&x354)*x355)^x356);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x357 = 1;
	int32_t x358 = 20;
	volatile uint8_t x359 = 2U;
	volatile uint32_t t71 = 10741U;

	t71 = (((x357&x358)*x359)^x360);

	if (t71 != 788894U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x361 = UINT32_MAX;
	volatile uint32_t x363 = 4U;
	int8_t x364 = INT8_MIN;
	int64_t t72 = 170842712588101403LL;

	t72 = (((x361&x362)*x363)^x364);

	if (t72 != -6333717472LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x366 = INT64_MAX;
	static int16_t x367 = 1;
	volatile int16_t x368 = INT16_MIN;
	volatile int64_t t73 = 1625LL;

	t73 = (((x365&x366)*x367)^x368);

	if (t73 != -32732LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x371 = -20;
	static int64_t x372 = INT64_MIN;
	int64_t t74 = INT64_MIN;

	t74 = (((x369&x370)*x371)^x372);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x373 = INT32_MAX;
	volatile int32_t x374 = INT32_MIN;
	static volatile int64_t x376 = INT64_MIN;
	volatile int64_t t75 = INT64_MIN;

	t75 = (((x373&x374)*x375)^x376);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x377 = 42U;
	int32_t x378 = 2;
	uint32_t t76 = 5539U;

	t76 = (((x377&x378)*x379)^x380);

	if (t76 != 4294941021U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x381 = -161;
	int64_t x382 = 74328615513LL;
	int16_t x384 = INT16_MIN;
	int64_t t77 = 86079410LL;

	t77 = (((x381&x382)*x383)^x384);

	if (t77 != -4871125817633369LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x385 = 186955905924803LLU;
	int16_t x386 = 5281;
	uint16_t x387 = 7U;

	t78 = (((x385&x386)*x387)^x388);

	if (t78 != 28792LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x389 = -152;
	int64_t x390 = 944580LL;
	int16_t x391 = -1;
	volatile int64_t t79 = 137066602713986042LL;

	t79 = (((x389&x390)*x391)^x392);

	if (t79 != 944447LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x393 = UINT64_MAX;
	static volatile int64_t x394 = 1024296LL;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MIN;
	uint64_t t80 = 566738976569LLU;

	t80 = (((x393&x394)*x395)^x396);

	if (t80 != 18442344755889152344LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x397 = INT64_MIN;
	uint64_t x398 = UINT64_MAX;
	uint64_t x399 = UINT64_MAX;
	int32_t x400 = -7089;
	volatile uint64_t t81 = 18148812LLU;

	t81 = (((x397&x398)*x399)^x400);

	if (t81 != 9223372036854768719LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x401 = 1U;
	static int16_t x402 = INT16_MIN;
	int32_t x403 = -3574083;
	int8_t x404 = INT8_MAX;

	t82 = (((x401&x402)*x403)^x404);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x405 = INT16_MAX;
	int16_t x406 = -1;
	int8_t x407 = INT8_MIN;
	volatile int16_t x408 = INT16_MAX;
	int32_t t83 = -128355;

	t83 = (((x405&x406)*x407)^x408);

	if (t83 != -4161665) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x409 = UINT8_MAX;
	int32_t x410 = -67153513;
	uint16_t x411 = 39U;
	static volatile int16_t x412 = INT16_MAX;
	static int32_t t84 = -50330050;

	t84 = (((x409&x410)*x411)^x412);

	if (t84 != 26878) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x413 = -1;
	int8_t x415 = 3;
	int64_t x416 = -42890353907LL;

	t85 = (((x413&x414)*x415)^x416);

	if (t85 != 18399034510603223428LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x418 = 26U;
	uint8_t x419 = UINT8_MAX;
	int16_t x420 = INT16_MIN;
	volatile uint64_t t86 = 513280504816550627LLU;

	t86 = (((x417&x418)*x419)^x420);

	if (t86 != 18446744073709519358LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x421 = INT32_MAX;
	uint64_t x422 = 2400261LLU;
	volatile int64_t x423 = 181134101553580LL;
	static uint16_t x424 = UINT16_MAX;
	uint64_t t87 = 323559494054LLU;

	t87 = (((x421&x422)*x423)^x424);

	if (t87 != 10494006033777776547LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x429 = UINT32_MAX;
	static volatile int16_t x431 = -1;
	uint8_t x432 = 1U;
	volatile uint32_t t88 = 115U;

	t88 = (((x429&x430)*x431)^x432);

	if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x433 = 3762192;
	int64_t x436 = -1LL;
	uint64_t t89 = 13006273894021038LLU;

	t89 = (((x433&x434)*x435)^x436);

	if (t89 != 8079245800636415LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x437 = -2;
	int32_t x438 = INT32_MAX;
	volatile uint32_t x439 = 9977278U;
	int8_t x440 = 18;
	uint32_t t90 = 1376210708U;

	t90 = (((x437&x438)*x439)^x440);

	if (t90 != 4275012758U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x441 = 973U;
	int16_t x442 = INT16_MIN;
	uint16_t x443 = 621U;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (((x441&x442)*x443)^x444);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x445 = INT32_MIN;
	int8_t x447 = INT8_MIN;
	volatile uint8_t x448 = 25U;
	uint64_t t92 = 71301576LLU;

	t92 = (((x445&x446)*x447)^x448);

	if (t92 != 25LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x449 = 6013309715558LLU;
	int16_t x450 = INT16_MIN;
	uint32_t x452 = 72U;
	volatile uint64_t t93 = 30134LLU;

	t93 = (((x449&x450)*x451)^x452);

	if (t93 != 18446738060399837256LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x453 = INT8_MIN;
	static int64_t x454 = -1LL;
	int16_t x455 = -1;
	int16_t x456 = -44;
	volatile int64_t t94 = 2LL;

	t94 = (((x453&x454)*x455)^x456);

	if (t94 != -172LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x461 = INT32_MIN;
	uint16_t x463 = UINT16_MAX;
	volatile int16_t x464 = 31;
	volatile int32_t t95 = -208;

	t95 = (((x461&x462)*x463)^x464);

	if (t95 != 31) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x465 = UINT8_MAX;
	volatile int64_t x467 = -1495468267992821LL;
	volatile uint64_t x468 = 13039LLU;
	volatile uint64_t t96 = 52175162LLU;

	t96 = (((x465&x466)*x467)^x468);

	if (t96 != 18370475192041930718LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x473 = 1184512U;
	uint8_t x474 = UINT8_MAX;
	int8_t x475 = INT8_MIN;
	static volatile int8_t x476 = INT8_MAX;

	t97 = (((x473&x474)*x475)^x476);

	if (t97 != 127U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x477 = 110U;
	int16_t x479 = INT16_MIN;
	int64_t x480 = -907031176508LL;
	static int64_t t98 = 427140452115285839LL;

	t98 = (((x477&x478)*x479)^x480);

	if (t98 != -907031176508LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x481 = INT64_MAX;
	uint64_t x483 = UINT64_MAX;
	static uint8_t x484 = UINT8_MAX;
	static volatile uint64_t t99 = 257749401383934LLU;

	t99 = (((x481&x482)*x483)^x484);

	if (t99 != 18446744073709551486LLU) { NG(); } else { ; }
	
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

