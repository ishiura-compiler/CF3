#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x11 = INT8_MIN;
volatile int32_t t1 = 32;
static uint64_t x15 = UINT64_MAX;
volatile uint64_t t2 = 106LLU;
static int16_t x18 = INT16_MIN;
static volatile uint64_t t3 = 1LLU;
volatile uint8_t x27 = 13U;
int64_t x31 = -1LL;
static int8_t x32 = -1;
volatile int64_t t6 = 888249766LL;
int32_t x46 = -420;
int64_t x68 = INT64_MIN;
uint16_t x70 = UINT16_MAX;
int64_t x76 = -1LL;
volatile int64_t t12 = -6544611963922809LL;
static int32_t x79 = INT32_MIN;
static int64_t x80 = INT64_MIN;
static int32_t x87 = 1;
static volatile uint64_t t15 = 2826138849496LLU;
volatile uint64_t t16 = 229975LLU;
volatile int32_t x93 = INT32_MIN;
static uint64_t x96 = 530838558LLU;
uint64_t t17 = 166871545102677161LLU;
int32_t x111 = 10;
int32_t t22 = 7899384;
uint16_t x122 = UINT16_MAX;
int16_t x124 = 9;
int16_t x126 = INT16_MAX;
int8_t x130 = INT8_MIN;
int8_t x147 = INT8_MAX;
int8_t x158 = INT8_MAX;
int16_t x166 = INT16_MIN;
int8_t x170 = INT8_MIN;
static uint64_t t36 = 3087365020191943LLU;
volatile int32_t t39 = 22;
volatile uint64_t t43 = 2673639920059833LLU;
int8_t x208 = 1;
uint8_t x214 = UINT8_MAX;
static uint64_t t46 = 1068197375LLU;
volatile int16_t x220 = INT16_MAX;
static int32_t x222 = INT32_MIN;
static int64_t t48 = -65153LL;
volatile uint64_t x236 = 75532855LLU;
uint16_t x241 = 1817U;
uint32_t x243 = 44U;
static int64_t x248 = INT64_MIN;
int32_t t54 = -8135403;
uint8_t x259 = 7U;
volatile int64_t t56 = -1545689331822LL;
int16_t x266 = INT16_MIN;
uint8_t x269 = 0U;
uint8_t x271 = UINT8_MAX;
static int64_t x273 = -1LL;
uint8_t x275 = 1U;
uint16_t x277 = UINT16_MAX;
uint64_t x281 = 97186855546LLU;
int8_t x283 = INT8_MAX;
volatile int32_t x287 = INT32_MAX;
uint16_t x288 = 1751U;
int32_t x290 = -1;
int32_t x291 = INT32_MIN;
int8_t x293 = -3;
volatile int16_t x304 = -6298;
volatile int8_t x306 = INT8_MIN;
volatile uint32_t x308 = 73U;
int16_t x310 = INT16_MIN;
volatile int32_t t71 = -396604;
int32_t x326 = 571297907;
uint32_t x329 = 0U;
volatile uint64_t x335 = 292434632717886LLU;
int32_t x341 = -29;
int8_t x342 = 1;
int32_t x348 = -1;
int64_t t78 = 2197544330717318963LL;
uint8_t x357 = UINT8_MAX;
int32_t x363 = -421975;
static int8_t x367 = INT8_MIN;
uint8_t x369 = 1U;
int64_t x371 = INT64_MAX;
volatile int64_t x373 = INT64_MIN;
volatile uint8_t x384 = 14U;
static int64_t x398 = 115330874LL;
volatile int16_t x400 = -31;
volatile uint64_t x408 = UINT64_MAX;
uint32_t x409 = 20075326U;
int16_t x410 = INT16_MIN;
uint32_t x411 = 2635U;
volatile uint32_t t90 = 6U;
int8_t x415 = 0;
static uint32_t x416 = 23U;
static uint32_t x419 = UINT32_MAX;
int64_t x423 = INT64_MIN;
int32_t x425 = INT32_MIN;
static volatile int32_t x431 = 240;
int8_t x441 = INT8_MAX;
int64_t x443 = INT64_MIN;
int16_t x450 = INT16_MIN;
static int16_t x451 = -1;


void f0(void) {
	uint8_t x1 = 1U;
	int64_t x2 = 1LL;
	int32_t x3 = 693968;
	static int16_t x4 = 0;
	int64_t t0 = -7LL;

	t0 = (x1*(x2|(x3|x4)));

	if (t0 != 693969LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MAX;
	static int16_t x12 = INT16_MIN;

	t1 = (x9*(x10|(x11|x12)));

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	uint32_t x14 = UINT32_MAX;
	int32_t x16 = -1492;

	t2 = (x13*(x14|(x15|x16)));

	if (t2 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 346LLU;
	uint8_t x19 = 5U;
	int16_t x20 = -1;

	t3 = (x17*(x18|(x19|x20)));

	if (t3 != 18446744073709551270LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = UINT16_MAX;
	uint64_t x22 = 2218345456168304793LLU;
	static int8_t x23 = INT8_MIN;
	int8_t x24 = -3;
	static volatile uint64_t t4 = 3247643471LLU;

	t4 = (x21*(x22|(x23|x24)));

	if (t4 != 18446744073709355011LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 113U;
	static int8_t x26 = INT8_MAX;
	static uint8_t x28 = 3U;
	int32_t t5 = 1478234;

	t5 = (x25*(x26|(x27|x28)));

	if (t5 != 14351) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	uint8_t x30 = 89U;

	t6 = (x29*(x30|(x31|x32)));

	if (t6 != 2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x45 = -1LL;
	int16_t x47 = INT16_MAX;
	int16_t x48 = -3689;
	int64_t t7 = 630435454648LL;

	t7 = (x45*(x46|(x47|x48)));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x57 = -2;
	volatile uint32_t x58 = 18U;
	int32_t x59 = -2552019;
	int16_t x60 = INT16_MAX;
	static uint32_t t8 = 2U;

	t8 = (x57*(x58|(x59|x60)));

	if (t8 != 5046274U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x61 = UINT64_MAX;
	int64_t x62 = INT64_MIN;
	int32_t x63 = 192625;
	uint64_t x64 = 71642LLU;
	uint64_t t9 = 2568268498456517470LLU;

	t9 = (x61*(x62|(x63|x64)));

	if (t9 != 9223372036854515717LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x65 = INT32_MAX;
	uint64_t x66 = 0LLU;
	uint64_t x67 = 447449664LLU;
	uint64_t t10 = 16189LLU;

	t10 = (x65*(x66|(x67|x68)));

	if (t10 != 10184262873150420416LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x69 = 994LLU;
	int16_t x71 = -1;
	static uint16_t x72 = UINT16_MAX;
	uint64_t t11 = 5868273529156027LLU;

	t11 = (x69*(x70|(x71|x72)));

	if (t11 != 18446744073709550622LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x73 = 3527U;
	static volatile int32_t x74 = INT32_MAX;
	uint32_t x75 = UINT32_MAX;

	t12 = (x73*(x74|(x75|x76)));

	if (t12 != -3527LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x77 = INT16_MIN;
	uint16_t x78 = 4103U;
	volatile int64_t t13 = 544726345181605331LL;

	t13 = (x77*(x78|(x79|x80)));

	if (t13 != 70368609730560LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x81 = 168U;
	volatile int8_t x82 = INT8_MIN;
	static volatile int16_t x83 = INT16_MAX;
	uint8_t x84 = 26U;
	volatile uint32_t t14 = 120751310U;

	t14 = (x81*(x82|(x83|x84)));

	if (t14 != 4294967128U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x85 = -3322;
	volatile uint64_t x86 = 258719LLU;
	uint64_t x88 = 0LLU;

	t15 = (x85*(x86|(x87|x88)));

	if (t15 != 18446744072850087098LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = UINT16_MAX;
	volatile uint64_t x90 = 1008120253119800560LLU;
	volatile int64_t x91 = INT64_MIN;
	static uint16_t x92 = 28428U;

	t16 = (x89*(x90|(x91|x92)));

	if (t16 != 146888216629645316LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x94 = 11;
	int64_t x95 = INT64_MIN;

	t17 = (x93*(x94|(x95|x96)));

	if (t17 != 17306776948529168384LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MAX;
	static volatile int64_t x98 = -3496428137LL;
	static uint8_t x99 = 5U;
	volatile int32_t x100 = -1;
	int64_t t18 = 261453745917192909LL;

	t18 = (x97*(x98|(x99|x100)));

	if (t18 != -127LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = 7718507;
	int8_t x102 = INT8_MAX;
	static int32_t x103 = 1;
	volatile uint32_t x104 = 43U;
	volatile uint32_t t19 = 891185U;

	t19 = (x101*(x102|(x103|x104)));

	if (t19 != 980250389U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x105 = 45229;
	int16_t x106 = INT16_MIN;
	volatile int64_t x107 = 1180461906612907LL;
	int8_t x108 = INT8_MIN;
	volatile int64_t t20 = -3896263703748410203LL;

	t20 = (x105*(x106|(x107|x108)));

	if (t20 != -3844465LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x109 = -28;
	volatile uint64_t x110 = 46225065488311LLU;
	static int8_t x112 = -1;
	uint64_t t21 = 6391563932563184841LLU;

	t21 = (x109*(x110|(x111|x112)));

	if (t21 != 28LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MAX;
	int16_t x120 = -4310;

	t22 = (x117*(x118|(x119|x120)));

	if (t22 != -65535) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x121 = INT16_MAX;
	int64_t x123 = -33LL;
	volatile int64_t t23 = 2LL;

	t23 = (x121*(x122|(x123|x124)));

	if (t23 != -32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x125 = 4U;
	int32_t x127 = -1;
	int32_t x128 = INT32_MIN;
	static int32_t t24 = -32;

	t24 = (x125*(x126|(x127|x128)));

	if (t24 != -4) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = 7873;
	int64_t x131 = INT64_MAX;
	static volatile uint16_t x132 = 23U;
	int64_t t25 = 12LL;

	t25 = (x129*(x130|(x131|x132)));

	if (t25 != -7873LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = -3;
	volatile uint8_t x134 = 1U;
	uint8_t x135 = 1U;
	static uint16_t x136 = UINT16_MAX;
	volatile int32_t t26 = 4102;

	t26 = (x133*(x134|(x135|x136)));

	if (t26 != -196605) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = -1;
	int64_t x139 = INT64_MIN;
	int64_t x140 = -1LL;
	volatile int64_t t27 = -1109703819344444268LL;

	t27 = (x137*(x138|(x139|x140)));

	if (t27 != 2147483648LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x141 = UINT64_MAX;
	uint8_t x142 = 1U;
	int64_t x143 = INT64_MAX;
	int64_t x144 = INT64_MAX;
	uint64_t t28 = 121595780284LLU;

	t28 = (x141*(x142|(x143|x144)));

	if (t28 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x145 = -1;
	static int8_t x146 = 44;
	int32_t x148 = 730088;
	volatile int32_t t29 = -1170780;

	t29 = (x145*(x146|(x147|x148)));

	if (t29 != -730111) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x149 = INT32_MIN;
	int32_t x150 = INT32_MAX;
	int64_t x151 = -1LL;
	int64_t x152 = 774616LL;
	volatile int64_t t30 = 50685294133028LL;

	t30 = (x149*(x150|(x151|x152)));

	if (t30 != 2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x153 = 35597274673508LLU;
	volatile uint8_t x154 = 124U;
	uint64_t x155 = 10954052134349236LLU;
	static int8_t x156 = INT8_MIN;
	uint64_t t31 = 4523140753668253LLU;

	t31 = (x153*(x154|(x155|x156)));

	if (t31 != 18446601684610857584LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x157 = -1;
	volatile uint32_t x159 = 297685751U;
	int64_t x160 = INT64_MIN;
	static volatile int64_t t32 = 1LL;

	t32 = (x157*(x158|(x159|x160)));

	if (t32 != 9223372036557090049LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MIN;
	static int64_t x162 = 29331LL;
	uint64_t x163 = UINT64_MAX;
	uint8_t x164 = 16U;
	uint64_t t33 = 17875820281231720LLU;

	t33 = (x161*(x162|(x163|x164)));

	if (t33 != 128LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x165 = INT8_MIN;
	int8_t x167 = 0;
	uint64_t x168 = UINT64_MAX;
	uint64_t t34 = 124377227125LLU;

	t34 = (x165*(x166|(x167|x168)));

	if (t34 != 128LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = -1044219153;
	int16_t x171 = INT16_MIN;
	int64_t x172 = INT64_MAX;
	volatile int64_t t35 = 10617741358837454LL;

	t35 = (x169*(x170|(x171|x172)));

	if (t35 != 1044219153LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = INT8_MAX;
	uint64_t x174 = UINT64_MAX;
	volatile int8_t x175 = -1;
	int8_t x176 = 7;

	t36 = (x173*(x174|(x175|x176)));

	if (t36 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = 90U;
	uint32_t x178 = 8U;
	int16_t x179 = -1;
	static uint16_t x180 = UINT16_MAX;
	static volatile uint32_t t37 = 749985U;

	t37 = (x177*(x178|(x179|x180)));

	if (t37 != 4294967206U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x181 = 7U;
	int16_t x182 = INT16_MIN;
	int32_t x183 = -468047;
	int16_t x184 = INT16_MAX;
	volatile int32_t t38 = -195871925;

	t38 = (x181*(x182|(x183|x184)));

	if (t38 != -7) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x185 = -1;
	int32_t x186 = -1;
	static volatile int16_t x187 = INT16_MAX;
	int32_t x188 = INT32_MIN;

	t39 = (x185*(x186|(x187|x188)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = -1;
	int64_t x190 = INT64_MAX;
	static volatile uint64_t x191 = 81673572294104744LLU;
	static uint8_t x192 = 2U;
	uint64_t t40 = 409329LLU;

	t40 = (x189*(x190|(x191|x192)));

	if (t40 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = -4;
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MIN;
	uint32_t x196 = 258200U;
	volatile uint32_t t41 = 719728983U;

	t41 = (x193*(x194|(x195|x196)));

	if (t41 != 4U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x197 = -1LL;
	int16_t x198 = -1;
	uint8_t x199 = 16U;
	volatile uint32_t x200 = 62275U;
	static int64_t t42 = 152683546942875654LL;

	t42 = (x197*(x198|(x199|x200)));

	if (t42 != -4294967295LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MAX;
	int64_t x202 = 7293762LL;
	int8_t x203 = INT8_MIN;
	uint64_t x204 = UINT64_MAX;

	t43 = (x201*(x202|(x203|x204)));

	if (t43 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x205 = INT16_MIN;
	volatile int64_t x206 = INT64_MIN;
	uint64_t x207 = 135368658455364865LLU;
	static uint64_t t44 = 52613LLU;

	t44 = (x205*(x206|(x207|x208)));

	if (t44 != 9905121498606043136LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x209 = 5U;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 6U;
	uint64_t x212 = 10942LLU;
	uint64_t t45 = 1032799006649924LLU;

	t45 = (x209*(x210|(x211|x212)));

	if (t45 != 18446744073709442486LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = -1;
	uint8_t x215 = 32U;
	uint64_t x216 = 764674873415343LLU;

	t46 = (x213*(x214|(x215|x216)));

	if (t46 != 18445979398836136193LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x217 = 278817277LLU;
	volatile int64_t x218 = -36936206LL;
	static int8_t x219 = INT8_MAX;
	static uint64_t t47 = 109654986754LLU;

	t47 = (x217*(x218|(x219|x220)));

	if (t47 != 18436447480762340867LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = -1;
	int64_t x223 = INT64_MAX;
	int32_t x224 = INT32_MAX;

	t48 = (x221*(x222|(x223|x224)));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = 0U;
	static int64_t x226 = -1LL;
	volatile uint8_t x227 = UINT8_MAX;
	static volatile int32_t x228 = INT32_MIN;
	static volatile int64_t t49 = 420316LL;

	t49 = (x225*(x226|(x227|x228)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = INT16_MIN;
	volatile int32_t x230 = INT32_MAX;
	int64_t x231 = INT64_MIN;
	int32_t x232 = INT32_MIN;
	volatile int64_t t50 = -738849686250LL;

	t50 = (x229*(x230|(x231|x232)));

	if (t50 != 32768LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x233 = 21;
	volatile int16_t x234 = INT16_MIN;
	volatile int16_t x235 = INT16_MIN;
	volatile uint64_t t51 = 1409176668454LLU;

	t51 = (x233*(x234|(x235|x236)));

	if (t51 != 18446744073708918403LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x242 = INT16_MIN;
	int8_t x244 = INT8_MAX;
	uint32_t t52 = 8356790U;

	t52 = (x241*(x242|(x243|x244)));

	if (t52 != 4235658599U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x245 = UINT32_MAX;
	int32_t x246 = -1;
	uint32_t x247 = UINT32_MAX;
	static int64_t t53 = 152164LL;

	t53 = (x245*(x246|(x247|x248)));

	if (t53 != -4294967295LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x253 = -1117;
	int32_t x254 = INT32_MAX;
	int8_t x255 = -1;
	int8_t x256 = -1;

	t54 = (x253*(x254|(x255|x256)));

	if (t54 != 1117) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = INT16_MIN;
	volatile int32_t x258 = -1;
	static uint32_t x260 = 7953U;
	volatile uint32_t t55 = 3U;

	t55 = (x257*(x258|(x259|x260)));

	if (t55 != 32768U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x261 = 1377193521U;
	uint32_t x262 = UINT32_MAX;
	static int64_t x263 = INT64_MIN;
	int8_t x264 = INT8_MIN;

	t56 = (x261*(x262|(x263|x264)));

	if (t56 != -1377193521LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x265 = INT16_MIN;
	static uint64_t x267 = 1902848471326470272LLU;
	int16_t x268 = 17;
	uint64_t t57 = 6404038596562809618LLU;

	t57 = (x265*(x266|(x267|x268)));

	if (t57 != 666337280LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x270 = 111461LL;
	int32_t x272 = INT32_MAX;
	int64_t t58 = 187484657618LL;

	t58 = (x269*(x270|(x271|x272)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x274 = INT64_MAX;
	int16_t x276 = 1451;
	int64_t t59 = 455468227163152439LL;

	t59 = (x273*(x274|(x275|x276)));

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x278 = 224U;
	uint8_t x279 = UINT8_MAX;
	volatile int8_t x280 = INT8_MAX;
	volatile int32_t t60 = 0;

	t60 = (x277*(x278|(x279|x280)));

	if (t60 != 16711425) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x282 = 11U;
	uint16_t x284 = UINT16_MAX;
	uint64_t t61 = 379716768473877LLU;

	t61 = (x281*(x282|(x283|x284)));

	if (t61 != 6369140578207110LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x285 = 0U;
	int32_t x286 = INT32_MIN;
	volatile int32_t t62 = 92449;

	t62 = (x285*(x286|(x287|x288)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x289 = -1;
	int32_t x292 = 7659891;
	int32_t t63 = -2;

	t63 = (x289*(x290|(x291|x292)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x294 = -43;
	static int16_t x295 = INT16_MIN;
	volatile int32_t x296 = INT32_MAX;
	volatile int32_t t64 = 62;

	t64 = (x293*(x294|(x295|x296)));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x297 = -850549617LL;
	int32_t x298 = INT32_MIN;
	int16_t x299 = 113;
	int16_t x300 = -3505;
	volatile int64_t t65 = 55890011304358834LL;

	t65 = (x297*(x298|(x299|x300)));

	if (t65 != 2940350025969LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x301 = 4U;
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = 3746;
	volatile int32_t t66 = -640472;

	t66 = (x301*(x302|(x303|x304)));

	if (t66 != -16388) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x305 = 11360884LLU;
	int32_t x307 = -523317;
	volatile uint64_t t67 = 239636767175LLU;

	t67 = (x305*(x306|(x307|x308)));

	if (t67 != 48794624631522812LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x309 = 0U;
	int32_t x311 = INT32_MAX;
	volatile int64_t x312 = INT64_MIN;
	volatile int64_t t68 = -156300982LL;

	t68 = (x309*(x310|(x311|x312)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x313 = INT64_MAX;
	volatile uint64_t x314 = 84321338LLU;
	int32_t x315 = 221131;
	static int64_t x316 = INT64_MIN;
	volatile uint64_t t69 = 2117826794745LLU;

	t69 = (x313*(x314|(x315|x316)));

	if (t69 != 18446744073625141253LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x317 = INT16_MAX;
	volatile uint32_t x318 = 48372189U;
	int16_t x319 = 210;
	int8_t x320 = -1;
	volatile uint32_t t70 = 91733456U;

	t70 = (x317*(x318|(x319|x320)));

	if (t70 != 4294934529U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = 24;
	int8_t x322 = 58;
	volatile uint8_t x323 = 0U;
	int8_t x324 = 1;

	t71 = (x321*(x322|(x323|x324)));

	if (t71 != 1416) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x325 = -12LL;
	volatile int32_t x327 = -1916;
	int32_t x328 = INT32_MIN;
	int64_t t72 = 2592183844424LL;

	t72 = (x325*(x326|(x327|x328)));

	if (t72 != 21612LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x330 = UINT32_MAX;
	uint16_t x331 = 11614U;
	int8_t x332 = 3;
	uint32_t t73 = 3233U;

	t73 = (x329*(x330|(x331|x332)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x333 = INT8_MIN;
	uint8_t x334 = UINT8_MAX;
	int8_t x336 = -1;
	volatile uint64_t t74 = 63340074077LLU;

	t74 = (x333*(x334|(x335|x336)));

	if (t74 != 128LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x337 = 43;
	int16_t x338 = 13;
	int64_t x339 = INT64_MIN;
	int32_t x340 = INT32_MIN;
	volatile int64_t t75 = 3757950201LL;

	t75 = (x337*(x338|(x339|x340)));

	if (t75 != -92341796305LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x343 = 171287347U;
	int32_t x344 = INT32_MIN;
	uint32_t t76 = 0U;

	t76 = (x341*(x342|(x343|x344)));

	if (t76 != 1475117881U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x345 = 91U;
	int32_t x346 = -9;
	int16_t x347 = 6;
	volatile int32_t t77 = -190;

	t77 = (x345*(x346|(x347|x348)));

	if (t77 != -91) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x349 = 0U;
	static int32_t x350 = INT32_MAX;
	volatile int64_t x351 = INT64_MIN;
	int32_t x352 = 2;

	t78 = (x349*(x350|(x351|x352)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x358 = INT32_MIN;
	int8_t x359 = -12;
	int8_t x360 = -1;
	int32_t t79 = 214828122;

	t79 = (x357*(x358|(x359|x360)));

	if (t79 != -255) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x361 = 19LLU;
	int64_t x362 = 1LL;
	static uint8_t x364 = 26U;
	uint64_t t80 = 16571508603LLU;

	t80 = (x361*(x362|(x363|x364)));

	if (t80 != 18446744073701534433LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = INT16_MIN;
	uint64_t x366 = UINT64_MAX;
	static int16_t x368 = INT16_MIN;
	static uint64_t t81 = 13956LLU;

	t81 = (x365*(x366|(x367|x368)));

	if (t81 != 32768LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x370 = INT32_MIN;
	int8_t x372 = INT8_MIN;
	int64_t t82 = 294383020744527LL;

	t82 = (x369*(x370|(x371|x372)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x374 = UINT64_MAX;
	volatile int32_t x375 = -1;
	int64_t x376 = INT64_MAX;
	volatile uint64_t t83 = 117LLU;

	t83 = (x373*(x374|(x375|x376)));

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x377 = 94LLU;
	static int16_t x378 = 31;
	static int32_t x379 = INT32_MIN;
	static uint32_t x380 = 31404U;
	uint64_t t84 = 5731538864238914042LLU;

	t84 = (x377*(x378|(x379|x380)));

	if (t84 != 201866416674LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = UINT32_MAX;
	static uint8_t x382 = UINT8_MAX;
	int8_t x383 = INT8_MIN;
	uint32_t t85 = 593438803U;

	t85 = (x381*(x382|(x383|x384)));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x389 = 1536U;
	static int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MAX;
	int32_t x392 = -1;
	uint32_t t86 = 13U;

	t86 = (x389*(x390|(x391|x392)));

	if (t86 != 4294965760U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = INT32_MAX;
	int32_t x399 = INT32_MIN;
	int64_t t87 = -5022852923473314LL;

	t87 = (x397*(x398|(x399|x400)));

	if (t87 != -10737418235LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = 6;
	uint64_t x402 = 10987LLU;
	volatile int16_t x403 = INT16_MIN;
	int16_t x404 = 332;
	static volatile uint64_t t88 = 3091LLU;

	t88 = (x401*(x402|(x403|x404)));

	if (t88 != 18446744073709422490LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x405 = 175;
	int64_t x406 = -1LL;
	static int16_t x407 = INT16_MIN;
	static uint64_t t89 = 1285LLU;

	t89 = (x405*(x406|(x407|x408)));

	if (t89 != 18446744073709551441LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x412 = INT8_MIN;

	t90 = (x409*(x410|(x411|x412)));

	if (t90 != 3230975018U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x413 = 964U;
	static int16_t x414 = INT16_MAX;
	volatile uint32_t t91 = 212282244U;

	t91 = (x413*(x414|(x415|x416)));

	if (t91 != 31587388U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x417 = UINT64_MAX;
	uint64_t x418 = 7847058048978613050LLU;
	uint16_t x420 = 1824U;
	volatile uint64_t t92 = 246431544287705707LLU;

	t92 = (x417*(x418|(x419|x420)));

	if (t92 != 10599686021866061825LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x421 = UINT16_MAX;
	volatile uint32_t x422 = 6815U;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t93 = 239862778LLU;

	t93 = (x421*(x422|(x423|x424)));

	if (t93 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x426 = -1;
	int64_t x427 = 274194643180240496LL;
	volatile int8_t x428 = -1;
	int64_t t94 = -101121887LL;

	t94 = (x425*(x426|(x427|x428)));

	if (t94 != 2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x429 = -1;
	volatile uint64_t x430 = 414475969116149LLU;
	uint8_t x432 = 2U;
	volatile uint64_t t95 = 33090675409925992LLU;

	t95 = (x429*(x430|(x431|x432)));

	if (t95 != 18446329597740435465LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x433 = 28;
	int8_t x434 = INT8_MIN;
	int32_t x435 = -2794;
	volatile int64_t x436 = 3220587210815590LL;
	volatile int64_t t96 = -387496394960183LL;

	t96 = (x433*(x434|(x435|x436)));

	if (t96 != -280LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x442 = -11356LL;
	uint64_t x444 = 133395LLU;
	uint64_t t97 = 2508295701LLU;

	t97 = (x441*(x442|(x443|x444)));

	if (t97 != 18446744073708371913LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x445 = 0;
	int32_t x446 = INT32_MAX;
	static volatile uint16_t x447 = 1282U;
	uint64_t x448 = 45493818640LLU;
	volatile uint64_t t98 = 54115LLU;

	t98 = (x445*(x446|(x447|x448)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x449 = UINT64_MAX;
	uint16_t x452 = 5U;
	volatile uint64_t t99 = 10285466513LLU;

	t99 = (x449*(x450|(x451|x452)));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

