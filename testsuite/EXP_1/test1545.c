#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
volatile int64_t x4 = 1343816009570746133LL;
volatile int32_t x12 = 2262220;
int8_t x13 = INT8_MAX;
int32_t x16 = INT32_MIN;
int64_t t3 = -41346LL;
uint16_t x17 = 0U;
static int32_t x19 = INT32_MAX;
int16_t x24 = 7;
uint8_t x28 = UINT8_MAX;
static uint64_t x38 = UINT64_MAX;
static uint64_t x40 = 17297710504407LLU;
int8_t x46 = -6;
int32_t x50 = 2;
volatile int64_t t12 = -17048425233283LL;
volatile int32_t t13 = 674314822;
int16_t x69 = -12879;
volatile uint64_t x72 = 5LLU;
uint32_t x81 = 99981U;
int32_t t20 = 130604278;
static int8_t x93 = INT8_MIN;
static int8_t x95 = INT8_MIN;
volatile uint8_t x96 = 1U;
static int16_t x100 = INT16_MIN;
int8_t x108 = INT8_MAX;
static volatile int64_t t25 = 6LL;
volatile int16_t x130 = INT16_MAX;
uint16_t x143 = UINT16_MAX;
int32_t t30 = -284168;
uint8_t x145 = UINT8_MAX;
static volatile int32_t t31 = 56204;
uint64_t x154 = 9077727LLU;
static uint32_t x156 = UINT32_MAX;
volatile uint64_t x163 = 1439696LLU;
int16_t x164 = -1;
uint32_t x166 = UINT32_MAX;
volatile uint16_t x167 = UINT16_MAX;
uint8_t x176 = 1U;
int32_t x188 = 238;
volatile uint32_t t40 = 410U;
uint32_t x189 = 3483U;
static int16_t x192 = INT16_MAX;
volatile int32_t t42 = 22683926;
static uint16_t x197 = 271U;
int16_t x199 = INT16_MIN;
static int8_t x201 = INT8_MIN;
volatile int32_t t44 = INT32_MIN;
static int64_t x210 = INT64_MIN;
volatile int8_t x213 = INT8_MAX;
int8_t x214 = INT8_MAX;
volatile int32_t x218 = -26900;
int32_t x222 = INT32_MAX;
uint16_t x231 = 13882U;
static volatile int8_t x232 = -1;
volatile int32_t t52 = -147382938;
uint8_t x243 = 0U;
int32_t t53 = 1;
uint32_t t54 = 27631638U;
volatile uint64_t x250 = UINT64_MAX;
int32_t x264 = -1;
int32_t t58 = 100765565;
static uint16_t x266 = UINT16_MAX;
uint64_t x269 = UINT64_MAX;
uint16_t x271 = 103U;
int64_t x291 = INT64_MAX;
volatile int64_t t65 = 41952013293LL;
int16_t x307 = INT16_MAX;
int16_t x311 = 2530;
static int64_t x312 = 174221LL;
static volatile int8_t x318 = -1;
static volatile int16_t x322 = INT16_MIN;
static int64_t x323 = -1LL;
int64_t t71 = 9876706064LL;
int16_t x326 = 141;
volatile int32_t x329 = INT32_MIN;
uint16_t x334 = 23U;
static int32_t t74 = 329895;
int32_t x346 = 4;
int16_t x347 = -6;
int8_t x348 = INT8_MIN;
uint32_t x349 = UINT32_MAX;
int32_t x350 = 3640;
int32_t x351 = -1;
int32_t x354 = INT32_MIN;
int64_t t79 = -310912LL;
int16_t x361 = 26;
uint32_t x376 = 180832288U;
volatile int8_t x382 = INT8_MAX;
int64_t t85 = 434969913LL;
int32_t x385 = 2915;
static uint64_t x388 = 322781LLU;
volatile int8_t x389 = INT8_MIN;
int8_t x390 = -1;
static volatile int32_t t88 = 98705531;
volatile uint32_t t89 = 450U;
uint32_t x409 = 4064265U;
uint32_t x410 = 14927U;
uint32_t x411 = 108876672U;
int8_t x413 = 19;
int16_t x422 = INT16_MIN;
int16_t x423 = 1;
int64_t t95 = -632806LL;
uint16_t x444 = 6U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile int32_t x3 = 5959;
	int64_t t0 = 20361012918912172LL;

	t0 = (((x1<=x2)-x3)&x4);

	if (t0 != 1343816009570740240LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 1;
	static int64_t x6 = INT64_MAX;
	int16_t x7 = 1774;
	static volatile int16_t x8 = INT16_MIN;
	int32_t t1 = 1046105537;

	t1 = (((x5<=x6)-x7)&x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 118U;
	int64_t x10 = INT64_MIN;
	static uint8_t x11 = 7U;
	volatile int32_t t2 = 56266146;

	t2 = (((x9<=x10)-x11)&x12);

	if (t2 != 2262216) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x14 = 39U;
	int64_t x15 = 2500164473122881LL;

	t3 = (((x13<=x14)-x15)&x16);

	if (t3 != -2500164887511040LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 1U;
	int16_t x20 = 278;
	volatile int32_t t4 = 616;

	t4 = (((x17<=x18)-x19)&x20);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 11;
	int16_t x22 = INT16_MIN;
	uint8_t x23 = 0U;
	int32_t t5 = 6;

	t5 = (((x21<=x22)-x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	uint32_t x26 = 31603U;
	int16_t x27 = 753;
	volatile int32_t t6 = 4;

	t6 = (((x25<=x26)-x27)&x28);

	if (t6 != 15) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 5U;
	volatile uint64_t x30 = UINT64_MAX;
	static int8_t x31 = INT8_MIN;
	volatile uint8_t x32 = UINT8_MAX;
	int32_t t7 = 350576584;

	t7 = (((x29<=x30)-x31)&x32);

	if (t7 != 129) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 15U;
	static int32_t x34 = -1;
	uint32_t x35 = 5U;
	volatile uint32_t x36 = 0U;
	volatile uint32_t t8 = 3355U;

	t8 = (((x33<=x34)-x35)&x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint32_t x39 = 1709U;
	uint64_t t9 = 28141LLU;

	t9 = (((x37<=x38)-x39)&x40);

	if (t9 != 1877203284LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	int8_t x42 = -1;
	int8_t x43 = INT8_MIN;
	static int64_t x44 = -477502066LL;
	volatile int64_t t10 = -7875033990643461LL;

	t10 = (((x41<=x42)-x43)&x44);

	if (t10 != 128LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int32_t x47 = -1;
	uint32_t x48 = 4137972U;
	static volatile uint32_t t11 = 4U;

	t11 = (((x45<=x46)-x47)&x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int64_t x51 = -1LL;
	volatile int32_t x52 = -1075;

	t12 = (((x49<=x50)-x51)&x52);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -16157945334894284LL;
	static uint32_t x54 = 2U;
	int16_t x55 = INT16_MIN;
	uint16_t x56 = 7U;

	t13 = (((x53<=x54)-x55)&x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MAX;
	int32_t x62 = INT32_MIN;
	volatile uint16_t x63 = UINT16_MAX;
	int64_t x64 = INT64_MAX;
	int64_t t14 = 1136921LL;

	t14 = (((x61<=x62)-x63)&x64);

	if (t14 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 14308U;
	volatile uint8_t x66 = UINT8_MAX;
	int64_t x67 = -153315965950483LL;
	static int16_t x68 = -1;
	volatile int64_t t15 = 5218702012464LL;

	t15 = (((x65<=x66)-x67)&x68);

	if (t15 != 153315965950483LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = INT64_MIN;
	static uint64_t x71 = UINT64_MAX;
	static volatile uint64_t t16 = 2884711870158LLU;

	t16 = (((x69<=x70)-x71)&x72);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = 9900795251086346LL;
	int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MAX;
	int16_t x76 = 5;
	static int32_t t17 = -17;

	t17 = (((x73<=x74)-x75)&x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MIN;
	int16_t x80 = -828;
	int32_t t18 = -1224268;

	t18 = (((x77<=x78)-x79)&x80);

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x82 = UINT64_MAX;
	static int64_t x83 = 119389119514083376LL;
	static int32_t x84 = INT32_MIN;
	volatile int64_t t19 = -2154553319507LL;

	t19 = (((x81<=x82)-x83)&x84);

	if (t19 != -119389121482326016LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = -109;
	int32_t x86 = -1;
	int8_t x87 = INT8_MIN;
	int8_t x88 = -1;

	t20 = (((x85<=x86)-x87)&x88);

	if (t20 != 129) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	volatile int8_t x91 = 6;
	int64_t x92 = INT64_MAX;
	static int64_t t21 = -183885498LL;

	t21 = (((x89<=x90)-x91)&x92);

	if (t21 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x94 = 8U;
	volatile int32_t t22 = 1014686571;

	t22 = (((x93<=x94)-x95)&x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = INT16_MIN;
	int16_t x98 = -110;
	int8_t x99 = 0;
	int32_t t23 = 816433;

	t23 = (((x97<=x98)-x99)&x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x101 = 81853U;
	int8_t x102 = -1;
	int16_t x103 = -1;
	uint64_t x104 = 622424704303120LLU;
	volatile uint64_t t24 = 22642507594405120LLU;

	t24 = (((x101<=x102)-x103)&x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x105 = 1U;
	int16_t x106 = INT16_MIN;
	int64_t x107 = 85492511LL;

	t25 = (((x105<=x106)-x107)&x108);

	if (t25 != 97LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 1535781682637LLU;
	int64_t x110 = INT64_MIN;
	static int64_t x111 = 9303LL;
	int8_t x112 = INT8_MAX;
	int64_t t26 = 10LL;

	t26 = (((x109<=x110)-x111)&x112);

	if (t26 != 42LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 26U;
	static uint32_t x114 = UINT32_MAX;
	volatile int16_t x115 = -321;
	int64_t x116 = INT64_MIN;
	int64_t t27 = -365395LL;

	t27 = (((x113<=x114)-x115)&x116);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = -16;
	static int32_t x131 = 410;
	int64_t x132 = INT64_MIN;
	volatile int64_t t28 = INT64_MIN;

	t28 = (((x129<=x130)-x131)&x132);

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	volatile uint16_t x134 = 470U;
	uint8_t x135 = 26U;
	uint8_t x136 = 0U;
	int32_t t29 = 1;

	t29 = (((x133<=x134)-x135)&x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = UINT32_MAX;
	static int64_t x142 = INT64_MAX;
	uint16_t x144 = UINT16_MAX;

	t30 = (((x141<=x142)-x143)&x144);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x146 = UINT8_MAX;
	static int8_t x147 = -1;
	uint16_t x148 = UINT16_MAX;

	t31 = (((x145<=x146)-x147)&x148);

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = -1;
	volatile int16_t x150 = INT16_MIN;
	volatile int64_t x151 = -1LL;
	uint64_t x152 = 8069602760905510119LLU;
	volatile uint64_t t32 = 68LLU;

	t32 = (((x149<=x150)-x151)&x152);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x153 = INT64_MIN;
	int16_t x155 = -1;
	volatile uint32_t t33 = 1055626U;

	t33 = (((x153<=x154)-x155)&x156);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = -1;
	volatile uint64_t t34 = 0LLU;

	t34 = (((x161<=x162)-x163)&x164);

	if (t34 != 18446744073708111921LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = -1;
	uint64_t x168 = 3081916624223LLU;
	volatile uint64_t t35 = 32151955221679918LLU;

	t35 = (((x165<=x166)-x167)&x168);

	if (t35 != 3081916579842LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = -1;
	uint32_t x170 = 7U;
	uint16_t x171 = 195U;
	uint64_t x172 = UINT64_MAX;
	uint64_t t36 = 1142887540104LLU;

	t36 = (((x169<=x170)-x171)&x172);

	if (t36 != 18446744073709551421LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x174 = UINT32_MAX;
	static uint64_t x175 = UINT64_MAX;
	uint64_t t37 = 2742691611LLU;

	t37 = (((x173<=x174)-x175)&x176);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x177 = 9U;
	uint16_t x178 = 13U;
	int16_t x179 = -206;
	int32_t x180 = -1;
	volatile int32_t t38 = -920518;

	t38 = (((x177<=x178)-x179)&x180);

	if (t38 != 207) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MIN;
	volatile int8_t x182 = INT8_MIN;
	static volatile uint16_t x183 = 3U;
	int64_t x184 = INT64_MIN;
	int64_t t39 = INT64_MIN;

	t39 = (((x181<=x182)-x183)&x184);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = -1;
	uint64_t x186 = 1722LLU;
	uint32_t x187 = 52U;

	t40 = (((x185<=x186)-x187)&x188);

	if (t40 != 204U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x190 = INT16_MAX;
	int16_t x191 = INT16_MIN;
	int32_t t41 = -82;

	t41 = (((x189<=x190)-x191)&x192);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = 10LL;
	uint16_t x194 = 1455U;
	volatile int32_t x195 = INT32_MAX;
	uint16_t x196 = 5965U;

	t42 = (((x193<=x194)-x195)&x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x198 = INT64_MIN;
	static volatile int64_t x200 = INT64_MIN;
	volatile int64_t t43 = -1LL;

	t43 = (((x197<=x198)-x199)&x200);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x202 = INT64_MAX;
	int8_t x203 = INT8_MAX;
	int32_t x204 = INT32_MIN;

	t44 = (((x201<=x202)-x203)&x204);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x209 = UINT32_MAX;
	uint64_t x211 = 170618136806565956LLU;
	static uint64_t x212 = UINT64_MAX;
	uint64_t t45 = 2697775532811LLU;

	t45 = (((x209<=x210)-x211)&x212);

	if (t45 != 18276125936902985660LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x215 = UINT32_MAX;
	volatile int8_t x216 = INT8_MIN;
	uint32_t t46 = 363U;

	t46 = (((x213<=x214)-x215)&x216);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = -1;
	volatile int8_t x219 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t47 = 1;

	t47 = (((x217<=x218)-x219)&x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x221 = INT32_MIN;
	int8_t x223 = 0;
	int8_t x224 = -1;
	static int32_t t48 = 629;

	t48 = (((x221<=x222)-x223)&x224);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = 48U;
	int32_t x226 = -4;
	static uint16_t x227 = 179U;
	volatile int8_t x228 = -3;
	static int32_t t49 = -5;

	t49 = (((x225<=x226)-x227)&x228);

	if (t49 != -179) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = 1;
	int32_t x230 = -1;
	int32_t t50 = -139709;

	t50 = (((x229<=x230)-x231)&x232);

	if (t50 != -13882) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = 5375;
	int64_t x235 = 46361347LL;
	uint64_t x236 = 182649888753843LLU;
	volatile uint64_t t51 = 24620232192809285LLU;

	t51 = (((x233<=x234)-x235)&x236);

	if (t51 != 182649880346802LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x237 = 2U;
	uint8_t x238 = 0U;
	volatile int8_t x239 = INT8_MIN;
	int32_t x240 = -20183;

	t52 = (((x237<=x238)-x239)&x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x241 = INT8_MAX;
	uint8_t x242 = UINT8_MAX;
	int8_t x244 = 1;

	t53 = (((x241<=x242)-x243)&x244);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x245 = 10;
	int32_t x246 = INT32_MAX;
	uint16_t x247 = 4U;
	uint32_t x248 = 40U;

	t54 = (((x245<=x246)-x247)&x248);

	if (t54 != 40U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x249 = INT16_MIN;
	int64_t x251 = INT64_MAX;
	uint16_t x252 = 476U;
	volatile int64_t t55 = 23800LL;

	t55 = (((x249<=x250)-x251)&x252);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = 3;
	volatile int16_t x254 = 6965;
	int32_t x255 = -1;
	int16_t x256 = -18;
	volatile int32_t t56 = -1;

	t56 = (((x253<=x254)-x255)&x256);

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = -31;
	static uint16_t x258 = 25U;
	uint64_t x259 = UINT64_MAX;
	uint8_t x260 = 15U;
	static volatile uint64_t t57 = 186527292LLU;

	t57 = (((x257<=x258)-x259)&x260);

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x261 = 395U;
	int64_t x262 = -1LL;
	int8_t x263 = 0;

	t58 = (((x261<=x262)-x263)&x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x265 = INT16_MAX;
	static uint32_t x267 = 2786U;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t59 = 110942U;

	t59 = (((x265<=x266)-x267)&x268);

	if (t59 != 4294964511U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x270 = 1930U;
	static uint64_t x272 = 260LLU;
	uint64_t t60 = 15298182440770323LLU;

	t60 = (((x269<=x270)-x271)&x272);

	if (t60 != 256LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x277 = 226LL;
	uint16_t x278 = UINT16_MAX;
	uint32_t x279 = 258349671U;
	uint32_t x280 = 197937U;
	uint32_t t61 = 1899881U;

	t61 = (((x277<=x278)-x279)&x280);

	if (t61 != 66832U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x281 = 661558U;
	int32_t x282 = INT32_MIN;
	int16_t x283 = -1;
	int32_t x284 = INT32_MIN;
	volatile int32_t t62 = -52;

	t62 = (((x281<=x282)-x283)&x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MIN;
	int32_t x292 = INT32_MIN;
	static volatile int64_t t63 = INT64_MIN;

	t63 = (((x289<=x290)-x291)&x292);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = INT64_MAX;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = 0;
	int8_t x296 = INT8_MAX;
	int32_t t64 = -89475;

	t64 = (((x293<=x294)-x295)&x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = 101221031LLU;
	static uint32_t x298 = UINT32_MAX;
	volatile int64_t x299 = -4749LL;
	volatile int16_t x300 = -1;

	t65 = (((x297<=x298)-x299)&x300);

	if (t65 != 4750LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = INT16_MIN;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = INT64_MAX;
	static int64_t x304 = -4285319615901506098LL;
	volatile int64_t t66 = 26LL;

	t66 = (((x301<=x302)-x303)&x304);

	if (t66 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x305 = 6756817354351815LLU;
	int16_t x306 = -1;
	uint64_t x308 = 974979125771731273LLU;
	uint64_t t67 = 3319705025250737901LLU;

	t67 = (((x305<=x306)-x307)&x308);

	if (t67 != 974979125771730944LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x309 = 7U;
	uint8_t x310 = 3U;
	volatile int64_t t68 = 87334448187827023LL;

	t68 = (((x309<=x310)-x311)&x312);

	if (t68 != 172044LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x313 = -1;
	int64_t x314 = INT64_MIN;
	int8_t x315 = 9;
	volatile uint64_t x316 = 6709233643955LLU;
	volatile uint64_t t69 = 7906104LLU;

	t69 = (((x313<=x314)-x315)&x316);

	if (t69 != 6709233643955LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x317 = INT32_MIN;
	volatile uint16_t x319 = 0U;
	int64_t x320 = INT64_MAX;
	volatile int64_t t70 = -69000908635LL;

	t70 = (((x317<=x318)-x319)&x320);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x321 = UINT32_MAX;
	int64_t x324 = INT64_MIN;

	t71 = (((x321<=x322)-x323)&x324);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x325 = 3;
	int64_t x327 = INT64_MAX;
	static int32_t x328 = -1;
	int64_t t72 = 63335228LL;

	t72 = (((x325<=x326)-x327)&x328);

	if (t72 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x330 = INT32_MIN;
	static int32_t x331 = -1;
	int32_t x332 = -1;
	volatile int32_t t73 = -83276;

	t73 = (((x329<=x330)-x331)&x332);

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x333 = 60;
	int16_t x335 = -1;
	static int16_t x336 = INT16_MAX;

	t74 = (((x333<=x334)-x335)&x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x337 = 4342;
	int64_t x338 = -11024530520965LL;
	uint8_t x339 = 13U;
	int16_t x340 = -61;
	static volatile int32_t t75 = -59515914;

	t75 = (((x337<=x338)-x339)&x340);

	if (t75 != -61) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x341 = UINT32_MAX;
	int8_t x342 = 14;
	volatile int32_t x343 = 49337313;
	volatile uint32_t x344 = 157U;
	volatile uint32_t t76 = 244826U;

	t76 = (((x341<=x342)-x343)&x344);

	if (t76 != 29U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = 364224249;
	int32_t t77 = 19;

	t77 = (((x345<=x346)-x347)&x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x352 = UINT8_MAX;
	static int32_t t78 = 70988;

	t78 = (((x349<=x350)-x351)&x352);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x353 = 86U;
	static volatile int8_t x355 = 0;
	int64_t x356 = INT64_MIN;

	t79 = (((x353<=x354)-x355)&x356);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MAX;
	int8_t x360 = INT8_MIN;
	int32_t t80 = 329;

	t80 = (((x357<=x358)-x359)&x360);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x362 = 322541594900806LLU;
	static uint16_t x363 = UINT16_MAX;
	uint8_t x364 = UINT8_MAX;
	static int32_t t81 = 1969340;

	t81 = (((x361<=x362)-x363)&x364);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x365 = 23;
	volatile uint32_t x366 = 179U;
	static int64_t x367 = -1LL;
	uint32_t x368 = 1148U;
	volatile int64_t t82 = 3256826338LL;

	t82 = (((x365<=x366)-x367)&x368);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x373 = UINT64_MAX;
	int32_t x374 = INT32_MIN;
	int16_t x375 = -1;
	uint32_t t83 = 7U;

	t83 = (((x373<=x374)-x375)&x376);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x377 = INT8_MIN;
	int32_t x378 = INT32_MIN;
	volatile uint16_t x379 = 24583U;
	static int16_t x380 = INT16_MAX;
	volatile int32_t t84 = 12;

	t84 = (((x377<=x378)-x379)&x380);

	if (t84 != 8185) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x381 = INT32_MAX;
	int8_t x383 = INT8_MIN;
	int64_t x384 = -1632787LL;

	t85 = (((x381<=x382)-x383)&x384);

	if (t85 != 128LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x386 = INT32_MIN;
	int16_t x387 = -545;
	static volatile uint64_t t86 = 3462077562199769480LLU;

	t86 = (((x385<=x386)-x387)&x388);

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x391 = -1;
	volatile uint8_t x392 = 24U;
	int32_t t87 = 2;

	t87 = (((x389<=x390)-x391)&x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = 1;
	int8_t x394 = INT8_MIN;
	volatile int16_t x395 = INT16_MIN;
	static volatile int8_t x396 = -1;

	t88 = (((x393<=x394)-x395)&x396);

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x397 = 6U;
	int16_t x398 = -9161;
	uint32_t x399 = 0U;
	int16_t x400 = -6;

	t89 = (((x397<=x398)-x399)&x400);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = 1;
	int16_t x402 = 0;
	volatile uint32_t x403 = UINT32_MAX;
	uint8_t x404 = UINT8_MAX;
	volatile uint32_t t90 = 107U;

	t90 = (((x401<=x402)-x403)&x404);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x405 = UINT64_MAX;
	uint32_t x406 = 12U;
	int8_t x407 = 3;
	int16_t x408 = INT16_MAX;
	static int32_t t91 = -400;

	t91 = (((x405<=x406)-x407)&x408);

	if (t91 != 32765) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x412 = INT8_MIN;
	uint32_t t92 = 6U;

	t92 = (((x409<=x410)-x411)&x412);

	if (t92 != 4186090624U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x414 = -1;
	int16_t x415 = 1;
	uint64_t x416 = 3538136271530959502LLU;
	volatile uint64_t t93 = 1135506194841118035LLU;

	t93 = (((x413<=x414)-x415)&x416);

	if (t93 != 3538136271530959502LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = -1LL;
	int8_t x418 = -1;
	volatile uint16_t x419 = 23U;
	volatile int32_t x420 = 6;
	volatile int32_t t94 = -10338556;

	t94 = (((x417<=x418)-x419)&x420);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x421 = 321580179251313672LLU;
	volatile int64_t x424 = 277827676621861LL;

	t95 = (((x421<=x422)-x423)&x424);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x425 = INT16_MIN;
	uint64_t x426 = 3833506466574389696LLU;
	int16_t x427 = INT16_MIN;
	int64_t x428 = -15800607157926LL;
	int64_t t96 = 7527430828282104LL;

	t96 = (((x425<=x426)-x427)&x428);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x437 = -1;
	uint32_t x438 = UINT32_MAX;
	int32_t x439 = -26546673;
	int64_t x440 = -99589759968325LL;
	static int64_t t97 = -486311948256465LL;

	t97 = (((x437<=x438)-x439)&x440);

	if (t97 != 26284466LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x441 = -282601;
	uint32_t x442 = 1959745644U;
	static uint32_t x443 = 264371979U;
	uint32_t t98 = 1616U;

	t98 = (((x441<=x442)-x443)&x444);

	if (t98 != 4U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x445 = 1881298349LLU;
	uint64_t x446 = 318654852561LLU;
	static uint64_t x447 = 7857LLU;
	int8_t x448 = INT8_MIN;
	uint64_t t99 = 45814478558058LLU;

	t99 = (((x445<=x446)-x447)&x448);

	if (t99 != 18446744073709543680LLU) { NG(); } else { ; }
	
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

