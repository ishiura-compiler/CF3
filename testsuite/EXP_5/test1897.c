#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -1;
uint64_t t0 = 20008723055836LLU;
static uint64_t x22 = 64108262594144004LLU;
int16_t x24 = 10891;
volatile uint32_t x29 = UINT32_MAX;
int64_t t5 = -182027277390LL;
static int32_t x37 = INT32_MIN;
int16_t x38 = INT16_MIN;
volatile int32_t t6 = 1064701369;
static int32_t t7 = -5956976;
int64_t x49 = -105LL;
static volatile int64_t x50 = INT64_MIN;
int32_t x51 = INT32_MIN;
static volatile int64_t t8 = -444610815065591814LL;
volatile uint32_t t11 = 0U;
uint64_t x73 = 82534LLU;
static int32_t x77 = INT32_MIN;
int16_t x82 = -1;
int16_t x85 = INT16_MIN;
int8_t x90 = 31;
volatile uint64_t x102 = 1029271032769295550LLU;
int8_t x103 = INT8_MAX;
uint32_t x105 = UINT32_MAX;
int8_t x109 = 0;
uint32_t x111 = 236U;
uint8_t x112 = UINT8_MAX;
volatile uint32_t t23 = 7345451U;
int64_t x117 = -1LL;
static uint32_t x118 = 188883849U;
uint64_t x119 = UINT64_MAX;
int32_t x120 = -1;
volatile int64_t x121 = INT64_MIN;
uint32_t x125 = UINT32_MAX;
uint16_t x126 = 0U;
int32_t x131 = -394;
int8_t x132 = -1;
static volatile int8_t x148 = INT8_MAX;
static int32_t t32 = -627774475;
static int16_t x154 = INT16_MAX;
volatile int64_t x155 = -1LL;
uint32_t t35 = UINT32_MAX;
int32_t x166 = INT32_MIN;
volatile int32_t x169 = -94489;
int32_t x172 = INT32_MAX;
int32_t t37 = 12200;
int16_t x187 = 1;
uint32_t t41 = 10003U;
int8_t x199 = -1;
volatile int8_t x205 = 0;
int32_t x207 = -714678;
int64_t x210 = -1LL;
int32_t x213 = -1;
static int8_t x216 = INT8_MIN;
uint64_t t48 = UINT64_MAX;
int16_t x224 = 244;
volatile uint64_t t49 = 1703175880LLU;
int8_t x225 = 8;
int16_t x232 = INT16_MAX;
int64_t x233 = INT64_MIN;
static uint8_t x239 = 4U;
int8_t x240 = -1;
uint16_t x241 = UINT16_MAX;
static int32_t x257 = 10809;
int8_t x259 = 3;
static volatile int64_t t57 = -11195892647LL;
int64_t x265 = INT64_MAX;
uint64_t t62 = 7066419373227LLU;
volatile int16_t x294 = -1;
int32_t x298 = INT32_MIN;
static int64_t t65 = INT64_MAX;
int32_t x302 = INT32_MAX;
int64_t x304 = -113325LL;
uint32_t x306 = UINT32_MAX;
int8_t x307 = -1;
int64_t x316 = 66465374444731796LL;
int32_t x321 = INT32_MIN;
static uint64_t x322 = 29520904232337LLU;
uint8_t x326 = 15U;
volatile int16_t x327 = INT16_MIN;
volatile int32_t t71 = 7332;
uint8_t x333 = UINT8_MAX;
uint64_t x336 = UINT64_MAX;
int32_t x340 = INT32_MIN;
uint64_t x342 = 23432634755517LLU;
int32_t x343 = INT32_MAX;
static uint64_t t75 = 48981613LLU;
static int64_t x345 = INT64_MIN;
int8_t x367 = INT8_MAX;
volatile int64_t x370 = -1LL;
static uint32_t x371 = 20U;
static volatile int32_t x372 = INT32_MIN;
uint64_t t82 = UINT64_MAX;
int64_t x379 = INT64_MIN;
static int64_t x381 = -1LL;
uint8_t x390 = 12U;
int32_t x392 = 231;
static int64_t x396 = 44LL;
int64_t x405 = INT64_MIN;
static int8_t x406 = INT8_MAX;
uint64_t x420 = UINT64_MAX;
static uint16_t x421 = 2694U;
volatile uint32_t x430 = 32U;
uint64_t x431 = 768133064LLU;
volatile uint64_t t93 = 8340922375223LLU;
uint64_t x439 = 1559428934663353LLU;
int8_t x441 = 6;
int64_t x442 = -4314748050895LL;
volatile int64_t t96 = 0LL;
static int16_t x449 = 498;
int8_t x450 = 5;
int8_t x451 = -1;
int32_t t97 = -1372;
uint16_t x460 = 3352U;


void f0(void) {
	static volatile uint64_t x1 = 11569007113621LLU;
	int64_t x2 = -16417069LL;
	static int16_t x4 = -32;

	t0 = (x1|((x2|x3)*x4));

	if (t0 != 11569007113653LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 0U;
	uint8_t x10 = UINT8_MAX;
	static int8_t x11 = INT8_MIN;
	static int16_t x12 = INT16_MIN;
	static volatile int32_t t1 = -61;

	t1 = (x9|((x10|x11)*x12));

	if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	int32_t x14 = INT32_MIN;
	uint64_t x15 = 13945LLU;
	static int32_t x16 = INT32_MIN;
	uint64_t t2 = UINT64_MAX;

	t2 = (x13|((x14|x15)*x16));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 2331850862LLU;
	int8_t x23 = 1;
	uint64_t t3 = 47LLU;

	t3 = (x21|((x22|x23)*x24));

	if (t3 != 15673557185609071103LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x30 = 122LL;
	int32_t x31 = 5245759;
	static int32_t x32 = -1;
	volatile int64_t t4 = 2997630874706649LL;

	t4 = (x29|((x30|x31)*x32));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MIN;
	static uint32_t x36 = 3066216U;

	t5 = (x33|((x34|x35)*x36));

	if (t5 != -1689518080LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x39 = -5662;
	int8_t x40 = -2;

	t6 = (x37|((x38|x39)*x40));

	if (t6 != -2147472324) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x45 = 13U;
	int16_t x46 = 16242;
	int16_t x47 = INT16_MIN;
	volatile uint8_t x48 = UINT8_MAX;

	t7 = (x45|((x46|x47)*x48));

	if (t7 != -4214129) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x52 = 26U;

	t8 = (x49|((x50|x51)*x52));

	if (t8 != -105LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = INT8_MIN;
	uint16_t x54 = UINT16_MAX;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = 6;
	int32_t t9 = -23476295;

	t9 = (x53|((x54|x55)*x56));

	if (t9 != -6) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	int32_t x59 = INT32_MIN;
	volatile int8_t x60 = -1;
	volatile int32_t t10 = 4803197;

	t10 = (x57|((x58|x59)*x60));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MIN;
	volatile uint16_t x62 = 11076U;
	int8_t x63 = -1;
	uint32_t x64 = 319604U;

	t11 = (x61|((x62|x63)*x64));

	if (t11 != 4294942604U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x65 = UINT64_MAX;
	int8_t x66 = -15;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = UINT16_MAX;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x65|((x66|x67)*x68));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MIN;
	volatile int16_t x70 = INT16_MAX;
	uint64_t x71 = 167120100361703LLU;
	uint32_t x72 = 3U;
	uint64_t t13 = 21505985440373962LLU;

	t13 = (x69|((x70|x71)*x72));

	if (t13 != 9223873397155954685LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x74 = UINT64_MAX;
	static int64_t x75 = INT64_MIN;
	int8_t x76 = 3;
	static volatile uint64_t t14 = UINT64_MAX;

	t14 = (x73|((x74|x75)*x76));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x78 = UINT32_MAX;
	int64_t x79 = -1LL;
	int64_t x80 = -13705378794LL;
	static volatile int64_t t15 = -12LL;

	t15 = (x77|((x78|x79)*x80));

	if (t15 != -1327006742LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = 1;
	static int64_t x83 = INT64_MAX;
	int8_t x84 = -1;
	volatile int64_t t16 = -6071LL;

	t16 = (x81|((x82|x83)*x84));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x86 = 0U;
	uint16_t x87 = 1U;
	uint16_t x88 = UINT16_MAX;
	int32_t t17 = -21;

	t17 = (x85|((x86|x87)*x88));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x89 = INT32_MIN;
	int32_t x91 = -353738;
	static int8_t x92 = INT8_MIN;
	int32_t t18 = -217;

	t18 = (x89|((x90|x91)*x92));

	if (t18 != -2102206336) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = 15964117U;
	static int64_t x94 = -941496088371055LL;
	int64_t x95 = -73399285LL;
	int64_t x96 = 32LL;
	volatile int64_t t19 = 230285352134LL;

	t19 = (x93|((x94|x95)*x96));

	if (t19 != -134244363LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x97 = 589;
	int8_t x98 = 1;
	volatile int32_t x99 = -1;
	int16_t x100 = 0;
	volatile int32_t t20 = -232070952;

	t20 = (x97|((x98|x99)*x100));

	if (t20 != 589) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = 805258989187150980LL;
	int8_t x104 = INT8_MIN;
	static volatile uint64_t t21 = 77017987718LLU;

	t21 = (x101|((x102|x103)*x104));

	if (t21 != 15829585315765793924LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x106 = -1;
	uint16_t x107 = 1U;
	volatile uint16_t x108 = 334U;
	uint32_t t22 = UINT32_MAX;

	t22 = (x105|((x106|x107)*x108));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = INT8_MAX;

	t23 = (x109|((x110|x111)*x112));

	if (t23 != 65025U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MIN;
	int32_t x114 = INT32_MAX;
	uint32_t x115 = 2252924U;
	int8_t x116 = INT8_MIN;
	volatile uint32_t t24 = 5092197U;

	t24 = (x113|((x114|x115)*x116));

	if (t24 != 2147483776U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t t25 = UINT64_MAX;

	t25 = (x117|((x118|x119)*x120));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x122 = -1;
	int64_t x123 = INT64_MIN;
	int16_t x124 = -1;
	volatile int64_t t26 = -14091211898748909LL;

	t26 = (x121|((x122|x123)*x124));

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x127 = 771;
	uint64_t x128 = 443157LLU;
	uint64_t t27 = 9LLU;

	t27 = (x125|((x126|x127)*x128));

	if (t27 != 4294967295LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 0;
	uint16_t x130 = 31978U;
	volatile int32_t t28 = -8714613;

	t28 = (x129|((x130|x131)*x132));

	if (t28 != 258) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x133 = 1629342195417LL;
	volatile int32_t x134 = INT32_MIN;
	uint16_t x135 = 5716U;
	static volatile uint8_t x136 = 0U;
	static int64_t t29 = 1181800997029367346LL;

	t29 = (x133|((x134|x135)*x136));

	if (t29 != 1629342195417LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 241U;
	int8_t x138 = INT8_MIN;
	static uint32_t x139 = 258U;
	int32_t x140 = 592517160;
	volatile uint32_t t30 = 932644309U;

	t30 = (x137|((x138|x139)*x140));

	if (t30 != 2652249329U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MIN;
	volatile int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MIN;
	int32_t t31 = -13737;

	t31 = (x145|((x146|x147)*x148));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x149 = 1;
	int16_t x150 = INT16_MAX;
	uint8_t x151 = 62U;
	int16_t x152 = INT16_MIN;

	t32 = (x149|((x150|x151)*x152));

	if (t32 != -1073709055) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = INT32_MIN;
	int32_t x156 = -1;
	static int64_t t33 = 3151398702057451LL;

	t33 = (x153|((x154|x155)*x156));

	if (t33 != -2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x157 = 64935500LL;
	uint32_t x158 = 7U;
	volatile uint64_t x159 = 13106959100459LLU;
	volatile uint8_t x160 = 19U;
	static volatile uint64_t t34 = 259484LLU;

	t34 = (x157|((x158|x159)*x160));

	if (t34 != 249032270149501LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = -1;
	int16_t x162 = -1;
	uint32_t x163 = 65606666U;
	volatile int16_t x164 = INT16_MAX;

	t35 = (x161|((x162|x163)*x164));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x165 = 20779U;
	int8_t x167 = INT8_MIN;
	uint8_t x168 = 55U;
	int32_t t36 = 39;

	t36 = (x165|((x166|x167)*x168));

	if (t36 != -2645) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x170 = -1;
	static int8_t x171 = INT8_MAX;

	t37 = (x169|((x170|x171)*x172));

	if (t37 != -94489) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MIN;
	volatile int64_t x174 = -1LL;
	uint16_t x175 = 299U;
	static int16_t x176 = INT16_MIN;
	static int64_t t38 = 479265933561221LL;

	t38 = (x173|((x174|x175)*x176));

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = -130739;
	int8_t x179 = INT8_MAX;
	volatile uint32_t x180 = 704U;
	uint32_t t39 = 162027U;

	t39 = (x177|((x178|x179)*x180));

	if (t39 != 4202962240U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = 1;
	uint8_t x182 = 0U;
	int16_t x183 = -1;
	static int8_t x184 = 24;
	volatile int32_t t40 = -932301;

	t40 = (x181|((x182|x183)*x184));

	if (t40 != -23) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = -8;
	int8_t x186 = 6;
	uint32_t x188 = 61894906U;

	t41 = (x185|((x186|x187)*x188));

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = INT8_MAX;
	int64_t x194 = 4046514443343534LL;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t42 = 5529766223573507LLU;

	t42 = (x193|((x194|x195)*x196));

	if (t42 != 9219325522411432319LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = -5;
	int8_t x198 = -1;
	uint32_t x200 = 12U;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (x197|((x198|x199)*x200));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = 77U;
	int16_t x202 = INT16_MAX;
	static int16_t x203 = INT16_MIN;
	uint32_t x204 = UINT32_MAX;
	uint32_t t44 = 63U;

	t44 = (x201|((x202|x203)*x204));

	if (t44 != 77U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x206 = 1;
	uint32_t x208 = UINT32_MAX;
	uint32_t t45 = 124162U;

	t45 = (x205|((x206|x207)*x208));

	if (t45 != 714677U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x209 = -3;
	static int16_t x211 = -1;
	int16_t x212 = 1935;
	static volatile int64_t t46 = -314775825LL;

	t46 = (x209|((x210|x211)*x212));

	if (t46 != -3LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x214 = INT8_MIN;
	volatile int64_t x215 = -328LL;
	static int64_t t47 = -542600227785917636LL;

	t47 = (x213|((x214|x215)*x216));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = UINT64_MAX;
	volatile uint64_t x218 = UINT64_MAX;
	int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;

	t48 = (x217|((x218|x219)*x220));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x221 = 316354039252426496LLU;
	uint64_t x222 = UINT64_MAX;
	static int16_t x223 = -1;

	t49 = (x221|((x222|x223)*x224));

	if (t49 != 18446744073709551372LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x226 = 19956174507LLU;
	volatile uint16_t x227 = 4U;
	uint8_t x228 = 120U;
	uint64_t t50 = 6627LLU;

	t50 = (x225|((x226|x227)*x228));

	if (t50 != 2394740941320LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = INT32_MAX;
	int32_t x230 = 0;
	volatile int16_t x231 = -1;
	volatile int32_t t51 = -59;

	t51 = (x229|((x230|x231)*x232));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x234 = 0;
	int8_t x235 = -1;
	static int64_t x236 = -1058701704791549788LL;
	volatile int64_t t52 = -477LL;

	t52 = (x233|((x234|x235)*x236));

	if (t52 != -8164670332063226020LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = -1LL;
	int8_t x238 = -1;
	int64_t t53 = -46455396600219659LL;

	t53 = (x237|((x238|x239)*x240));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x242 = UINT8_MAX;
	int16_t x243 = INT16_MIN;
	volatile int16_t x244 = 1322;
	static volatile int32_t t54 = -600615380;

	t54 = (x241|((x242|x243)*x244));

	if (t54 != -42926081) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = 2U;
	volatile int16_t x246 = -4929;
	int8_t x247 = -1;
	uint8_t x248 = 108U;
	int32_t t55 = -19523534;

	t55 = (x245|((x246|x247)*x248));

	if (t55 != -106) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = UINT8_MAX;
	volatile uint32_t x254 = UINT32_MAX;
	uint8_t x255 = 16U;
	int16_t x256 = -1;
	volatile uint32_t t56 = 1630878U;

	t56 = (x253|((x254|x255)*x256));

	if (t56 != 255U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x258 = INT8_MIN;
	volatile int64_t x260 = 940LL;

	t57 = (x257|((x258|x259)*x260));

	if (t57 != -114883LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = -37;
	uint64_t x262 = UINT64_MAX;
	volatile int8_t x263 = -1;
	int32_t x264 = -1;
	volatile uint64_t t58 = 415LLU;

	t58 = (x261|((x262|x263)*x264));

	if (t58 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x266 = UINT16_MAX;
	uint32_t x267 = 21509663U;
	int64_t x268 = 202LL;
	static int64_t t59 = INT64_MAX;

	t59 = (x265|((x266|x267)*x268));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x269 = 3991U;
	static volatile uint64_t x270 = 154733724896400028LLU;
	uint32_t x271 = 16526U;
	volatile int32_t x272 = INT32_MAX;
	uint64_t t60 = 43273506864LLU;

	t60 = (x269|((x270|x271)*x272));

	if (t60 != 6878949149916966903LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x277 = INT32_MIN;
	int32_t x278 = -435079864;
	volatile int8_t x279 = -1;
	volatile int8_t x280 = 3;
	volatile int32_t t61 = -805;

	t61 = (x277|((x278|x279)*x280));

	if (t61 != -3) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x285 = INT16_MIN;
	uint8_t x286 = 57U;
	uint64_t x287 = 113242LLU;
	int64_t x288 = -18LL;

	t62 = (x285|((x286|x287)*x288));

	if (t62 != 18446744073709544282LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x289 = -78;
	int16_t x290 = INT16_MIN;
	uint8_t x291 = 4U;
	uint32_t x292 = 1067810114U;
	volatile uint32_t t63 = 478593186U;

	t63 = (x289|((x290|x291)*x292));

	if (t63 != 4294967226U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = -1;
	uint8_t x295 = 88U;
	volatile int8_t x296 = -1;
	static int32_t t64 = -88712;

	t64 = (x293|((x294|x295)*x296));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x297 = INT64_MAX;
	int64_t x299 = -1LL;
	static int32_t x300 = -11508827;

	t65 = (x297|((x298|x299)*x300));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x301 = INT16_MAX;
	int16_t x303 = 281;
	int64_t t66 = 107739493LL;

	t66 = (x301|((x302|x303)*x304));

	if (t66 != -243363584278529LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x305 = 105623378906374LLU;
	uint32_t x308 = 10506239U;
	volatile uint64_t t67 = 156557948LLU;

	t67 = (x305|((x306|x307)*x308));

	if (t67 != 105626130709767LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = 1599437LL;
	static int32_t x310 = -529;
	static int32_t x311 = INT32_MIN;
	uint64_t x312 = UINT64_MAX;
	uint64_t t68 = 15491899596123LLU;

	t68 = (x309|((x310|x311)*x312));

	if (t68 != 1599453LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = 2606463989016LL;
	int8_t x314 = INT8_MIN;
	static int8_t x315 = INT8_MIN;
	static int64_t t69 = -3206189294412LL;

	t69 = (x313|((x314|x315)*x316));

	if (t69 != -8507565365633665256LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x323 = 1;
	static int32_t x324 = INT32_MAX;
	uint64_t t70 = 519030969LLU;

	t70 = (x321|((x322|x323)*x324));

	if (t70 != 18446744072115544687LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x325 = 50U;
	volatile int16_t x328 = INT16_MAX;

	t71 = (x325|((x326|x327)*x328));

	if (t71 != -1073217549) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x329 = -1952138055458564311LL;
	int64_t x330 = INT64_MIN;
	int8_t x331 = 1;
	volatile uint64_t x332 = 1774LLU;
	volatile uint64_t t72 = 1896633074589LLU;

	t72 = (x329|((x330|x331)*x332));

	if (t72 != 16494606018250987503LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x334 = INT16_MAX;
	int64_t x335 = -51160426874698LL;
	static volatile uint64_t t73 = 129203962558664LLU;

	t73 = (x333|((x334|x335)*x336));

	if (t73 != 51160426873087LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x337 = INT32_MIN;
	uint64_t x338 = 521LLU;
	int16_t x339 = -1;
	volatile uint64_t t74 = 19LLU;

	t74 = (x337|((x338|x339)*x340));

	if (t74 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x341 = 1774;
	static uint16_t x344 = 1430U;

	t75 = (x341|((x342|x343)*x344));

	if (t75 != 33509678440775406LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x346 = INT32_MIN;
	volatile uint64_t x347 = UINT64_MAX;
	int16_t x348 = INT16_MIN;
	volatile uint64_t t76 = 29671058LLU;

	t76 = (x345|((x346|x347)*x348));

	if (t76 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = 9318322104819LL;
	static int32_t x350 = INT32_MAX;
	volatile int16_t x351 = 0;
	volatile uint32_t x352 = UINT32_MAX;
	static int64_t t77 = 16143104746055783LL;

	t77 = (x349|((x350|x351)*x352));

	if (t77 != 9318322104819LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x357 = 217643720327LLU;
	static uint64_t x358 = UINT64_MAX;
	int64_t x359 = -1LL;
	int32_t x360 = -261199;
	uint64_t t78 = 116LLU;

	t78 = (x357|((x358|x359)*x360));

	if (t78 != 217643744975LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x361 = INT64_MIN;
	static volatile int32_t x362 = INT32_MIN;
	static uint64_t x363 = 288348072598LLU;
	volatile int64_t x364 = -1LL;
	volatile uint64_t t79 = 1154507449574435224LLU;

	t79 = (x361|((x362|x363)*x364));

	if (t79 != 9223372038416995690LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = INT32_MIN;
	int64_t x366 = -1LL;
	volatile int8_t x368 = INT8_MIN;
	int64_t t80 = 16521LL;

	t80 = (x365|((x366|x367)*x368));

	if (t80 != -2147483520LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x369 = INT16_MIN;
	volatile int64_t t81 = -993LL;

	t81 = (x369|((x370|x371)*x372));

	if (t81 != -32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x373 = UINT64_MAX;
	volatile int16_t x374 = -1;
	int16_t x375 = -239;
	int8_t x376 = -4;

	t82 = (x373|((x374|x375)*x376));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x377 = -22;
	int64_t x378 = -78338823020094952LL;
	static volatile uint64_t x380 = UINT64_MAX;
	volatile uint64_t t83 = 96LLU;

	t83 = (x377|((x378|x379)*x380));

	if (t83 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x382 = 1425LLU;
	volatile int64_t x383 = 100662773LL;
	uint8_t x384 = 25U;
	uint64_t t84 = UINT64_MAX;

	t84 = (x381|((x382|x383)*x384));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = INT16_MIN;
	volatile int16_t x386 = INT16_MIN;
	uint16_t x387 = UINT16_MAX;
	uint64_t x388 = 15LLU;
	uint64_t t85 = 1754814628LLU;

	t85 = (x385|((x386|x387)*x388));

	if (t85 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = 3360U;
	static volatile uint32_t x391 = UINT32_MAX;
	uint32_t t86 = 967212U;

	t86 = (x389|((x390|x391)*x392));

	if (t86 != 4294967097U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = 4102437LL;
	int64_t x395 = 0LL;
	static int64_t t87 = 195617LL;

	t87 = (x393|((x394|x395)*x396));

	if (t87 != -36LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x397 = -1LL;
	int8_t x398 = INT8_MIN;
	static uint32_t x399 = 8077520U;
	volatile uint16_t x400 = 13348U;
	int64_t t88 = -3LL;

	t88 = (x397|((x398|x399)*x400));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x407 = 59691851367592LLU;
	static int8_t x408 = 0;
	uint64_t t89 = 1857030308612433749LLU;

	t89 = (x405|((x406|x407)*x408));

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x409 = 997LLU;
	uint32_t x410 = UINT32_MAX;
	static int8_t x411 = INT8_MIN;
	uint32_t x412 = 116137U;
	volatile uint64_t t90 = 0LLU;

	t90 = (x409|((x410|x411)*x412));

	if (t90 != 4294851575LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x417 = -1;
	int64_t x418 = 9LL;
	int16_t x419 = -61;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x417|((x418|x419)*x420));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x422 = UINT64_MAX;
	volatile int8_t x423 = INT8_MIN;
	uint8_t x424 = 22U;
	uint64_t t92 = 15LLU;

	t92 = (x421|((x422|x423)*x424));

	if (t92 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = INT32_MIN;
	volatile uint16_t x432 = 236U;

	t93 = (x429|((x430|x431)*x432));

	if (t93 != 18446744072452852192LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x437 = -1;
	int8_t x438 = INT8_MIN;
	volatile int16_t x440 = -996;
	uint64_t t94 = UINT64_MAX;

	t94 = (x437|((x438|x439)*x440));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x443 = UINT64_MAX;
	static uint32_t x444 = 64995U;
	static uint64_t t95 = 184405450LLU;

	t95 = (x441|((x442|x443)*x444));

	if (t95 != 18446744073709486623LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = -1649;
	int64_t x446 = INT64_MAX;
	volatile uint16_t x447 = UINT16_MAX;
	int16_t x448 = -1;

	t96 = (x445|((x446|x447)*x448));

	if (t96 != -1649LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x452 = 0U;

	t97 = (x449|((x450|x451)*x452));

	if (t97 != 498) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = INT32_MIN;
	int16_t x454 = INT16_MIN;
	volatile int64_t x455 = -1LL;
	int32_t x456 = -1;
	volatile int64_t t98 = 8084982137LL;

	t98 = (x453|((x454|x455)*x456));

	if (t98 != -2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x457 = INT64_MAX;
	uint8_t x458 = 0U;
	int16_t x459 = -263;
	volatile int64_t t99 = 382467283954288LL;

	t99 = (x457|((x458|x459)*x460));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

