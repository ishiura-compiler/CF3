#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = 2;
static int64_t t0 = 31172435LL;
volatile int8_t x10 = INT8_MIN;
uint32_t x14 = 92129U;
volatile int32_t t4 = -92688187;
volatile uint64_t t5 = 5375870799662846LLU;
uint8_t x33 = 73U;
uint8_t x40 = 1U;
volatile int32_t t8 = -3700413;
static volatile uint64_t t9 = 3511287212104LLU;
uint32_t x45 = 30153U;
static uint32_t x46 = 267480630U;
int8_t x50 = INT8_MAX;
uint32_t t11 = 25U;
volatile int64_t t12 = -829063640998LL;
int16_t x59 = -1;
int8_t x60 = -1;
static int64_t x64 = -11701192LL;
int16_t x67 = -94;
int8_t x68 = -45;
uint16_t x72 = UINT16_MAX;
uint8_t x73 = UINT8_MAX;
uint64_t t19 = 269528450LLU;
int32_t x86 = 3;
uint32_t x87 = UINT32_MAX;
uint64_t x100 = 118LLU;
int32_t x104 = INT32_MIN;
int64_t x111 = INT64_MIN;
int16_t x113 = -1;
static uint8_t x114 = UINT8_MAX;
static uint8_t x115 = 2U;
volatile int64_t t29 = 1LL;
volatile int64_t t30 = 587970424575LL;
int16_t x140 = 8557;
static volatile int32_t t32 = 247680;
volatile uint32_t x155 = 7U;
int32_t x156 = -401180175;
uint8_t x160 = 94U;
uint8_t x172 = UINT8_MAX;
int16_t x174 = -145;
volatile uint16_t x179 = 583U;
int8_t x182 = INT8_MAX;
static int8_t x183 = -6;
static int32_t x188 = -1;
static int64_t t44 = 55565383951419LL;
int16_t x203 = INT16_MAX;
uint64_t x206 = UINT64_MAX;
static int32_t t47 = -1472771;
int64_t x218 = INT64_MAX;
static volatile int16_t x223 = -295;
uint16_t x242 = 3037U;
uint32_t x243 = 10U;
uint64_t x245 = 107939539052028LLU;
volatile int8_t x257 = -1;
int8_t x266 = -1;
int16_t x267 = INT16_MIN;
int32_t t60 = 729977712;
static int16_t x269 = -9010;
static int64_t x273 = INT64_MAX;
int32_t x276 = INT32_MIN;
int64_t t63 = -1619039154LL;
uint8_t x281 = 3U;
static volatile uint64_t t64 = 495066269617LLU;
uint32_t t67 = 6675091U;
int8_t x301 = INT8_MIN;
int8_t x306 = -1;
int32_t x312 = INT32_MIN;
int32_t x317 = 174869;
int64_t x319 = -2001LL;
int32_t x323 = -1;
int32_t x324 = INT32_MIN;
volatile int32_t t73 = -371;
uint32_t x328 = UINT32_MAX;
static int16_t x330 = INT16_MIN;
volatile int8_t x331 = 5;
static volatile int64_t t75 = -3478582220207218494LL;
int32_t t76 = -121730083;
static int8_t x339 = 11;
int64_t x341 = 613LL;
uint8_t x344 = 7U;
static uint8_t x350 = UINT8_MAX;
int16_t x355 = INT16_MIN;
volatile int16_t x357 = 58;
volatile int32_t x358 = INT32_MIN;
static volatile int8_t x362 = INT8_MAX;
int16_t x363 = INT16_MIN;
static int64_t t83 = 27LL;
volatile uint64_t x365 = 275LLU;
uint64_t x366 = UINT64_MAX;
volatile uint64_t t84 = 144846772095115LLU;
volatile int32_t x372 = -1;
int16_t x378 = INT16_MAX;
int8_t x381 = 2;
int32_t t88 = 512895;
int32_t x387 = -264531366;
volatile int32_t t92 = -636118897;
uint64_t x402 = UINT64_MAX;
int8_t x407 = INT8_MAX;
volatile int64_t t94 = 357139978LL;
int32_t t95 = 227;
int32_t x415 = INT32_MAX;
uint32_t x418 = UINT32_MAX;
uint16_t x420 = 16242U;
volatile int32_t t97 = 2;
int32_t x421 = 0;
static int8_t x423 = INT8_MIN;
int8_t x425 = -1;
volatile int32_t x428 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint8_t x2 = UINT8_MAX;
	int64_t x4 = -1168176937995632590LL;

	t0 = ((x1-(x2<=x3))%x4);

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 4U;
	static uint32_t x6 = UINT32_MAX;
	int16_t x7 = 3;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = 766101889;

	t1 = ((x5-(x6<=x7))%x8);

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x11 = 23223190417481LL;
	volatile int64_t x12 = INT64_MAX;
	static int64_t t2 = -1682007259920536264LL;

	t2 = ((x9-(x10<=x11))%x12);

	if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 229378010LL;
	volatile int16_t x15 = -18;
	static int64_t x16 = 47554789963253413LL;
	int64_t t3 = 28LL;

	t3 = ((x13-(x14<=x15))%x16);

	if (t3 != 229378009LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = UINT8_MAX;
	int16_t x18 = INT16_MIN;
	volatile int8_t x19 = INT8_MAX;
	static int8_t x20 = INT8_MIN;

	t4 = ((x17-(x18<=x19))%x20);

	if (t4 != 126) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MIN;
	uint8_t x22 = 110U;
	volatile uint8_t x23 = 58U;
	volatile uint64_t x24 = 267824417914540LLU;

	t5 = ((x21-(x22<=x23))%x24);

	if (t5 != 69463280210928LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = 8328357333LLU;
	uint32_t x30 = 3884U;
	int64_t x31 = INT64_MAX;
	int32_t x32 = -3;
	volatile uint64_t t6 = 9431930LLU;

	t6 = ((x29-(x30<=x31))%x32);

	if (t6 != 8328357332LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x34 = 4281;
	static int32_t x35 = -4037198;
	static uint16_t x36 = 12727U;
	static volatile int32_t t7 = -5818;

	t7 = ((x33-(x34<=x35))%x36);

	if (t7 != 73) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 25;
	int32_t x38 = -1;
	uint64_t x39 = 144LLU;

	t8 = ((x37-(x38<=x39))%x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x41 = UINT64_MAX;
	volatile int64_t x42 = INT64_MIN;
	static volatile uint16_t x43 = 32U;
	volatile int8_t x44 = -1;

	t9 = ((x41-(x42<=x43))%x44);

	if (t9 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x47 = INT16_MIN;
	int16_t x48 = 206;
	uint32_t t10 = 43U;

	t10 = ((x45-(x46<=x47))%x48);

	if (t10 != 76U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = INT8_MIN;
	static int64_t x51 = INT64_MIN;
	uint32_t x52 = 848433U;

	t11 = ((x49-(x50<=x51))%x52);

	if (t11 != 199322U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MAX;
	uint64_t x55 = 34864241245118LLU;
	volatile int64_t x56 = INT64_MAX;

	t12 = ((x53-(x54<=x55))%x56);

	if (t12 != 4294967294LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 1U;
	volatile int64_t x58 = INT64_MIN;
	int32_t t13 = -1;

	t13 = ((x57-(x58<=x59))%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = INT32_MAX;
	int64_t x62 = -29755LL;
	uint32_t x63 = UINT32_MAX;
	int64_t t14 = -164154231643947082LL;

	t14 = ((x61-(x62<=x63))%x64);

	if (t14 != 6165510LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = -1;
	volatile int16_t x66 = 483;
	volatile int32_t t15 = -5;

	t15 = ((x65-(x66<=x67))%x68);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = 1;
	static int8_t x70 = INT8_MIN;
	volatile int8_t x71 = INT8_MIN;
	int32_t t16 = 13937;

	t16 = ((x69-(x70<=x71))%x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = -1;
	static int64_t x75 = INT64_MIN;
	int32_t x76 = -1;
	int32_t t17 = 1;

	t17 = ((x73-(x74<=x75))%x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	uint16_t x78 = UINT16_MAX;
	volatile int8_t x79 = INT8_MAX;
	int8_t x80 = 9;
	int64_t t18 = -113LL;

	t18 = ((x77-(x78<=x79))%x80);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 6335U;
	uint8_t x82 = 117U;
	uint8_t x83 = 11U;
	uint64_t x84 = UINT64_MAX;

	t19 = ((x81-(x82<=x83))%x84);

	if (t19 != 6335LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = UINT64_MAX;
	static uint8_t x88 = 5U;
	volatile uint64_t t20 = 94654716LLU;

	t20 = ((x85-(x86<=x87))%x88);

	if (t20 != 4LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MAX;
	volatile int16_t x90 = INT16_MIN;
	uint16_t x91 = 5U;
	int8_t x92 = INT8_MAX;
	volatile int32_t t21 = -315;

	t21 = ((x89-(x90<=x91))%x92);

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MAX;
	volatile int32_t x99 = -1;
	static uint64_t t22 = 3669906992523499413LLU;

	t22 = ((x97-(x98<=x99))%x100);

	if (t22 != 100LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x101 = 523472U;
	int64_t x102 = -1LL;
	static int16_t x103 = 8;
	volatile uint32_t t23 = 19298U;

	t23 = ((x101-(x102<=x103))%x104);

	if (t23 != 523471U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = -6;
	static volatile int64_t x106 = -1LL;
	int64_t x107 = INT64_MIN;
	int16_t x108 = 2634;
	static int32_t t24 = -6326588;

	t24 = ((x105-(x106<=x107))%x108);

	if (t24 != -6) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 63U;
	uint16_t x110 = 23U;
	static uint8_t x112 = 3U;
	int32_t t25 = 13227;

	t25 = ((x109-(x110<=x111))%x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x116 = 20891778U;
	volatile uint32_t t26 = 1030U;

	t26 = ((x113-(x114<=x115))%x116);

	if (t26 != 12152805U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1;
	uint64_t x118 = 168390867LLU;
	uint32_t x119 = 467342136U;
	static int16_t x120 = INT16_MIN;
	volatile int32_t t27 = 70;

	t27 = ((x117-(x118<=x119))%x120);

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -15LL;
	int8_t x122 = 1;
	uint32_t x123 = 313975052U;
	static volatile int64_t x124 = INT64_MIN;
	static int64_t t28 = -3LL;

	t28 = ((x121-(x122<=x123))%x124);

	if (t28 != -16LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -1LL;
	volatile int16_t x126 = INT16_MIN;
	int32_t x127 = -2580;
	int8_t x128 = -1;

	t29 = ((x125-(x126<=x127))%x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = UINT16_MAX;
	static uint16_t x130 = 7638U;
	int8_t x131 = INT8_MIN;
	int64_t x132 = -1LL;

	t30 = ((x129-(x130<=x131))%x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	uint16_t x134 = 0U;
	int16_t x135 = -1;
	static int16_t x136 = 4;
	volatile int32_t t31 = -397877;

	t31 = ((x133-(x134<=x135))%x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MAX;
	uint8_t x139 = 14U;

	t32 = ((x137-(x138<=x139))%x140);

	if (t32 != -7097) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x141 = 4010U;
	static uint64_t x142 = UINT64_MAX;
	static uint8_t x143 = 63U;
	int32_t x144 = -24;
	volatile int32_t t33 = -61557;

	t33 = ((x141-(x142<=x143))%x144);

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x145 = 1470U;
	static volatile uint64_t x146 = 215652LLU;
	uint32_t x147 = 1175727U;
	int64_t x148 = 8213542216439LL;
	volatile int64_t t34 = -2020774554110259626LL;

	t34 = ((x145-(x146<=x147))%x148);

	if (t34 != 1469LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = INT8_MIN;
	volatile int8_t x150 = 12;
	static volatile int32_t x151 = 13;
	int32_t x152 = INT32_MAX;
	volatile int32_t t35 = -65;

	t35 = ((x149-(x150<=x151))%x152);

	if (t35 != -129) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = 69701979321582LLU;
	int16_t x154 = INT16_MAX;
	uint64_t t36 = 117644564383199LLU;

	t36 = ((x153-(x154<=x155))%x156);

	if (t36 != 69701979321582LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x157 = UINT16_MAX;
	int32_t x158 = INT32_MIN;
	volatile uint8_t x159 = UINT8_MAX;
	int32_t t37 = 7122532;

	t37 = ((x157-(x158<=x159))%x160);

	if (t37 != 16) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	uint16_t x166 = 20099U;
	int8_t x167 = 13;
	uint8_t x168 = 42U;
	int64_t t38 = -559913304173819LL;

	t38 = ((x165-(x166<=x167))%x168);

	if (t38 != -8LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = -58855630;
	uint8_t x170 = 16U;
	int64_t x171 = INT64_MAX;
	static int32_t t39 = -1290;

	t39 = ((x169-(x170<=x171))%x172);

	if (t39 != -101) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = -1;
	int32_t x175 = INT32_MAX;
	uint32_t x176 = 1155U;
	volatile uint32_t t40 = 142975657U;

	t40 = ((x173-(x174<=x175))%x176);

	if (t40 != 464U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x177 = UINT16_MAX;
	int32_t x178 = 785863149;
	int64_t x180 = -926091143LL;
	volatile int64_t t41 = 133462313807765LL;

	t41 = ((x177-(x178<=x179))%x180);

	if (t41 != 65535LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x181 = -1;
	volatile int32_t x184 = -15;
	int32_t t42 = -1784;

	t42 = ((x181-(x182<=x183))%x184);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x185 = -1010011091;
	static int64_t x186 = -1LL;
	int16_t x187 = 99;
	int32_t t43 = -3;

	t43 = ((x185-(x186<=x187))%x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = -30;
	uint8_t x190 = 79U;
	static uint8_t x191 = 0U;
	static int64_t x192 = INT64_MIN;

	t44 = ((x189-(x190<=x191))%x192);

	if (t44 != -30LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = 0;
	int32_t x202 = INT32_MIN;
	static uint64_t x204 = UINT64_MAX;
	volatile uint64_t t45 = 0LLU;

	t45 = ((x201-(x202<=x203))%x204);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x205 = 26239311111LLU;
	int16_t x207 = 1;
	static uint32_t x208 = 1144U;
	volatile uint64_t t46 = 1LLU;

	t46 = ((x205-(x206<=x207))%x208);

	if (t46 != 871LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MIN;
	int16_t x214 = -2419;
	uint64_t x215 = 1142052350662LLU;
	int16_t x216 = -165;

	t47 = ((x213-(x214<=x215))%x216);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x217 = UINT8_MAX;
	uint8_t x219 = 59U;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t48 = -12056;

	t48 = ((x217-(x218<=x219))%x220);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x221 = 6950146U;
	volatile int8_t x222 = INT8_MAX;
	int64_t x224 = INT64_MIN;
	volatile int64_t t49 = 68355313711780LL;

	t49 = ((x221-(x222<=x223))%x224);

	if (t49 != 6950146LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = -10;
	volatile uint32_t x226 = 1606098U;
	int16_t x227 = -1;
	int32_t x228 = 590;
	volatile int32_t t50 = 59;

	t50 = ((x225-(x226<=x227))%x228);

	if (t50 != -11) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x229 = 412488781717188LLU;
	uint64_t x230 = 4783LLU;
	static uint16_t x231 = 9U;
	volatile uint8_t x232 = UINT8_MAX;
	volatile uint64_t t51 = 1053318LLU;

	t51 = ((x229-(x230<=x231))%x232);

	if (t51 != 153LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x233 = -1;
	uint8_t x234 = 2U;
	volatile int8_t x235 = INT8_MAX;
	static volatile uint8_t x236 = 3U;
	static volatile int32_t t52 = -24893248;

	t52 = ((x233-(x234<=x235))%x236);

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x237 = INT32_MAX;
	uint32_t x238 = 550180U;
	uint32_t x239 = 27877168U;
	uint8_t x240 = UINT8_MAX;
	int32_t t53 = 1441;

	t53 = ((x237-(x238<=x239))%x240);

	if (t53 != 126) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = INT16_MIN;
	int16_t x244 = -1;
	volatile int32_t t54 = -570;

	t54 = ((x241-(x242<=x243))%x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x246 = INT16_MIN;
	static int32_t x247 = INT32_MIN;
	int8_t x248 = -4;
	volatile uint64_t t55 = 1850787130LLU;

	t55 = ((x245-(x246<=x247))%x248);

	if (t55 != 107939539052028LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = UINT32_MAX;
	volatile uint64_t x250 = 2678074214834LLU;
	uint16_t x251 = UINT16_MAX;
	int16_t x252 = -172;
	volatile uint32_t t56 = 218369921U;

	t56 = ((x249-(x250<=x251))%x252);

	if (t56 != 171U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x253 = -56;
	static int16_t x254 = INT16_MIN;
	volatile int64_t x255 = -1LL;
	static uint16_t x256 = 1U;
	volatile int32_t t57 = 69;

	t57 = ((x253-(x254<=x255))%x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x258 = INT64_MAX;
	volatile int32_t x259 = INT32_MIN;
	int8_t x260 = 61;
	volatile int32_t t58 = 624891;

	t58 = ((x257-(x258<=x259))%x260);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = INT32_MAX;
	uint8_t x262 = UINT8_MAX;
	uint8_t x263 = 36U;
	int16_t x264 = INT16_MIN;
	volatile int32_t t59 = 778930;

	t59 = ((x261-(x262<=x263))%x264);

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x265 = INT32_MAX;
	uint8_t x268 = 13U;

	t60 = ((x265-(x266<=x267))%x268);

	if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x270 = INT32_MIN;
	volatile int32_t x271 = INT32_MIN;
	volatile uint32_t x272 = 244290255U;
	static volatile uint32_t t61 = 169U;

	t61 = ((x269-(x270<=x271))%x272);

	if (t61 != 142023950U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x274 = 466377879U;
	uint32_t x275 = 2105866U;
	volatile int64_t t62 = -11519008958LL;

	t62 = ((x273-(x274<=x275))%x276);

	if (t62 != 2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x277 = -115120723804987LL;
	volatile int16_t x278 = -1;
	uint8_t x279 = 14U;
	static int64_t x280 = -57689591501LL;

	t63 = ((x277-(x278<=x279))%x280);

	if (t63 != -29988760493LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x282 = INT8_MIN;
	static volatile int8_t x283 = INT8_MIN;
	uint64_t x284 = UINT64_MAX;

	t64 = ((x281-(x282<=x283))%x284);

	if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = -36;
	volatile int16_t x290 = -58;
	volatile uint16_t x291 = 50U;
	int8_t x292 = INT8_MAX;
	int32_t t65 = 57;

	t65 = ((x289-(x290<=x291))%x292);

	if (t65 != -37) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x293 = UINT64_MAX;
	static int32_t x294 = INT32_MAX;
	volatile uint64_t x295 = 48418605LLU;
	int16_t x296 = 1702;
	uint64_t t66 = 815591379538958747LLU;

	t66 = ((x293-(x294<=x295))%x296);

	if (t66 != 603LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = -1;
	int64_t x298 = 65387832811887LL;
	uint32_t x299 = 286823074U;
	volatile uint32_t x300 = UINT32_MAX;

	t67 = ((x297-(x298<=x299))%x300);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x302 = 1;
	static int16_t x303 = -1;
	int64_t x304 = -1LL;
	volatile int64_t t68 = 891081397754LL;

	t68 = ((x301-(x302<=x303))%x304);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x305 = INT8_MIN;
	int64_t x307 = -1LL;
	uint32_t x308 = 1504503U;
	volatile uint32_t t69 = 625047700U;

	t69 = ((x305-(x306<=x307))%x308);

	if (t69 != 1115605U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = INT32_MIN;
	volatile int32_t x310 = -100495420;
	int32_t x311 = INT32_MIN;
	static volatile int32_t t70 = 51124;

	t70 = ((x309-(x310<=x311))%x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = 2026U;
	uint8_t x314 = 33U;
	uint8_t x315 = 6U;
	uint16_t x316 = 1438U;
	volatile int32_t t71 = 432003921;

	t71 = ((x313-(x314<=x315))%x316);

	if (t71 != 588) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x318 = -1;
	static int8_t x320 = INT8_MAX;
	int32_t t72 = -1296;

	t72 = ((x317-(x318<=x319))%x320);

	if (t72 != 117) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x321 = INT8_MAX;
	volatile int64_t x322 = 338325947329426120LL;

	t73 = ((x321-(x322<=x323))%x324);

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x325 = -1;
	uint64_t x326 = UINT64_MAX;
	int8_t x327 = INT8_MAX;
	uint32_t t74 = 5944U;

	t74 = ((x325-(x326<=x327))%x328);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x329 = -31;
	static volatile int64_t x332 = 1582503817656682LL;

	t75 = ((x329-(x330<=x331))%x332);

	if (t75 != -32LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x333 = INT32_MAX;
	uint8_t x334 = UINT8_MAX;
	static volatile int64_t x335 = INT64_MAX;
	int8_t x336 = -1;

	t76 = ((x333-(x334<=x335))%x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = INT32_MAX;
	volatile int8_t x338 = 1;
	static uint16_t x340 = UINT16_MAX;
	volatile int32_t t77 = 818;

	t77 = ((x337-(x338<=x339))%x340);

	if (t77 != 32766) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x342 = -1;
	uint64_t x343 = UINT64_MAX;
	volatile int64_t t78 = -48614064141315699LL;

	t78 = ((x341-(x342<=x343))%x344);

	if (t78 != 3LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x345 = INT16_MIN;
	int64_t x346 = INT64_MIN;
	static uint8_t x347 = 7U;
	uint32_t x348 = 20946361U;
	uint32_t t79 = 53125033U;

	t79 = ((x345-(x346<=x347))%x348);

	if (t79 != 930522U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x349 = 0U;
	static int8_t x351 = INT8_MAX;
	int8_t x352 = -1;
	static int32_t t80 = 0;

	t80 = ((x349-(x350<=x351))%x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x353 = 205155U;
	volatile uint8_t x354 = UINT8_MAX;
	uint16_t x356 = 18534U;
	uint32_t t81 = 27197U;

	t81 = ((x353-(x354<=x355))%x356);

	if (t81 != 1281U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x359 = INT32_MAX;
	int64_t x360 = 122859119LL;
	int64_t t82 = 9432049LL;

	t82 = ((x357-(x358<=x359))%x360);

	if (t82 != 57LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = -1;
	int64_t x364 = INT64_MIN;

	t83 = ((x361-(x362<=x363))%x364);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x367 = INT32_MIN;
	static int32_t x368 = 1;

	t84 = ((x365-(x366<=x367))%x368);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x369 = UINT16_MAX;
	volatile uint16_t x370 = 13394U;
	int32_t x371 = INT32_MIN;
	int32_t t85 = -598506302;

	t85 = ((x369-(x370<=x371))%x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x373 = 8U;
	int64_t x374 = INT64_MIN;
	volatile int8_t x375 = 2;
	int32_t x376 = -1;
	volatile int32_t t86 = 636;

	t86 = ((x373-(x374<=x375))%x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = -11251;
	int8_t x379 = -47;
	uint16_t x380 = UINT16_MAX;
	static int32_t t87 = -65436;

	t87 = ((x377-(x378<=x379))%x380);

	if (t87 != -11251) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x382 = INT16_MIN;
	static uint8_t x383 = 20U;
	static int8_t x384 = 15;

	t88 = ((x381-(x382<=x383))%x384);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x385 = UINT16_MAX;
	uint32_t x386 = 1762951912U;
	volatile uint8_t x388 = 14U;
	volatile int32_t t89 = -13;

	t89 = ((x385-(x386<=x387))%x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = -3;
	int32_t x390 = INT32_MAX;
	static uint8_t x391 = 3U;
	int32_t x392 = 282335;
	static int32_t t90 = -659558973;

	t90 = ((x389-(x390<=x391))%x392);

	if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x393 = INT16_MIN;
	int32_t x394 = 3;
	uint16_t x395 = UINT16_MAX;
	static uint16_t x396 = 28850U;
	int32_t t91 = -4690676;

	t91 = ((x393-(x394<=x395))%x396);

	if (t91 != -3919) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = -1;
	static int32_t x398 = -218436502;
	int16_t x399 = INT16_MIN;
	uint16_t x400 = UINT16_MAX;

	t92 = ((x397-(x398<=x399))%x400);

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x401 = 149829538846486LL;
	static int64_t x403 = -1LL;
	static int64_t x404 = -1LL;
	static volatile int64_t t93 = 2217777004491642LL;

	t93 = ((x401-(x402<=x403))%x404);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x405 = UINT32_MAX;
	int64_t x406 = -1LL;
	int64_t x408 = -2175547253433042209LL;

	t94 = ((x405-(x406<=x407))%x408);

	if (t94 != 4294967294LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = INT8_MAX;
	int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MIN;
	int8_t x412 = INT8_MIN;

	t95 = ((x409-(x410<=x411))%x412);

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x413 = 1;
	int8_t x414 = INT8_MAX;
	uint32_t x416 = 128U;
	uint32_t t96 = 671U;

	t96 = ((x413-(x414<=x415))%x416);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x417 = 14535U;
	volatile uint16_t x419 = 1442U;

	t97 = ((x417-(x418<=x419))%x420);

	if (t97 != 14535) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x422 = UINT64_MAX;
	uint32_t x424 = 9342U;
	uint32_t t98 = 18337U;

	t98 = ((x421-(x422<=x423))%x424);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x426 = 37U;
	int16_t x427 = INT16_MIN;
	volatile int32_t t99 = 986882020;

	t99 = ((x425-(x426<=x427))%x428);

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

