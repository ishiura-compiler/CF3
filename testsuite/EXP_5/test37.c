#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t t0 = 13433835U;
int8_t x7 = INT8_MIN;
uint32_t x8 = 42U;
static volatile uint32_t t1 = 8485041U;
int64_t x15 = INT64_MAX;
uint16_t x22 = 2U;
int8_t x35 = INT8_MAX;
int64_t x39 = 1167452818LL;
volatile uint8_t x41 = UINT8_MAX;
uint64_t x52 = 242LLU;
static uint8_t x82 = UINT8_MAX;
int16_t x83 = INT16_MIN;
int64_t t15 = 45100794804550LL;
uint32_t x86 = UINT32_MAX;
uint8_t x87 = UINT8_MAX;
uint32_t x88 = 11738U;
int8_t x95 = INT8_MIN;
static int8_t x104 = INT8_MIN;
int16_t x109 = -168;
volatile uint32_t x112 = UINT32_MAX;
volatile uint64_t t19 = 177457078388697583LLU;
static volatile int64_t t20 = -34643108540228LL;
int16_t x130 = -1;
uint16_t x134 = UINT16_MAX;
int64_t x138 = -136608028722404LL;
static uint64_t t24 = 16088490LLU;
uint16_t x142 = 4783U;
uint64_t x144 = 31049909842046LLU;
static int64_t x146 = 48LL;
int8_t x148 = 1;
uint16_t x149 = 450U;
int64_t x161 = 48338278LL;
uint64_t x165 = UINT64_MAX;
volatile uint64_t x175 = 16740590725137840LLU;
uint64_t t31 = 46855890543687LLU;
int64_t x177 = INT64_MIN;
uint64_t x178 = 22119460LLU;
volatile int64_t x179 = INT64_MAX;
int16_t x195 = INT16_MIN;
int16_t x208 = 3662;
volatile uint64_t t34 = 42730020LLU;
volatile uint16_t x215 = UINT16_MAX;
uint64_t x216 = UINT64_MAX;
uint16_t x221 = UINT16_MAX;
uint16_t x230 = 21U;
uint64_t x235 = 324202652370557LLU;
volatile int16_t x236 = INT16_MIN;
uint32_t x251 = 903U;
uint32_t x253 = UINT32_MAX;
volatile uint16_t x274 = UINT16_MAX;
volatile int8_t x276 = -6;
static int16_t x277 = INT16_MIN;
int8_t x287 = 0;
volatile uint32_t t45 = 325854339U;
static uint32_t x293 = 152551U;
uint8_t x319 = 8U;
int32_t t51 = 0;
static volatile int16_t x322 = INT16_MIN;
int8_t x330 = -1;
int8_t x339 = -5;
uint8_t x340 = 6U;
static int64_t x359 = INT64_MIN;
int16_t x366 = INT16_MIN;
uint8_t x367 = UINT8_MAX;
static volatile uint32_t t60 = 64397U;
int32_t x373 = INT32_MIN;
int32_t x383 = -1;
static int64_t x384 = -2LL;
uint16_t x385 = 2U;
int16_t x403 = 3600;
static uint32_t x407 = 187U;
int16_t x413 = -1;
int32_t t69 = 0;
int32_t x419 = -1;
uint8_t x427 = 56U;
int16_t x429 = -91;
volatile int64_t x438 = INT64_MIN;
int64_t x440 = INT64_MIN;
uint8_t x445 = 24U;
uint16_t x449 = 859U;
int8_t x450 = -2;
uint64_t x451 = UINT64_MAX;
uint64_t x453 = 3075291LLU;
uint8_t x456 = 49U;
volatile uint64_t t77 = 275244698222116LLU;
int64_t t78 = 348661498558881011LL;
volatile uint32_t x473 = 125449U;
uint16_t x474 = 10U;
static int8_t x483 = 7;
volatile uint8_t x484 = UINT8_MAX;
static volatile uint32_t t80 = 148364U;
int64_t t85 = -10943462234LL;
uint64_t x511 = 206LLU;
volatile uint64_t t86 = 471LLU;
volatile int8_t x526 = INT8_MIN;
uint64_t t88 = 227828LLU;
int8_t x530 = INT8_MIN;
int32_t x545 = INT32_MIN;
volatile int64_t t93 = INT64_MIN;
volatile uint64_t t94 = 1103122LLU;
int64_t t95 = -172473607767LL;
volatile int32_t x599 = INT32_MAX;
static int64_t t96 = 1080638288321LL;
int32_t x601 = -1;


void f0(void) {
	int32_t x1 = 0;
	int8_t x2 = INT8_MIN;
	uint32_t x3 = 0U;
	int16_t x4 = -1;

	t0 = (x1&((x2+x3)*x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 8U;
	volatile int32_t x6 = -1;

	t1 = (x5&((x6+x7)*x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	int32_t x11 = INT32_MIN;
	volatile int16_t x12 = -1;
	int64_t t2 = 2LL;

	t2 = (x9&((x10+x11)*x12));

	if (t2 != 2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MIN;
	uint32_t x16 = 0U;
	volatile int64_t t3 = -861LL;

	t3 = (x13&((x14+x15)*x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	uint64_t x18 = 16926587641354LLU;
	volatile uint64_t x19 = 2117012940248488855LLU;
	static int64_t x20 = INT64_MIN;
	volatile uint64_t t4 = 10018267002LLU;

	t4 = (x17&((x18+x19)*x20));

	if (t4 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int32_t x23 = 1;
	int16_t x24 = INT16_MAX;
	static int32_t t5 = -6;

	t5 = (x21&((x22+x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 14U;
	static int16_t x26 = 10;
	static int8_t x27 = 4;
	int32_t x28 = 41;
	volatile int32_t t6 = 1;

	t6 = (x25&((x26+x27)*x28));

	if (t6 != 14) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = UINT32_MAX;
	uint64_t x34 = 629931589405341LLU;
	volatile int8_t x36 = INT8_MIN;
	uint64_t t7 = 19LLU;

	t7 = (x33&((x34+x35)*x36));

	if (t7 != 2965008896LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	static uint16_t x38 = UINT16_MAX;
	volatile uint32_t x40 = UINT32_MAX;
	volatile int64_t t8 = 7865601LL;

	t8 = (x37&((x38+x39)*x40));

	if (t8 != 3127448943LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x42 = INT16_MIN;
	int64_t x43 = 1065168441415192789LL;
	int16_t x44 = -1;
	int64_t t9 = 8738393380465LL;

	t9 = (x41&((x42+x43)*x44));

	if (t9 != 43LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	int64_t x46 = -3332944082865681LL;
	int16_t x47 = -1;
	int16_t x48 = 1761;
	volatile int64_t t10 = 216209506593578114LL;

	t10 = (x45&((x46+x47)*x48));

	if (t10 != -5869314529926466002LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = INT16_MIN;
	int64_t x50 = -815728093LL;
	static uint32_t x51 = UINT32_MAX;
	uint64_t t11 = 6163258721365058253LLU;

	t11 = (x49&((x50+x51)*x52));

	if (t11 != 841975857152LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x69 = UINT16_MAX;
	int8_t x70 = INT8_MIN;
	uint16_t x71 = 0U;
	int8_t x72 = 26;
	static volatile int32_t t12 = 1908;

	t12 = (x69&((x70+x71)*x72));

	if (t12 != 62208) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x73 = -1;
	int8_t x74 = -7;
	uint64_t x75 = 374984293802LLU;
	volatile uint32_t x76 = UINT32_MAX;
	volatile uint64_t t13 = 7892139636324294883LLU;

	t13 = (x73&((x74+x75)*x76));

	if (t13 != 5678543575465443933LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = INT8_MIN;
	volatile int32_t x78 = -129870081;
	volatile uint32_t x79 = UINT32_MAX;
	static volatile int8_t x80 = INT8_MIN;
	volatile uint32_t t14 = 855992400U;

	t14 = (x77&((x78+x79)*x80));

	if (t14 != 3738468608U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = INT8_MAX;
	volatile int64_t x84 = -53351237LL;

	t15 = (x81&((x82+x83)*x84));

	if (t15 != 69LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x85 = 32;
	uint32_t t16 = 414214921U;

	t16 = (x85&((x86+x87)*x88));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x93 = 14167;
	int16_t x94 = INT16_MIN;
	int32_t x96 = -1;
	static volatile int32_t t17 = 1595;

	t17 = (x93&((x94+x95)*x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = -1;
	int16_t x102 = -700;
	volatile int64_t x103 = 2980763764724462LL;
	volatile int64_t t18 = 67757LL;

	t18 = (x101&((x102+x103)*x104));

	if (t18 != -381537761884641536LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x110 = 483052112458LLU;
	volatile uint64_t x111 = 3968LLU;

	t19 = (x109&((x110+x111)*x112));

	if (t19 != 8657705574732506640LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x113 = 441996U;
	volatile int64_t x114 = INT64_MIN;
	static volatile int16_t x115 = INT16_MAX;
	int32_t x116 = -1;

	t20 = (x113&((x114+x115)*x116));

	if (t20 != 425984LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x125 = UINT16_MAX;
	int32_t x126 = -2;
	static int32_t x127 = 1175;
	int16_t x128 = INT16_MIN;
	volatile int32_t t21 = -12430915;

	t21 = (x125&((x126+x127)*x128));

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x129 = INT8_MAX;
	uint16_t x131 = 21729U;
	uint32_t x132 = UINT32_MAX;
	static volatile uint32_t t22 = 639576U;

	t22 = (x129&((x130+x131)*x132));

	if (t22 != 32U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x133 = 3U;
	int8_t x135 = 0;
	uint8_t x136 = 33U;
	volatile int32_t t23 = -1202;

	t23 = (x133&((x134+x135)*x136));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x137 = -1;
	int16_t x139 = -1;
	uint64_t x140 = 11619684LLU;

	t24 = (x137&((x138+x139)*x140));

	if (t24 != 17524608795461170572LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = INT16_MIN;
	static int8_t x143 = 0;
	uint64_t t25 = 1845152657412986987LLU;

	t25 = (x141&((x142+x143)*x144));

	if (t25 != 148511718774505472LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x145 = 3;
	uint64_t x147 = 98791087390953LLU;
	volatile uint64_t t26 = 514315630489804LLU;

	t26 = (x145&((x146+x147)*x148));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x150 = -11634889589LL;
	static uint64_t x151 = UINT64_MAX;
	int16_t x152 = INT16_MIN;
	uint64_t t27 = 8078155983973461654LLU;

	t27 = (x149&((x150+x151)*x152));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x153 = 0;
	int64_t x154 = -181LL;
	uint32_t x155 = UINT32_MAX;
	int16_t x156 = INT16_MIN;
	volatile int64_t t28 = 206107709929LL;

	t28 = (x153&((x154+x155)*x156));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x162 = INT8_MIN;
	int32_t x163 = -1;
	static int32_t x164 = 2582;
	static volatile int64_t t29 = -3830716617321322LL;

	t29 = (x161&((x162+x163)*x164));

	if (t29 != 48267362LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x166 = 9U;
	int64_t x167 = INT64_MIN;
	int64_t x168 = -1LL;
	uint64_t t30 = 5967499396LLU;

	t30 = (x165&((x166+x167)*x168));

	if (t30 != 9223372036854775799LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x173 = 44U;
	uint64_t x174 = 184353LLU;
	int32_t x176 = INT32_MAX;

	t31 = (x173&((x174+x175)*x176));

	if (t31 != 44LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x180 = -1;
	uint64_t t32 = 71LLU;

	t32 = (x177&((x178+x179)*x180));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x193 = 9;
	static volatile int8_t x194 = 15;
	int8_t x196 = -22;
	volatile int32_t t33 = -93;

	t33 = (x193&((x194+x195)*x196));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x205 = 55LL;
	volatile int16_t x206 = -15470;
	uint64_t x207 = 1178LLU;

	t34 = (x205&((x206+x207)*x208));

	if (t34 != 32LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x209 = INT16_MAX;
	uint32_t x210 = 542868U;
	volatile uint16_t x211 = 10501U;
	volatile uint16_t x212 = 727U;
	volatile uint32_t t35 = 58567U;

	t35 = (x209&((x210+x211)*x212));

	if (t35 != 6527U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MIN;
	static volatile uint64_t t36 = 2LLU;

	t36 = (x213&((x214+x215)*x216));

	if (t36 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x222 = UINT32_MAX;
	volatile uint8_t x223 = 7U;
	int32_t x224 = INT32_MAX;
	static volatile uint32_t t37 = 112922966U;

	t37 = (x221&((x222+x223)*x224));

	if (t37 != 65530U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x229 = INT64_MAX;
	int64_t x231 = -1LL;
	int16_t x232 = INT16_MIN;
	volatile int64_t t38 = -124920794LL;

	t38 = (x229&((x230+x231)*x232));

	if (t38 != 9223372036854120448LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x233 = INT16_MIN;
	static int64_t x234 = 64970988602LL;
	volatile uint64_t t39 = 1717598005957LLU;

	t39 = (x233&((x234+x235)*x236));

	if (t39 != 7821142591476629504LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x241 = 9112056U;
	uint16_t x242 = 2U;
	int32_t x243 = -1;
	int64_t x244 = INT64_MIN;
	volatile int64_t t40 = -32649189394076439LL;

	t40 = (x241&((x242+x243)*x244));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x249 = UINT8_MAX;
	static uint32_t x250 = 596057U;
	uint32_t x252 = 325334U;
	volatile uint32_t t41 = 78719U;

	t41 = (x249&((x250+x251)*x252));

	if (t41 != 64U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x254 = 1956576U;
	static int32_t x255 = INT32_MIN;
	int8_t x256 = INT8_MAX;
	volatile uint32_t t42 = 5164U;

	t42 = (x253&((x254+x255)*x256));

	if (t42 != 2395968800U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x273 = INT32_MAX;
	uint32_t x275 = 56045U;
	static uint32_t t43 = 1191U;

	t43 = (x273&((x274+x275)*x276));

	if (t43 != 2146754168U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x278 = INT32_MIN;
	volatile int16_t x279 = 0;
	uint64_t x280 = 1635525920227663LLU;
	volatile uint64_t t44 = 339190601900LLU;

	t44 = (x277&((x278+x279)*x280));

	if (t44 != 13348809313607483392LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x285 = -1;
	uint32_t x286 = UINT32_MAX;
	static volatile uint16_t x288 = 99U;

	t45 = (x285&((x286+x287)*x288));

	if (t45 != 4294967197U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x294 = 1183779;
	volatile uint32_t x295 = UINT32_MAX;
	uint64_t x296 = UINT64_MAX;
	uint64_t t46 = 100614752LLU;

	t46 = (x293&((x294+x295)*x296));

	if (t46 != 17350LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x297 = -1;
	volatile int64_t x298 = INT64_MIN;
	volatile int32_t x299 = 128;
	uint64_t x300 = 1088969976514LLU;
	uint64_t t47 = 592372717LLU;

	t47 = (x297&((x298+x299)*x300));

	if (t47 != 139388156993792LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x301 = INT8_MIN;
	volatile int8_t x302 = INT8_MIN;
	uint16_t x303 = UINT16_MAX;
	static int32_t x304 = 1661;
	volatile int32_t t48 = 3169;

	t48 = (x301&((x302+x303)*x304));

	if (t48 != 108641024) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x305 = INT8_MAX;
	static int16_t x306 = INT16_MIN;
	volatile int16_t x307 = INT16_MIN;
	int16_t x308 = -1;
	int32_t t49 = 1;

	t49 = (x305&((x306+x307)*x308));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x309 = INT64_MAX;
	uint64_t x310 = 5857LLU;
	volatile int64_t x311 = -1LL;
	int8_t x312 = INT8_MIN;
	uint64_t t50 = 1LLU;

	t50 = (x309&((x310+x311)*x312));

	if (t50 != 9223372036854026240LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	uint8_t x320 = 1U;

	t51 = (x317&((x318+x319)*x320));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x321 = UINT64_MAX;
	uint8_t x323 = 1U;
	int16_t x324 = -167;
	volatile uint64_t t52 = 31756320506214LLU;

	t52 = (x321&((x322+x323)*x324));

	if (t52 != 5472089LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x325 = 493;
	int32_t x326 = 101003123;
	uint32_t x327 = 1U;
	uint32_t x328 = UINT32_MAX;
	uint32_t t53 = 611U;

	t53 = (x325&((x326+x327)*x328));

	if (t53 != 140U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x329 = INT16_MIN;
	static volatile uint64_t x331 = 1534318316LLU;
	int16_t x332 = 4;
	volatile uint64_t t54 = 4095292545LLU;

	t54 = (x329&((x330+x331)*x332));

	if (t54 != 6137249792LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x333 = UINT64_MAX;
	int16_t x334 = INT16_MAX;
	int16_t x335 = INT16_MAX;
	int64_t x336 = 28375992510LL;
	uint64_t t55 = 333880417219LLU;

	t55 = (x333&((x334+x335)*x336));

	if (t55 != 1859592293150340LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x337 = INT64_MIN;
	uint16_t x338 = 25U;
	int64_t t56 = 59LL;

	t56 = (x337&((x338+x339)*x340));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x345 = UINT64_MAX;
	static int16_t x346 = INT16_MIN;
	int16_t x347 = -20;
	static volatile uint64_t x348 = UINT64_MAX;
	uint64_t t57 = 1415484LLU;

	t57 = (x345&((x346+x347)*x348));

	if (t57 != 32788LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x357 = INT8_MAX;
	uint32_t x358 = UINT32_MAX;
	uint64_t x360 = 297318342318747457LLU;
	static volatile uint64_t t58 = 5783182LLU;

	t58 = (x357&((x358+x359)*x360));

	if (t58 != 63LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x361 = UINT8_MAX;
	uint16_t x362 = UINT16_MAX;
	volatile int8_t x363 = 1;
	int16_t x364 = INT16_MAX;
	volatile int32_t t59 = -59859425;

	t59 = (x361&((x362+x363)*x364));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x365 = -15;
	static uint32_t x368 = 11118418U;

	t60 = (x365&((x366+x367)*x368));

	if (t60 != 3579095712U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x369 = -1;
	int16_t x370 = -1;
	int8_t x371 = 24;
	uint64_t x372 = 71019080791LLU;
	volatile uint64_t t61 = 8006LLU;

	t61 = (x369&((x370+x371)*x372));

	if (t61 != 1633438858193LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x374 = 11U;
	uint16_t x375 = UINT16_MAX;
	volatile uint64_t x376 = 35871995567480357LLU;
	volatile uint64_t t62 = 58702LLU;

	t62 = (x373&((x374+x375)*x376));

	if (t62 != 8529324103713161216LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x377 = -1555;
	volatile uint16_t x378 = UINT16_MAX;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = -1LL;
	volatile int64_t t63 = 1LL;

	t63 = (x377&((x378+x379)*x380));

	if (t63 != -131072LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x381 = -1;
	static int16_t x382 = -2;
	volatile int64_t t64 = 0LL;

	t64 = (x381&((x382+x383)*x384));

	if (t64 != 6LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x386 = 904U;
	volatile int16_t x387 = INT16_MIN;
	volatile uint64_t x388 = 82LLU;
	uint64_t t65 = 2317748177LLU;

	t65 = (x385&((x386+x387)*x388));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x397 = 13207;
	volatile uint8_t x398 = 6U;
	int64_t x399 = INT64_MIN;
	static uint64_t x400 = 2331433571663744035LLU;
	uint64_t t66 = 3701393592355959LLU;

	t66 = (x397&((x398+x399)*x400));

	if (t66 != 146LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x401 = -1LL;
	int32_t x402 = -1;
	uint8_t x404 = UINT8_MAX;
	volatile int64_t t67 = 130719043525LL;

	t67 = (x401&((x402+x403)*x404));

	if (t67 != 917745LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x405 = 7U;
	static volatile int16_t x406 = -2789;
	volatile int16_t x408 = -4481;
	uint32_t t68 = 10U;

	t68 = (x405&((x406+x407)*x408));

	if (t68 != 2U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x414 = 3U;
	volatile uint8_t x415 = UINT8_MAX;
	uint16_t x416 = 3460U;

	t69 = (x413&((x414+x415)*x416));

	if (t69 != 892680) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x417 = INT64_MAX;
	static uint16_t x418 = 383U;
	volatile int16_t x420 = INT16_MAX;
	volatile int64_t t70 = 52966589120237LL;

	t70 = (x417&((x418+x419)*x420));

	if (t70 != 12516994LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x421 = UINT8_MAX;
	uint32_t x422 = 17675126U;
	uint32_t x423 = 1565545491U;
	volatile int32_t x424 = INT32_MAX;
	volatile uint32_t t71 = 12337839U;

	t71 = (x421&((x422+x423)*x424));

	if (t71 != 119U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x425 = -1;
	int8_t x426 = INT8_MIN;
	uint16_t x428 = 82U;
	int32_t t72 = 1;

	t72 = (x425&((x426+x427)*x428));

	if (t72 != -5904) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x430 = UINT16_MAX;
	uint64_t x431 = 115LLU;
	uint64_t x432 = UINT64_MAX;
	uint64_t t73 = 254080029362LLU;

	t73 = (x429&((x430+x431)*x432));

	if (t73 != 18446744073709485956LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x437 = 5U;
	uint64_t x439 = 817LLU;
	volatile uint64_t t74 = 56LLU;

	t74 = (x437&((x438+x439)*x440));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x446 = INT16_MIN;
	int32_t x447 = 0;
	static uint8_t x448 = 55U;
	int32_t t75 = -869054463;

	t75 = (x445&((x446+x447)*x448));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x452 = 165LLU;
	uint64_t t76 = 6LLU;

	t76 = (x449&((x450+x451)*x452));

	if (t76 != 529LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x454 = 481015549LLU;
	int64_t x455 = INT64_MIN;

	t77 = (x453&((x454+x455)*x456));

	if (t77 != 918601LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x465 = INT64_MIN;
	uint16_t x466 = 188U;
	volatile uint8_t x467 = UINT8_MAX;
	uint16_t x468 = 576U;

	t78 = (x465&((x466+x467)*x468));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x475 = UINT16_MAX;
	int32_t x476 = -6125;
	uint32_t t79 = 31819U;

	t79 = (x473&((x474+x475)*x476));

	if (t79 != 10249U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x481 = 14509753U;
	uint32_t x482 = 2867806U;

	t80 = (x481&((x482+x483)*x484));

	if (t80 != 9708185U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x485 = -187867260678LL;
	uint64_t x486 = 2793LLU;
	int32_t x487 = 134869322;
	volatile int16_t x488 = INT16_MIN;
	volatile uint64_t t81 = 13LLU;

	t81 = (x485&((x486+x487)*x488));

	if (t81 != 18446739469506969600LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x489 = 1397194699642729LL;
	uint16_t x490 = UINT16_MAX;
	uint16_t x491 = 676U;
	static uint32_t x492 = 900610353U;
	int64_t t82 = 71745710031878877LL;

	t82 = (x489&((x490+x491)*x492));

	if (t82 != 2172716065LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x493 = -1;
	int16_t x494 = -1;
	int16_t x495 = INT16_MIN;
	int16_t x496 = INT16_MIN;
	static volatile int32_t t83 = -6060;

	t83 = (x493&((x494+x495)*x496));

	if (t83 != 1073774592) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x501 = 26694;
	uint64_t x502 = 51753LLU;
	int64_t x503 = -1LL;
	int8_t x504 = INT8_MIN;
	volatile uint64_t t84 = 122238527LLU;

	t84 = (x501&((x502+x503)*x504));

	if (t84 != 26624LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x505 = 46U;
	static int8_t x506 = -1;
	int16_t x507 = INT16_MIN;
	int64_t x508 = -1LL;

	t85 = (x505&((x506+x507)*x508));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x509 = -5;
	int8_t x510 = 1;
	volatile int8_t x512 = INT8_MIN;

	t86 = (x509&((x510+x511)*x512));

	if (t86 != 18446744073709525120LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x517 = UINT16_MAX;
	static uint8_t x518 = 1U;
	int8_t x519 = -22;
	volatile int16_t x520 = INT16_MIN;
	int32_t t87 = 6301;

	t87 = (x517&((x518+x519)*x520));

	if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x525 = 93587720U;
	uint32_t x527 = UINT32_MAX;
	uint64_t x528 = 1042335098868137248LLU;

	t88 = (x525&((x526+x527)*x528));

	if (t88 != 75759616LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x529 = INT16_MAX;
	int8_t x531 = 0;
	int8_t x532 = INT8_MAX;
	volatile int32_t t89 = 7872;

	t89 = (x529&((x530+x531)*x532));

	if (t89 != 16512) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x533 = INT64_MAX;
	volatile uint8_t x534 = UINT8_MAX;
	static int16_t x535 = -1;
	int16_t x536 = 3174;
	volatile int64_t t90 = -4307362068427438325LL;

	t90 = (x533&((x534+x535)*x536));

	if (t90 != 806196LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x546 = 175012;
	static uint32_t x547 = 1U;
	volatile uint16_t x548 = 56U;
	uint32_t t91 = 12025680U;

	t91 = (x545&((x546+x547)*x548));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x553 = -12292;
	uint32_t x554 = 113782U;
	uint32_t x555 = 10746753U;
	static volatile uint8_t x556 = 9U;
	uint32_t t92 = 15552520U;

	t92 = (x553&((x554+x555)*x556));

	if (t92 != 97732524U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x577 = INT64_MIN;
	int8_t x578 = -3;
	volatile int16_t x579 = INT16_MAX;
	int8_t x580 = INT8_MIN;

	t93 = (x577&((x578+x579)*x580));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x589 = 1U;
	int64_t x590 = -1LL;
	uint64_t x591 = UINT64_MAX;
	int32_t x592 = INT32_MIN;

	t94 = (x589&((x590+x591)*x592));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x593 = 236741927LL;
	volatile int32_t x594 = INT32_MIN;
	uint8_t x595 = 2U;
	uint8_t x596 = 0U;

	t95 = (x593&((x594+x595)*x596));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x597 = INT32_MIN;
	int64_t x598 = 284296LL;
	int32_t x600 = INT32_MIN;

	t96 = (x597&((x598+x599)*x600));

	if (t96 != -4612296537291096064LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x602 = UINT16_MAX;
	int16_t x603 = -15701;
	int64_t x604 = 2521LL;
	int64_t t97 = -61834469277291449LL;

	t97 = (x601&((x602+x603)*x604));

	if (t97 != 125631514LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x605 = UINT32_MAX;
	static volatile int32_t x606 = -1;
	int32_t x607 = -1;
	int32_t x608 = 185241;
	uint32_t t98 = 2425959U;

	t98 = (x605&((x606+x607)*x608));

	if (t98 != 4294596814U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x617 = INT32_MIN;
	int16_t x618 = -1;
	int64_t x619 = -1LL;
	static int16_t x620 = INT16_MIN;
	int64_t t99 = -1LL;

	t99 = (x617&((x618+x619)*x620));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

