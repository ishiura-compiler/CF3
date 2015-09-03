#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x11 = 0;
volatile int32_t t1 = -1345;
int8_t x16 = 28;
volatile int64_t t2 = 653904629285920LL;
static int32_t x22 = INT32_MIN;
int8_t x32 = 17;
static uint16_t x37 = 4U;
uint32_t x41 = UINT32_MAX;
int8_t x56 = INT8_MIN;
volatile int64_t t11 = -8889570438LL;
uint64_t x64 = 28793070086LLU;
int32_t x72 = -1;
int32_t x81 = 1;
volatile int64_t t16 = 115493LL;
int32_t x88 = -1;
static volatile uint32_t t18 = 3724U;
int32_t x103 = -3;
int16_t x104 = -11;
static int16_t x108 = INT16_MIN;
static int8_t x113 = -1;
int8_t x114 = INT8_MAX;
uint16_t x122 = 4U;
int32_t x126 = -10145;
volatile uint32_t t27 = 1890094U;
int16_t x133 = 7;
int8_t x137 = 0;
int32_t x139 = INT32_MAX;
static int64_t x141 = INT64_MIN;
uint64_t t32 = 48477LLU;
uint32_t x154 = UINT32_MAX;
static uint32_t x158 = 17305929U;
static uint64_t x160 = UINT64_MAX;
static uint64_t x161 = 22385692971627071LLU;
volatile int16_t x162 = 33;
static int64_t x169 = -1LL;
uint32_t x173 = UINT32_MAX;
volatile int8_t x175 = INT8_MIN;
int32_t x176 = INT32_MAX;
volatile uint32_t t37 = 254624U;
int64_t x177 = 77084324039LL;
int64_t x180 = INT64_MIN;
int16_t x194 = -1;
volatile uint64_t x196 = UINT64_MAX;
int16_t x199 = INT16_MIN;
int64_t x200 = 32641049698LL;
volatile uint64_t t41 = 283912748095652800LLU;
static uint8_t x205 = 0U;
uint16_t x208 = 9U;
uint32_t t42 = 1287491U;
static int16_t x211 = 1986;
volatile uint64_t t44 = 145978866986382LLU;
static uint8_t x221 = UINT8_MAX;
uint16_t x224 = UINT16_MAX;
uint64_t x226 = 348289290666401712LLU;
uint16_t x227 = 6367U;
static int32_t x241 = -57331346;
uint32_t x243 = 317990U;
uint32_t x254 = 32207968U;
static int64_t x257 = -636466224LL;
int32_t x259 = -25287;
int64_t x270 = INT64_MAX;
uint64_t x273 = 3025LLU;
uint8_t x276 = 76U;
volatile int64_t t56 = 2682668675286597309LL;
volatile int8_t x281 = INT8_MIN;
static int64_t x289 = INT64_MAX;
uint64_t x293 = 269192LLU;
uint8_t x302 = 14U;
uint32_t x314 = 40U;
int8_t x318 = INT8_MAX;
volatile int32_t t63 = 1054;
int8_t x326 = 1;
static int16_t x328 = -1;
static int64_t x333 = 816218377017408LL;
int8_t x335 = INT8_MIN;
volatile uint16_t x342 = 1511U;
uint64_t t68 = 1934283277474416LLU;
volatile uint64_t x357 = 1872840LLU;
static volatile uint64_t x358 = 169706517LLU;
uint32_t x360 = UINT32_MAX;
uint64_t x369 = UINT64_MAX;
uint32_t x371 = UINT32_MAX;
uint64_t t71 = 5275726138268LLU;
uint32_t x373 = 765277U;
uint8_t x375 = UINT8_MAX;
uint32_t x395 = 337U;
uint32_t t74 = 112U;
volatile int16_t x398 = -1523;
int16_t x399 = INT16_MIN;
int32_t t75 = 1;
int32_t x411 = INT32_MIN;
int64_t t78 = -59419LL;
int16_t x425 = -878;
static int8_t x427 = INT8_MAX;
static uint16_t x434 = 258U;
int32_t t82 = 137;
volatile uint16_t x444 = UINT16_MAX;
int16_t x445 = INT16_MIN;
int32_t x455 = -1;
uint64_t t87 = 367405002439382LLU;
uint64_t x466 = UINT64_MAX;
uint8_t x480 = 0U;
static uint64_t t92 = 35327007077486761LLU;
int8_t x496 = 3;
volatile int64_t x497 = 16171063851LL;
int8_t x498 = 48;
static volatile int64_t t94 = -1573111481LL;
int8_t x510 = INT8_MAX;
uint64_t x515 = 1LLU;
static int32_t x522 = -67845606;
volatile uint8_t x523 = 2U;


void f0(void) {
	static uint8_t x5 = 0U;
	static int16_t x6 = INT16_MAX;
	uint8_t x7 = 2U;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t0 = 27809267U;

	t0 = ((x5^x6)*(x7^x8));

	if (t0 != 4294868995U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 148;
	uint8_t x10 = 2U;
	static int16_t x12 = INT16_MIN;

	t1 = ((x9^x10)*(x11^x12));

	if (t1 != -4915200) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = -382955070868LL;
	int8_t x15 = -1;

	t2 = ((x13^x14)*(x15^x16));

	if (t2 != -11105697057724LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -288795348LL;
	volatile uint8_t x23 = 1U;
	int8_t x24 = INT8_MIN;
	int64_t t3 = 3776014500491299530LL;

	t3 = ((x21^x22)*(x23^x24));

	if (t3 != -236053414100LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = 16565791789189LL;
	static int64_t x30 = -15316656LL;
	static uint64_t x31 = 5157875801151359835LLU;
	static uint64_t t4 = 152115122645982LLU;

	t4 = ((x29^x30)*(x31^x32));

	if (t4 != 10836904875252244114LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x33 = UINT32_MAX;
	volatile uint8_t x34 = UINT8_MAX;
	uint64_t x35 = 1050808LLU;
	int16_t x36 = INT16_MAX;
	uint64_t t5 = 7554LLU;

	t5 = ((x33^x34)*(x35^x36));

	if (t5 != 4634746177501440LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x38 = 0;
	int8_t x39 = INT8_MAX;
	volatile uint16_t x40 = UINT16_MAX;
	int32_t t6 = -2;

	t6 = ((x37^x38)*(x39^x40));

	if (t6 != 261632) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x42 = INT8_MIN;
	int32_t x43 = -96969;
	volatile int8_t x44 = INT8_MIN;
	static uint32_t t7 = 337U;

	t7 = ((x41^x42)*(x43^x44));

	if (t7 != 12312777U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x45 = 625U;
	uint32_t x46 = 2008U;
	static volatile uint8_t x47 = 22U;
	uint16_t x48 = 25U;
	static uint32_t t8 = 194U;

	t8 = ((x45^x46)*(x47^x48));

	if (t8 != 21735U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x49 = 338991078;
	volatile uint32_t x50 = 12567213U;
	int64_t x51 = -1LL;
	uint64_t x52 = UINT64_MAX;
	uint64_t t9 = 2855813779947316909LLU;

	t9 = ((x49^x50)*(x51^x52));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = UINT8_MAX;
	volatile uint8_t x54 = 31U;
	volatile int16_t x55 = INT16_MAX;
	int32_t t10 = -6208;

	t10 = ((x53^x54)*(x55^x56));

	if (t10 != -7311584) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MAX;
	volatile int64_t x58 = 3587448855LL;
	uint32_t x59 = 1U;
	int32_t x60 = INT32_MAX;

	t11 = ((x57^x58)*(x59^x60));

	if (t11 != 7703987920920100656LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = INT8_MAX;
	uint32_t x62 = 1U;
	static int64_t x63 = -1LL;
	volatile uint64_t t12 = 1213328718202LLU;

	t12 = ((x61^x62)*(x63^x64));

	if (t12 != 18446740445782720654LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x65 = INT8_MAX;
	int64_t x66 = 39LL;
	int16_t x67 = -1;
	volatile uint16_t x68 = 12393U;
	static int64_t t13 = -3912642281714LL;

	t13 = ((x65^x66)*(x67^x68));

	if (t13 != -1090672LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 212011218U;
	static volatile int32_t x70 = -1;
	int16_t x71 = -360;
	volatile uint32_t t14 = 19256416U;

	t14 = ((x69^x70)*(x71^x72));

	if (t14 != 1197383707U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 8U;
	uint32_t x78 = 107247U;
	int16_t x79 = 3419;
	int32_t x80 = 1374;
	volatile uint32_t t15 = 10506U;

	t15 = ((x77^x78)*(x79^x80));

	if (t15 != 220161667U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x82 = INT8_MAX;
	static int8_t x83 = INT8_MAX;
	int64_t x84 = -1LL;

	t16 = ((x81^x82)*(x83^x84));

	if (t16 != -16128LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = -298332506570LL;
	static volatile int32_t x86 = INT32_MIN;
	uint8_t x87 = 0U;
	static int64_t t17 = 2994LL;

	t17 = ((x85^x86)*(x87^x88));

	if (t17 != -296520463926LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x89 = 729560957U;
	static volatile int16_t x90 = -1;
	volatile int8_t x91 = 2;
	uint8_t x92 = 12U;

	t18 = ((x89^x90)*(x91^x92));

	if (t18 != 2671048476U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x93 = INT32_MIN;
	uint16_t x94 = 7U;
	static int64_t x95 = 1961LL;
	int64_t x96 = -1LL;
	volatile int64_t t19 = 272242676480183274LL;

	t19 = ((x93^x94)*(x95^x96));

	if (t19 != 4213362903642LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x97 = INT16_MIN;
	static int16_t x98 = INT16_MIN;
	uint8_t x99 = 68U;
	uint32_t x100 = 29U;
	static volatile uint32_t t20 = 1430U;

	t20 = ((x97^x98)*(x99^x100));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -13;
	int8_t x102 = -1;
	static volatile int32_t t21 = -209;

	t21 = ((x101^x102)*(x103^x104));

	if (t21 != 96) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = -1;
	uint8_t x106 = 17U;
	uint8_t x107 = UINT8_MAX;
	volatile int32_t t22 = -8;

	t22 = ((x105^x106)*(x107^x108));

	if (t22 != 585234) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = UINT32_MAX;
	uint16_t x110 = UINT16_MAX;
	int8_t x111 = INT8_MIN;
	int64_t x112 = 6959382LL;
	int64_t t23 = -1494720493028LL;

	t23 = ((x109^x110)*(x111^x112));

	if (t23 != -29890222772060160LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x115 = 32U;
	static int16_t x116 = 359;
	volatile int32_t t24 = -22072666;

	t24 = ((x113^x114)*(x115^x116));

	if (t24 != -41856) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x117 = -2890212LL;
	uint64_t x118 = UINT64_MAX;
	static int64_t x119 = 1LL;
	int8_t x120 = INT8_MIN;
	static uint64_t t25 = 275381789479043LLU;

	t25 = ((x117^x118)*(x119^x120));

	if (t25 != 18446744073342494819LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x121 = 29636U;
	int8_t x123 = 3;
	int8_t x124 = -1;
	static volatile int32_t t26 = 3484;

	t26 = ((x121^x122)*(x123^x124));

	if (t26 != -118528) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x125 = 1735401103U;
	int8_t x127 = -1;
	volatile int16_t x128 = -1;

	t27 = ((x125^x126)*(x127^x128));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x129 = 36337135757892540LLU;
	int64_t x130 = 78LL;
	static volatile int8_t x131 = 38;
	volatile int32_t x132 = 656600139;
	uint64_t t28 = 586LLU;

	t28 = ((x129^x130)*(x131^x132));

	if (t28 != 6180253050404339210LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x134 = -9;
	volatile uint64_t x135 = UINT64_MAX;
	uint64_t x136 = 22094LLU;
	volatile uint64_t t29 = 257399572795101344LLU;

	t29 = ((x133^x134)*(x135^x136));

	if (t29 != 353520LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x138 = INT8_MIN;
	static int64_t x140 = -13LL;
	int64_t t30 = 396841LL;

	t30 = ((x137^x138)*(x139^x140));

	if (t30 != 274877905408LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x142 = INT64_MIN;
	volatile int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MIN;
	static volatile int64_t t31 = -398326LL;

	t31 = ((x141^x142)*(x143^x144));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = 91U;
	uint64_t x150 = 152209717LLU;
	uint64_t x151 = 3005525933825348717LLU;
	int8_t x152 = 41;

	t32 = ((x149^x150)*(x151^x152));

	if (t32 != 6101109704243583288LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x153 = -3901;
	static int64_t x155 = -33109037LL;
	int16_t x156 = -14;
	int64_t t33 = -51041107055678LL;

	t33 = ((x153^x154)*(x155^x156));

	if (t33 != 129125197500LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x157 = INT64_MIN;
	int64_t x159 = -817750954269LL;
	volatile uint64_t t34 = 1712007089596180LLU;

	t34 = ((x157^x158)*(x159^x160));

	if (t34 != 14151939954244254972LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x163 = 402U;
	static int64_t x164 = INT64_MIN;
	volatile uint64_t t35 = 8067548324257LLU;

	t35 = ((x161^x162)*(x163^x164));

	if (t35 != 8999048574594069276LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x170 = 3;
	int8_t x171 = INT8_MAX;
	uint64_t x172 = 5688629582492005LLU;
	volatile uint64_t t36 = 10232765LLU;

	t36 = ((x169^x170)*(x171^x172));

	if (t36 != 18423989555379583896LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x174 = INT8_MIN;

	t37 = ((x173^x174)*(x175^x176));

	if (t37 != 2147499777U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x178 = INT32_MIN;
	uint64_t x179 = 12435LLU;
	uint64_t t38 = 34056LLU;

	t38 = ((x177^x178)*(x179^x180));

	if (t38 != 9222434599323636293LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MIN;
	uint64_t x182 = 10897042LLU;
	uint8_t x183 = UINT8_MAX;
	uint16_t x184 = 12U;
	volatile uint64_t t39 = 299952245LLU;

	t39 = ((x181^x182)*(x183^x184));

	if (t39 != 18446743554519006358LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x193 = UINT8_MAX;
	uint8_t x195 = UINT8_MAX;
	uint64_t t40 = 27537314109365LLU;

	t40 = ((x193^x194)*(x195^x196));

	if (t40 != 65536LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 185LLU;
	int64_t x198 = -34498LL;

	t41 = ((x197^x198)*(x199^x200));

	if (t41 != 1123667494584750LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x206 = 30092U;
	int16_t x207 = 484;

	t42 = ((x205^x206)*(x207^x208));

	if (t42 != 14835356U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x209 = 3600072626270838891LL;
	uint64_t x210 = 75925644419LLU;
	int32_t x212 = -455486127;
	volatile uint64_t t43 = 21764LLU;

	t43 = ((x209^x210)*(x211^x212));

	if (t43 != 11507210264851243320LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x217 = INT64_MAX;
	volatile uint32_t x218 = 15U;
	uint64_t x219 = 1724397149564LLU;
	static int16_t x220 = INT16_MAX;

	t44 = ((x217^x218)*(x219^x220));

	if (t44 != 9223344446500624336LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x222 = 0U;
	uint64_t x223 = UINT64_MAX;
	uint64_t t45 = 513802500700296LLU;

	t45 = ((x221^x222)*(x223^x224));

	if (t45 != 18446744073692839936LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x225 = 6043542057209813LLU;
	int32_t x228 = INT32_MIN;
	volatile uint64_t t46 = 460541317160021LLU;

	t46 = ((x225^x226)*(x227^x228));

	if (t46 != 17203436870532907003LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = INT16_MIN;
	int8_t x230 = INT8_MIN;
	uint64_t x231 = UINT64_MAX;
	uint16_t x232 = UINT16_MAX;
	volatile uint64_t t47 = 13114741475LLU;

	t47 = ((x229^x230)*(x231^x232));

	if (t47 != 18446744071570456576LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x233 = 0;
	int8_t x234 = 4;
	int64_t x235 = -3005378LL;
	int32_t x236 = -28721;
	static volatile int64_t t48 = -439308991269LL;

	t48 = ((x233^x234)*(x235^x236));

	if (t48 != 11972548LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x237 = UINT8_MAX;
	uint8_t x238 = 48U;
	volatile uint64_t x239 = 28358744230LLU;
	int64_t x240 = -254343287808LL;
	uint64_t t49 = 1281365LLU;

	t49 = ((x237^x238)*(x239^x240));

	if (t49 != 18446689277322023482LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x242 = 3511622119LLU;
	static int8_t x244 = INT8_MAX;
	uint64_t t50 = 897LLU;

	t50 = ((x241^x242)*(x243^x244));

	if (t50 != 18445622758034424225LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x245 = 6U;
	int16_t x246 = -1;
	int8_t x247 = -1;
	int8_t x248 = -14;
	static int32_t t51 = -7;

	t51 = ((x245^x246)*(x247^x248));

	if (t51 != -91) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x253 = INT32_MIN;
	int8_t x255 = INT8_MIN;
	uint32_t x256 = 247978702U;
	uint32_t t52 = 793594U;

	t52 = ((x253^x254)*(x255^x256));

	if (t52 != 1921996096U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x258 = 24U;
	int8_t x260 = 19;
	int64_t t53 = -50436736627LL;

	t53 = ((x257^x258)*(x259^x260));

	if (t53 != 16103868602064LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int64_t x271 = INT64_MIN;
	uint8_t x272 = 115U;
	volatile uint64_t t54 = 124666828581493LLU;

	t54 = ((x269^x270)*(x271^x272));

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x274 = -11802848;
	int64_t x275 = 236545794LL;
	uint64_t t55 = 743249410924577LLU;

	t55 = ((x273^x274)*(x275^x276));

	if (t55 != 18443952510977714286LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x277 = -1;
	volatile int32_t x278 = -505;
	static volatile int32_t x279 = INT32_MIN;
	int64_t x280 = 1208481LL;

	t56 = ((x277^x278)*(x279^x280));

	if (t56 != -1081722684168LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x282 = 1U;
	int16_t x283 = -1;
	uint16_t x284 = 36U;
	volatile int32_t t57 = -313615;

	t57 = ((x281^x282)*(x283^x284));

	if (t57 != 4699) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x286 = 33887862377033LLU;
	uint32_t x287 = UINT32_MAX;
	uint64_t x288 = 12853433LLU;
	volatile uint64_t t58 = 30265LLU;

	t58 = ((x285^x286)*(x287^x288));

	if (t58 != 8850389708840881142LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x290 = 10578252538013498LLU;
	static int64_t x291 = -1LL;
	int16_t x292 = INT16_MIN;
	volatile uint64_t t59 = 180LLU;

	t59 = ((x289^x290)*(x291^x292));

	if (t59 != 13093908524247934779LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x294 = 16;
	volatile int32_t x295 = INT32_MAX;
	int8_t x296 = INT8_MIN;
	volatile uint64_t t60 = 321422767LLU;

	t60 = ((x293^x294)*(x295^x296));

	if (t60 != 18446165953965830248LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x301 = 97U;
	int16_t x303 = INT16_MIN;
	static uint16_t x304 = UINT16_MAX;
	volatile int32_t t61 = 6185377;

	t61 = ((x301^x302)*(x303^x304));

	if (t61 != -3637359) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x313 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	static uint16_t x316 = 11U;
	uint32_t t62 = 8933128U;

	t62 = ((x313^x314)*(x315^x316));

	if (t62 != 3829176U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x317 = 0;
	int16_t x319 = INT16_MAX;
	int16_t x320 = INT16_MIN;

	t63 = ((x317^x318)*(x319^x320));

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x325 = INT8_MIN;
	uint8_t x327 = UINT8_MAX;
	int32_t t64 = 0;

	t64 = ((x325^x326)*(x327^x328));

	if (t64 != 32512) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x334 = UINT8_MAX;
	volatile int32_t x336 = 26;
	volatile int64_t t65 = -263491124706LL;

	t65 = ((x333^x334)*(x335^x336));

	if (t65 != -83254274455788570LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x337 = INT8_MIN;
	uint8_t x338 = UINT8_MAX;
	int32_t x339 = 4;
	volatile uint64_t x340 = UINT64_MAX;
	uint64_t t66 = 2551023178357999360LLU;

	t66 = ((x337^x338)*(x339^x340));

	if (t66 != 645LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x341 = 466738426657LLU;
	int32_t x343 = INT32_MIN;
	int8_t x344 = -1;
	uint64_t t67 = 224184LLU;

	t67 = ((x341^x342)*(x343^x344));

	if (t67 != 6188960695702833466LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x349 = INT16_MIN;
	static int8_t x350 = INT8_MAX;
	volatile uint64_t x351 = 377LLU;
	int32_t x352 = INT32_MIN;

	t68 = ((x349^x350)*(x351^x352));

	if (t68 != 70096001448711LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x359 = -106;
	uint64_t t69 = 2606LLU;

	t69 = ((x357^x358)*(x359^x360));

	if (t69 != 17623599525LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x365 = INT16_MIN;
	static uint16_t x366 = 18U;
	int8_t x367 = 1;
	volatile uint32_t x368 = 743436451U;
	uint32_t t70 = 1228U;

	t70 = ((x365^x366)*(x367^x368));

	if (t70 != 625863524U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x370 = -25402725;
	volatile uint32_t x372 = 816024273U;

	t71 = ((x369^x370)*(x371^x372));

	if (t71 != 88374629399591928LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x374 = 0U;
	int64_t x376 = 213303319657LL;
	static int64_t t72 = -1274400085560407LL;

	t72 = ((x373^x374)*(x375^x376));

	if (t72 != 163236124591587454LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x389 = -1LL;
	volatile int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	volatile int64_t x392 = INT64_MAX;
	uint64_t t73 = 201307536321300331LLU;

	t73 = ((x389^x390)*(x391^x392));

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x393 = UINT8_MAX;
	volatile int16_t x394 = -1;
	static int8_t x396 = INT8_MIN;

	t74 = ((x393^x394)*(x395^x396));

	if (t74 != 77568U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x397 = INT16_MIN;
	static volatile int8_t x400 = INT8_MIN;

	t75 = ((x397^x398)*(x399^x400));

	if (t75 != 1019836800) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x401 = INT8_MAX;
	static uint16_t x402 = 8421U;
	uint32_t x403 = 27866U;
	int16_t x404 = INT16_MAX;
	static volatile uint32_t t76 = 2U;

	t76 = ((x401^x402)*(x403^x404));

	if (t76 != 40903746U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = 17;
	volatile uint16_t x407 = 11U;
	uint16_t x408 = 4U;
	volatile int32_t t77 = 1365;

	t77 = ((x405^x406)*(x407^x408));

	if (t77 != -491265) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x409 = -2251024640LL;
	int8_t x410 = INT8_MIN;
	volatile uint8_t x412 = 124U;

	t78 = ((x409^x410)*(x411^x412));

	if (t78 != -4834038051640140288LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x417 = -33;
	volatile uint32_t x418 = UINT32_MAX;
	int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MIN;
	uint32_t t79 = 114U;

	t79 = ((x417^x418)*(x419^x420));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x421 = INT64_MAX;
	int32_t x422 = INT32_MAX;
	int8_t x423 = INT8_MIN;
	static volatile uint64_t x424 = UINT64_MAX;
	volatile uint64_t t80 = 71917855LLU;

	t80 = ((x421^x422)*(x423^x424));

	if (t80 != 9223371764124352512LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x426 = UINT8_MAX;
	int8_t x428 = INT8_MIN;
	int32_t t81 = 10545;

	t81 = ((x425^x426)*(x427^x428));

	if (t81 != 915) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x433 = -1;
	int32_t x435 = -1;
	uint8_t x436 = 14U;

	t82 = ((x433^x434)*(x435^x436));

	if (t82 != 3885) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x441 = -23;
	int32_t x442 = -1;
	int32_t x443 = -1;
	volatile int32_t t83 = 187639;

	t83 = ((x441^x442)*(x443^x444));

	if (t83 != -1441792) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x446 = INT16_MAX;
	int8_t x447 = 49;
	static uint8_t x448 = 19U;
	volatile int32_t t84 = 10;

	t84 = ((x445^x446)*(x447^x448));

	if (t84 != -34) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x453 = 315705708U;
	int32_t x454 = -1;
	int32_t x456 = -112694;
	volatile uint32_t t85 = 10101883U;

	t85 = ((x453^x454)*(x455^x456));

	if (t85 != 1685615727U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x457 = UINT64_MAX;
	volatile uint32_t x458 = 102U;
	int64_t x459 = 59468245341LL;
	int32_t x460 = INT32_MAX;
	uint64_t t86 = 112957073LLU;

	t86 = ((x457^x458)*(x459^x460));

	if (t86 != 18446738033443955922LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x461 = UINT32_MAX;
	static uint64_t x462 = 1611826642108LLU;
	int64_t x463 = INT64_MAX;
	uint8_t x464 = 7U;

	t87 = ((x461^x462)*(x463^x464));

	if (t87 != 9223359127304398312LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x465 = 512135LL;
	uint16_t x467 = 4707U;
	int16_t x468 = INT16_MIN;
	uint64_t t88 = 69921858720LLU;

	t88 = ((x465^x466)*(x467^x468));

	if (t88 != 14371048296LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x469 = UINT32_MAX;
	uint32_t x470 = 1U;
	int16_t x471 = INT16_MIN;
	static int8_t x472 = -1;
	volatile uint32_t t89 = 15U;

	t89 = ((x469^x470)*(x471^x472));

	if (t89 != 4294901762U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x473 = 570352291179292LLU;
	static uint32_t x474 = UINT32_MAX;
	volatile uint32_t x475 = 6420418U;
	volatile int16_t x476 = INT16_MIN;
	static volatile uint64_t t90 = 10LLU;

	t90 = ((x473^x474)*(x475^x476));

	if (t90 != 16225335177777404166LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x477 = -1;
	uint16_t x478 = 1U;
	int8_t x479 = INT8_MIN;
	static int32_t t91 = 392665296;

	t91 = ((x477^x478)*(x479^x480));

	if (t91 != 256) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x489 = UINT32_MAX;
	uint8_t x490 = 47U;
	int8_t x491 = -1;
	volatile uint64_t x492 = 23621LLU;

	t92 = ((x489^x490)*(x491^x492));

	if (t92 != 18446642617993219360LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x493 = INT8_MIN;
	uint32_t x494 = UINT32_MAX;
	int32_t x495 = INT32_MIN;
	uint32_t t93 = 30U;

	t93 = ((x493^x494)*(x495^x496));

	if (t93 != 2147484029U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x499 = -54;
	int16_t x500 = 0;

	t94 = ((x497^x498)*(x499^x500));

	if (t94 != -873237447090LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x505 = -30145LL;
	static uint16_t x506 = 166U;
	static uint32_t x507 = UINT32_MAX;
	static int16_t x508 = INT16_MAX;
	volatile int64_t t95 = 33699431739LL;

	t95 = ((x505^x506)*(x507^x508));

	if (t95 != -129084257239040LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x509 = 472U;
	volatile int32_t x511 = -1;
	uint16_t x512 = 141U;
	static volatile uint32_t t96 = 1858718U;

	t96 = ((x509^x510)*(x511^x512));

	if (t96 != 4294907230U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x513 = 15U;
	int8_t x514 = INT8_MIN;
	int64_t x516 = INT64_MIN;
	static volatile uint64_t t97 = 15330204463LLU;

	t97 = ((x513^x514)*(x515^x516));

	if (t97 != 9223372036854775695LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x521 = INT32_MIN;
	uint32_t x524 = UINT32_MAX;
	static volatile uint32_t t98 = 37881U;

	t98 = ((x521^x522)*(x523^x524));

	if (t98 != 2351020466U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x525 = -4;
	uint64_t x526 = 54873306656349LLU;
	volatile int16_t x527 = 14608;
	static uint64_t x528 = 1674072188957LLU;
	static volatile uint64_t t99 = 52469074502LLU;

	t99 = ((x525^x526)*(x527^x528));

	if (t99 != 13082719760011056685LLU) { NG(); } else { ; }
	
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

