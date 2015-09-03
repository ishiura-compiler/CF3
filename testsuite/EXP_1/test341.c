#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x13 = 2U;
uint16_t x14 = 72U;
int16_t x20 = -1;
uint8_t x21 = UINT8_MAX;
int64_t x40 = -90826336252LL;
uint64_t x54 = 3942LLU;
int16_t x65 = INT16_MAX;
int32_t x79 = INT32_MAX;
uint32_t x88 = UINT32_MAX;
int16_t x89 = INT16_MAX;
int32_t x95 = INT32_MAX;
static int32_t x117 = INT32_MIN;
uint32_t x118 = 7772U;
int16_t x120 = 8;
volatile uint8_t x122 = 1U;
int16_t x148 = -1;
uint16_t x153 = UINT16_MAX;
int64_t x163 = INT64_MIN;
uint64_t t22 = 2918256038736LLU;
volatile int32_t x177 = -763;
int16_t x187 = INT16_MIN;
uint16_t x191 = 3191U;
uint8_t x203 = UINT8_MAX;
uint64_t t28 = 2570LLU;
int8_t x205 = INT8_MIN;
static int8_t x207 = -1;
uint8_t x208 = 101U;
uint64_t t30 = 0LLU;
volatile uint32_t x219 = 528900U;
int16_t x233 = INT16_MAX;
static int64_t t34 = 9286285LL;
int64_t x248 = -1LL;
uint32_t x257 = 108742522U;
static uint8_t x267 = 2U;
static int32_t x278 = 30421313;
uint64_t t40 = 33536706479957LLU;
int32_t x286 = -1;
static int8_t x287 = 31;
int16_t x291 = INT16_MAX;
uint8_t x292 = UINT8_MAX;
uint64_t t43 = 693755LLU;
static uint32_t x302 = 16033184U;
volatile uint64_t t44 = 842LLU;
static uint64_t x317 = 221878699985334842LLU;
static volatile int32_t t47 = -79972;
uint64_t x325 = 8LLU;
volatile int32_t t49 = 56289;
volatile int64_t t50 = -3206855067140764481LL;
volatile uint64_t x358 = 3274LLU;
static int16_t x364 = INT16_MAX;
int32_t t53 = -27896537;
int64_t x380 = -24510696010904LL;
volatile int32_t x408 = INT32_MIN;
volatile uint64_t x414 = 1040074LLU;
volatile uint64_t t61 = 1611106566LLU;
int64_t t63 = 199882844071581LL;
static int8_t x433 = INT8_MIN;
uint64_t x434 = 1LLU;
int8_t x436 = INT8_MIN;
uint32_t x450 = 10U;
static uint32_t x473 = 554842206U;
static int8_t x478 = INT8_MIN;
uint64_t x484 = 2LLU;
int32_t t72 = -4;
static int8_t x496 = INT8_MAX;
int16_t x501 = 0;
int64_t x502 = -1LL;
volatile int32_t x524 = 59352914;
static uint32_t x526 = UINT32_MAX;
uint32_t t76 = 8U;
volatile uint8_t x538 = UINT8_MAX;
uint16_t x539 = UINT16_MAX;
uint16_t x542 = 31U;
int32_t x552 = 3198;
uint64_t x572 = 3404980590631783LLU;
static volatile uint64_t t82 = 1127LLU;
int64_t x578 = 2617460898801568LL;
volatile uint64_t t83 = 5682440573449689LLU;
uint16_t x581 = 1414U;
int16_t x597 = -9931;
volatile int16_t x598 = INT16_MAX;
static volatile uint16_t x600 = 503U;
volatile uint64_t x607 = 16099LLU;
volatile uint32_t t88 = 277U;
volatile int32_t x622 = -1;
int8_t x624 = INT8_MAX;
int64_t x627 = -218645LL;
volatile int64_t t90 = 710LL;
int64_t x631 = -7722374LL;
uint32_t x637 = UINT32_MAX;
static uint64_t x638 = 3538019952432914544LLU;
int64_t x643 = INT64_MIN;
uint64_t x646 = UINT64_MAX;
int16_t x651 = -1;
int64_t t99 = 209520518684720LL;


void f0(void) {
	static uint32_t x5 = UINT32_MAX;
	static uint64_t x6 = 7054913489LLU;
	int16_t x7 = INT16_MIN;
	uint8_t x8 = UINT8_MAX;
	volatile uint64_t t0 = 52704258325597LLU;

	t0 = (((x5*x6)+x7)*x8);

	if (t0 != 15919766788281343697LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x15 = -1;
	volatile uint64_t x16 = 872499750634228LLU;
	volatile uint64_t t1 = 4442154581685497454LLU;

	t1 = (((x13*x14)+x15)*x16);

	if (t1 != 124767464340694604LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = -2;
	uint8_t x18 = UINT8_MAX;
	int64_t x19 = -1LL;
	volatile int64_t t2 = 136688996337927393LL;

	t2 = (((x17*x18)+x19)*x20);

	if (t2 != 511LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x22 = -1LL;
	int32_t x23 = -1;
	volatile uint16_t x24 = 414U;
	static int64_t t3 = 6LL;

	t3 = (((x21*x22)+x23)*x24);

	if (t3 != -105984LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x29 = 2;
	int64_t x30 = -1LL;
	int8_t x31 = 1;
	uint8_t x32 = UINT8_MAX;
	volatile int64_t t4 = 207LL;

	t4 = (((x29*x30)+x31)*x32);

	if (t4 != -255LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x37 = 1;
	uint16_t x38 = UINT16_MAX;
	static volatile uint16_t x39 = UINT16_MAX;
	volatile int64_t t5 = -427831224473LL;

	t5 = (((x37*x38)+x39)*x40);

	if (t5 != -11904607892549640LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x49 = UINT8_MAX;
	uint32_t x50 = 1335758U;
	static uint32_t x51 = UINT32_MAX;
	int32_t x52 = INT32_MIN;
	static uint32_t t6 = 23U;

	t6 = (((x49*x50)+x51)*x52);

	if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x53 = 299;
	static int8_t x55 = INT8_MAX;
	volatile int8_t x56 = -1;
	uint64_t t7 = 328505LLU;

	t7 = (((x53*x54)+x55)*x56);

	if (t7 != 18446744073708372831LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x66 = INT8_MIN;
	int16_t x67 = -7718;
	uint32_t x68 = UINT32_MAX;
	uint32_t t8 = 2587U;

	t8 = (((x65*x66)+x67)*x68);

	if (t8 != 4201894U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x77 = INT16_MAX;
	uint64_t x78 = UINT64_MAX;
	static int8_t x80 = 0;
	volatile uint64_t t9 = 197LLU;

	t9 = (((x77*x78)+x79)*x80);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x85 = UINT32_MAX;
	volatile uint16_t x86 = 9U;
	uint32_t x87 = UINT32_MAX;
	volatile uint32_t t10 = 11U;

	t10 = (((x85*x86)+x87)*x88);

	if (t10 != 10U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x90 = -1;
	volatile int8_t x91 = -17;
	int16_t x92 = INT16_MIN;
	int32_t t11 = 6531798;

	t11 = (((x89*x90)+x91)*x92);

	if (t11 != 1074266112) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x93 = UINT64_MAX;
	int8_t x94 = INT8_MIN;
	int32_t x96 = INT32_MIN;
	uint64_t t12 = 4031LLU;

	t12 = (((x93*x94)+x95)*x96);

	if (t12 != 13835057782551740416LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x97 = INT32_MAX;
	uint32_t x98 = UINT32_MAX;
	int8_t x99 = INT8_MIN;
	uint8_t x100 = 29U;
	volatile uint32_t t13 = 1520U;

	t13 = (((x97*x98)+x99)*x100);

	if (t13 != 2147479965U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x105 = -1LL;
	int32_t x106 = -1;
	static int32_t x107 = 1;
	static uint64_t x108 = 8844511451LLU;
	volatile uint64_t t14 = 28648LLU;

	t14 = (((x105*x106)+x107)*x108);

	if (t14 != 17689022902LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x113 = 35U;
	int16_t x114 = INT16_MIN;
	int64_t x115 = -1LL;
	static int16_t x116 = -1;
	int64_t t15 = -94430157796LL;

	t15 = (((x113*x114)+x115)*x116);

	if (t15 != 1146881LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x119 = 2U;
	static uint32_t t16 = 0U;

	t16 = (((x117*x118)+x119)*x120);

	if (t16 != 16U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x121 = 832U;
	int64_t x123 = 198875920979LL;
	static volatile int16_t x124 = INT16_MIN;
	int64_t t17 = -1951LL;

	t17 = (((x121*x122)+x123)*x124);

	if (t17 != -6516766205902848LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x129 = 1525U;
	uint16_t x130 = 1131U;
	int16_t x131 = INT16_MAX;
	uint16_t x132 = 13686U;
	uint32_t t18 = 153U;

	t18 = (((x129*x130)+x131)*x132);

	if (t18 != 2578883332U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x141 = 6663750297LLU;
	volatile int8_t x142 = -1;
	static uint8_t x143 = 64U;
	uint16_t x144 = 53U;
	volatile uint64_t t19 = 123417332985270395LLU;

	t19 = (((x141*x142)+x143)*x144);

	if (t19 != 18446743720530789267LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x145 = 0U;
	uint8_t x146 = 0U;
	static int8_t x147 = 2;
	volatile int32_t t20 = -402272;

	t20 = (((x145*x146)+x147)*x148);

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x154 = 719644U;
	uint64_t x155 = UINT64_MAX;
	volatile int16_t x156 = -1;
	static volatile uint64_t t21 = 1977LLU;

	t21 = (((x153*x154)+x155)*x156);

	if (t21 != 18446744069497355037LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x161 = UINT8_MAX;
	uint64_t x162 = 15412808324071LLU;
	int64_t x164 = 23LL;

	t22 = (((x161*x162)+x163)*x164);

	if (t22 != 9313768157675452223LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x169 = INT8_MIN;
	static volatile int8_t x170 = INT8_MAX;
	uint8_t x171 = 74U;
	int8_t x172 = -22;
	volatile int32_t t23 = 75827019;

	t23 = (((x169*x170)+x171)*x172);

	if (t23 != 356004) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x178 = 9U;
	uint8_t x179 = 14U;
	int32_t x180 = INT32_MIN;
	uint32_t t24 = 8265766U;

	t24 = (((x177*x178)+x179)*x180);

	if (t24 != 2147483648U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x181 = 73790LL;
	int16_t x182 = INT16_MAX;
	static uint64_t x183 = 52504826LLU;
	volatile int16_t x184 = INT16_MAX;
	uint64_t t25 = 1559LLU;

	t25 = (((x181*x182)+x183)*x184);

	if (t25 != 80946998998852LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x185 = 8393;
	static int64_t x186 = -1LL;
	uint32_t x188 = 1190U;
	volatile int64_t t26 = -4664270047505LL;

	t26 = (((x185*x186)+x187)*x188);

	if (t26 != -48981590LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x189 = -1LL;
	uint64_t x190 = UINT64_MAX;
	static uint16_t x192 = UINT16_MAX;
	uint64_t t27 = 1LLU;

	t27 = (((x189*x190)+x191)*x192);

	if (t27 != 209187720LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x201 = INT16_MIN;
	uint64_t x202 = 7285249976LLU;
	volatile int64_t x204 = -1177625093043LL;

	t28 = (((x201*x202)+x203)*x204);

	if (t28 != 2194579272786325683LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x206 = 1387286731526158173LLU;
	uint64_t t29 = 1761311576404778915LLU;

	t29 = (((x205*x206)+x207)*x208);

	if (t29 != 13839118549220861723LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x213 = 356LLU;
	int64_t x214 = INT64_MIN;
	int64_t x215 = 1093171404LL;
	int64_t x216 = INT64_MIN;

	t30 = (((x213*x214)+x215)*x216);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x217 = 7;
	static uint16_t x218 = 10549U;
	volatile int8_t x220 = INT8_MIN;
	uint32_t t31 = 55989704U;

	t31 = (((x217*x218)+x219)*x220);

	if (t31 != 4217816192U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x225 = 19087334U;
	int16_t x226 = INT16_MIN;
	int32_t x227 = 638;
	static int64_t x228 = -747LL;
	int64_t t32 = 2111295692561LL;

	t32 = (((x225*x226)+x227)*x228);

	if (t32 != -1203764610474LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x229 = -1;
	uint64_t x230 = 257907108911226372LLU;
	static uint8_t x231 = 14U;
	uint8_t x232 = UINT8_MAX;
	uint64_t t33 = 14198130755921LLU;

	t33 = (((x229*x230)+x231)*x232);

	if (t33 != 8020663522475485174LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x234 = 613669U;
	volatile int64_t x235 = 114671LL;
	int8_t x236 = -1;

	t34 = (((x233*x234)+x235)*x236);

	if (t34 != -2928337610LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x245 = 6298662443LLU;
	volatile int64_t x246 = INT64_MAX;
	uint8_t x247 = UINT8_MAX;
	volatile uint64_t t35 = 704453LLU;

	t35 = (((x245*x246)+x247)*x248);

	if (t35 != 9223372043153437996LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x253 = INT8_MIN;
	int32_t x254 = -28015;
	uint32_t x255 = 3774U;
	int64_t x256 = 6804LL;
	volatile int64_t t36 = -306488LL;

	t36 = (((x253*x254)+x255)*x256);

	if (t36 != 24424277976LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x258 = -1;
	int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MIN;
	volatile uint32_t t37 = 99496325U;

	t37 = (((x257*x258)+x259)*x260);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x261 = UINT8_MAX;
	volatile int16_t x262 = -6;
	int32_t x263 = 62;
	uint16_t x264 = 4920U;
	static volatile int32_t t38 = 1764901;

	t38 = (((x261*x262)+x263)*x264);

	if (t38 != -7222560) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x265 = INT16_MIN;
	uint64_t x266 = 26049203458706LLU;
	static uint8_t x268 = 51U;
	uint64_t t39 = 5135711224722000LLU;

	t39 = (((x265*x266)+x267)*x268);

	if (t39 != 11807636975449866342LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x277 = 24LLU;
	static int8_t x279 = INT8_MAX;
	uint8_t x280 = UINT8_MAX;

	t40 = (((x277*x278)+x279)*x280);

	if (t40 != 186178467945LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x285 = 9U;
	int64_t x288 = -132501403570978LL;
	int64_t t41 = -16571895020LL;

	t41 = (((x285*x286)+x287)*x288);

	if (t41 != -2915030878561516LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x289 = UINT16_MAX;
	int16_t x290 = -1;
	int32_t t42 = 2000;

	t42 = (((x289*x290)+x291)*x292);

	if (t42 != -8355840) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x293 = INT64_MIN;
	uint64_t x294 = 134337295LLU;
	volatile int8_t x295 = INT8_MIN;
	uint64_t x296 = 341004550LLU;

	t43 = (((x293*x294)+x295)*x296);

	if (t43 != 18446744030060969216LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x301 = INT8_MAX;
	static uint64_t x303 = 4933LLU;
	int8_t x304 = INT8_MAX;

	t44 = (((x301*x302)+x303)*x304);

	if (t44 != 258599851227LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x313 = -1;
	volatile uint32_t x314 = 3U;
	static int32_t x315 = 1693812;
	static volatile uint16_t x316 = 14U;
	static uint32_t t45 = 3U;

	t45 = (((x313*x314)+x315)*x316);

	if (t45 != 23713326U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x318 = UINT8_MAX;
	uint16_t x319 = 295U;
	uint64_t x320 = 723LLU;
	volatile uint64_t t46 = 3729LLU;

	t46 = (((x317*x318)+x319)*x320);

	if (t46 != 10234911382182425943LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x321 = 2;
	int16_t x322 = 1;
	static uint8_t x323 = 25U;
	int8_t x324 = 20;

	t47 = (((x321*x322)+x323)*x324);

	if (t47 != 540) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x326 = INT64_MIN;
	volatile int32_t x327 = -1;
	int8_t x328 = 23;
	volatile uint64_t t48 = 254361083LLU;

	t48 = (((x325*x326)+x327)*x328);

	if (t48 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x329 = 1U;
	uint8_t x330 = 40U;
	int32_t x331 = 380;
	uint16_t x332 = 4844U;

	t49 = (((x329*x330)+x331)*x332);

	if (t49 != 2034480) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x337 = INT32_MAX;
	int64_t x338 = -1LL;
	int8_t x339 = 1;
	int64_t x340 = 29LL;

	t50 = (((x337*x338)+x339)*x340);

	if (t50 != -62277025734LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x345 = UINT32_MAX;
	uint16_t x346 = 14593U;
	static int16_t x347 = -5;
	int32_t x348 = INT32_MIN;
	static uint32_t t51 = 4653263U;

	t51 = (((x345*x346)+x347)*x348);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x357 = 3U;
	volatile uint64_t x359 = 2040419864742705004LLU;
	uint64_t x360 = 927394025553703919LLU;
	volatile uint64_t t52 = 1070628296LLU;

	t52 = (((x357*x358)+x359)*x360);

	if (t52 != 3746140731136560534LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x361 = -1;
	uint8_t x362 = 83U;
	static int32_t x363 = -1;

	t53 = (((x361*x362)+x363)*x364);

	if (t53 != -2752428) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x365 = 493388U;
	int64_t x366 = 4LL;
	int16_t x367 = INT16_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int64_t t54 = -223805353746039LL;

	t54 = (((x365*x366)+x367)*x368);

	if (t54 != 494899920LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x377 = 2790U;
	volatile int8_t x378 = 1;
	uint64_t x379 = 2250LLU;
	static uint64_t t55 = 3815904780825334LLU;

	t55 = (((x377*x378)+x379)*x380);

	if (t55 != 18323210165814595456LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x381 = 1U;
	static volatile int32_t x382 = 365;
	volatile int16_t x383 = INT16_MAX;
	int16_t x384 = -35;
	static int32_t t56 = 30257052;

	t56 = (((x381*x382)+x383)*x384);

	if (t56 != -1159620) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x389 = 76034430762309LLU;
	int64_t x390 = -15968236642LL;
	int64_t x391 = -6129786858LL;
	int16_t x392 = 1;
	static uint64_t t57 = 99853592487497LLU;

	t57 = (((x389*x390)+x391)*x392);

	if (t57 != 10464835168281700268LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x397 = -60907LL;
	int32_t x398 = INT32_MAX;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = INT8_MIN;
	uint64_t t58 = 3541023996LLU;

	t58 = (((x397*x398)+x399)*x400);

	if (t58 != 16741988670442240LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x401 = UINT64_MAX;
	int16_t x402 = INT16_MAX;
	uint8_t x403 = 88U;
	int8_t x404 = 7;
	static volatile uint64_t t59 = 28816LLU;

	t59 = (((x401*x402)+x403)*x404);

	if (t59 != 18446744073709322863LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x405 = INT16_MAX;
	volatile uint64_t x406 = UINT64_MAX;
	int8_t x407 = INT8_MAX;
	static volatile uint64_t t60 = 5170LLU;

	t60 = (((x405*x406)+x407)*x408);

	if (t60 != 70093866270720LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x413 = UINT8_MAX;
	static uint32_t x415 = 26U;
	static volatile uint64_t x416 = 9826734429292855LLU;

	t61 = (((x413*x414)+x415)*x416);

	if (t61 != 5866912260773273136LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x417 = 7U;
	uint16_t x418 = 6744U;
	int64_t x419 = -98507734968LL;
	static int64_t x420 = -1LL;
	volatile int64_t t62 = 287946080934LL;

	t62 = (((x417*x418)+x419)*x420);

	if (t62 != 98507687760LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x421 = INT8_MIN;
	int8_t x422 = 3;
	uint16_t x423 = 929U;
	int64_t x424 = -1LL;

	t63 = (((x421*x422)+x423)*x424);

	if (t63 != -545LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x429 = 14U;
	uint8_t x430 = UINT8_MAX;
	int16_t x431 = INT16_MIN;
	uint32_t x432 = UINT32_MAX;
	uint32_t t64 = 6943946U;

	t64 = (((x429*x430)+x431)*x432);

	if (t64 != 29198U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x435 = INT16_MIN;
	uint64_t t65 = 524291791553479LLU;

	t65 = (((x433*x434)+x435)*x436);

	if (t65 != 4210688LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x449 = INT8_MIN;
	int32_t x451 = -57;
	int8_t x452 = INT8_MAX;
	volatile uint32_t t66 = 53807U;

	t66 = (((x449*x450)+x451)*x452);

	if (t66 != 4294797497U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x453 = 30U;
	int8_t x454 = INT8_MIN;
	int32_t x455 = -6269;
	uint16_t x456 = UINT16_MAX;
	uint32_t t67 = 1671U;

	t67 = (((x453*x454)+x455)*x456);

	if (t67 != 3632473981U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x469 = 35862;
	uint32_t x470 = 0U;
	volatile int32_t x471 = INT32_MAX;
	volatile int16_t x472 = INT16_MIN;
	uint32_t t68 = 237380U;

	t68 = (((x469*x470)+x471)*x472);

	if (t68 != 32768U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x474 = 1U;
	uint64_t x475 = UINT64_MAX;
	int32_t x476 = INT32_MIN;
	volatile uint64_t t69 = 167178749915234317LLU;

	t69 = (((x473*x474)+x475)*x476);

	if (t69 != 17255229511251787776LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x477 = -54596379LL;
	int8_t x479 = 4;
	static volatile int16_t x480 = INT16_MAX;
	int64_t t70 = -371708LL;

	t70 = (((x477*x478)+x479)*x480);

	if (t70 != 228986822619772LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x481 = 15;
	static volatile int16_t x482 = INT16_MIN;
	volatile uint32_t x483 = 115975U;
	volatile uint64_t t71 = 4262080054LLU;

	t71 = (((x481*x482)+x483)*x484);

	if (t71 != 8589183502LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x489 = 334U;
	int8_t x490 = -1;
	int16_t x491 = -1139;
	int8_t x492 = INT8_MIN;

	t72 = (((x489*x490)+x491)*x492);

	if (t72 != 188544) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x493 = INT32_MIN;
	uint16_t x494 = 0U;
	static int8_t x495 = -24;
	volatile int32_t t73 = -5363460;

	t73 = (((x493*x494)+x495)*x496);

	if (t73 != -3048) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x503 = INT64_MIN;
	static uint64_t x504 = 2731743618396LLU;
	uint64_t t74 = 852293684357429LLU;

	t74 = (((x501*x502)+x503)*x504);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x521 = 446825LL;
	static int8_t x522 = INT8_MIN;
	static volatile uint16_t x523 = 13U;
	volatile int64_t t75 = -1924059LL;

	t75 = (((x521*x522)+x523)*x524);

	if (t75 != -3394606050562518LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x525 = 1;
	uint8_t x527 = 0U;
	static int16_t x528 = -1;

	t76 = (((x525*x526)+x527)*x528);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x537 = UINT32_MAX;
	volatile int8_t x540 = INT8_MIN;
	uint32_t t77 = 94299U;

	t77 = (((x537*x538)+x539)*x540);

	if (t77 != 4286611456U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x541 = 1U;
	uint16_t x543 = 24U;
	int16_t x544 = -118;
	static int32_t t78 = 758;

	t78 = (((x541*x542)+x543)*x544);

	if (t78 != -6490) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x549 = 89;
	int8_t x550 = INT8_MAX;
	volatile uint64_t x551 = 489348358LLU;
	volatile uint64_t t79 = 419LLU;

	t79 = (((x549*x550)+x551)*x552);

	if (t79 != 1564972195878LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x561 = UINT64_MAX;
	volatile int16_t x562 = INT16_MAX;
	uint16_t x563 = 1U;
	volatile int16_t x564 = INT16_MIN;
	uint64_t t80 = 248120392796226308LLU;

	t80 = (((x561*x562)+x563)*x564);

	if (t80 != 1073676288LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x565 = INT8_MIN;
	uint32_t x566 = 26658698U;
	uint8_t x567 = 0U;
	static uint16_t x568 = UINT16_MAX;
	uint32_t t81 = 4230417U;

	t81 = (((x565*x566)+x567)*x568);

	if (t81 != 107201792U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x569 = 20U;
	int32_t x570 = -532471;
	int16_t x571 = INT16_MIN;

	t82 = (((x569*x570)+x571)*x572);

	if (t82 != 4336507875491005548LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x577 = UINT64_MAX;
	int32_t x579 = 231;
	int16_t x580 = INT16_MIN;

	t83 = (((x577*x578)+x579)*x580);

	if (t83 != 11981982437084004352LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x582 = 2U;
	int8_t x583 = 0;
	uint16_t x584 = 2976U;
	volatile uint32_t t84 = 96055U;

	t84 = (((x581*x582)+x583)*x584);

	if (t84 != 8416128U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x599 = 1059125209335162LLU;
	uint64_t t85 = 0LLU;

	t85 = (((x597*x598)+x599)*x600);

	if (t85 != 532739816614820755LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x601 = 7532016U;
	static int32_t x602 = INT32_MIN;
	int32_t x603 = INT32_MIN;
	volatile uint8_t x604 = 6U;
	uint32_t t86 = 28U;

	t86 = (((x601*x602)+x603)*x604);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x605 = 2634U;
	int16_t x606 = 1070;
	static int8_t x608 = -1;
	volatile uint64_t t87 = 974631LLU;

	t87 = (((x605*x606)+x607)*x608);

	if (t87 != 18446744073706717137LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x609 = UINT32_MAX;
	uint16_t x610 = 17U;
	int16_t x611 = INT16_MIN;
	int32_t x612 = -50926;

	t88 = (((x609*x610)+x611)*x612);

	if (t88 != 1669608910U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x621 = INT16_MIN;
	uint64_t x623 = UINT64_MAX;
	static uint64_t t89 = 163628302LLU;

	t89 = (((x621*x622)+x623)*x624);

	if (t89 != 4161409LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x625 = INT32_MAX;
	volatile int32_t x626 = -1;
	int32_t x628 = -1;

	t90 = (((x625*x626)+x627)*x628);

	if (t90 != 2147702292LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x629 = 0U;
	static volatile uint16_t x630 = UINT16_MAX;
	static int32_t x632 = -27868760;
	volatile int64_t t91 = -90532362LL;

	t91 = (((x629*x630)+x631)*x632);

	if (t91 != 215212987636240LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x633 = 1U;
	uint8_t x634 = 8U;
	int8_t x635 = INT8_MAX;
	int8_t x636 = 1;
	int32_t t92 = -33;

	t92 = (((x633*x634)+x635)*x636);

	if (t92 != 135) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x639 = 15759380;
	static volatile uint64_t x640 = 134760143120033LLU;
	uint64_t t93 = 1790857520879399768LLU;

	t93 = (((x637*x638)+x639)*x640);

	if (t93 != 1807216203024201252LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x641 = -1;
	uint64_t x642 = UINT64_MAX;
	int64_t x644 = INT64_MIN;
	static volatile uint64_t t94 = 248505223855110906LLU;

	t94 = (((x641*x642)+x643)*x644);

	if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x645 = 0;
	int8_t x647 = 0;
	int8_t x648 = -1;
	uint64_t t95 = 643731702LLU;

	t95 = (((x645*x646)+x647)*x648);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x649 = INT8_MIN;
	int16_t x650 = 18;
	int16_t x652 = INT16_MAX;
	int32_t t96 = -131619988;

	t96 = (((x649*x650)+x651)*x652);

	if (t96 != -75527935) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x653 = 2375326U;
	static volatile uint8_t x654 = 8U;
	volatile uint16_t x655 = 1411U;
	static uint8_t x656 = 0U;
	volatile uint32_t t97 = 1U;

	t97 = (((x653*x654)+x655)*x656);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x657 = 35U;
	volatile int16_t x658 = INT16_MIN;
	int32_t x659 = -183977457;
	uint8_t x660 = 1U;
	volatile int32_t t98 = 5853;

	t98 = (((x657*x658)+x659)*x660);

	if (t98 != -185124337) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x661 = -1LL;
	volatile int32_t x662 = INT32_MAX;
	volatile uint8_t x663 = UINT8_MAX;
	int32_t x664 = INT32_MAX;

	t99 = (((x661*x662)+x663)*x664);

	if (t99 != -4611685466524090624LL) { NG(); } else { ; }
	
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

