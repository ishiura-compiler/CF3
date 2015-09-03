#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = -1;
int16_t x10 = -1;
int32_t x11 = INT32_MAX;
uint64_t t4 = 188125611625LLU;
int8_t x26 = 1;
uint8_t x31 = 23U;
uint32_t x35 = UINT32_MAX;
int64_t t8 = 99801LL;
uint32_t x37 = UINT32_MAX;
int32_t x41 = 262125;
volatile int64_t x46 = INT64_MIN;
int32_t x47 = INT32_MIN;
static volatile int64_t x55 = -1LL;
int8_t x66 = INT8_MIN;
volatile uint64_t x75 = UINT64_MAX;
uint64_t t16 = 6554009429865863LLU;
int64_t x78 = INT64_MIN;
volatile uint8_t x79 = UINT8_MAX;
int32_t x82 = INT32_MIN;
int32_t x84 = 215341130;
int32_t x86 = 7;
int16_t x87 = INT16_MAX;
int8_t x89 = -1;
static volatile int32_t x93 = INT32_MIN;
int16_t x97 = 5662;
volatile uint64_t t22 = 77540LLU;
static int32_t x106 = -11435;
uint32_t x107 = UINT32_MAX;
uint8_t x110 = UINT8_MAX;
int32_t x112 = 16842;
uint32_t t25 = 1U;
static uint8_t x115 = 15U;
volatile int8_t x117 = INT8_MIN;
volatile int32_t x118 = INT32_MIN;
volatile uint32_t t28 = 200U;
uint16_t x128 = UINT16_MAX;
int64_t x140 = 203632LL;
static int64_t x145 = -1LL;
uint8_t x147 = 0U;
int16_t x156 = INT16_MIN;
uint32_t t35 = 77080U;
volatile uint32_t x165 = 49177148U;
int8_t x176 = -10;
int8_t x179 = -1;
volatile int64_t x181 = -1LL;
uint32_t x182 = 936U;
static int64_t x187 = -1LL;
volatile uint64_t t43 = 1869639819576523429LLU;
static volatile int32_t x191 = INT32_MIN;
uint64_t x198 = 250120527395670142LLU;
volatile int8_t x206 = 8;
uint16_t x207 = UINT16_MAX;
static int64_t t48 = -937942109LL;
int64_t x218 = 363303719954LL;
uint64_t x225 = 368777LLU;
int32_t x231 = -1;
int32_t x232 = -649;
int32_t x237 = INT32_MIN;
uint8_t x240 = UINT8_MAX;
uint16_t x245 = 12U;
volatile int8_t x246 = INT8_MIN;
int8_t x247 = INT8_MIN;
int16_t x248 = -313;
volatile int64_t x250 = INT64_MIN;
int16_t x251 = INT16_MIN;
int16_t x259 = INT16_MIN;
volatile int64_t t60 = -1LL;
int64_t x261 = -1LL;
int64_t t61 = 279531864331798LL;
int64_t x274 = -1LL;
static volatile int64_t x275 = -5LL;
uint16_t x280 = 9449U;
int32_t t65 = -383166;
int16_t x284 = 1;
volatile int32_t x285 = INT32_MAX;
int16_t x286 = INT16_MIN;
uint16_t x287 = 398U;
int8_t x290 = INT8_MIN;
uint32_t x293 = UINT32_MAX;
int32_t x302 = INT32_MIN;
uint32_t t71 = 41U;
int8_t x305 = 0;
int32_t x307 = -2899079;
volatile int16_t x308 = INT16_MAX;
int16_t x320 = -26;
static int32_t t75 = -7210;
volatile int32_t t76 = -116;
uint16_t x328 = 16U;
static int16_t x332 = INT16_MAX;
int32_t x338 = -205203;
int16_t x339 = -4433;
volatile int64_t x348 = -1135LL;
static volatile uint64_t x353 = 17LLU;
uint64_t t82 = 46257LLU;
int8_t x358 = 1;
volatile int64_t t83 = -1LL;
static uint16_t x365 = UINT16_MAX;
uint16_t x368 = 12U;
uint16_t x373 = UINT16_MAX;
volatile int64_t t91 = 63129647327689LL;
volatile int64_t t92 = 1657817137LL;
volatile int64_t t94 = 4LL;
int32_t x410 = INT32_MIN;
int16_t x414 = INT16_MIN;
volatile uint64_t t97 = 134713793987LLU;
int64_t t98 = -29252202LL;
uint64_t x422 = UINT64_MAX;


void f0(void) {
	volatile int32_t x1 = -23310;
	int64_t x2 = 2461LL;
	static volatile int8_t x3 = INT8_MIN;
	uint64_t x4 = 5534210202LLU;
	static volatile uint64_t t0 = 3522LLU;

	t0 = (((x1&x2)|x3)/x4);

	if (t0 != 3333220712LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint16_t x6 = UINT16_MAX;
	uint64_t x8 = 2104LLU;
	volatile uint64_t t1 = 11207524729881LLU;

	t1 = (((x5&x6)|x7)/x8);

	if (t1 != 8767463913360053LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -8;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -3;

	t2 = (((x9&x10)|x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static volatile uint8_t x14 = 46U;
	int64_t x15 = 24677LL;
	int16_t x16 = INT16_MIN;
	int64_t t3 = 528592423784664061LL;

	t3 = (((x13&x14)|x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static int32_t x18 = INT32_MAX;
	uint64_t x19 = UINT64_MAX;
	static int8_t x20 = -1;

	t4 = (((x17&x18)|x19)/x20);

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 0;
	int8_t x22 = -1;
	int8_t x23 = INT8_MIN;
	static int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 9824;

	t5 = (((x21&x22)|x23)/x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -8;
	int32_t x27 = INT32_MIN;
	uint8_t x28 = UINT8_MAX;
	static volatile int32_t t6 = 2;

	t6 = (((x25&x26)|x27)/x28);

	if (t6 != -8421504) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 42;
	int64_t x30 = -249068620767415LL;
	static int64_t x32 = INT64_MAX;
	int64_t t7 = 38444759725502284LL;

	t7 = (((x29&x30)|x31)/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 60U;
	int16_t x34 = INT16_MIN;
	static int64_t x36 = INT64_MAX;

	t8 = (((x33&x34)|x35)/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	uint8_t x39 = 6U;
	uint32_t x40 = 37756651U;
	int64_t t9 = -205LL;

	t9 = (((x37&x38)|x39)/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = 143552187;
	volatile int64_t x43 = 14811993801471100LL;
	volatile int8_t x44 = INT8_MIN;
	volatile int64_t t10 = -3499LL;

	t10 = (((x41&x42)|x43)/x44);

	if (t10 != -115718701574141LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = -74408LL;
	static volatile uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 2812LLU;

	t11 = (((x45&x46)|x47)/x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int32_t x50 = -1;
	int8_t x51 = -49;
	int32_t x52 = -10467468;
	uint32_t t12 = 251927U;

	t12 = (((x49&x50)|x51)/x52);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile uint32_t x54 = 1783U;
	static int32_t x56 = -1;
	volatile int64_t t13 = -1978783490LL;

	t13 = (((x53&x54)|x55)/x56);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -1128705694LL;
	int16_t x62 = INT16_MAX;
	uint16_t x63 = 583U;
	static int16_t x64 = 3;
	volatile int64_t t14 = 82989806138681LL;

	t14 = (((x61&x62)|x63)/x64);

	if (t14 != 7117LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 2;
	uint8_t x67 = UINT8_MAX;
	int32_t x68 = INT32_MIN;
	volatile int32_t t15 = -15168109;

	t15 = (((x65&x66)|x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	static uint16_t x74 = 26U;
	static int8_t x76 = INT8_MIN;

	t16 = (((x73&x74)|x75)/x76);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x77 = 249U;
	int64_t x80 = 33300642894401239LL;
	static volatile int64_t t17 = -1573LL;

	t17 = (((x77&x78)|x79)/x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x81 = 1052003073538255LLU;
	static int64_t x83 = -1LL;
	static uint64_t t18 = 86961LLU;

	t18 = (((x81&x82)|x83)/x84);

	if (t18 != 85662892517LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	uint16_t x88 = UINT16_MAX;
	static volatile int64_t t19 = -1399094732LL;

	t19 = (((x85&x86)|x87)/x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x90 = -43957;
	uint64_t x91 = 18995540LLU;
	static volatile int32_t x92 = INT32_MAX;
	volatile uint64_t t20 = 10317266818319518LLU;

	t20 = (((x89&x90)|x91)/x92);

	if (t20 != 8589934595LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x94 = -1423;
	volatile int8_t x95 = -1;
	static uint64_t x96 = 3547591646LLU;
	static uint64_t t21 = 15LLU;

	t21 = (((x93&x94)|x95)/x96);

	if (t21 != 5199793525LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x98 = 1543447U;
	uint64_t x99 = 1219686937899210652LLU;
	int8_t x100 = INT8_MIN;

	t22 = (((x97&x98)|x99)/x100);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	int16_t x102 = -203;
	int16_t x103 = 13426;
	static int16_t x104 = INT16_MIN;
	int64_t t23 = -127LL;

	t23 = (((x101&x102)|x103)/x104);

	if (t23 != 281474976710655LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MAX;
	static volatile uint64_t x108 = 7826520LLU;
	volatile uint64_t t24 = 466512155464LLU;

	t24 = (((x105&x106)|x107)/x108);

	if (t24 != 548LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x109 = 2U;
	int8_t x111 = -1;

	t25 = (((x109&x110)|x111)/x112);

	if (t25 != 255015U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = 0;
	int8_t x114 = INT8_MAX;
	static int32_t x116 = INT32_MIN;
	int32_t t26 = 151;

	t26 = (((x113&x114)|x115)/x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x119 = INT16_MAX;
	volatile int8_t x120 = INT8_MAX;
	int32_t t27 = 103987852;

	t27 = (((x117&x118)|x119)/x120);

	if (t27 != -16909062) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = 137;
	static uint32_t x122 = 6U;
	uint16_t x123 = 53U;
	uint32_t x124 = 57U;

	t28 = (((x121&x122)|x123)/x124);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -1LL;
	uint16_t x126 = 690U;
	int64_t x127 = INT64_MIN;
	volatile int64_t t29 = -4560453632461421137LL;

	t29 = (((x125&x126)|x127)/x128);

	if (t29 != -140739635871744LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x133 = UINT32_MAX;
	static uint16_t x134 = UINT16_MAX;
	volatile uint16_t x135 = UINT16_MAX;
	int32_t x136 = INT32_MIN;
	uint32_t t30 = 70U;

	t30 = (((x133&x134)|x135)/x136);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = -1;
	uint32_t x138 = 1352769567U;
	static uint16_t x139 = 10851U;
	static int64_t t31 = -185533LL;

	t31 = (((x137&x138)|x139)/x140);

	if (t31 != 6643LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x141 = INT16_MIN;
	volatile int32_t x142 = INT32_MIN;
	int64_t x143 = INT64_MAX;
	static uint16_t x144 = 185U;
	static int64_t t32 = 1549217978868461LL;

	t32 = (((x141&x142)|x143)/x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x146 = INT8_MIN;
	uint16_t x148 = 8857U;
	volatile int64_t t33 = 2154LL;

	t33 = (((x145&x146)|x147)/x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x149 = 0;
	int64_t x150 = INT64_MIN;
	int64_t x151 = INT64_MIN;
	int8_t x152 = INT8_MIN;
	static int64_t t34 = 1399LL;

	t34 = (((x149&x150)|x151)/x152);

	if (t34 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x153 = INT16_MIN;
	volatile int32_t x154 = INT32_MAX;
	static uint32_t x155 = 806122U;

	t35 = (((x153&x154)|x155)/x156);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x157 = 2U;
	int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MIN;
	int16_t x160 = INT16_MAX;
	static int64_t t36 = -120000981LL;

	t36 = (((x157&x158)|x159)/x160);

	if (t36 != -281483566907400LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MAX;
	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t37 = -20808472;

	t37 = (((x161&x162)|x163)/x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x166 = -1;
	volatile int8_t x167 = INT8_MIN;
	volatile uint16_t x168 = 10U;
	uint32_t t38 = 181091062U;

	t38 = (((x165&x166)|x167)/x168);

	if (t38 != 429496722U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = 0;
	static uint16_t x170 = 1U;
	static uint8_t x171 = UINT8_MAX;
	int16_t x172 = 3459;
	int32_t t39 = 3495;

	t39 = (((x169&x170)|x171)/x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x173 = -2;
	static int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MAX;
	volatile int64_t t40 = 294LL;

	t40 = (((x173&x174)|x175)/x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x177 = -61;
	uint32_t x178 = UINT32_MAX;
	uint64_t x180 = 55725LLU;
	uint64_t t41 = 344082321120858094LLU;

	t41 = (((x177&x178)|x179)/x180);

	if (t41 != 77074LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x183 = -911LL;
	static int16_t x184 = INT16_MAX;
	volatile int64_t t42 = 39803735591LL;

	t42 = (((x181&x182)|x183)/x184);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = INT8_MIN;
	uint64_t x186 = 256347940115LLU;
	int32_t x188 = -1;

	t43 = (((x185&x186)|x187)/x188);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x189 = 23;
	int32_t x190 = INT32_MAX;
	static int8_t x192 = INT8_MIN;
	static int32_t t44 = 10;

	t44 = (((x189&x190)|x191)/x192);

	if (t44 != 16777215) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x193 = 29391U;
	int16_t x194 = INT16_MAX;
	uint16_t x195 = 110U;
	uint8_t x196 = 43U;
	int32_t t45 = -39519;

	t45 = (((x193&x194)|x195)/x196);

	if (t45 != 684) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MIN;
	int32_t x199 = 23517;
	int32_t x200 = INT32_MIN;
	volatile uint64_t t46 = 21603LLU;

	t46 = (((x197&x198)|x199)/x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	static int32_t x202 = INT32_MAX;
	static int8_t x203 = -1;
	static int64_t x204 = INT64_MIN;
	volatile int64_t t47 = 28303716LL;

	t47 = (((x201&x202)|x203)/x204);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = 16814291155965231LL;
	volatile int16_t x208 = 5;

	t48 = (((x205&x206)|x207)/x208);

	if (t48 != 13107LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = 197618321LLU;
	uint8_t x210 = UINT8_MAX;
	uint64_t x211 = 745LLU;
	static uint16_t x212 = UINT16_MAX;
	uint64_t t49 = 111140587729584720LLU;

	t49 = (((x209&x210)|x211)/x212);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x217 = -1;
	int64_t x219 = 36396654640925466LL;
	int8_t x220 = INT8_MIN;
	int64_t t50 = 1770LL;

	t50 = (((x217&x218)|x219)/x220);

	if (t50 != -284351148191166LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x221 = INT32_MIN;
	int32_t x222 = 92228196;
	uint16_t x223 = 565U;
	volatile int8_t x224 = -1;
	static int32_t t51 = 568889;

	t51 = (((x221&x222)|x223)/x224);

	if (t51 != -565) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x226 = UINT16_MAX;
	int64_t x227 = INT64_MAX;
	int32_t x228 = -8012678;
	uint64_t t52 = 784290875541LLU;

	t52 = (((x225&x226)|x227)/x228);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = 366034111431641LL;
	int16_t x230 = 1;
	static int64_t t53 = -17091416264140861LL;

	t53 = (((x229&x230)|x231)/x232);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x233 = INT8_MIN;
	volatile int32_t x234 = INT32_MIN;
	static uint8_t x235 = 39U;
	int8_t x236 = -1;
	volatile int32_t t54 = -2296;

	t54 = (((x233&x234)|x235)/x236);

	if (t54 != 2147483609) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MAX;
	volatile int32_t t55 = 0;

	t55 = (((x237&x238)|x239)/x240);

	if (t55 != -8421376) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = -3;
	uint16_t x242 = UINT16_MAX;
	uint16_t x243 = 254U;
	int8_t x244 = INT8_MIN;
	int32_t t56 = 22;

	t56 = (((x241&x242)|x243)/x244);

	if (t56 != -511) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t t57 = -89;

	t57 = (((x245&x246)|x247)/x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x249 = 10LLU;
	uint16_t x252 = 1U;
	uint64_t t58 = 55588182730LLU;

	t58 = (((x249&x250)|x251)/x252);

	if (t58 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MIN;
	int16_t x254 = -1;
	uint32_t x255 = 3U;
	uint64_t x256 = UINT64_MAX;
	static uint64_t t59 = 1709491LLU;

	t59 = (((x253&x254)|x255)/x256);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x257 = INT64_MAX;
	int8_t x258 = INT8_MIN;
	int8_t x260 = 6;

	t60 = (((x257&x258)|x259)/x260);

	if (t60 != -21LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x262 = 1U;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;

	t61 = (((x261&x262)|x263)/x264);

	if (t61 != 255LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x265 = 97U;
	int16_t x266 = INT16_MIN;
	int8_t x267 = 6;
	uint8_t x268 = UINT8_MAX;
	int32_t t62 = 436;

	t62 = (((x265&x266)|x267)/x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = -1;
	volatile uint32_t x270 = UINT32_MAX;
	uint8_t x271 = UINT8_MAX;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t63 = 12518907993581LLU;

	t63 = (((x269&x270)|x271)/x272);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x273 = 1746918354033339689LL;
	uint16_t x276 = 8770U;
	volatile int64_t t64 = -29404098LL;

	t64 = (((x273&x274)|x275)/x276);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x277 = INT16_MIN;
	static int8_t x278 = INT8_MAX;
	static int8_t x279 = -18;

	t65 = (((x277&x278)|x279)/x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x281 = INT16_MIN;
	uint32_t x282 = 923U;
	int64_t x283 = INT64_MAX;
	volatile int64_t t66 = INT64_MAX;

	t66 = (((x281&x282)|x283)/x284);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x288 = INT8_MIN;
	int32_t t67 = 3290045;

	t67 = (((x285&x286)|x287)/x288);

	if (t67 != -16776963) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = 102U;
	int64_t x291 = INT64_MIN;
	static int8_t x292 = INT8_MIN;
	volatile int64_t t68 = 1286LL;

	t68 = (((x289&x290)|x291)/x292);

	if (t68 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x294 = 2U;
	static int32_t x295 = INT32_MAX;
	int16_t x296 = INT16_MIN;
	static volatile uint32_t t69 = 99U;

	t69 = (((x293&x294)|x295)/x296);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x297 = -1;
	uint8_t x298 = 1U;
	int64_t x299 = -29791948604861263LL;
	int64_t x300 = INT64_MIN;
	volatile int64_t t70 = 148956332279681LL;

	t70 = (((x297&x298)|x299)/x300);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x301 = INT16_MIN;
	int8_t x303 = -1;
	volatile uint32_t x304 = 146900073U;

	t71 = (((x301&x302)|x303)/x304);

	if (t71 != 29U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x306 = UINT64_MAX;
	volatile uint64_t t72 = 1958358478435LLU;

	t72 = (((x305&x306)|x307)/x308);

	if (t72 != 562967133814711LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MAX;
	int64_t x310 = INT64_MAX;
	int8_t x311 = INT8_MIN;
	int64_t x312 = 12400747LL;
	int64_t t73 = -49LL;

	t73 = (((x309&x310)|x311)/x312);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x313 = 4U;
	static int64_t x314 = INT64_MIN;
	int8_t x315 = -1;
	int32_t x316 = INT32_MIN;
	int64_t t74 = 23745233LL;

	t74 = (((x313&x314)|x315)/x316);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = -1;
	static int8_t x318 = INT8_MIN;
	int8_t x319 = -1;

	t75 = (((x317&x318)|x319)/x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x321 = UINT16_MAX;
	static volatile uint8_t x322 = 125U;
	static int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;

	t76 = (((x321&x322)|x323)/x324);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x325 = 1U;
	uint64_t x326 = 181833LLU;
	int64_t x327 = INT64_MAX;
	uint64_t t77 = 65453LLU;

	t77 = (((x325&x326)|x327)/x328);

	if (t77 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x329 = -1;
	int8_t x330 = -2;
	int32_t x331 = INT32_MIN;
	volatile int32_t t78 = -4730;

	t78 = (((x329&x330)|x331)/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	volatile int32_t x340 = INT32_MAX;
	static int32_t t79 = 46375795;

	t79 = (((x337&x338)|x339)/x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = INT64_MIN;
	uint16_t x346 = UINT16_MAX;
	volatile uint64_t x347 = 1LLU;
	static volatile uint64_t t80 = 7622LLU;

	t80 = (((x345&x346)|x347)/x348);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = INT32_MIN;
	volatile int64_t x350 = INT64_MAX;
	int8_t x351 = -1;
	static int32_t x352 = 11454;
	int64_t t81 = 6996746050LL;

	t81 = (((x349&x350)|x351)/x352);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x354 = 269189LLU;
	static int64_t x355 = -3LL;
	uint32_t x356 = 1251462595U;

	t82 = (((x353&x354)|x355)/x356);

	if (t82 != 14740148165LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x357 = 1002U;
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MAX;

	t83 = (((x357&x358)|x359)/x360);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x362 = INT16_MAX;
	int16_t x363 = -1;
	int16_t x364 = -1;
	static volatile uint32_t t84 = 181U;

	t84 = (((x361&x362)|x363)/x364);

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x366 = 3U;
	uint32_t x367 = 7498380U;
	uint32_t t85 = 1788U;

	t85 = (((x365&x366)|x367)/x368);

	if (t85 != 624865U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x369 = INT32_MAX;
	static uint16_t x370 = 29830U;
	uint8_t x371 = UINT8_MAX;
	static volatile int64_t x372 = INT64_MIN;
	int64_t t86 = 1662788525434390LL;

	t86 = (((x369&x370)|x371)/x372);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x374 = 21872929401708342LL;
	int8_t x375 = 3;
	volatile int8_t x376 = INT8_MAX;
	volatile int64_t t87 = -837381031673025678LL;

	t87 = (((x373&x374)|x375)/x376);

	if (t87 != 320LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = -10;
	int8_t x378 = -1;
	int64_t x379 = INT64_MIN;
	int16_t x380 = -4793;
	volatile int64_t t88 = 140170494LL;

	t88 = (((x377&x378)|x379)/x380);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x381 = 3;
	uint64_t x382 = 323989LLU;
	int16_t x383 = INT16_MIN;
	int16_t x384 = -53;
	uint64_t t89 = 292LLU;

	t89 = (((x381&x382)|x383)/x384);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x385 = 202U;
	int8_t x386 = -1;
	int32_t x387 = INT32_MAX;
	static uint64_t x388 = 1139329030586LLU;
	uint64_t t90 = 2693681LLU;

	t90 = (((x385&x386)|x387)/x388);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x389 = UINT16_MAX;
	int64_t x390 = -1LL;
	static int16_t x391 = INT16_MIN;
	static uint16_t x392 = 15U;

	t91 = (((x389&x390)|x391)/x392);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = -47996630;
	volatile uint8_t x394 = 1U;
	uint32_t x395 = 15U;
	int64_t x396 = 1658782LL;

	t92 = (((x393&x394)|x395)/x396);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = INT16_MAX;
	uint8_t x398 = 0U;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t93 = 1;

	t93 = (((x397&x398)|x399)/x400);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x401 = UINT8_MAX;
	static int64_t x402 = INT64_MAX;
	int32_t x403 = -1;
	int32_t x404 = INT32_MAX;

	t94 = (((x401&x402)|x403)/x404);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = 249358;
	uint64_t x406 = UINT64_MAX;
	uint16_t x407 = UINT16_MAX;
	volatile int32_t x408 = -1;
	uint64_t t95 = 5340848LLU;

	t95 = (((x405&x406)|x407)/x408);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x409 = -52166LL;
	static volatile uint64_t x411 = 256465464LLU;
	uint32_t x412 = 340U;
	uint64_t t96 = 33328953514289LLU;

	t96 = (((x409&x410)|x411)/x412);

	if (t96 != 54255129622995686LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x413 = INT8_MAX;
	uint64_t x415 = UINT64_MAX;
	int8_t x416 = INT8_MIN;

	t97 = (((x413&x414)|x415)/x416);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x417 = 3566U;
	uint8_t x418 = UINT8_MAX;
	uint32_t x419 = UINT32_MAX;
	int64_t x420 = -1LL;

	t98 = (((x417&x418)|x419)/x420);

	if (t98 != -4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x421 = 55U;
	int8_t x423 = 0;
	int16_t x424 = INT16_MIN;
	uint64_t t99 = 13799804297LLU;

	t99 = (((x421&x422)|x423)/x424);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

