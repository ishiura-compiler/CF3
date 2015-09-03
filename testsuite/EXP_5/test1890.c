#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 2053112033778795LLU;
int64_t x11 = INT64_MAX;
uint32_t x13 = 201368383U;
int8_t x22 = -1;
int8_t x29 = INT8_MIN;
volatile int16_t x30 = INT16_MAX;
int16_t x31 = INT16_MAX;
volatile uint32_t t9 = 1U;
volatile int64_t x51 = INT64_MIN;
int32_t x52 = INT32_MIN;
volatile int32_t x55 = -1;
uint16_t x70 = UINT16_MAX;
int8_t x75 = INT8_MAX;
static volatile int64_t t14 = 19582146419226065LL;
static int16_t x78 = INT16_MIN;
int16_t x79 = INT16_MAX;
int32_t x80 = -8825;
int16_t x85 = INT16_MIN;
int16_t x97 = -1;
int16_t x102 = -1;
int64_t x110 = -24281223996081235LL;
uint8_t x118 = UINT8_MAX;
volatile int64_t x121 = 6898929199382584LL;
uint64_t t23 = 76618LLU;
int8_t x127 = 2;
uint8_t x129 = 1U;
uint16_t x135 = 247U;
int64_t x141 = 30LL;
uint16_t x161 = UINT16_MAX;
int8_t x163 = -5;
static volatile uint16_t x168 = 855U;
volatile int64_t t31 = 542519886056775LL;
int8_t x185 = INT8_MIN;
volatile uint16_t x186 = 106U;
int32_t x187 = -1;
int32_t x190 = -1;
int32_t t36 = -1;
int8_t x195 = INT8_MIN;
int32_t x206 = 3241074;
uint32_t x207 = 1815862U;
static int64_t x233 = INT64_MIN;
uint32_t x234 = 340U;
int8_t x238 = INT8_MIN;
int32_t x241 = 56377339;
volatile int64_t x242 = INT64_MIN;
static int32_t t49 = -1065;
static int32_t x259 = -1;
int64_t x260 = INT64_MIN;
int16_t x265 = INT16_MIN;
int16_t x266 = INT16_MIN;
uint32_t x267 = 8385279U;
static int64_t t52 = -5LL;
int64_t x270 = -1391152388674133LL;
volatile int16_t x274 = INT16_MIN;
static uint16_t x282 = 187U;
volatile int32_t x284 = 5;
uint64_t t57 = 520863285874LLU;
uint64_t x292 = 2264313LLU;
int64_t x293 = -210216514414LL;
static int64_t t60 = 27LL;
volatile uint16_t x307 = 6U;
uint64_t x308 = 11LLU;
static int64_t x311 = 44497977431660LL;
int32_t x314 = INT32_MIN;
int64_t x318 = -1LL;
uint16_t x319 = 408U;
volatile uint32_t x323 = UINT32_MAX;
int32_t x324 = INT32_MIN;
uint64_t t67 = 175498537464006529LLU;
uint16_t x329 = 7U;
uint8_t x333 = 28U;
static volatile int32_t x334 = -1;
int8_t x336 = -8;
int32_t t69 = 1;
int32_t x339 = INT32_MIN;
uint32_t x343 = 1132798U;
uint32_t x345 = 3295U;
uint32_t t72 = 1U;
int64_t x350 = -1LL;
volatile int64_t t74 = -71848448316316274LL;
volatile int8_t x364 = 22;
int32_t x380 = -1;
volatile uint32_t t80 = 28420148U;
uint32_t x389 = UINT32_MAX;
int64_t t85 = 429LL;
int64_t x414 = -52966824005137LL;
volatile int8_t x432 = INT8_MIN;
uint32_t x443 = UINT32_MAX;
volatile int32_t x444 = INT32_MAX;
uint32_t x445 = UINT32_MAX;
int16_t x456 = -1;
int8_t x457 = INT8_MIN;
static uint8_t x464 = 7U;
volatile uint32_t t95 = 57009622U;
static int16_t x466 = -1;


void f0(void) {
	static int64_t x1 = -53871917626LL;
	int8_t x2 = 0;
	uint64_t x3 = UINT64_MAX;
	uint8_t x4 = UINT8_MAX;

	t0 = (x1%((x2|x3)*x4));

	if (t0 != 18446744019837633990LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	int64_t x10 = -9LL;
	uint8_t x12 = 118U;
	int64_t t1 = 2391182535764727LL;

	t1 = (x9%((x10|x11)*x12));

	if (t1 != -114LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = 2;
	int8_t x15 = -8;
	int16_t x16 = INT16_MIN;
	uint32_t t2 = 12U;

	t2 = (x13%((x14|x15)*x16));

	if (t2 != 41791U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MIN;
	int64_t x23 = -1LL;
	volatile int8_t x24 = INT8_MIN;
	volatile int64_t t3 = 141639870594793LL;

	t3 = (x21%((x22|x23)*x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MAX;
	volatile int32_t t4 = -1564886;

	t4 = (x25%((x26|x27)*x28));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x32 = INT8_MIN;
	int32_t t5 = -61399;

	t5 = (x29%((x30|x31)*x32));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = UINT64_MAX;
	static int32_t x34 = INT32_MIN;
	volatile uint8_t x35 = 19U;
	volatile int64_t x36 = 394327528LL;
	static volatile uint64_t t6 = 25361619LLU;

	t6 = (x33%((x34|x35)*x36));

	if (t6 != 846811910844039111LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = -393174LL;
	int64_t x39 = 638LL;
	static uint64_t x40 = UINT64_MAX;
	uint64_t t7 = 3LLU;

	t7 = (x37%((x38|x39)*x40));

	if (t7 != 36010LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1LL;
	int64_t x42 = -1LL;
	int8_t x43 = INT8_MAX;
	uint32_t x44 = 19366U;
	int64_t t8 = -169535839058LL;

	t8 = (x41%((x42|x43)*x44));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	static int8_t x46 = INT8_MIN;
	volatile int32_t x47 = INT32_MAX;
	static uint32_t x48 = 9U;

	t9 = (x45%((x46|x47)*x48));

	if (t9 != 8U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = INT64_MIN;
	static uint64_t x50 = 2LLU;
	volatile uint64_t t10 = 3209965337999028LLU;

	t10 = (x49%((x50|x51)*x52));

	if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	uint8_t x54 = UINT8_MAX;
	uint16_t x56 = 28U;
	static volatile int32_t t11 = -137;

	t11 = (x53%((x54|x55)*x56));

	if (t11 != -16) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 71U;
	uint64_t x62 = 2LLU;
	int64_t x63 = -1LL;
	int64_t x64 = INT64_MAX;
	volatile uint64_t t12 = 14436319LLU;

	t12 = (x61%((x62|x63)*x64));

	if (t12 != 71LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x69 = -8;
	static int64_t x71 = -63418852155LL;
	uint64_t x72 = 8512847096175158982LLU;
	uint64_t t13 = 204885326712LLU;

	t13 = (x69%((x70|x71)*x72));

	if (t13 != 8506113486023059134LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -1;
	static uint32_t x74 = 201U;
	int64_t x76 = -389LL;

	t14 = (x73%((x74|x75)*x76));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x77 = UINT64_MAX;
	volatile uint64_t t15 = 48364744709696669LLU;

	t15 = (x77%((x78|x79)*x80));

	if (t15 != 6540LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x81 = -1;
	uint8_t x82 = UINT8_MAX;
	uint64_t x83 = UINT64_MAX;
	int16_t x84 = INT16_MIN;
	static uint64_t t16 = 1936711263171401973LLU;

	t16 = (x81%((x82|x83)*x84));

	if (t16 != 32767LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x86 = -259LL;
	static uint8_t x87 = 15U;
	static int32_t x88 = INT32_MIN;
	volatile int64_t t17 = 1628127314815500LL;

	t17 = (x85%((x86|x87)*x88));

	if (t17 != -32768LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	static uint32_t x100 = UINT32_MAX;
	int64_t t18 = -6492683LL;

	t18 = (x97%((x98|x99)*x100));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = INT32_MIN;
	volatile int64_t x103 = 1696434303059441557LL;
	int16_t x104 = -86;
	int64_t t19 = 0LL;

	t19 = (x101%((x102|x103)*x104));

	if (t19 != -8LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MIN;
	static volatile int8_t x111 = -29;
	static int64_t x112 = 1577LL;
	volatile int64_t t20 = -1LL;

	t20 = (x109%((x110|x111)*x112));

	if (t20 != -2321LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MAX;
	int16_t x114 = 27;
	int8_t x115 = INT8_MIN;
	uint16_t x116 = UINT16_MAX;
	int32_t t21 = 4746;

	t21 = (x113%((x114|x115)*x116));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x117 = 7U;
	int8_t x119 = -1;
	static uint64_t x120 = 422331444LLU;
	uint64_t t22 = 75679076LLU;

	t22 = (x117%((x118|x119)*x120));

	if (t22 != 7LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x122 = UINT64_MAX;
	static uint32_t x123 = 4424216U;
	static int8_t x124 = INT8_MIN;

	t23 = (x121%((x122|x123)*x124));

	if (t23 != 56LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x125 = INT16_MIN;
	int16_t x126 = -119;
	int16_t x128 = INT16_MIN;
	static volatile int32_t t24 = 35;

	t24 = (x125%((x126|x127)*x128));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MAX;
	uint64_t x132 = 61416691214433LLU;
	uint64_t t25 = 39LLU;

	t25 = (x129%((x130|x131)*x132));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = 8267U;
	uint64_t x134 = UINT64_MAX;
	int16_t x136 = INT16_MIN;
	volatile uint64_t t26 = 63876399809952LLU;

	t26 = (x133%((x134|x135)*x136));

	if (t26 != 8267LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x142 = 54219693763599LLU;
	int8_t x143 = 17;
	int32_t x144 = -1;
	volatile uint64_t t27 = 51427583073LLU;

	t27 = (x141%((x142|x143)*x144));

	if (t27 != 30LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x153 = 25950U;
	int16_t x154 = INT16_MAX;
	volatile uint64_t x155 = 14206836LLU;
	static uint8_t x156 = 1U;
	uint64_t t28 = 3785162513097LLU;

	t28 = (x153%((x154|x155)*x156));

	if (t28 != 25950LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x157 = 143094LL;
	uint32_t x158 = 7U;
	int16_t x159 = 1;
	int16_t x160 = INT16_MIN;
	volatile int64_t t29 = 7183121521892791LL;

	t29 = (x157%((x158|x159)*x160));

	if (t29 != 143094LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x162 = INT32_MIN;
	uint32_t x164 = 302820U;
	volatile uint32_t t30 = 19U;

	t30 = (x161%((x162|x163)*x164));

	if (t30 != 65535U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x165 = -2080680;
	volatile int64_t x166 = INT64_MAX;
	int16_t x167 = INT16_MIN;

	t31 = (x165%((x166|x167)*x168));

	if (t31 != -465LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x169 = INT8_MAX;
	int64_t x170 = -174536LL;
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = -3133LL;
	uint64_t t32 = 5854803LLU;

	t32 = (x169%((x170|x171)*x172));

	if (t32 != 127LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x177 = 54920884LLU;
	volatile int16_t x178 = 447;
	int64_t x179 = -1LL;
	int32_t x180 = INT32_MIN;
	uint64_t t33 = 150885279759927LLU;

	t33 = (x177%((x178|x179)*x180));

	if (t33 != 54920884LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x181 = INT64_MIN;
	uint8_t x182 = 2U;
	int8_t x183 = INT8_MIN;
	static uint16_t x184 = UINT16_MAX;
	int64_t t34 = 1011LL;

	t34 = (x181%((x182|x183)*x184));

	if (t34 != -2785238LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x188 = INT32_MAX;
	volatile int32_t t35 = -9149895;

	t35 = (x185%((x186|x187)*x188));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x189 = -1;
	int8_t x191 = INT8_MIN;
	volatile int8_t x192 = INT8_MIN;

	t36 = (x189%((x190|x191)*x192));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x193 = 559627952668280LLU;
	int64_t x194 = -1LL;
	static uint8_t x196 = 1U;
	static uint64_t t37 = 25584LLU;

	t37 = (x193%((x194|x195)*x196));

	if (t37 != 559627952668280LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x205 = 26451293748248615LL;
	int8_t x208 = -12;
	volatile int64_t t38 = -104350521943491LL;

	t38 = (x205%((x206|x207)*x208));

	if (t38 != 345435791LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x213 = -1;
	int32_t x214 = -1;
	int32_t x215 = INT32_MIN;
	uint8_t x216 = UINT8_MAX;
	int32_t t39 = -16;

	t39 = (x213%((x214|x215)*x216));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x217 = INT32_MIN;
	int32_t x218 = -1;
	int8_t x219 = -1;
	volatile uint32_t x220 = 16U;
	volatile uint32_t t40 = 44600U;

	t40 = (x217%((x218|x219)*x220));

	if (t40 != 2147483648U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x221 = UINT16_MAX;
	volatile uint16_t x222 = UINT16_MAX;
	static uint16_t x223 = 380U;
	int8_t x224 = INT8_MIN;
	volatile int32_t t41 = -1113;

	t41 = (x221%((x222|x223)*x224));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x225 = -6;
	int8_t x226 = -2;
	volatile int64_t x227 = -1LL;
	int32_t x228 = INT32_MIN;
	volatile int64_t t42 = 368LL;

	t42 = (x225%((x226|x227)*x228));

	if (t42 != -6LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x229 = -10544LL;
	static int8_t x230 = 5;
	int16_t x231 = -1;
	volatile uint16_t x232 = UINT16_MAX;
	int64_t t43 = 4905266330866LL;

	t43 = (x229%((x230|x231)*x232));

	if (t43 != -10544LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x235 = INT16_MAX;
	int8_t x236 = 1;
	int64_t t44 = 25084906583831163LL;

	t44 = (x233%((x234|x235)*x236));

	if (t44 != -8LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x237 = UINT64_MAX;
	uint64_t x239 = 8689526271930180LLU;
	static volatile int32_t x240 = INT32_MAX;
	static volatile uint64_t t45 = 236840596446LLU;

	t45 = (x237%((x238|x239)*x240));

	if (t45 != 128849018819LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x243 = 8537781813596065922LLU;
	int32_t x244 = -1591;
	volatile uint64_t t46 = 197LLU;

	t46 = (x241%((x242|x243)*x244));

	if (t46 != 56377339LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x245 = UINT16_MAX;
	static volatile int8_t x246 = 25;
	int32_t x247 = -1;
	static uint64_t x248 = 420018810649997820LLU;
	uint64_t t47 = 1090033339344898265LLU;

	t47 = (x245%((x246|x247)*x248));

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x249 = INT32_MIN;
	int64_t x250 = 1230LL;
	int64_t x251 = -1LL;
	volatile uint32_t x252 = 154591626U;
	int64_t t48 = 13986768LL;

	t48 = (x249%((x250|x251)*x252));

	if (t48 != -137792510LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x253 = -847;
	static int32_t x254 = -1077;
	uint16_t x255 = 73U;
	int8_t x256 = INT8_MIN;

	t49 = (x253%((x254|x255)*x256));

	if (t49 != -847) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x257 = 5U;
	static volatile uint64_t x258 = UINT64_MAX;
	volatile uint64_t t50 = 968434845LLU;

	t50 = (x257%((x258|x259)*x260));

	if (t50 != 5LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x261 = -1;
	int8_t x262 = -21;
	static int8_t x263 = INT8_MAX;
	int8_t x264 = INT8_MIN;
	int32_t t51 = -755347;

	t51 = (x261%((x262|x263)*x264));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x268 = 676LL;

	t52 = (x265%((x266|x267)*x268));

	if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = INT16_MAX;
	uint64_t x271 = 176227394LLU;
	int64_t x272 = INT64_MIN;
	static uint64_t t53 = 304LLU;

	t53 = (x269%((x270|x271)*x272));

	if (t53 != 32767LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x273 = INT8_MIN;
	int64_t x275 = INT64_MAX;
	uint64_t x276 = UINT64_MAX;
	uint64_t t54 = 14237359316787952LLU;

	t54 = (x273%((x274|x275)*x276));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = -1;
	int64_t x278 = -263179770421LL;
	int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MIN;
	static volatile int64_t t55 = 117LL;

	t55 = (x277%((x278|x279)*x280));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x281 = INT32_MIN;
	int16_t x283 = INT16_MIN;
	volatile int32_t t56 = 262689334;

	t56 = (x281%((x282|x283)*x284));

	if (t56 != -69938) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x285 = -1;
	volatile uint64_t x286 = UINT64_MAX;
	volatile int8_t x287 = -14;
	volatile uint32_t x288 = 332406U;

	t57 = (x285%((x286|x287)*x288));

	if (t57 != 332405LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x289 = -1LL;
	volatile uint8_t x290 = 6U;
	int8_t x291 = INT8_MAX;
	uint64_t t58 = 2141849236704LLU;

	t58 = (x289%((x290|x291)*x292));

	if (t58 != 76898247LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x294 = 137096095577LLU;
	volatile int16_t x295 = INT16_MIN;
	uint16_t x296 = 426U;
	uint64_t t59 = 0LLU;

	t59 = (x293%((x294|x295)*x296));

	if (t59 != 18446743863493037202LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x297 = -1;
	int64_t x298 = -1014451421103011347LL;
	int8_t x299 = -1;
	int16_t x300 = INT16_MIN;

	t60 = (x297%((x298|x299)*x300));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x301 = -35;
	int16_t x302 = INT16_MAX;
	uint8_t x303 = UINT8_MAX;
	static volatile int16_t x304 = 5542;
	volatile int32_t t61 = 3;

	t61 = (x301%((x302|x303)*x304));

	if (t61 != -35) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x305 = -1;
	static volatile int32_t x306 = -7771;
	volatile uint64_t t62 = 19936940225414943LLU;

	t62 = (x305%((x306|x307)*x308));

	if (t62 != 85458LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x309 = 3784U;
	int16_t x310 = -1;
	uint64_t x312 = UINT64_MAX;
	uint64_t t63 = 4751656LLU;

	t63 = (x309%((x310|x311)*x312));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x313 = 528;
	uint32_t x315 = UINT32_MAX;
	uint64_t x316 = UINT64_MAX;
	uint64_t t64 = 1273148465715740892LLU;

	t64 = (x313%((x314|x315)*x316));

	if (t64 != 528LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = -1;
	int32_t x320 = INT32_MIN;
	static volatile int64_t t65 = -143704041288828LL;

	t65 = (x317%((x318|x319)*x320));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x321 = -762;
	volatile int64_t x322 = -1LL;
	volatile int64_t t66 = -76LL;

	t66 = (x321%((x322|x323)*x324));

	if (t66 != -762LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x325 = 257481268614718LLU;
	static int16_t x326 = INT16_MIN;
	int32_t x327 = -1;
	volatile uint16_t x328 = UINT16_MAX;

	t67 = (x325%((x326|x327)*x328));

	if (t67 != 257481268614718LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x330 = INT16_MIN;
	static int16_t x331 = -280;
	static volatile int64_t x332 = -1LL;
	int64_t t68 = 1044131630805029LL;

	t68 = (x329%((x330|x331)*x332));

	if (t68 != 7LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x335 = INT16_MIN;

	t69 = (x333%((x334|x335)*x336));

	if (t69 != 4) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x337 = 0U;
	int8_t x338 = INT8_MIN;
	int16_t x340 = -1;
	volatile int32_t t70 = -74;

	t70 = (x337%((x338|x339)*x340));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = -98150404;
	int16_t x342 = 4456;
	int8_t x344 = -1;
	volatile uint32_t t71 = 624338U;

	t71 = (x341%((x342|x343)*x344));

	if (t71 != 4196816892U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x346 = 39810794U;
	int32_t x347 = -1;
	volatile int32_t x348 = -89;

	t72 = (x345%((x346|x347)*x348));

	if (t72 != 2U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x349 = INT16_MIN;
	static int16_t x351 = 905;
	int64_t x352 = INT64_MAX;
	volatile int64_t t73 = -27616107696935596LL;

	t73 = (x349%((x350|x351)*x352));

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x353 = 2LL;
	int64_t x354 = 108LL;
	int16_t x355 = 1;
	volatile int32_t x356 = INT32_MIN;

	t74 = (x353%((x354|x355)*x356));

	if (t74 != 2LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x357 = UINT16_MAX;
	static uint64_t x358 = 3095996583529322998LLU;
	int64_t x359 = INT64_MIN;
	int16_t x360 = -1;
	uint64_t t75 = 15371071653LLU;

	t75 = (x357%((x358|x359)*x360));

	if (t75 != 65535LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x361 = 730865305LL;
	int16_t x362 = INT16_MIN;
	volatile int64_t x363 = -2461549605871LL;
	volatile int64_t t76 = 87168892419627LL;

	t76 = (x361%((x362|x363)*x364));

	if (t76 != 225285LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x365 = UINT8_MAX;
	static uint32_t x366 = 350885U;
	volatile int32_t x367 = 49;
	uint64_t x368 = 676189397657LLU;
	volatile uint64_t t77 = 39291555361707360LLU;

	t77 = (x365%((x366|x367)*x368));

	if (t77 != 255LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x369 = 25608944235LLU;
	static int8_t x370 = INT8_MIN;
	static int8_t x371 = 26;
	volatile int16_t x372 = -3;
	volatile uint64_t t78 = 6733493416LLU;

	t78 = (x369%((x370|x371)*x372));

	if (t78 != 75LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x373 = 17;
	static int8_t x374 = -1;
	volatile uint8_t x375 = 14U;
	int64_t x376 = -13172805837955LL;
	volatile int64_t t79 = 13542146LL;

	t79 = (x373%((x374|x375)*x376));

	if (t79 != 17LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x377 = 11273U;
	static int32_t x378 = INT32_MAX;
	static uint8_t x379 = 1U;

	t80 = (x377%((x378|x379)*x380));

	if (t80 != 11273U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x385 = INT8_MIN;
	static int16_t x386 = -625;
	int16_t x387 = INT16_MIN;
	volatile int16_t x388 = 2035;
	volatile int32_t t81 = 10633219;

	t81 = (x385%((x386|x387)*x388));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x390 = 62U;
	volatile int64_t x391 = -291LL;
	int16_t x392 = INT16_MIN;
	int64_t t82 = 335352246816334LL;

	t82 = (x389%((x390|x391)*x392));

	if (t82 != 65535LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = -1LL;
	static int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MAX;
	int8_t x400 = -1;
	volatile int64_t t83 = -16809035027LL;

	t83 = (x397%((x398|x399)*x400));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x401 = 3;
	static volatile int32_t x402 = -1;
	volatile int16_t x403 = INT16_MIN;
	static volatile int64_t x404 = -9528844559156LL;
	volatile int64_t t84 = 70LL;

	t84 = (x401%((x402|x403)*x404));

	if (t84 != 3LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x405 = INT64_MIN;
	static int64_t x406 = -33LL;
	static uint16_t x407 = UINT16_MAX;
	volatile int32_t x408 = -1;

	t85 = (x405%((x406|x407)*x408));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x409 = -1;
	uint64_t x410 = 9LLU;
	int32_t x411 = 73;
	volatile int64_t x412 = 106803LL;
	uint64_t t86 = 3012LLU;

	t86 = (x409%((x410|x411)*x412));

	if (t86 != 301272LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x413 = 92U;
	uint16_t x415 = 7U;
	int16_t x416 = 1;
	volatile int64_t t87 = -148LL;

	t87 = (x413%((x414|x415)*x416));

	if (t87 != 92LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x425 = INT8_MIN;
	static uint32_t x426 = 98983U;
	static int8_t x427 = 61;
	uint8_t x428 = UINT8_MAX;
	static volatile uint32_t t88 = 168U;

	t88 = (x425%((x426|x427)*x428));

	if (t88 != 3013718U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x429 = UINT32_MAX;
	static int32_t x430 = INT32_MAX;
	uint64_t x431 = 223070282839408935LLU;
	uint64_t t89 = 37332419485547LLU;

	t89 = (x429%((x430|x431)*x432));

	if (t89 != 4294967295LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x437 = -1;
	int64_t x438 = -1LL;
	uint64_t x439 = 7083646865438063LLU;
	static int64_t x440 = INT64_MIN;
	static uint64_t t90 = 26543LLU;

	t90 = (x437%((x438|x439)*x440));

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x441 = -1LL;
	uint64_t x442 = UINT64_MAX;
	volatile uint64_t t91 = 989LLU;

	t91 = (x441%((x442|x443)*x444));

	if (t91 != 2147483646LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x446 = 1LLU;
	int64_t x447 = 383199902378181LL;
	static uint64_t x448 = 1882749605LLU;
	uint64_t t92 = 1667710927LLU;

	t92 = (x445%((x446|x447)*x448));

	if (t92 != 4294967295LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x453 = UINT64_MAX;
	uint16_t x454 = 1384U;
	int64_t x455 = INT64_MIN;
	static volatile uint64_t t93 = 8250577LLU;

	t93 = (x453%((x454|x455)*x456));

	if (t93 != 2767LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x458 = 741905093447098LLU;
	int32_t x459 = INT32_MIN;
	int16_t x460 = 312;
	volatile uint64_t t94 = 5543907058LLU;

	t94 = (x457%((x458|x459)*x460));

	if (t94 != 347821655248LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x461 = INT32_MIN;
	static uint32_t x462 = UINT32_MAX;
	static int8_t x463 = INT8_MIN;

	t95 = (x461%((x462|x463)*x464));

	if (t95 != 2147483648U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x465 = -527520127133056LL;
	volatile uint64_t x467 = 720966878557401LLU;
	int16_t x468 = INT16_MAX;
	uint64_t t96 = 1142667472193031LLU;

	t96 = (x465%((x466|x467)*x468));

	if (t96 != 18446216553582418560LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x469 = 7U;
	int8_t x470 = INT8_MIN;
	volatile int64_t x471 = INT64_MIN;
	int32_t x472 = 22;
	int64_t t97 = 783LL;

	t97 = (x469%((x470|x471)*x472));

	if (t97 != 7LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x473 = 273;
	volatile int16_t x474 = -61;
	int16_t x475 = INT16_MIN;
	volatile uint8_t x476 = 40U;
	volatile int32_t t98 = -104514;

	t98 = (x473%((x474|x475)*x476));

	if (t98 != 273) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x481 = -1;
	static volatile uint8_t x482 = UINT8_MAX;
	int8_t x483 = INT8_MAX;
	int16_t x484 = INT16_MAX;
	volatile int32_t t99 = -314;

	t99 = (x481%((x482|x483)*x484));

	if (t99 != -1) { NG(); } else { ; }
	
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

