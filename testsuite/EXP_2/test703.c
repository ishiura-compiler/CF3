#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x20 = -11;
uint32_t x25 = 6506U;
static uint64_t t5 = 780540934520216LLU;
volatile uint64_t t7 = 18959LLU;
uint32_t x45 = 4881U;
static uint8_t x48 = 54U;
int16_t x49 = INT16_MAX;
static int8_t x54 = INT8_MIN;
static int8_t x58 = 0;
int32_t x59 = -1;
volatile uint32_t x62 = 2017802U;
uint64_t x78 = 3165085755018300102LLU;
uint64_t t14 = 31512LLU;
volatile int8_t x87 = INT8_MIN;
static uint32_t x89 = 16U;
int16_t x91 = INT16_MAX;
volatile int32_t x105 = 1355667;
static int16_t x106 = 0;
int64_t x117 = -9531791799LL;
static volatile int64_t t23 = 45175LL;
uint32_t x126 = 18512081U;
static int32_t x131 = INT32_MAX;
static uint8_t x141 = 0U;
static volatile int32_t t29 = -64;
int16_t x149 = 6;
uint64_t x152 = 4052797LLU;
static volatile uint64_t t31 = 45558021420LLU;
int16_t x160 = -1;
volatile int32_t x168 = INT32_MIN;
int8_t x169 = -1;
uint32_t x174 = 777909469U;
int16_t x190 = INT16_MIN;
uint64_t x191 = 11500LLU;
int64_t x199 = INT64_MIN;
static int8_t x202 = INT8_MAX;
int32_t x218 = 832;
static int32_t x227 = 38;
int32_t x228 = INT32_MIN;
uint8_t x229 = 74U;
int8_t x231 = -1;
uint64_t x233 = UINT64_MAX;
uint64_t x237 = UINT64_MAX;
uint32_t x241 = 467U;
int64_t t51 = 31554391947LL;
int8_t x252 = 1;
int32_t x257 = -9878455;
uint64_t t54 = 60222LLU;
static int32_t x269 = INT32_MIN;
static int64_t x270 = INT64_MAX;
int64_t t57 = -81958069618389897LL;
uint32_t x282 = UINT32_MAX;
uint32_t t59 = 40949778U;
int32_t x285 = INT32_MIN;
int16_t x290 = 43;
volatile int64_t t62 = 3250277292062975449LL;
int8_t x301 = INT8_MIN;
int16_t x303 = -781;
volatile int64_t x305 = -1LL;
int16_t x313 = 1581;
uint16_t x316 = 1846U;
int64_t x318 = INT64_MIN;
int64_t x320 = -12779290605LL;
int64_t x330 = INT64_MIN;
volatile uint8_t x346 = UINT8_MAX;
int64_t x347 = INT64_MIN;
int64_t x352 = 20294420327085551LL;
static volatile uint32_t t75 = 754757U;
uint64_t x367 = UINT64_MAX;
static int64_t x370 = INT64_MIN;
static int64_t x377 = -1LL;
int16_t x378 = -1;
uint64_t x380 = UINT64_MAX;
uint64_t t82 = 138754LLU;
static int64_t x387 = INT64_MIN;
volatile int64_t t83 = -4085244997579378LL;
int64_t x390 = 403512401243409LL;
volatile int64_t x391 = INT64_MIN;
volatile int64_t t84 = 20567LL;
static int16_t x395 = INT16_MIN;
uint16_t x398 = 3815U;
uint32_t x403 = 1338939017U;
int32_t x413 = 1958;
int64_t x415 = INT64_MAX;
static volatile uint32_t x419 = 55974U;
int64_t x420 = INT64_MAX;
int8_t x426 = INT8_MAX;
volatile int64_t t92 = 613LL;
static int64_t x438 = -45814557LL;
int64_t t95 = 3091085377186LL;
uint64_t x441 = 1LLU;
uint16_t x442 = 0U;
static uint64_t x443 = UINT64_MAX;
uint64_t t96 = 323283LLU;
uint32_t x446 = UINT32_MAX;
static int32_t t98 = 509;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	static int8_t x2 = -1;
	uint16_t x3 = 8U;
	static int8_t x4 = INT8_MIN;
	static int32_t t0 = -166937;

	t0 = ((x1*(x2%x3))+x4);

	if (t0 != -65663) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	int8_t x10 = INT8_MAX;
	uint64_t x11 = 42LLU;
	int16_t x12 = 6864;
	volatile uint64_t t1 = 1109247905399LLU;

	t1 = ((x9*(x10%x11))+x12);

	if (t1 != 7119LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 135251U;
	int64_t x14 = 0LL;
	int32_t x15 = -1;
	volatile int16_t x16 = INT16_MIN;
	int64_t t2 = -1095LL;

	t2 = ((x13*(x14%x15))+x16);

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	uint8_t x18 = 12U;
	static volatile int8_t x19 = INT8_MAX;
	volatile int32_t t3 = -728;

	t3 = ((x17*(x18%x19))+x20);

	if (t3 != -23) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = -55;
	uint64_t x22 = 14709144479LLU;
	volatile uint32_t x23 = 2039832537U;
	int8_t x24 = 2;
	volatile uint64_t t4 = 71149007685402852LLU;

	t4 = ((x21*(x22%x23))+x24);

	if (t4 != 18446744050042132018LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x26 = UINT64_MAX;
	uint64_t x27 = 69739284197805LLU;
	static volatile uint64_t x28 = 10306618LLU;

	t5 = ((x25*(x26%x27))+x28);

	if (t5 != 39104626281135508LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = UINT8_MAX;
	int16_t x34 = 12704;
	uint32_t x35 = 8U;
	volatile int16_t x36 = INT16_MIN;
	uint32_t t6 = 38U;

	t6 = ((x33*(x34%x35))+x36);

	if (t6 != 4294934528U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 265103U;
	static volatile uint64_t x38 = 283751896LLU;
	static volatile int8_t x39 = -1;
	uint8_t x40 = 24U;

	t7 = ((x37*(x38%x39))+x40);

	if (t7 != 75223478885312LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x46 = 9558923733003848LL;
	int8_t x47 = 6;
	volatile int64_t t8 = -54904341908LL;

	t8 = ((x45*(x46%x47))+x48);

	if (t8 != 9816LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x50 = INT64_MIN;
	uint32_t x51 = 4186159U;
	uint64_t x52 = UINT64_MAX;
	uint64_t t9 = 35312133834LLU;

	t9 = ((x49*(x50%x51))+x52);

	if (t9 != 18446744063752217354LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x53 = 291;
	int16_t x55 = INT16_MIN;
	int16_t x56 = -1;
	int32_t t10 = 136;

	t10 = ((x53*(x54%x55))+x56);

	if (t10 != -37249) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 13U;
	volatile int16_t x60 = -1;
	int32_t t11 = -187;

	t11 = ((x57*(x58%x59))+x60);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x61 = INT64_MIN;
	uint64_t x63 = 3939346137156258LLU;
	int16_t x64 = -1;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = ((x61*(x62%x63))+x64);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x73 = 228U;
	uint8_t x74 = 0U;
	static int16_t x75 = INT16_MIN;
	static volatile int8_t x76 = INT8_MAX;
	int32_t t13 = 33;

	t13 = ((x73*(x74%x75))+x76);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x77 = 869385LLU;
	uint8_t x79 = 74U;
	int64_t x80 = -13870LL;

	t14 = ((x77*(x78%x79))+x80);

	if (t14 != 19112600LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x81 = INT32_MIN;
	uint16_t x82 = UINT16_MAX;
	uint64_t x83 = 4291071827837LLU;
	volatile int16_t x84 = INT16_MIN;
	uint64_t t15 = 10323508018LLU;

	t15 = ((x81*(x82%x83))+x84);

	if (t15 != 18446603338368647168LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x85 = 595;
	int64_t x86 = INT64_MAX;
	int16_t x88 = INT16_MIN;
	int64_t t16 = -22599093LL;

	t16 = ((x85*(x86%x87))+x88);

	if (t16 != 42797LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x90 = -872745416;
	static uint8_t x92 = 107U;
	uint32_t t17 = 147473U;

	t17 = ((x89*(x90%x91))+x92);

	if (t17 != 4294501195U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = 26071U;
	int32_t x94 = INT32_MIN;
	uint32_t x95 = UINT32_MAX;
	static int64_t x96 = -1LL;
	volatile int64_t t18 = -137032176580LL;

	t18 = ((x93*(x94%x95))+x96);

	if (t18 != 2147483647LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = 50;
	int8_t x98 = INT8_MIN;
	uint8_t x99 = 24U;
	uint16_t x100 = 0U;
	volatile int32_t t19 = -15555;

	t19 = ((x97*(x98%x99))+x100);

	if (t19 != -400) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x101 = 11U;
	uint16_t x102 = 3U;
	int8_t x103 = INT8_MAX;
	volatile uint64_t x104 = 325945849620LLU;
	volatile uint64_t t20 = 19532826198LLU;

	t20 = ((x101*(x102%x103))+x104);

	if (t20 != 325945849653LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x107 = 296;
	int64_t x108 = 3053029LL;
	volatile int64_t t21 = 493LL;

	t21 = ((x105*(x106%x107))+x108);

	if (t21 != 3053029LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = 9U;
	volatile int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MAX;
	static volatile int64_t t22 = -211LL;

	t22 = ((x109*(x110%x111))+x112);

	if (t22 != 9223372036854480895LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x118 = 1090;
	int64_t x119 = INT64_MIN;
	uint32_t x120 = 583U;

	t23 = ((x117*(x118%x119))+x120);

	if (t23 != -10389653060327LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = -29934280;
	volatile int16_t x122 = -1;
	static uint32_t x123 = 456U;
	int8_t x124 = INT8_MAX;
	uint32_t t24 = 110942462U;

	t24 = ((x121*(x122%x123))+x124);

	if (t24 != 222701575U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x127 = 7U;
	static uint8_t x128 = 43U;
	uint32_t t25 = 16367U;

	t25 = ((x125*(x126%x127))+x128);

	if (t25 != 43U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MAX;
	int32_t x132 = INT32_MAX;
	int64_t t26 = 21030LL;

	t26 = ((x129*(x130%x131))+x132);

	if (t26 != 2147483519LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x133 = UINT8_MAX;
	volatile int16_t x134 = -1;
	int16_t x135 = -1;
	uint64_t x136 = 13LLU;
	static volatile uint64_t t27 = 756561541LLU;

	t27 = ((x133*(x134%x135))+x136);

	if (t27 != 13LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x137 = INT16_MIN;
	volatile uint8_t x138 = 1U;
	int64_t x139 = INT64_MIN;
	uint32_t x140 = 18U;
	static int64_t t28 = -51826504643LL;

	t28 = ((x137*(x138%x139))+x140);

	if (t28 != -32750LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x142 = -12017774;
	static volatile uint8_t x143 = 1U;
	int32_t x144 = -1604280;

	t29 = ((x141*(x142%x143))+x144);

	if (t29 != -1604280) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x145 = 25104552;
	int8_t x146 = INT8_MAX;
	static uint64_t x147 = UINT64_MAX;
	uint64_t x148 = 430585440371LLU;
	uint64_t t30 = 226828746832LLU;

	t30 = ((x145*(x146%x147))+x148);

	if (t30 != 433773718475LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x150 = 0U;
	volatile uint64_t x151 = 233600998194LLU;

	t31 = ((x149*(x150%x151))+x152);

	if (t31 != 4052797LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = 43;
	volatile int32_t x154 = -1;
	int32_t x155 = INT32_MIN;
	int16_t x156 = 11259;
	static volatile int32_t t32 = -2359;

	t32 = ((x153*(x154%x155))+x156);

	if (t32 != 11216) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = 14611;
	int16_t x158 = -1;
	volatile int32_t x159 = -1;
	static volatile int32_t t33 = 221909;

	t33 = ((x157*(x158%x159))+x160);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x161 = UINT64_MAX;
	volatile int32_t x162 = 97454950;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = 91367U;
	volatile uint64_t t34 = 7LLU;

	t34 = ((x161*(x162%x163))+x164);

	if (t34 != 18446744073612188033LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = 8020535LL;
	int16_t x166 = INT16_MIN;
	int32_t x167 = INT32_MIN;
	static int64_t t35 = 2312846LL;

	t35 = ((x165*(x166%x167))+x168);

	if (t35 != -264964374528LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x170 = INT64_MAX;
	int32_t x171 = INT32_MAX;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t36 = 50LLU;

	t36 = ((x169*(x170%x171))+x172);

	if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x173 = -606450708;
	volatile uint8_t x175 = UINT8_MAX;
	int16_t x176 = 188;
	uint32_t t37 = 47270066U;

	t37 = ((x173*(x174%x175))+x176);

	if (t37 != 3123175780U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x181 = 8U;
	int8_t x182 = INT8_MIN;
	int64_t x183 = -6LL;
	int16_t x184 = -1;
	volatile int64_t t38 = -4552365132819431LL;

	t38 = ((x181*(x182%x183))+x184);

	if (t38 != -17LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x185 = 3U;
	uint16_t x186 = 9065U;
	uint64_t x187 = 381721670323754348LLU;
	int16_t x188 = INT16_MAX;
	uint64_t t39 = 199584079977289264LLU;

	t39 = ((x185*(x186%x187))+x188);

	if (t39 != 59962LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = -1;
	int64_t x192 = INT64_MAX;
	uint64_t t40 = 85001LLU;

	t40 = ((x189*(x190%x191))+x192);

	if (t40 != 9223372036854772459LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = INT16_MIN;
	static int8_t x198 = INT8_MIN;
	static uint32_t x200 = UINT32_MAX;
	volatile int64_t t41 = 659411LL;

	t41 = ((x197*(x198%x199))+x200);

	if (t41 != 4299161599LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = INT16_MIN;
	volatile int32_t x203 = 1515021;
	int64_t x204 = INT64_MAX;
	volatile int64_t t42 = 249757898001LL;

	t42 = ((x201*(x202%x203))+x204);

	if (t42 != 9223372036850614271LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = -1;
	int16_t x206 = 1017;
	int8_t x207 = INT8_MAX;
	uint16_t x208 = 20943U;
	volatile int32_t t43 = 1018954485;

	t43 = ((x205*(x206%x207))+x208);

	if (t43 != 20942) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x213 = UINT64_MAX;
	int64_t x214 = 476023482465LL;
	uint64_t x215 = 1217LLU;
	int32_t x216 = -410025546;
	uint64_t t44 = 13LLU;

	t44 = ((x213*(x214%x215))+x216);

	if (t44 != 18446744073299525643LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x217 = INT8_MIN;
	int64_t x219 = INT64_MIN;
	static uint16_t x220 = 30349U;
	volatile int64_t t45 = 70392373945300LL;

	t45 = ((x217*(x218%x219))+x220);

	if (t45 != -76147LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = -1;
	uint64_t x226 = 11385500497445LLU;
	static volatile uint64_t t46 = 558496621640LLU;

	t46 = ((x225*(x226%x227))+x228);

	if (t46 != 18446744071562067957LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x230 = 1435U;
	static volatile int16_t x232 = INT16_MIN;
	uint32_t t47 = 24U;

	t47 = ((x229*(x230%x231))+x232);

	if (t47 != 73422U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x234 = UINT64_MAX;
	uint32_t x235 = 8U;
	static uint64_t x236 = 64951LLU;
	volatile uint64_t t48 = 2142807254LLU;

	t48 = ((x233*(x234%x235))+x236);

	if (t48 != 64944LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x238 = INT16_MAX;
	int64_t x239 = INT64_MAX;
	int8_t x240 = INT8_MIN;
	uint64_t t49 = 554LLU;

	t49 = ((x237*(x238%x239))+x240);

	if (t49 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x242 = UINT16_MAX;
	int8_t x243 = -1;
	static int16_t x244 = INT16_MAX;
	uint32_t t50 = 23U;

	t50 = ((x241*(x242%x243))+x244);

	if (t50 != 32767U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = -1;
	static volatile int64_t x246 = -1LL;
	int8_t x247 = INT8_MIN;
	volatile int16_t x248 = -8262;

	t51 = ((x245*(x246%x247))+x248);

	if (t51 != -8261LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x249 = 14U;
	int8_t x250 = -2;
	static int32_t x251 = -1;
	int32_t t52 = 1043338;

	t52 = ((x249*(x250%x251))+x252);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x253 = 10158U;
	volatile int32_t x254 = 1;
	volatile int16_t x255 = -530;
	int16_t x256 = -229;
	int32_t t53 = -447386209;

	t53 = ((x253*(x254%x255))+x256);

	if (t53 != 9929) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x258 = -1;
	uint64_t x259 = UINT64_MAX;
	volatile int32_t x260 = 1;

	t54 = ((x257*(x258%x259))+x260);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x261 = INT64_MIN;
	volatile int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MIN;
	int64_t x264 = -14281072862LL;
	int64_t t55 = -7169LL;

	t55 = ((x261*(x262%x263))+x264);

	if (t55 != -14281072862LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = 30;
	volatile int32_t x266 = INT32_MIN;
	uint64_t x267 = 4115583386694LLU;
	int32_t x268 = -1;
	uint64_t t56 = 1855LLU;

	t56 = ((x265*(x266%x267))+x268);

	if (t56 != 113964216260459LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = 2;

	t57 = ((x269*(x270%x271))+x272);

	if (t57 != -4611686016279904254LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x277 = -56;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MAX;
	volatile int16_t x280 = INT16_MAX;
	volatile int64_t t58 = -3610796531080LL;

	t58 = ((x277*(x278%x279))+x280);

	if (t58 != 32879LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = INT8_MIN;
	int16_t x283 = -1;
	volatile int8_t x284 = INT8_MAX;

	t59 = ((x281*(x282%x283))+x284);

	if (t59 != 127U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	uint64_t x288 = 5LLU;
	static uint64_t t60 = 87824118234920934LLU;

	t60 = ((x285*(x286%x287))+x288);

	if (t60 != 5LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x289 = UINT8_MAX;
	int8_t x291 = INT8_MIN;
	uint32_t x292 = 815U;
	volatile uint32_t t61 = 0U;

	t61 = ((x289*(x290%x291))+x292);

	if (t61 != 11780U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x297 = -357151664470698LL;
	int8_t x298 = 0;
	int64_t x299 = -360276275LL;
	int8_t x300 = INT8_MIN;

	t62 = ((x297*(x298%x299))+x300);

	if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x302 = -5068886;
	int8_t x304 = INT8_MIN;
	volatile int32_t t63 = -28;

	t63 = ((x301*(x302%x303))+x304);

	if (t63 != 24960) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x306 = INT32_MAX;
	int32_t x307 = INT32_MIN;
	static int32_t x308 = INT32_MAX;
	volatile int64_t t64 = 1639061315133137LL;

	t64 = ((x305*(x306%x307))+x308);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x309 = INT8_MIN;
	static uint8_t x310 = 75U;
	int32_t x311 = INT32_MAX;
	uint8_t x312 = 99U;
	int32_t t65 = -7;

	t65 = ((x309*(x310%x311))+x312);

	if (t65 != -9501) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x314 = INT32_MIN;
	static int64_t x315 = -74LL;
	int64_t t66 = -13252552564LL;

	t66 = ((x313*(x314%x315))+x316);

	if (t66 != -32936LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x317 = UINT8_MAX;
	int32_t x319 = 166095;
	volatile int64_t t67 = -312543995449623947LL;

	t67 = ((x317*(x318%x319))+x320);

	if (t67 != -12793303620LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x321 = 354583365104531LLU;
	static int64_t x322 = -45452276116728054LL;
	static volatile int64_t x323 = INT64_MIN;
	int32_t x324 = 1320;
	volatile uint64_t t68 = 3206142870723LLU;

	t68 = ((x321*(x322%x323))+x324);

	if (t68 != 2211610785824046566LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x325 = UINT32_MAX;
	volatile uint8_t x326 = 37U;
	int64_t x327 = INT64_MIN;
	static volatile int8_t x328 = -1;
	volatile int64_t t69 = -278015939588790LL;

	t69 = ((x325*(x326%x327))+x328);

	if (t69 != 158913789914LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = INT32_MIN;
	static int32_t x331 = INT32_MIN;
	static int16_t x332 = INT16_MIN;
	int64_t t70 = 64814LL;

	t70 = ((x329*(x330%x331))+x332);

	if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = INT8_MIN;
	volatile int8_t x338 = INT8_MIN;
	static int16_t x339 = -1;
	int16_t x340 = 3;
	static volatile int32_t t71 = 104;

	t71 = ((x337*(x338%x339))+x340);

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x341 = 8U;
	static volatile int8_t x342 = 1;
	int32_t x343 = INT32_MIN;
	int64_t x344 = INT64_MIN;
	volatile int64_t t72 = 10380483594867LL;

	t72 = ((x341*(x342%x343))+x344);

	if (t72 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x345 = UINT16_MAX;
	int16_t x348 = INT16_MAX;
	int64_t t73 = -48LL;

	t73 = ((x345*(x346%x347))+x348);

	if (t73 != 16744192LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x349 = UINT16_MAX;
	static int16_t x350 = 1;
	uint16_t x351 = 696U;
	int64_t t74 = -10866774LL;

	t74 = ((x349*(x350%x351))+x352);

	if (t74 != 20294420327151086LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x353 = 21353U;
	int16_t x354 = 103;
	uint32_t x355 = UINT32_MAX;
	uint32_t x356 = 29183722U;

	t75 = ((x353*(x354%x355))+x356);

	if (t75 != 31383081U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x357 = 18;
	volatile int64_t x358 = INT64_MAX;
	uint32_t x359 = 55663U;
	static volatile int32_t x360 = INT32_MIN;
	int64_t t76 = 89055977781425LL;

	t76 = ((x357*(x358%x359))+x360);

	if (t76 != -2146995920LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = 0LL;
	uint8_t x362 = 15U;
	int16_t x363 = INT16_MIN;
	uint8_t x364 = 31U;
	static int64_t t77 = 78410229055141681LL;

	t77 = ((x361*(x362%x363))+x364);

	if (t77 != 31LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x365 = 284301602769784LLU;
	uint32_t x366 = UINT32_MAX;
	static int16_t x368 = -84;
	volatile uint64_t t78 = 137578099335LLU;

	t78 = ((x365*(x366%x367))+x368);

	if (t78 != 2308597173634544692LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = 12;
	int16_t x371 = -1;
	static uint64_t x372 = 1122LLU;
	static volatile uint64_t t79 = 82025369232885942LLU;

	t79 = ((x369*(x370%x371))+x372);

	if (t79 != 1122LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x373 = 5987277;
	int16_t x374 = -1;
	uint8_t x375 = 3U;
	uint16_t x376 = 16U;
	volatile int32_t t80 = -97089340;

	t80 = ((x373*(x374%x375))+x376);

	if (t80 != -5987261) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x379 = 1U;
	volatile uint64_t t81 = UINT64_MAX;

	t81 = ((x377*(x378%x379))+x380);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x381 = -11;
	static int32_t x382 = INT32_MIN;
	uint64_t x383 = 1899109069919LLU;
	uint64_t x384 = UINT64_MAX;

	t82 = ((x381*(x382%x383))+x384);

	if (t82 != 18446736347197783970LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x385 = 115U;
	int32_t x386 = -55805;
	int16_t x388 = INT16_MIN;

	t83 = ((x385*(x386%x387))+x388);

	if (t83 != -6450343LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x389 = 5;
	int32_t x392 = 65;

	t84 = ((x389*(x390%x391))+x392);

	if (t84 != 2017562006217110LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = -1;
	static volatile int16_t x394 = -1;
	uint32_t x396 = 12798855U;
	static uint32_t t85 = 3463242U;

	t85 = ((x393*(x394%x395))+x396);

	if (t85 != 12798856U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x397 = 2523549052390150612LLU;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	static uint64_t t86 = 287LLU;

	t86 = ((x397*(x398%x399))+x400);

	if (t86 != 10894507401106566219LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x401 = 7071356U;
	volatile int32_t x402 = -1;
	int64_t x404 = INT64_MIN;
	int64_t t87 = 9000747671919LL;

	t87 = ((x401*(x402%x403))+x404);

	if (t87 != -9223372034911037328LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x405 = -1;
	static int16_t x406 = INT16_MIN;
	volatile int64_t x407 = -1671491028LL;
	static uint32_t x408 = 1700170125U;
	int64_t t88 = 13701921581046118LL;

	t88 = ((x405*(x406%x407))+x408);

	if (t88 != 1700202893LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x414 = UINT8_MAX;
	int16_t x416 = -1;
	int64_t t89 = -6738551771747LL;

	t89 = ((x413*(x414%x415))+x416);

	if (t89 != 499289LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x417 = UINT16_MAX;
	uint64_t x418 = 1827504184858625LLU;
	volatile uint64_t t90 = 6226700LLU;

	t90 = ((x417*(x418%x419))+x420);

	if (t90 != 9223372038589159582LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x421 = 2607LLU;
	int16_t x422 = INT16_MIN;
	volatile int32_t x423 = INT32_MIN;
	int32_t x424 = INT32_MAX;
	volatile uint64_t t91 = 16370484564857LLU;

	t91 = ((x421*(x422%x423))+x424);

	if (t91 != 2062057471LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x425 = INT32_MIN;
	int8_t x427 = INT8_MAX;
	static int64_t x428 = 63417682117LL;

	t92 = ((x425*(x426%x427))+x428);

	if (t92 != 63417682117LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x429 = 485099LL;
	int32_t x430 = INT32_MIN;
	int64_t x431 = INT64_MAX;
	uint32_t x432 = UINT32_MAX;
	int64_t t93 = -1LL;

	t93 = ((x429*(x430%x431))+x432);

	if (t93 != -1041737875193857LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x433 = INT16_MIN;
	int8_t x434 = 1;
	int8_t x435 = INT8_MIN;
	volatile int16_t x436 = INT16_MAX;
	int32_t t94 = 172310300;

	t94 = ((x433*(x434%x435))+x436);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x437 = -54;
	int8_t x439 = INT8_MAX;
	volatile int64_t x440 = INT64_MIN;

	t95 = ((x437*(x438%x439))+x440);

	if (t95 != -9223372036854772082LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x444 = INT32_MIN;

	t96 = ((x441*(x442%x443))+x444);

	if (t96 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x445 = 29;
	int32_t x447 = 134339195;
	static int8_t x448 = -28;
	static uint32_t t97 = 115396507U;

	t97 = ((x445*(x446%x447))+x448);

	if (t97 != 3783115222U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = -34;
	uint8_t x450 = 0U;
	int16_t x451 = -1;
	static int8_t x452 = -13;

	t98 = ((x449*(x450%x451))+x452);

	if (t98 != -13) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x453 = -1;
	int16_t x454 = -1;
	static uint8_t x455 = UINT8_MAX;
	int32_t x456 = -1;
	static int32_t t99 = 65222723;

	t99 = ((x453*(x454%x455))+x456);

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

