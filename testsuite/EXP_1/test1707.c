#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = UINT16_MAX;
static int64_t x8 = INT64_MIN;
int16_t x10 = INT16_MIN;
int32_t x11 = INT32_MIN;
uint8_t x12 = 1U;
int8_t x17 = -1;
volatile int64_t t4 = 1127224663601628LL;
int64_t x36 = INT64_MIN;
static int64_t x43 = 1998947954290544510LL;
static int16_t x47 = INT16_MIN;
int16_t x59 = -1;
static volatile int32_t t12 = 197819;
int64_t x66 = -1LL;
uint16_t x68 = 1U;
int32_t x77 = INT32_MAX;
uint8_t x96 = UINT8_MAX;
int64_t x99 = INT64_MIN;
uint64_t t22 = 6LLU;
int32_t x111 = -1860713;
uint32_t t25 = 15235U;
volatile uint16_t x131 = 0U;
static int32_t x135 = -1;
volatile int16_t x142 = 35;
int16_t x144 = INT16_MIN;
int32_t t31 = 79;
volatile uint64_t x150 = 91063745623100LLU;
static int64_t x158 = -1LL;
uint64_t t36 = 848756307LLU;
uint16_t x169 = UINT16_MAX;
static volatile int16_t x171 = INT16_MAX;
volatile int16_t x172 = INT16_MIN;
uint64_t x190 = UINT64_MAX;
int64_t x194 = INT64_MIN;
int16_t x196 = INT16_MAX;
int16_t x197 = 3;
static int8_t x211 = -14;
volatile int64_t x217 = INT64_MIN;
int32_t x219 = INT32_MAX;
volatile uint8_t x227 = 58U;
int16_t x236 = -12;
uint64_t t50 = 3378256680123557LLU;
uint64_t x239 = 179281809484877LLU;
volatile uint64_t t54 = 57118868806LLU;
volatile int64_t x259 = INT64_MAX;
volatile int64_t x264 = INT64_MAX;
int64_t x267 = INT64_MIN;
uint64_t x273 = 341LLU;
uint32_t x276 = 180U;
volatile int16_t x282 = -3239;
int16_t x287 = -6991;
int16_t x295 = 1;
volatile int64_t t66 = 270LL;
uint16_t x318 = 5501U;
uint16_t x319 = UINT16_MAX;
int64_t x346 = -1LL;
int64_t x348 = INT64_MIN;
static int64_t t75 = 703LL;
uint64_t t77 = 3142289416993536151LLU;
volatile int32_t t78 = -237909212;
static uint8_t x361 = 15U;
volatile uint64_t t79 = 8886LLU;
int32_t x370 = INT32_MIN;
static volatile uint8_t x372 = UINT8_MAX;
int16_t x375 = -1;
uint8_t x378 = UINT8_MAX;
uint32_t x384 = 1986U;
static int8_t x385 = INT8_MIN;
volatile int16_t x386 = INT16_MIN;
int32_t t84 = -45196586;
uint32_t x391 = 218U;
int16_t x392 = INT16_MIN;
volatile int64_t t85 = -3048547653884027581LL;
static uint16_t x393 = 103U;
volatile int64_t t87 = 22868041582656795LL;
int64_t x403 = 4873058LL;
uint64_t x407 = UINT64_MAX;
uint64_t x414 = UINT64_MAX;
uint32_t x415 = UINT32_MAX;
static int16_t x420 = INT16_MIN;
uint64_t t92 = 215LLU;
volatile int8_t x426 = INT8_MAX;
int16_t x434 = INT16_MAX;
int64_t x439 = 712684957002333050LL;
static volatile int64_t t95 = -251287071844428LL;
int16_t x441 = 638;
static int64_t x448 = -865028838535214LL;
volatile int32_t x449 = 1;
int64_t t98 = -21195364395488LL;
volatile int16_t x454 = INT16_MAX;


void f0(void) {
	static int64_t x1 = -63683LL;
	volatile uint32_t x2 = 768853565U;
	int32_t x3 = INT32_MIN;
	int64_t t0 = -49626447LL;

	t0 = (((x1&x2)-x3)/x4);

	if (t0 != 44499LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	uint8_t x6 = 1U;
	volatile int16_t x7 = INT16_MIN;
	static int64_t t1 = 168LL;

	t1 = (((x5&x6)-x7)/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MIN;
	static int32_t t2 = 2939;

	t2 = (((x9&x10)-x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = -1;
	int64_t x19 = -4329LL;
	static int8_t x20 = -25;
	static int64_t t3 = 428682603400519LL;

	t3 = (((x17&x18)-x19)/x20);

	if (t3 != -173LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MIN;
	volatile int64_t x22 = INT64_MIN;
	int32_t x23 = -1;
	int32_t x24 = INT32_MIN;

	t4 = (((x21&x22)-x23)/x24);

	if (t4 != 4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MAX;
	static uint8_t x26 = 21U;
	static int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t5 = -92;

	t5 = (((x25&x26)-x27)/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	int16_t x30 = INT16_MIN;
	int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MAX;
	int64_t t6 = 1025237433487510037LL;

	t6 = (((x29&x30)-x31)/x32);

	if (t6 != 72624976668147582LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 1;
	uint8_t x34 = 8U;
	uint8_t x35 = UINT8_MAX;
	int64_t t7 = -23271449LL;

	t7 = (((x33&x34)-x35)/x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MIN;
	static uint32_t x38 = UINT32_MAX;
	int8_t x39 = INT8_MAX;
	static int32_t x40 = 1;
	uint32_t t8 = 575904282U;

	t8 = (((x37&x38)-x39)/x40);

	if (t8 != 2147483521U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = 13599884LLU;
	int64_t x42 = INT64_MIN;
	int32_t x44 = 419;
	uint64_t t9 = 1743LLU;

	t9 = (((x41&x42)-x43)/x44);

	if (t9 != 39254883339902164LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	uint16_t x46 = 4U;
	static int8_t x48 = -1;
	int32_t t10 = 242;

	t10 = (((x45&x46)-x47)/x48);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	volatile int64_t x50 = -967464066LL;
	uint64_t x51 = UINT64_MAX;
	uint8_t x52 = 1U;
	volatile uint64_t t11 = 130900253452505276LLU;

	t11 = (((x49&x50)-x51)/x52);

	if (t11 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -72;
	volatile int8_t x58 = INT8_MAX;
	static volatile int32_t x60 = -1;

	t12 = (((x57&x58)-x59)/x60);

	if (t12 != -57) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 235130460U;
	static int32_t x62 = -1;
	int64_t x63 = INT64_MAX;
	static volatile int32_t x64 = -1;
	int64_t t13 = -69115587LL;

	t13 = (((x61&x62)-x63)/x64);

	if (t13 != 9223372036619645347LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MAX;
	int32_t x67 = 15743;
	int64_t t14 = -7759357951304210LL;

	t14 = (((x65&x66)-x67)/x68);

	if (t14 != -15616LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MAX;
	uint64_t x71 = 292LLU;
	int64_t x72 = -119842051605373LL;
	uint64_t t15 = 25418744742LLU;

	t15 = (((x69&x70)-x71)/x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = INT8_MAX;
	int32_t x74 = INT32_MIN;
	int8_t x75 = -1;
	static int8_t x76 = -1;
	int32_t t16 = -14035;

	t16 = (((x73&x74)-x75)/x76);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x78 = -1;
	int8_t x79 = INT8_MAX;
	int8_t x80 = 1;
	int32_t t17 = 4703669;

	t17 = (((x77&x78)-x79)/x80);

	if (t17 != 2147483520) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	int32_t x82 = INT32_MIN;
	int16_t x83 = -15;
	static uint16_t x84 = 27U;
	volatile int32_t t18 = 2633974;

	t18 = (((x81&x82)-x83)/x84);

	if (t18 != -79536430) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x85 = 16918459783LLU;
	static int64_t x86 = INT64_MAX;
	volatile int64_t x87 = 25328294178104LL;
	int16_t x88 = 330;
	uint64_t t19 = 422964565079426194LLU;

	t19 = (((x85&x86)-x87)/x88);

	if (t19 != 55899147764647979LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = 30;
	int32_t x90 = INT32_MAX;
	int16_t x91 = 363;
	static uint64_t x92 = 266007263LLU;
	static uint64_t t20 = 7653281032913329291LLU;

	t20 = (((x89&x90)-x91)/x92);

	if (t20 != 69346768451LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x94 = 376U;
	volatile uint16_t x95 = 237U;
	static volatile int32_t t21 = -2;

	t21 = (((x93&x94)-x95)/x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 377471675931705LLU;
	uint64_t x98 = UINT64_MAX;
	int8_t x100 = INT8_MIN;

	t22 = (((x97&x98)-x99)/x100);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = -171279;
	static int16_t x102 = INT16_MIN;
	uint8_t x103 = 13U;
	int8_t x104 = INT8_MIN;
	static int32_t t23 = -245;

	t23 = (((x101&x102)-x103)/x104);

	if (t23 != 1536) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = 325714591759398LL;
	uint16_t x106 = UINT16_MAX;
	uint8_t x107 = 54U;
	int16_t x108 = -193;
	static volatile int64_t t24 = 1160636985424181LL;

	t24 = (((x105&x106)-x107)/x108);

	if (t24 != -79LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 28U;
	uint32_t x110 = 5478928U;
	static int8_t x112 = -1;

	t25 = (((x109&x110)-x111)/x112);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = UINT32_MAX;
	uint16_t x114 = 118U;
	uint32_t x115 = 30305192U;
	volatile int64_t x116 = INT64_MIN;
	int64_t t26 = 8028163062932670LL;

	t26 = (((x113&x114)-x115)/x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = UINT8_MAX;
	static int64_t x118 = -1LL;
	int16_t x119 = 0;
	uint8_t x120 = 1U;
	volatile int64_t t27 = 29698LL;

	t27 = (((x117&x118)-x119)/x120);

	if (t27 != 255LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -2128;
	volatile int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	int64_t x128 = -50786813LL;
	int64_t t28 = 20525LL;

	t28 = (((x125&x126)-x127)/x128);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x129 = 8431090092639LLU;
	static int32_t x130 = INT32_MAX;
	int64_t x132 = INT64_MAX;
	volatile uint64_t t29 = 585372128LLU;

	t29 = (((x129&x130)-x131)/x132);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	int64_t x134 = -1LL;
	volatile uint8_t x136 = 12U;
	static volatile int64_t t30 = -3725709087793161LL;

	t30 = (((x133&x134)-x135)/x136);

	if (t30 != -178956970LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x141 = UINT8_MAX;
	static int8_t x143 = INT8_MIN;

	t31 = (((x141&x142)-x143)/x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x145 = 56U;
	uint8_t x146 = UINT8_MAX;
	int64_t x147 = 270735050280160856LL;
	int32_t x148 = 1176258;
	static volatile int64_t t32 = 784328LL;

	t32 = (((x145&x146)-x147)/x148);

	if (t32 != -230166383803LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = INT64_MIN;
	int64_t x151 = -2052501LL;
	int32_t x152 = -310391;
	volatile uint64_t t33 = 237LLU;

	t33 = (((x149&x150)-x151)/x152);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = INT16_MIN;
	uint16_t x154 = 6956U;
	int16_t x155 = 1;
	uint8_t x156 = 1U;
	int32_t t34 = -511;

	t34 = (((x153&x154)-x155)/x156);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x157 = 13U;
	uint32_t x159 = UINT32_MAX;
	uint32_t x160 = UINT32_MAX;
	volatile int64_t t35 = -2778476LL;

	t35 = (((x157&x158)-x159)/x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x161 = 1001LLU;
	uint32_t x162 = 4380877U;
	volatile int32_t x163 = -1;
	int8_t x164 = INT8_MIN;

	t36 = (((x161&x162)-x163)/x164);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x170 = 10855303395LL;
	int64_t t37 = 20684185757LL;

	t37 = (((x169&x170)-x171)/x172);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = 75861870U;
	int16_t x174 = 3753;
	int32_t x175 = -8093;
	static int32_t x176 = 2799;
	uint32_t t38 = 5124U;

	t38 = (((x173&x174)-x175)/x176);

	if (t38 != 4U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x181 = -278416221176734360LL;
	int64_t x182 = 248925LL;
	static volatile int8_t x183 = INT8_MIN;
	volatile uint32_t x184 = 36748607U;
	volatile int64_t t39 = 1LL;

	t39 = (((x181&x182)-x183)/x184);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MIN;
	uint8_t x186 = 18U;
	int64_t x187 = INT64_MAX;
	int8_t x188 = -1;
	int64_t t40 = INT64_MAX;

	t40 = (((x185&x186)-x187)/x188);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = -1;
	uint32_t x191 = 674621U;
	int64_t x192 = INT64_MIN;
	volatile uint64_t t41 = 818203453052634LLU;

	t41 = (((x189&x190)-x191)/x192);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = 1183604U;
	volatile uint32_t x195 = UINT32_MAX;
	int64_t t42 = -14LL;

	t42 = (((x193&x194)-x195)/x196);

	if (t42 != -131076LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x198 = 925U;
	volatile uint32_t x199 = 472U;
	static int8_t x200 = -1;
	uint32_t t43 = 2050392952U;

	t43 = (((x197&x198)-x199)/x200);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x201 = UINT64_MAX;
	int64_t x202 = INT64_MIN;
	static volatile uint8_t x203 = 59U;
	int32_t x204 = -133254251;
	uint64_t t44 = 2750573865266LLU;

	t44 = (((x201&x202)-x203)/x204);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = -1LL;
	volatile uint8_t x206 = UINT8_MAX;
	volatile int32_t x207 = -1;
	uint8_t x208 = 2U;
	int64_t t45 = 3875LL;

	t45 = (((x205&x206)-x207)/x208);

	if (t45 != 128LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = 3;
	static uint16_t x212 = 15U;
	static volatile int32_t t46 = 7427;

	t46 = (((x209&x210)-x211)/x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x213 = INT16_MAX;
	int32_t x214 = -1;
	volatile int8_t x215 = 47;
	uint8_t x216 = 4U;
	static volatile int32_t t47 = -3983;

	t47 = (((x213&x214)-x215)/x216);

	if (t47 != 8180) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x218 = INT8_MAX;
	int8_t x220 = INT8_MIN;
	volatile int64_t t48 = -4319234689294LL;

	t48 = (((x217&x218)-x219)/x220);

	if (t48 != 16777215LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x225 = 261LLU;
	int8_t x226 = -1;
	uint64_t x228 = 29356LLU;
	uint64_t t49 = 0LLU;

	t49 = (((x225&x226)-x227)/x228);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = INT32_MIN;
	uint64_t x234 = 53225071190756LLU;
	uint16_t x235 = 119U;

	t50 = (((x233&x234)-x235)/x236);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = INT64_MIN;
	static uint64_t x238 = 5750200423252363553LLU;
	int16_t x240 = 101;
	uint64_t t51 = 7917016058058LLU;

	t51 = (((x237&x238)-x239)/x240);

	if (t51 != 182639255365347195LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x241 = UINT64_MAX;
	uint8_t x242 = UINT8_MAX;
	int8_t x243 = INT8_MIN;
	int32_t x244 = -1;
	uint64_t t52 = 1002480367889502LLU;

	t52 = (((x241&x242)-x243)/x244);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = 195123949LL;
	int8_t x246 = -7;
	int32_t x247 = -1141824;
	static int32_t x248 = INT32_MIN;
	int64_t t53 = 281632043LL;

	t53 = (((x245&x246)-x247)/x248);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x249 = 1851U;
	uint64_t x250 = 25837115867795LLU;
	uint32_t x251 = 533959607U;
	uint8_t x252 = UINT8_MAX;

	t54 = (((x249&x250)-x251)/x252);

	if (t54 != 72340172835982715LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x253 = INT16_MIN;
	uint32_t x254 = UINT32_MAX;
	uint16_t x255 = UINT16_MAX;
	volatile int32_t x256 = -1;
	uint32_t t55 = 1331U;

	t55 = (((x253&x254)-x255)/x256);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x257 = UINT16_MAX;
	static int16_t x258 = INT16_MIN;
	int64_t x260 = INT64_MAX;
	volatile int64_t t56 = 49315121032772LL;

	t56 = (((x257&x258)-x259)/x260);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x261 = INT16_MAX;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = UINT64_MAX;
	volatile uint64_t t57 = 18324LLU;

	t57 = (((x261&x262)-x263)/x264);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x265 = INT64_MIN;
	static int32_t x266 = -1;
	int64_t x268 = INT64_MIN;
	int64_t t58 = -9LL;

	t58 = (((x265&x266)-x267)/x268);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x274 = 67U;
	int16_t x275 = INT16_MIN;
	volatile uint64_t t59 = 10379831LLU;

	t59 = (((x273&x274)-x275)/x276);

	if (t59 != 182LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x277 = -11;
	int64_t x278 = -1LL;
	uint32_t x279 = 5832U;
	int16_t x280 = -1;
	int64_t t60 = -3960402LL;

	t60 = (((x277&x278)-x279)/x280);

	if (t60 != 5843LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x281 = 117U;
	uint64_t x283 = UINT64_MAX;
	uint16_t x284 = 17017U;
	static volatile uint64_t t61 = 51927848LLU;

	t61 = (((x281&x282)-x283)/x284);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x285 = 3LLU;
	int32_t x286 = INT32_MIN;
	uint32_t x288 = 1U;
	static uint64_t t62 = 221LLU;

	t62 = (((x285&x286)-x287)/x288);

	if (t62 != 6991LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = 0;
	int32_t x294 = -1;
	int8_t x296 = -1;
	volatile int32_t t63 = -606;

	t63 = (((x293&x294)-x295)/x296);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x297 = INT64_MIN;
	int16_t x298 = -4246;
	int64_t x299 = INT64_MIN;
	static int64_t x300 = 54670024LL;
	int64_t t64 = 237741399731471LL;

	t64 = (((x297&x298)-x299)/x300);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = INT64_MIN;
	uint8_t x302 = 0U;
	int64_t x303 = 5955253LL;
	int16_t x304 = -1;
	volatile int64_t t65 = 65886872LL;

	t65 = (((x301&x302)-x303)/x304);

	if (t65 != 5955253LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = 7502355118434329LL;
	int64_t x306 = INT64_MIN;
	static int32_t x307 = -923;
	static uint16_t x308 = UINT16_MAX;

	t66 = (((x305&x306)-x307)/x308);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = INT64_MAX;
	uint16_t x310 = 37U;
	uint16_t x311 = UINT16_MAX;
	uint64_t x312 = 101LLU;
	uint64_t t67 = 4019660542174493689LLU;

	t67 = (((x309&x310)-x311)/x312);

	if (t67 != 182641030432767189LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = INT32_MAX;
	volatile int32_t x314 = INT32_MIN;
	volatile int8_t x315 = 1;
	int8_t x316 = INT8_MIN;
	int32_t t68 = -6209;

	t68 = (((x313&x314)-x315)/x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x317 = INT32_MIN;
	volatile int16_t x320 = -628;
	int32_t t69 = -52311079;

	t69 = (((x317&x318)-x319)/x320);

	if (t69 != 104) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = -102636685180967153LL;
	static uint64_t x322 = 157747971LLU;
	static volatile int32_t x323 = INT32_MAX;
	volatile int8_t x324 = INT8_MIN;
	uint64_t t70 = 20223617LLU;

	t70 = (((x321&x322)-x323)/x324);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = -4;
	volatile int32_t x326 = INT32_MIN;
	static volatile int32_t x327 = -1;
	uint16_t x328 = 9U;
	static volatile int32_t t71 = -59;

	t71 = (((x325&x326)-x327)/x328);

	if (t71 != -238609294) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x329 = INT64_MIN;
	int64_t x330 = -1LL;
	int64_t x331 = -106237LL;
	int64_t x332 = -28751707LL;
	static volatile int64_t t72 = 478989283072349LL;

	t72 = (((x329&x330)-x331)/x332);

	if (t72 != 320793893623LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x333 = -1382LL;
	int32_t x334 = 879173;
	static uint64_t x335 = UINT64_MAX;
	int64_t x336 = INT64_MAX;
	static uint64_t t73 = 3419099648808667026LLU;

	t73 = (((x333&x334)-x335)/x336);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x337 = INT32_MIN;
	volatile int32_t x338 = INT32_MIN;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = 569U;
	uint32_t t74 = 57U;

	t74 = (((x337&x338)-x339)/x340);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = -1;
	static int8_t x347 = INT8_MAX;

	t75 = (((x345&x346)-x347)/x348);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x349 = INT16_MIN;
	uint16_t x350 = UINT16_MAX;
	uint64_t x351 = UINT64_MAX;
	int8_t x352 = INT8_MIN;
	static volatile uint64_t t76 = 230LLU;

	t76 = (((x349&x350)-x351)/x352);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x353 = 11315LLU;
	static int32_t x354 = INT32_MIN;
	static uint64_t x355 = 11073501448037LLU;
	static int8_t x356 = -2;

	t77 = (((x353&x354)-x355)/x356);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = -1;
	int16_t x358 = -84;
	volatile uint8_t x359 = 1U;
	int16_t x360 = -1;

	t78 = (((x357&x358)-x359)/x360);

	if (t78 != 85) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x362 = INT8_MIN;
	static int16_t x363 = INT16_MIN;
	volatile uint64_t x364 = 242LLU;

	t79 = (((x361&x362)-x363)/x364);

	if (t79 != 135LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x369 = 2U;
	int32_t x371 = INT32_MAX;
	volatile int32_t t80 = 159;

	t80 = (((x369&x370)-x371)/x372);

	if (t80 != -8421504) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x373 = INT8_MIN;
	uint8_t x374 = 4U;
	int32_t x376 = INT32_MAX;
	volatile int32_t t81 = -37;

	t81 = (((x373&x374)-x375)/x376);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x377 = 0;
	int32_t x379 = -8;
	uint32_t x380 = 462309U;
	uint32_t t82 = 1974U;

	t82 = (((x377&x378)-x379)/x380);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x381 = 35861;
	int8_t x382 = 25;
	int16_t x383 = -1;
	volatile uint32_t t83 = 6526U;

	t83 = (((x381&x382)-x383)/x384);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x387 = INT16_MIN;
	int32_t x388 = -1;

	t84 = (((x385&x386)-x387)/x388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = -2633LL;
	static volatile int64_t x390 = 182LL;

	t85 = (((x389&x390)-x391)/x392);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x394 = INT8_MAX;
	int32_t x395 = INT32_MAX;
	static int16_t x396 = -2;
	volatile int32_t t86 = 926096;

	t86 = (((x393&x394)-x395)/x396);

	if (t86 != 1073741772) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x397 = UINT8_MAX;
	static int64_t x398 = INT64_MIN;
	volatile uint8_t x399 = 0U;
	volatile int32_t x400 = INT32_MIN;

	t87 = (((x397&x398)-x399)/x400);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x401 = -7630LL;
	int32_t x402 = 16;
	static uint16_t x404 = UINT16_MAX;
	int64_t t88 = -1457310433513707098LL;

	t88 = (((x401&x402)-x403)/x404);

	if (t88 != -74LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = INT32_MIN;
	volatile int64_t x406 = INT64_MIN;
	volatile int64_t x408 = 3378418592LL;
	uint64_t t89 = 25118300LLU;

	t89 = (((x405&x406)-x407)/x408);

	if (t89 != 2730085626LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x409 = 2325U;
	static uint64_t x410 = 236434103804LLU;
	static uint16_t x411 = 2U;
	volatile uint8_t x412 = UINT8_MAX;
	uint64_t t90 = 1060824LLU;

	t90 = (((x409&x410)-x411)/x412);

	if (t90 != 9LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = 57822269807LL;
	int8_t x416 = INT8_MIN;
	volatile uint64_t t91 = 3801683174LLU;

	t91 = (((x413&x414)-x415)/x416);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x417 = -1;
	int64_t x418 = -1LL;
	uint64_t x419 = 350630LLU;

	t92 = (((x417&x418)-x419)/x420);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x425 = UINT32_MAX;
	int16_t x427 = 491;
	volatile uint16_t x428 = 76U;
	uint32_t t93 = 356U;

	t93 = (((x425&x426)-x427)/x428);

	if (t93 != 56512722U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = INT16_MIN;
	int16_t x435 = INT16_MAX;
	int16_t x436 = INT16_MIN;
	static int32_t t94 = -1052;

	t94 = (((x433&x434)-x435)/x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x437 = INT8_MIN;
	uint16_t x438 = 129U;
	int32_t x440 = -1;

	t95 = (((x437&x438)-x439)/x440);

	if (t95 != 712684957002332922LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x442 = INT16_MAX;
	int32_t x443 = -1;
	int64_t x444 = INT64_MAX;
	int64_t t96 = -101988LL;

	t96 = (((x441&x442)-x443)/x444);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x445 = -1LL;
	int64_t x446 = -41304201236349612LL;
	volatile int64_t x447 = INT64_MIN;
	int64_t t97 = 925943902770500162LL;

	t97 = (((x445&x446)-x447)/x448);

	if (t97 != -10614LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x450 = -1024951616967LL;
	static uint8_t x451 = 1U;
	volatile uint32_t x452 = 3802U;

	t98 = (((x449&x450)-x451)/x452);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = -1519;
	static int8_t x455 = INT8_MIN;
	int8_t x456 = -1;
	static int32_t t99 = 0;

	t99 = (((x453&x454)-x455)/x456);

	if (t99 != -31377) { NG(); } else { ; }
	
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

