#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = INT32_MAX;
int64_t t0 = 293416249428334513LL;
int64_t x13 = -1LL;
int8_t x17 = 18;
int32_t x18 = INT32_MIN;
volatile uint32_t t3 = 687262U;
int8_t x21 = -10;
int64_t x35 = INT64_MIN;
int64_t t7 = -31013483380140LL;
volatile int64_t x48 = -16118470858384LL;
int32_t x49 = -1;
volatile uint64_t x50 = 6990LLU;
uint32_t x57 = UINT32_MAX;
static uint32_t x60 = 49497446U;
static int8_t x63 = 40;
static int8_t x64 = INT8_MAX;
uint16_t x65 = 1U;
uint16_t x68 = UINT16_MAX;
static volatile int32_t x69 = INT32_MIN;
int16_t x72 = 12;
int64_t x73 = INT64_MAX;
uint32_t x88 = 4416542U;
int16_t x93 = -1;
static uint32_t x94 = UINT32_MAX;
static volatile int32_t x95 = -1;
uint32_t t21 = 14687U;
volatile uint64_t t22 = 238247LLU;
volatile int16_t x105 = -1;
uint32_t x107 = 9U;
uint16_t x108 = UINT16_MAX;
static volatile uint64_t x122 = 28469125859LLU;
int32_t x145 = -741686;
volatile int64_t t30 = -119913016LL;
uint16_t x153 = UINT16_MAX;
static uint16_t x154 = UINT16_MAX;
int64_t t31 = -18536104320LL;
volatile int32_t x157 = -1;
volatile int8_t x163 = INT8_MIN;
static int16_t x166 = INT16_MIN;
volatile int32_t t34 = -3575;
volatile int32_t x179 = 726874987;
volatile int16_t x186 = -1;
uint8_t x192 = 21U;
int16_t x193 = INT16_MAX;
int8_t x203 = 1;
static int16_t x209 = INT16_MIN;
int16_t x217 = INT16_MAX;
int16_t x221 = 1;
int16_t x224 = -1;
static int8_t x228 = INT8_MIN;
uint8_t x229 = 1U;
static uint8_t x232 = UINT8_MAX;
volatile int32_t t48 = 11;
uint64_t t49 = 11609667752LLU;
volatile int32_t x249 = INT32_MAX;
volatile int32_t x251 = -95298;
int16_t x252 = -19;
volatile uint32_t t53 = 2316959U;
static int32_t x256 = 345356175;
volatile int64_t t54 = 25129268019LL;
int32_t t55 = -5405;
volatile uint32_t x261 = 27017392U;
uint32_t x266 = 243U;
uint64_t t59 = 15319311LLU;
volatile int8_t x277 = INT8_MIN;
volatile int16_t x280 = -3736;
volatile int32_t t60 = 53111790;
uint64_t t61 = 20694374284LLU;
static int32_t x286 = INT32_MIN;
int32_t x289 = -1;
uint16_t x293 = 31U;
uint8_t x294 = UINT8_MAX;
static volatile uint32_t x295 = 15448530U;
static uint32_t t64 = 964067941U;
int16_t x301 = -1;
int8_t x305 = -1;
volatile uint32_t x308 = 7922236U;
uint16_t x323 = UINT16_MAX;
int16_t x326 = INT16_MAX;
uint64_t t70 = 1LLU;
int32_t x355 = -26107;
int8_t x365 = 3;
int64_t x373 = -1LL;
int8_t x383 = INT8_MAX;
static volatile int32_t t81 = -145552;
uint8_t x393 = UINT8_MAX;
int8_t x404 = 9;
static int8_t x412 = INT8_MIN;
int8_t x413 = INT8_MIN;
int64_t x421 = INT64_MIN;
int64_t x425 = 1LL;
uint8_t x437 = 0U;
uint64_t x440 = 145LLU;
uint64_t x441 = 214363430979874990LLU;
volatile uint64_t t93 = 19454907870LLU;
int8_t x450 = INT8_MIN;
volatile uint32_t t94 = 13347918U;
static volatile int8_t x459 = INT8_MIN;
volatile int64_t t97 = -314161784345722LL;
int16_t x480 = 177;


void f0(void) {
	int16_t x5 = INT16_MAX;
	int64_t x7 = INT64_MIN;
	uint16_t x8 = 7U;

	t0 = (x5-(x6%(x7+x8)));

	if (t0 != -2147450880LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 5978917545094969LLU;
	int16_t x10 = INT16_MIN;
	uint32_t x11 = 213858472U;
	volatile uint16_t x12 = 635U;
	uint64_t t1 = 10322LLU;

	t1 = (x9-(x10%(x11+x12)));

	if (t1 != 5978917527342581LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = 7U;
	uint8_t x15 = 36U;
	int16_t x16 = INT16_MIN;
	int64_t t2 = 109212497753599LL;

	t2 = (x13-(x14%(x15+x16)));

	if (t2 != -8LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x19 = -112832427;
	uint32_t x20 = 66190349U;

	t3 = (x17-(x18%(x19+x20)));

	if (t3 != 2147483666U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MAX;
	uint16_t x23 = 12090U;
	uint64_t x24 = UINT64_MAX;
	volatile uint64_t t4 = 1905LLU;

	t4 = (x21-(x22%(x23+x24)));

	if (t4 != 18446744073709543017LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	uint64_t x26 = 396518436139440720LLU;
	uint16_t x27 = 4834U;
	uint16_t x28 = UINT16_MAX;
	volatile uint64_t t5 = 91821680LLU;

	t5 = (x25-(x26%(x27+x28)));

	if (t5 != 9223372036854764783LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = 15197539396933LL;
	int64_t x30 = INT64_MIN;
	uint8_t x31 = 1U;
	volatile uint32_t x32 = 249U;
	volatile int64_t t6 = -1480LL;

	t6 = (x29-(x30%(x31+x32)));

	if (t6 != 15197539396991LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = 1;
	volatile int64_t x34 = INT64_MIN;
	volatile uint16_t x36 = 3U;

	t7 = (x33-(x34%(x35+x36)));

	if (t7 != 4LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = -1LL;
	uint16_t x38 = 332U;
	int32_t x39 = -1;
	int16_t x40 = -1;
	int64_t t8 = 189411871LL;

	t8 = (x37-(x38%(x39+x40)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x45 = UINT64_MAX;
	volatile uint32_t x46 = 91U;
	uint16_t x47 = 27645U;
	volatile uint64_t t9 = 162893LLU;

	t9 = (x45-(x46%(x47+x48)));

	if (t9 != 18446744073709551524LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x51 = 334245449U;
	static uint32_t x52 = 444U;
	static volatile uint64_t t10 = 60646LLU;

	t10 = (x49-(x50%(x51+x52)));

	if (t10 != 18446744073709544625LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x53 = UINT8_MAX;
	int8_t x54 = INT8_MAX;
	static uint8_t x55 = 11U;
	int32_t x56 = -1;
	static volatile int32_t t11 = -96885;

	t11 = (x53-(x54%(x55+x56)));

	if (t11 != 248) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x58 = 2U;
	uint32_t x59 = 183406U;
	static volatile uint32_t t12 = 0U;

	t12 = (x57-(x58%(x59+x60)));

	if (t12 != 4294967293U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	static volatile int8_t x62 = INT8_MIN;
	volatile int32_t t13 = 32900831;

	t13 = (x61-(x62%(x63+x64)));

	if (t13 != 65663) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x66 = -942;
	volatile int8_t x67 = -1;
	int32_t t14 = -3995161;

	t14 = (x65-(x66%(x67+x68)));

	if (t14 != 943) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x70 = UINT16_MAX;
	int64_t x71 = INT64_MIN;
	int64_t t15 = -97022149092297LL;

	t15 = (x69-(x70%(x71+x72)));

	if (t15 != -2147549183LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x74 = 122004433U;
	uint32_t x75 = 56982U;
	volatile uint64_t x76 = 2118385235704628LLU;
	static uint64_t t16 = 21200514427442LLU;

	t16 = (x73-(x74%(x75+x76)));

	if (t16 != 9223372036732771374LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x77 = -9577669LL;
	static volatile int16_t x78 = -1;
	uint64_t x79 = UINT64_MAX;
	volatile int16_t x80 = 66;
	uint64_t t17 = 63367584102LLU;

	t17 = (x77-(x78%(x79+x80)));

	if (t17 != 18446744073699973932LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x81 = -1LL;
	int16_t x82 = 1;
	static int64_t x83 = INT64_MAX;
	int16_t x84 = INT16_MIN;
	int64_t t18 = -6447566LL;

	t18 = (x81-(x82%(x83+x84)));

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 28U;
	uint32_t x86 = 1U;
	int32_t x87 = INT32_MIN;
	uint32_t t19 = 996893507U;

	t19 = (x85-(x86%(x87+x88)));

	if (t19 != 27U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x89 = INT8_MIN;
	int32_t x90 = -1;
	static uint32_t x91 = 10684U;
	static int8_t x92 = INT8_MIN;
	uint32_t t20 = 1963183U;

	t20 = (x89-(x90%(x91+x92)));

	if (t20 != 4294961817U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x96 = INT8_MAX;

	t21 = (x93-(x94%(x95+x96)));

	if (t21 != 4294967292U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 30253U;
	int8_t x102 = -1;
	uint64_t x103 = UINT64_MAX;
	static int64_t x104 = -1LL;

	t22 = (x101-(x102%(x103+x104)));

	if (t22 != 30252LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x106 = 7745U;
	uint32_t t23 = 1U;

	t23 = (x105-(x106%(x107+x108)));

	if (t23 != 4294959550U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 42U;
	volatile int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;
	int16_t x112 = 219;
	volatile int32_t t24 = -49469;

	t24 = (x109-(x110%(x111+x112)));

	if (t24 != 79) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x121 = -460;
	uint16_t x123 = 1U;
	uint64_t x124 = 6LLU;
	uint64_t t25 = 28724132340LLU;

	t25 = (x121-(x122%(x123+x124)));

	if (t25 != 18446744073709551150LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x129 = UINT16_MAX;
	static volatile uint8_t x130 = 113U;
	int32_t x131 = INT32_MIN;
	uint32_t x132 = 5082U;
	static uint32_t t26 = 1U;

	t26 = (x129-(x130%(x131+x132)));

	if (t26 != 65422U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = INT32_MIN;
	int64_t x135 = -22598628689487643LL;
	uint64_t x136 = 1490LLU;
	volatile uint64_t t27 = 7329LLU;

	t27 = (x133-(x134%(x135+x136)));

	if (t27 != 18424145449315032758LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MIN;
	int64_t x139 = -1LL;
	uint8_t x140 = 9U;
	static volatile int64_t t28 = -518433793524LL;

	t28 = (x137-(x138%(x139+x140)));

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = -1;
	int32_t x142 = -72915;
	static uint16_t x143 = UINT16_MAX;
	static uint8_t x144 = UINT8_MAX;
	volatile int32_t t29 = -1;

	t29 = (x141-(x142%(x143+x144)));

	if (t29 != 7124) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = 25316474072201653LL;
	static int64_t x148 = INT64_MIN;

	t30 = (x145-(x146%(x147+x148)));

	if (t30 != -4295708981LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x155 = INT8_MIN;
	volatile int64_t x156 = -1LL;

	t31 = (x153-(x154%(x155+x156)));

	if (t31 != 65532LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x158 = INT32_MAX;
	volatile uint32_t x159 = 39U;
	int16_t x160 = 0;
	uint32_t t32 = 2983756U;

	t32 = (x157-(x158%(x159+x160)));

	if (t32 != 4294967285U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = 6291922LL;
	int32_t x162 = -3860;
	uint32_t x164 = 972249U;
	volatile int64_t t33 = 19987249510LL;

	t33 = (x161-(x162%(x163+x164)));

	if (t33 != 6159064LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x165 = -177;
	volatile uint16_t x167 = 3U;
	int16_t x168 = -1;

	t34 = (x165-(x166%(x167+x168)));

	if (t34 != -177) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x169 = 886;
	volatile int64_t x170 = 474491LL;
	static int32_t x171 = -1;
	volatile int64_t x172 = -1LL;
	static int64_t t35 = 1053108687528911LL;

	t35 = (x169-(x170%(x171+x172)));

	if (t35 != 885LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = -3817084;
	static uint16_t x174 = 8432U;
	volatile int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MIN;
	volatile int32_t t36 = -29887678;

	t36 = (x173-(x174%(x175+x176)));

	if (t36 != -3825516) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x177 = UINT64_MAX;
	uint8_t x178 = 7U;
	static int8_t x180 = INT8_MIN;
	volatile uint64_t t37 = 80LLU;

	t37 = (x177-(x178%(x179+x180)));

	if (t37 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x181 = 3435U;
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MIN;
	uint32_t x184 = 54540U;
	static int64_t t38 = -781026034547612753LL;

	t38 = (x181-(x182%(x183+x184)));

	if (t38 != 1654150259LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x185 = 14239U;
	volatile uint16_t x187 = 1008U;
	static int64_t x188 = -36077718758623287LL;
	int64_t t39 = 190825537381630LL;

	t39 = (x185-(x186%(x187+x188)));

	if (t39 != 14240LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x189 = UINT64_MAX;
	static int32_t x190 = INT32_MIN;
	static int16_t x191 = INT16_MAX;
	uint64_t t40 = 4502071797537971LLU;

	t40 = (x189-(x190%(x191+x192)));

	if (t40 != 799LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x194 = -1;
	uint64_t x195 = 9LLU;
	uint16_t x196 = 1U;
	uint64_t t41 = 164812LLU;

	t41 = (x193-(x194%(x195+x196)));

	if (t41 != 32762LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = UINT64_MAX;
	int32_t x202 = INT32_MAX;
	int32_t x204 = 80813786;
	uint64_t t42 = 39011LLU;

	t42 = (x201-(x202%(x203+x204)));

	if (t42 != 18446744073663226430LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = 32937LL;
	static volatile int16_t x206 = INT16_MIN;
	uint8_t x207 = UINT8_MAX;
	int32_t x208 = INT32_MIN;
	int64_t t43 = -1493504884LL;

	t43 = (x205-(x206%(x207+x208)));

	if (t43 != 65705LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x210 = UINT16_MAX;
	uint64_t x211 = UINT64_MAX;
	int16_t x212 = -2735;
	volatile uint64_t t44 = 801927483527638541LLU;

	t44 = (x209-(x210%(x211+x212)));

	if (t44 != 18446744073709453313LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = INT32_MIN;
	uint64_t x220 = 3LLU;
	volatile uint64_t t45 = 195556200725273LLU;

	t45 = (x217-(x218%(x219+x220)));

	if (t45 != 32512LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x222 = -2358309765LL;
	int64_t x223 = -1LL;
	volatile int64_t t46 = 69567LL;

	t46 = (x221-(x222%(x223+x224)));

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x225 = 4658LL;
	uint8_t x226 = 7U;
	static int64_t x227 = INT64_MAX;
	volatile int64_t t47 = -28963870018LL;

	t47 = (x225-(x226%(x227+x228)));

	if (t47 != 4651LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x230 = INT16_MIN;
	volatile uint8_t x231 = 1U;

	t48 = (x229-(x230%(x231+x232)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x233 = INT16_MIN;
	uint64_t x234 = 885877714035LLU;
	int16_t x235 = 17;
	static uint16_t x236 = UINT16_MAX;

	t49 = (x233-(x234%(x235+x236)));

	if (t49 != 18446744073709464605LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = INT32_MIN;
	int32_t x238 = 0;
	static int16_t x239 = 39;
	uint32_t x240 = 27956U;
	static uint32_t t50 = 1006224426U;

	t50 = (x237-(x238%(x239+x240)));

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x241 = UINT32_MAX;
	volatile int64_t x242 = 288313638568LL;
	uint16_t x243 = 5120U;
	volatile uint8_t x244 = 83U;
	int64_t t51 = -307145LL;

	t51 = (x241-(x242%(x243+x244)));

	if (t51 != 4294964810LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = -19;
	int64_t x246 = -797063955251494LL;
	volatile int64_t x247 = INT64_MAX;
	volatile int16_t x248 = INT16_MIN;
	volatile int64_t t52 = -45417LL;

	t52 = (x245-(x246%(x247+x248)));

	if (t52 != 797063955251475LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x250 = UINT32_MAX;

	t53 = (x249-(x250%(x251+x252)));

	if (t53 != 2147388331U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x253 = UINT8_MAX;
	int32_t x254 = INT32_MAX;
	int64_t x255 = -78176LL;

	t54 = (x253-(x254%(x255+x256)));

	if (t54 != -75815398LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x257 = 6143U;
	int16_t x258 = -3987;
	int8_t x259 = INT8_MIN;
	static volatile uint16_t x260 = 5U;

	t55 = (x257-(x258%(x259+x260)));

	if (t55 != 6194) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x262 = 9597528U;
	int32_t x263 = INT32_MIN;
	uint32_t x264 = 112476203U;
	volatile uint32_t t56 = 446U;

	t56 = (x261-(x262%(x263+x264)));

	if (t56 != 17419864U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = -1LL;
	int32_t x267 = INT32_MAX;
	int8_t x268 = INT8_MIN;
	volatile int64_t t57 = 1102003368704237LL;

	t57 = (x265-(x266%(x267+x268)));

	if (t57 != -244LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x269 = 1;
	int8_t x270 = INT8_MAX;
	uint64_t x271 = 184988162585608LLU;
	int16_t x272 = 492;
	uint64_t t58 = 5856232337LLU;

	t58 = (x269-(x270%(x271+x272)));

	if (t58 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x273 = 299;
	static uint64_t x274 = 3156902661442526084LLU;
	volatile int64_t x275 = INT64_MAX;
	uint64_t x276 = 698224LLU;

	t59 = (x273-(x274%(x275+x276)));

	if (t59 != 15289841412267025831LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x278 = UINT16_MAX;
	static int16_t x279 = INT16_MIN;

	t60 = (x277-(x278%(x279+x280)));

	if (t60 != -29159) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = 67;
	static uint32_t x282 = 184U;
	static volatile uint64_t x283 = 15601081790LLU;
	uint16_t x284 = 72U;

	t61 = (x281-(x282%(x283+x284)));

	if (t61 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = INT32_MIN;
	int32_t x287 = -632332560;
	volatile uint64_t x288 = 4511213170909949983LLU;
	volatile uint64_t t62 = 460381LLU;

	t62 = (x285-(x286%(x287+x288)));

	if (t62 != 18044852681110469692LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x290 = 127U;
	static uint32_t x291 = 12U;
	static volatile uint8_t x292 = 7U;
	uint32_t t63 = 22122U;

	t63 = (x289-(x290%(x291+x292)));

	if (t63 != 4294967282U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x296 = 1U;

	t64 = (x293-(x294%(x295+x296)));

	if (t64 != 4294967072U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x302 = -1;
	int16_t x303 = 426;
	uint32_t x304 = 25582141U;
	uint32_t t65 = 133U;

	t65 = (x301-(x302%(x303+x304)));

	if (t65 != 4272288689U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x306 = 64U;
	int16_t x307 = 404;
	volatile uint32_t t66 = 0U;

	t66 = (x305-(x306%(x307+x308)));

	if (t66 != 4294967231U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = INT8_MAX;
	volatile int8_t x310 = -1;
	uint32_t x311 = 21369U;
	static uint16_t x312 = UINT16_MAX;
	volatile uint32_t t67 = 201U;

	t67 = (x309-(x310%(x311+x312)));

	if (t67 != 4294882712U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MAX;
	int64_t x324 = -8312637444073LL;
	volatile int64_t t68 = -80009585317595LL;

	t68 = (x321-(x322%(x323+x324)));

	if (t68 != -2147516415LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x325 = 46U;
	uint64_t x327 = 7039539983LLU;
	static volatile int64_t x328 = INT64_MIN;
	volatile uint64_t t69 = 19249875374LLU;

	t69 = (x325-(x326%(x327+x328)));

	if (t69 != 18446744073709518895LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x329 = 161612LL;
	int16_t x330 = INT16_MAX;
	volatile int8_t x331 = -36;
	static uint64_t x332 = 4235484329302717LLU;

	t70 = (x329-(x330%(x331+x332)));

	if (t70 != 128845LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = INT32_MAX;
	static volatile uint32_t x342 = UINT32_MAX;
	uint8_t x343 = UINT8_MAX;
	uint16_t x344 = 746U;
	volatile uint32_t t71 = 56U;

	t71 = (x341-(x342%(x343+x344)));

	if (t71 != 2147483028U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x349 = INT64_MIN;
	volatile uint8_t x350 = 81U;
	int64_t x351 = INT64_MAX;
	uint64_t x352 = 82321904824LLU;
	volatile uint64_t t72 = 3329874LLU;

	t72 = (x349-(x350%(x351+x352)));

	if (t72 != 9223372036854775727LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x353 = -1;
	int32_t x354 = -164693850;
	int8_t x356 = 7;
	volatile int32_t t73 = -5;

	t73 = (x353-(x354%(x355+x356)));

	if (t73 != 2849) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x361 = -1;
	int32_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	int32_t x364 = -53990763;
	volatile int32_t t74 = -4624;

	t74 = (x361-(x362%(x363+x364)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x366 = INT8_MIN;
	int16_t x367 = -1;
	int16_t x368 = INT16_MIN;
	volatile int32_t t75 = 104465646;

	t75 = (x365-(x366%(x367+x368)));

	if (t75 != 131) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x369 = 1019080412;
	volatile int8_t x370 = -7;
	int16_t x371 = INT16_MIN;
	volatile uint8_t x372 = 0U;
	volatile int32_t t76 = 1;

	t76 = (x369-(x370%(x371+x372)));

	if (t76 != 1019080419) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = -1;
	volatile uint64_t x376 = UINT64_MAX;
	static uint64_t t77 = 2675466462472LLU;

	t77 = (x373-(x374%(x375+x376)));

	if (t77 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x377 = -60;
	uint32_t x378 = 6985U;
	int64_t x379 = INT64_MIN;
	static uint8_t x380 = UINT8_MAX;
	int64_t t78 = -1313LL;

	t78 = (x377-(x378%(x379+x380)));

	if (t78 != -7045LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x381 = 14U;
	int32_t x382 = -1;
	int64_t x384 = -1954438512974LL;
	volatile int64_t t79 = -283597110018082803LL;

	t79 = (x381-(x382%(x383+x384)));

	if (t79 != 15LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x385 = 126955LLU;
	volatile int8_t x386 = -1;
	int32_t x387 = INT32_MIN;
	uint16_t x388 = 3U;
	static uint64_t t80 = 11842LLU;

	t80 = (x385-(x386%(x387+x388)));

	if (t80 != 126956LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x389 = -1;
	volatile int32_t x390 = 19449;
	static uint8_t x391 = UINT8_MAX;
	int16_t x392 = -1;

	t81 = (x389-(x390%(x391+x392)));

	if (t81 != -146) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x394 = -7508;
	static int32_t x395 = -1;
	int64_t x396 = INT64_MAX;
	volatile int64_t t82 = -1900588041058298LL;

	t82 = (x393-(x394%(x395+x396)));

	if (t82 != 7763LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = -1LL;
	uint64_t x398 = UINT64_MAX;
	int64_t x399 = -1LL;
	static int8_t x400 = INT8_MAX;
	volatile uint64_t t83 = 30930395521535LLU;

	t83 = (x397-(x398%(x399+x400)));

	if (t83 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x401 = 26U;
	int8_t x402 = INT8_MIN;
	uint8_t x403 = 13U;
	int32_t t84 = 9;

	t84 = (x401-(x402%(x403+x404)));

	if (t84 != 44) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x409 = 95U;
	volatile uint8_t x410 = UINT8_MAX;
	volatile uint64_t x411 = 1687LLU;
	uint64_t t85 = 841398642133393LLU;

	t85 = (x409-(x410%(x411+x412)));

	if (t85 != 18446744073709551456LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x414 = -1;
	static uint32_t x415 = UINT32_MAX;
	static int16_t x416 = -3;
	uint32_t t86 = 22513135U;

	t86 = (x413-(x414%(x415+x416)));

	if (t86 != 4294967165U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x417 = 27U;
	int8_t x418 = INT8_MAX;
	int32_t x419 = 11;
	volatile int32_t x420 = -1;
	int32_t t87 = 2677338;

	t87 = (x417-(x418%(x419+x420)));

	if (t87 != 20) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x422 = UINT16_MAX;
	volatile int16_t x423 = INT16_MAX;
	uint64_t x424 = 1384474LLU;
	uint64_t t88 = 16193165735LLU;

	t88 = (x421-(x422%(x423+x424)));

	if (t88 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x426 = UINT8_MAX;
	volatile int16_t x427 = 6982;
	int16_t x428 = 7;
	volatile int64_t t89 = 1332116045550LL;

	t89 = (x425-(x426%(x427+x428)));

	if (t89 != -254LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = INT16_MIN;
	uint64_t x430 = 4243371LLU;
	int32_t x431 = INT32_MAX;
	int64_t x432 = 14102650191331708LL;
	uint64_t t90 = 1105LLU;

	t90 = (x429-(x430%(x431+x432)));

	if (t90 != 18446744073705275477LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x433 = INT32_MIN;
	uint8_t x434 = UINT8_MAX;
	int8_t x435 = INT8_MAX;
	int64_t x436 = INT64_MIN;
	volatile int64_t t91 = 27838299LL;

	t91 = (x433-(x434%(x435+x436)));

	if (t91 != -2147483903LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x438 = -7708022768951LL;
	uint32_t x439 = UINT32_MAX;
	volatile uint64_t t92 = 232963LLU;

	t92 = (x437-(x438%(x439+x440)));

	if (t92 != 18446744072265745031LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x442 = 3;
	static uint32_t x443 = 29974000U;
	int32_t x444 = INT32_MIN;

	t93 = (x441-(x442%(x443+x444)));

	if (t93 != 214363430979874987LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x449 = 629U;
	int32_t x451 = -1;
	uint32_t x452 = 432U;

	t94 = (x449-(x450%(x451+x452)));

	if (t94 != 612U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x457 = 1179U;
	int32_t x458 = INT32_MAX;
	volatile uint32_t x460 = UINT32_MAX;
	static uint32_t t95 = 65771473U;

	t95 = (x457-(x458%(x459+x460)));

	if (t95 != 2147484828U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x465 = UINT64_MAX;
	static uint32_t x466 = 15962U;
	volatile int64_t x467 = 620LL;
	volatile int16_t x468 = INT16_MIN;
	volatile uint64_t t96 = 587076285061695693LLU;

	t96 = (x465-(x466%(x467+x468)));

	if (t96 != 18446744073709535653LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x469 = 419957689987LL;
	int16_t x470 = -1;
	static int8_t x471 = -15;
	int8_t x472 = INT8_MIN;

	t97 = (x469-(x470%(x471+x472)));

	if (t97 != 419957689988LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x473 = -13;
	int32_t x474 = 266807;
	static int32_t x475 = INT32_MAX;
	volatile int64_t x476 = -1LL;
	volatile int64_t t98 = -524541110899033LL;

	t98 = (x473-(x474%(x475+x476)));

	if (t98 != -266820LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = INT64_MIN;
	static uint8_t x478 = 25U;
	static uint64_t x479 = 1LLU;
	uint64_t t99 = 1013312891042250LLU;

	t99 = (x477-(x478%(x479+x480)));

	if (t99 != 9223372036854775783LLU) { NG(); } else { ; }
	
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

