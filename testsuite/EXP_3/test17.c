#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 996LLU;
uint64_t t1 = 24714404416318LLU;
int32_t x11 = 16890168;
int8_t x23 = INT8_MIN;
int32_t x26 = INT32_MIN;
static int64_t x27 = -3470578665634759542LL;
int8_t x32 = -1;
static volatile uint32_t x33 = 422U;
uint64_t x39 = 14843494824LLU;
uint64_t t9 = 3931683180743824119LLU;
uint32_t x47 = UINT32_MAX;
uint8_t x52 = 0U;
volatile uint64_t t13 = 129321740368LLU;
int8_t x58 = -1;
int16_t x59 = INT16_MIN;
static uint16_t x70 = 23U;
uint32_t x71 = 171U;
static volatile int32_t t20 = -1621;
int8_t x92 = INT8_MIN;
volatile int64_t t21 = 107LL;
int64_t t22 = 833615849413LL;
int32_t x100 = INT32_MIN;
int32_t x105 = INT32_MIN;
static volatile int64_t x114 = -376468838558LL;
int8_t x116 = -54;
uint8_t x127 = UINT8_MAX;
int32_t x136 = -1;
volatile uint64_t t29 = 7729664447LLU;
static int16_t x153 = INT16_MAX;
int64_t x158 = -1LL;
volatile uint32_t x160 = UINT32_MAX;
int32_t x161 = -725380;
volatile int64_t x169 = 68888968536979LL;
volatile int64_t x177 = INT64_MIN;
static int8_t x181 = -3;
static uint32_t x183 = UINT32_MAX;
volatile int8_t x187 = 5;
static uint64_t x192 = 361138245471LLU;
volatile int8_t x199 = INT8_MIN;
uint32_t x202 = UINT32_MAX;
volatile uint16_t x203 = 1552U;
volatile uint32_t t42 = 3U;
int64_t t43 = -585222500233612LL;
uint32_t x218 = 825507U;
int8_t x219 = 0;
volatile uint32_t t45 = 0U;
uint8_t x228 = UINT8_MAX;
int32_t x230 = 48790673;
uint32_t x231 = 2237382U;
static volatile uint32_t t48 = 95150025U;
volatile uint8_t x235 = UINT8_MAX;
int16_t x245 = INT16_MAX;
int8_t x246 = INT8_MIN;
volatile int64_t t51 = 55LL;
uint64_t x271 = 3931204716LLU;
uint64_t t53 = 343266669632284013LLU;
int32_t x280 = INT32_MIN;
int16_t x284 = -670;
static volatile int32_t t55 = -2080;
int16_t x307 = 152;
int64_t x325 = -1LL;
static int8_t x327 = INT8_MIN;
int32_t x328 = -7797016;
int32_t t66 = -10519;
static int32_t x334 = 2;
int64_t x338 = 39040382344LL;
int8_t x340 = -1;
static int8_t x350 = 1;
int32_t x352 = INT32_MIN;
static int64_t t71 = 7644LL;
int8_t x377 = INT8_MIN;
int8_t x378 = -1;
int32_t x380 = -1;
static volatile uint8_t x385 = 15U;
static uint16_t x387 = 5209U;
int32_t t78 = -32;
uint16_t x391 = 4565U;
int8_t x392 = INT8_MIN;
volatile uint64_t x394 = 8631255382LLU;
int8_t x400 = INT8_MAX;
uint32_t t82 = 7569598U;
static int32_t x405 = INT32_MAX;
int32_t x408 = INT32_MIN;
int32_t x425 = 16356150;
int16_t x437 = INT16_MIN;
static volatile int32_t t88 = -1826629;
volatile int32_t t89 = -2180258;
volatile int32_t x452 = INT32_MIN;
int32_t x453 = INT32_MIN;
static volatile int64_t t92 = 3135804LL;
int64_t x484 = INT64_MIN;
static int8_t x486 = 1;
volatile uint8_t x488 = 49U;
int32_t x496 = -1;


void f0(void) {
	uint32_t x1 = 772236091U;
	static uint16_t x2 = 60U;
	int64_t x3 = INT64_MIN;
	static uint64_t x4 = 2229946592061LLU;

	t0 = ((x1-x2)/(x3+x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MIN;
	static volatile uint16_t x6 = UINT16_MAX;
	uint64_t x7 = 1712547314LLU;
	static volatile uint32_t x8 = 18U;

	t1 = ((x5-x6)/(x7+x8));

	if (t1 != 10771523641LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	static volatile int64_t x10 = -1LL;
	static volatile int32_t x12 = 229986906;
	int64_t t2 = 69LL;

	t2 = ((x9-x10)/(x11+x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = -1;
	int8_t x16 = -1;
	volatile int64_t t3 = 313021LL;

	t3 = ((x13-x14)/(x15+x16));

	if (t3 != -4611686018427355136LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 1;
	int16_t x18 = -1;
	uint64_t x19 = UINT64_MAX;
	uint32_t x20 = UINT32_MAX;
	static uint64_t t4 = 5711500529057639LLU;

	t4 = ((x17-x18)/(x19+x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	uint64_t x22 = UINT64_MAX;
	static uint32_t x24 = 22765052U;
	static volatile uint64_t t5 = 2054983LLU;

	t5 = ((x21-x22)/(x23+x24));

	if (t5 != 810314327056LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -16LL;
	static uint64_t x28 = 6540LLU;
	volatile uint64_t t6 = 24LLU;

	t6 = ((x25-x26)/(x27+x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	uint32_t x30 = 1017556166U;
	volatile int16_t x31 = INT16_MIN;
	volatile uint32_t t7 = 132U;

	t7 = ((x29-x30)/(x31+x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = 57U;
	int16_t x35 = -1;
	static int16_t x36 = INT16_MAX;
	volatile uint32_t t8 = 3U;

	t8 = ((x33-x34)/(x35+x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -16112978922LL;
	volatile int16_t x38 = 333;
	int16_t x40 = INT16_MIN;

	t9 = ((x37-x38)/(x39+x40));

	if (t9 != 1242752128LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = INT32_MIN;
	static uint64_t x43 = 28036229606070LLU;
	static int64_t x44 = INT64_MAX;
	uint64_t t10 = 124695778007LLU;

	t10 = ((x41-x42)/(x43+x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = -8;
	volatile int32_t x48 = INT32_MIN;
	uint32_t t11 = 8696U;

	t11 = ((x45-x46)/(x47+x48));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -221172430;
	int8_t x50 = -4;
	volatile int8_t x51 = INT8_MIN;
	static int32_t t12 = 174946;

	t12 = ((x49-x50)/(x51+x52));

	if (t12 != 1727909) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 916696497475LLU;
	static uint8_t x54 = UINT8_MAX;
	static int16_t x55 = INT16_MIN;
	uint16_t x56 = 255U;

	t13 = ((x53-x54)/(x55+x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	volatile uint8_t x60 = 99U;
	volatile uint64_t t14 = 446456037LLU;

	t14 = ((x57-x58)/(x59+x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 38111LL;
	int8_t x66 = INT8_MIN;
	uint32_t x67 = UINT32_MAX;
	uint8_t x68 = 5U;
	volatile int64_t t15 = 2567441189LL;

	t15 = ((x65-x66)/(x67+x68));

	if (t15 != 9559LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	int16_t x72 = INT16_MIN;
	volatile uint32_t t16 = 4923U;

	t16 = ((x69-x70)/(x71+x72));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = INT32_MIN;
	int64_t x74 = 721LL;
	volatile uint8_t x75 = 83U;
	volatile uint64_t x76 = 344579763166345LLU;
	volatile uint64_t t17 = 1147LLU;

	t17 = ((x73-x74)/(x75+x76));

	if (t17 != 53534LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x77 = UINT16_MAX;
	uint64_t x78 = 280LLU;
	volatile uint64_t x79 = 2290807301047238765LLU;
	int64_t x80 = INT64_MIN;
	volatile uint64_t t18 = 8736342907104LLU;

	t18 = ((x77-x78)/(x79+x80));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = 89U;
	static int8_t x82 = INT8_MAX;
	uint16_t x83 = 21U;
	uint64_t x84 = 6474215LLU;
	uint64_t t19 = 1265995434645566135LLU;

	t19 = ((x81-x82)/(x83+x84));

	if (t19 != 2849254193654LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MAX;
	volatile uint16_t x86 = UINT16_MAX;
	static volatile int16_t x87 = INT16_MAX;
	int32_t x88 = 88533949;

	t20 = ((x85-x86)/(x87+x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = INT64_MIN;
	int16_t x91 = -3;

	t21 = ((x89-x90)/(x91+x92));

	if (t21 != -70407420112269405LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MIN;
	uint32_t x95 = 7292U;
	int64_t x96 = INT64_MIN;

	t22 = ((x93-x94)/(x95+x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = UINT64_MAX;
	uint8_t x98 = UINT8_MAX;
	volatile uint16_t x99 = UINT16_MAX;
	uint64_t t23 = 1072715LLU;

	t23 = ((x97-x98)/(x99+x100));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = 165U;
	volatile int64_t x107 = -2662989LL;
	int16_t x108 = INT16_MIN;
	int64_t t24 = 1224291131622424LL;

	t24 = ((x105-x106)/(x107+x108));

	if (t24 != -796LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 12U;
	uint8_t x115 = 4U;
	static volatile int64_t t25 = 702953081634LL;

	t25 = ((x113-x114)/(x115+x116));

	if (t25 != -7529376771LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x125 = -1LL;
	int8_t x126 = INT8_MAX;
	uint64_t x128 = 5454373LLU;
	uint64_t t26 = 30380907707195LLU;

	t26 = ((x125-x126)/(x127+x128));

	if (t26 != 3381851901487LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MIN;
	volatile uint16_t x134 = 5595U;
	int32_t x135 = INT32_MAX;
	static int32_t t27 = -28417841;

	t27 = ((x133-x134)/(x135+x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x137 = UINT16_MAX;
	int64_t x138 = INT64_MAX;
	int16_t x139 = INT16_MIN;
	uint64_t x140 = 523994274LLU;
	volatile uint64_t t28 = 85211661LLU;

	t28 = ((x137-x138)/(x139+x140));

	if (t28 != 17603148191LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x145 = UINT64_MAX;
	uint64_t x146 = UINT64_MAX;
	uint64_t x147 = 16685LLU;
	static int32_t x148 = -6;

	t29 = ((x145-x146)/(x147+x148));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x149 = INT16_MAX;
	int16_t x150 = -1;
	static int64_t x151 = INT64_MAX;
	int32_t x152 = -1;
	volatile int64_t t30 = -249382928LL;

	t30 = ((x149-x150)/(x151+x152));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x154 = INT8_MIN;
	int64_t x155 = INT64_MIN;
	int32_t x156 = 12;
	volatile int64_t t31 = -136203LL;

	t31 = ((x153-x154)/(x155+x156));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = INT32_MIN;
	uint16_t x159 = 13U;
	int64_t t32 = 7476LL;

	t32 = ((x157-x158)/(x159+x160));

	if (t32 != -178956970LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x162 = INT8_MIN;
	int64_t x163 = INT64_MIN;
	uint64_t x164 = 86LLU;
	volatile uint64_t t33 = 9920196LLU;

	t33 = ((x161-x162)/(x163+x164));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 197811088717LLU;
	uint64_t x166 = UINT64_MAX;
	static volatile uint64_t x167 = 208389LLU;
	int8_t x168 = INT8_MIN;
	volatile uint64_t t34 = 331841LLU;

	t34 = ((x165-x166)/(x167+x168));

	if (t34 != 949823LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x170 = -12;
	static int16_t x171 = -1;
	int8_t x172 = INT8_MAX;
	volatile int64_t t35 = -8105714377081LL;

	t35 = ((x169-x170)/(x171+x172));

	if (t35 != 546737845531LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = INT16_MAX;
	int32_t x174 = 41;
	volatile uint16_t x175 = 0U;
	int64_t x176 = INT64_MIN;
	static volatile int64_t t36 = -256018369851383LL;

	t36 = ((x173-x174)/(x175+x176));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x178 = INT8_MIN;
	uint16_t x179 = 512U;
	int64_t x180 = 16009033LL;
	int64_t t37 = -538101602271668LL;

	t37 = ((x177-x178)/(x179+x180));

	if (t37 != -576117062468LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x182 = 87434137U;
	static int8_t x184 = INT8_MIN;
	volatile uint32_t t38 = 25U;

	t38 = ((x181-x182)/(x183+x184));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = -1;
	static int8_t x186 = 1;
	int16_t x188 = -1;
	static int32_t t39 = 538775;

	t39 = ((x185-x186)/(x187+x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x189 = -3;
	static uint16_t x190 = 1703U;
	static uint16_t x191 = 0U;
	volatile uint64_t t40 = 285218699233LLU;

	t40 = ((x189-x190)/(x191+x192));

	if (t40 != 51079453LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = -1;
	int32_t x198 = 14277;
	uint32_t x200 = 8U;
	uint32_t t41 = 73200925U;

	t41 = ((x197-x198)/(x199+x200));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x201 = 56U;
	int32_t x204 = -1;

	t42 = ((x201-x202)/(x203+x204));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x205 = 1U;
	volatile int64_t x206 = -24021101LL;
	uint8_t x207 = UINT8_MAX;
	static volatile uint16_t x208 = 1U;

	t43 = ((x205-x206)/(x207+x208));

	if (t43 != 93832LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x213 = -1;
	static uint32_t x214 = UINT32_MAX;
	int16_t x215 = 380;
	static uint8_t x216 = 22U;
	volatile uint32_t t44 = 6661U;

	t44 = ((x213-x214)/(x215+x216));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = 0;
	int8_t x220 = -1;

	t45 = ((x217-x218)/(x219+x220));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x221 = UINT8_MAX;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 53941417U;
	int8_t x224 = INT8_MIN;
	volatile uint32_t t46 = 24476576U;

	t46 = ((x221-x222)/(x223+x224));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = -14;
	int8_t x226 = INT8_MIN;
	static uint16_t x227 = 27U;
	volatile int32_t t47 = -23;

	t47 = ((x225-x226)/(x227+x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = -1;
	uint16_t x232 = UINT16_MAX;

	t48 = ((x229-x230)/(x231+x232));

	if (t48 != 1843U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x233 = 16U;
	static uint8_t x234 = 25U;
	int16_t x236 = INT16_MAX;
	int32_t t49 = -1;

	t49 = ((x233-x234)/(x235+x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x241 = INT16_MAX;
	uint32_t x242 = 23953838U;
	int32_t x243 = 0;
	uint64_t x244 = UINT64_MAX;
	uint64_t t50 = 15134453720LLU;

	t50 = ((x241-x242)/(x243+x244));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x247 = 29U;
	int64_t x248 = -1LL;

	t51 = ((x245-x246)/(x247+x248));

	if (t51 != 1174LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = -1LL;
	static volatile uint64_t x254 = 26726531LLU;
	volatile int16_t x255 = -1;
	uint32_t x256 = 476364017U;
	uint64_t t52 = 6711153LLU;

	t52 = ((x253-x254)/(x255+x256));

	if (t52 != 38724050209LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x269 = INT8_MAX;
	volatile uint32_t x270 = 0U;
	uint64_t x272 = UINT64_MAX;

	t53 = ((x269-x270)/(x271+x272));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x277 = 3963674257059981LLU;
	int8_t x278 = -54;
	int8_t x279 = INT8_MAX;
	volatile uint64_t t54 = 409938514608898LLU;

	t54 = ((x277-x278)/(x279+x280));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x281 = 143;
	volatile int32_t x282 = -1;
	uint8_t x283 = 0U;

	t55 = ((x281-x282)/(x283+x284));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x289 = -1;
	uint64_t x290 = UINT64_MAX;
	static int32_t x291 = INT32_MAX;
	volatile int32_t x292 = -1;
	uint64_t t56 = 4210574LLU;

	t56 = ((x289-x290)/(x291+x292));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x293 = 122738LLU;
	int8_t x294 = INT8_MIN;
	uint32_t x295 = 377U;
	int32_t x296 = INT32_MIN;
	uint64_t t57 = 13127200832LLU;

	t57 = ((x293-x294)/(x295+x296));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x297 = 223U;
	int64_t x298 = -1LL;
	static int32_t x299 = -1653095;
	int64_t x300 = 2496424523252LL;
	int64_t t58 = -40832488LL;

	t58 = ((x297-x298)/(x299+x300));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x301 = INT32_MAX;
	static volatile uint8_t x302 = 7U;
	uint32_t x303 = 1233U;
	int32_t x304 = INT32_MAX;
	volatile uint32_t t59 = 1804392508U;

	t59 = ((x301-x302)/(x303+x304));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x305 = UINT8_MAX;
	int16_t x306 = -2;
	int8_t x308 = -3;
	int32_t t60 = -5391652;

	t60 = ((x305-x306)/(x307+x308));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x309 = -136723858838LL;
	int16_t x310 = -1;
	int16_t x311 = -12;
	int16_t x312 = 1;
	static int64_t t61 = 0LL;

	t61 = ((x309-x310)/(x311+x312));

	if (t61 != 12429441712LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x313 = -2841684386140204284LL;
	int64_t x314 = 1LL;
	int8_t x315 = INT8_MAX;
	int8_t x316 = INT8_MIN;
	static int64_t t62 = 7LL;

	t62 = ((x313-x314)/(x315+x316));

	if (t62 != 2841684386140204285LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x317 = UINT32_MAX;
	uint32_t x318 = 55710991U;
	int16_t x319 = -59;
	int8_t x320 = INT8_MIN;
	static uint32_t t63 = 1357U;

	t63 = ((x317-x318)/(x319+x320));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x321 = 1701;
	static int64_t x322 = INT64_MAX;
	uint32_t x323 = 229543U;
	int8_t x324 = -1;
	int64_t t64 = -1583217955353LL;

	t64 = ((x321-x322)/(x323+x324));

	if (t64 != -40181631408869LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x326 = UINT32_MAX;
	static int64_t t65 = 61080367LL;

	t65 = ((x325-x326)/(x327+x328));

	if (t65 != 550LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x329 = INT32_MIN;
	static int16_t x330 = -1;
	int8_t x331 = -39;
	static volatile int8_t x332 = 0;

	t66 = ((x329-x330)/(x331+x332));

	if (t66 != 55063683) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x333 = 15119LLU;
	static uint32_t x335 = UINT32_MAX;
	int64_t x336 = 2102159335068231LL;
	uint64_t t67 = 306577715219405350LLU;

	t67 = ((x333-x334)/(x335+x336));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x337 = -1;
	static uint64_t x339 = 96040908713LLU;
	static uint64_t t68 = 136224906397983753LLU;

	t68 = ((x337-x338)/(x339+x340));

	if (t68 != 192071735LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x341 = 15135308U;
	uint8_t x342 = 13U;
	uint32_t x343 = UINT32_MAX;
	int64_t x344 = 494712181453450LL;
	int64_t t69 = -19605LL;

	t69 = ((x341-x342)/(x343+x344));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x349 = 1;
	int64_t x351 = INT64_MAX;
	int64_t t70 = -517141145LL;

	t70 = ((x349-x350)/(x351+x352));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x357 = INT8_MIN;
	uint8_t x358 = 1U;
	int64_t x359 = 3379LL;
	int8_t x360 = -1;

	t71 = ((x357-x358)/(x359+x360));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x361 = 89;
	uint32_t x362 = UINT32_MAX;
	uint16_t x363 = UINT16_MAX;
	int16_t x364 = INT16_MAX;
	static uint32_t t72 = 109U;

	t72 = ((x361-x362)/(x363+x364));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	static int32_t x368 = INT32_MIN;
	volatile uint64_t t73 = 25892LLU;

	t73 = ((x365-x366)/(x367+x368));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x369 = -1LL;
	volatile int16_t x370 = -2354;
	int16_t x371 = -1;
	static int8_t x372 = -1;
	int64_t t74 = -2836892517498302550LL;

	t74 = ((x369-x370)/(x371+x372));

	if (t74 != -1176LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x373 = UINT8_MAX;
	int64_t x374 = 2194917594042621LL;
	volatile uint32_t x375 = 49443536U;
	int64_t x376 = -1LL;
	volatile int64_t t75 = -7150619047LL;

	t75 = ((x373-x374)/(x375+x376));

	if (t75 != -44392408LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x379 = UINT32_MAX;
	static uint32_t t76 = 0U;

	t76 = ((x377-x378)/(x379+x380));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x381 = -4109LL;
	volatile int32_t x382 = 49027;
	static uint8_t x383 = 11U;
	static int32_t x384 = INT32_MIN;
	int64_t t77 = -29539930510LL;

	t77 = ((x381-x382)/(x383+x384));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x386 = UINT8_MAX;
	uint8_t x388 = 2U;

	t78 = ((x385-x386)/(x387+x388));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x389 = -16179098LL;
	uint16_t x390 = 1U;
	volatile int64_t t79 = -642LL;

	t79 = ((x389-x390)/(x391+x392));

	if (t79 != -3646LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x393 = 1327506339LLU;
	volatile int8_t x395 = INT8_MAX;
	int8_t x396 = INT8_MIN;
	uint64_t t80 = 16918352286956LLU;

	t80 = ((x393-x394)/(x395+x396));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x397 = UINT16_MAX;
	int32_t x398 = 27;
	volatile uint32_t x399 = 218024191U;
	uint32_t t81 = 453169U;

	t81 = ((x397-x398)/(x399+x400));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x401 = UINT32_MAX;
	volatile int16_t x402 = INT16_MIN;
	int8_t x403 = INT8_MIN;
	static int16_t x404 = -1;

	t82 = ((x401-x402)/(x403+x404));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x406 = INT16_MAX;
	uint16_t x407 = UINT16_MAX;
	int32_t t83 = -450286;

	t83 = ((x405-x406)/(x407+x408));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x409 = INT64_MIN;
	int16_t x410 = -1;
	volatile int8_t x411 = INT8_MIN;
	int32_t x412 = -1;
	int64_t t84 = 58LL;

	t84 = ((x409-x410)/(x411+x412));

	if (t84 != 71499008037633920LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x417 = 1;
	volatile uint64_t x418 = 34487074975905LLU;
	volatile uint64_t x419 = UINT64_MAX;
	static int16_t x420 = INT16_MIN;
	static uint64_t t85 = 34595LLU;

	t85 = ((x417-x418)/(x419+x420));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x426 = -1;
	int32_t x427 = -1;
	volatile int16_t x428 = INT16_MAX;
	int32_t t86 = -451548;

	t86 = ((x425-x426)/(x427+x428));

	if (t86 != 499) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x429 = 1042923LL;
	uint16_t x430 = 12643U;
	int64_t x431 = -126LL;
	int32_t x432 = -312147;
	volatile int64_t t87 = 182177LL;

	t87 = ((x429-x430)/(x431+x432));

	if (t87 != -3LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x438 = 48U;
	int16_t x439 = INT16_MIN;
	uint8_t x440 = 29U;

	t88 = ((x437-x438)/(x439+x440));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x441 = 17607U;
	int8_t x442 = -36;
	static int32_t x443 = INT32_MIN;
	volatile int16_t x444 = INT16_MAX;

	t89 = ((x441-x442)/(x443+x444));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x445 = -1;
	uint16_t x446 = 18583U;
	int32_t x447 = INT32_MIN;
	uint64_t x448 = 11377237LLU;
	volatile uint64_t t90 = 350161LLU;

	t90 = ((x445-x446)/(x447+x448));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x449 = 7U;
	int8_t x450 = 54;
	uint64_t x451 = UINT64_MAX;
	uint64_t t91 = 6LLU;

	t91 = ((x449-x450)/(x451+x452));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x454 = 0;
	static volatile int8_t x455 = INT8_MIN;
	int64_t x456 = INT64_MAX;

	t92 = ((x453-x454)/(x455+x456));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x457 = -1LL;
	uint16_t x458 = 1788U;
	int32_t x459 = INT32_MAX;
	int8_t x460 = -1;
	volatile int64_t t93 = -2883LL;

	t93 = ((x457-x458)/(x459+x460));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x469 = -1LL;
	int32_t x470 = 16202;
	int8_t x471 = 28;
	int64_t x472 = -1LL;
	int64_t t94 = 435386056751785LL;

	t94 = ((x469-x470)/(x471+x472));

	if (t94 != -600LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x473 = -1731922004010288618LL;
	static uint64_t x474 = 446LLU;
	static uint8_t x475 = 12U;
	int32_t x476 = -95335035;
	uint64_t t95 = 213LLU;

	t95 = ((x473-x474)/(x475+x476));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x477 = -1;
	int64_t x478 = -1LL;
	int64_t x479 = -1LL;
	int64_t x480 = INT64_MAX;
	int64_t t96 = 277380199390195LL;

	t96 = ((x477-x478)/(x479+x480));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x481 = INT32_MIN;
	uint64_t x482 = 37982LLU;
	uint16_t x483 = 916U;
	uint64_t t97 = 41883654391LLU;

	t97 = ((x481-x482)/(x483+x484));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x485 = 27;
	static int32_t x487 = -276;
	int32_t t98 = 38328;

	t98 = ((x485-x486)/(x487+x488));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x493 = UINT8_MAX;
	static uint64_t x494 = UINT64_MAX;
	uint32_t x495 = UINT32_MAX;
	static uint64_t t99 = 13002237215759LLU;

	t99 = ((x493-x494)/(x495+x496));

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

