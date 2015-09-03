#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x16 = 318U;
uint64_t x17 = UINT64_MAX;
uint64_t x20 = UINT64_MAX;
static int64_t x21 = -1448LL;
volatile int32_t x22 = INT32_MIN;
int16_t x23 = INT16_MIN;
uint8_t x24 = 14U;
int32_t x27 = -1;
uint64_t t6 = 42834650378689465LLU;
int16_t x42 = INT16_MAX;
uint16_t x45 = 275U;
int16_t x48 = INT16_MAX;
volatile uint32_t t10 = 527U;
static uint64_t x54 = UINT64_MAX;
volatile uint64_t t11 = 161400599LLU;
int16_t x64 = INT16_MAX;
int32_t x69 = INT32_MIN;
int32_t x73 = INT32_MAX;
int32_t t16 = 149018486;
volatile uint16_t x78 = UINT16_MAX;
uint32_t x82 = 17U;
uint64_t x89 = 294119942134LLU;
static volatile uint64_t t21 = 641910620166LLU;
volatile uint8_t x104 = 41U;
uint64_t t22 = 3108284536LLU;
int16_t x107 = 195;
volatile uint8_t x112 = 19U;
static volatile int8_t x116 = INT8_MIN;
volatile uint64_t t27 = 848575LLU;
int16_t x126 = INT16_MIN;
static uint64_t x132 = 5520824968626967LLU;
uint64_t t29 = 5077775111409348LLU;
static volatile int16_t x133 = INT16_MAX;
int16_t x137 = -1;
int64_t x145 = 0LL;
static uint32_t x148 = 18U;
volatile int64_t t33 = 9883611666367587LL;
int64_t x153 = -1LL;
volatile uint8_t x154 = 2U;
uint32_t x162 = 9U;
volatile int32_t x164 = 60406783;
int32_t x222 = INT32_MAX;
volatile uint64_t t48 = 476186728LLU;
uint8_t x248 = 0U;
volatile int32_t t49 = -4722263;
int32_t x257 = INT32_MAX;
uint16_t x259 = 6U;
static uint64_t t50 = 191172351443240LLU;
static volatile int32_t t51 = -325948936;
uint32_t x271 = UINT32_MAX;
int8_t x277 = -1;
int64_t x280 = -1LL;
volatile uint64_t x295 = 21329228299LLU;
uint64_t x297 = 6499LLU;
volatile int64_t x300 = INT64_MAX;
volatile uint64_t t56 = 25121024138794667LLU;
int16_t x306 = -1;
int64_t x307 = INT64_MIN;
int64_t x310 = 1301720893722748676LL;
int32_t x311 = -24746221;
int8_t x312 = INT8_MIN;
int64_t x324 = -55380121222322LL;
uint8_t x353 = 33U;
int16_t x354 = INT16_MIN;
int64_t x355 = -51751384724886LL;
static uint64_t t66 = 193642186810684LLU;
uint16_t x362 = 279U;
int32_t x367 = INT32_MIN;
static volatile uint16_t x369 = UINT16_MAX;
volatile int64_t x377 = 1389047103LL;
volatile int16_t x387 = INT16_MAX;
uint16_t x388 = 224U;
uint64_t t73 = 1809420473824LLU;
static volatile uint64_t x393 = 572387132954795LLU;
static uint64_t x394 = 8256147LLU;
static int8_t x395 = -30;
static uint64_t x413 = 3928599228LLU;
static uint32_t x414 = UINT32_MAX;
volatile int32_t x425 = -1;
int32_t x427 = INT32_MAX;
uint64_t t80 = 148831287013600LLU;
int8_t x433 = 18;
static int16_t x434 = -1;
int64_t t82 = -4574LL;
static uint16_t x438 = 3950U;
uint64_t t83 = 2588619593LLU;
static volatile uint64_t x441 = 202135128605304LLU;
static uint32_t x444 = 4360U;
uint64_t x449 = 216062583LLU;
uint64_t x454 = 130556LLU;
volatile int8_t x459 = -41;
int64_t x460 = INT64_MIN;
int64_t x473 = -1LL;
uint64_t x476 = UINT64_MAX;
int16_t x482 = INT16_MAX;
int16_t x483 = INT16_MIN;
volatile int8_t x489 = -1;
uint32_t x491 = 632U;
int32_t x492 = -1;
static int8_t x498 = INT8_MIN;
int8_t x501 = INT8_MAX;
static int64_t x502 = -4LL;
static volatile int64_t t97 = -6LL;
static int64_t x507 = 451444176304342313LL;
uint64_t t99 = 322590911464396112LLU;


void f0(void) {
	uint64_t x5 = 307522743LLU;
	int16_t x6 = 271;
	int8_t x7 = -9;
	int8_t x8 = 1;
	uint64_t t0 = 128976236467250LLU;

	t0 = (((x5-x6)/x7)*x8);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = 31;
	volatile int32_t x11 = 4096;
	int16_t x12 = -1;
	static int32_t t1 = 604661;

	t1 = (((x9-x10)/x11)*x12);

	if (t1 != 8) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = 25586370U;
	int64_t x14 = 3791536129LL;
	int32_t x15 = INT32_MIN;
	static volatile int64_t t2 = -944374283390LL;

	t2 = (((x13-x14)/x15)*x16);

	if (t2 != 318LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = 1;
	int8_t x19 = 1;
	uint64_t t3 = 4968021687LLU;

	t3 = (((x17-x18)/x19)*x20);

	if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t t4 = 213965767213LL;

	t4 = (((x21-x22)/x23)*x24);

	if (t4 != -917490LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	int8_t x26 = -1;
	volatile uint64_t x28 = UINT64_MAX;
	volatile uint64_t t5 = 3046598451784279024LLU;

	t5 = (((x25-x26)/x27)*x28);

	if (t5 != 256LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 874092453211188395LLU;
	volatile int8_t x30 = 0;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = 767;

	t6 = (((x29-x30)/x31)*x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MAX;
	uint8_t x38 = 1U;
	uint8_t x39 = UINT8_MAX;
	volatile uint64_t x40 = 132LLU;
	uint64_t t7 = 1409692411LLU;

	t7 = (((x37-x38)/x39)*x40);

	if (t7 != 4774451407313060352LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 0U;
	int64_t x43 = INT64_MIN;
	static uint16_t x44 = 44U;
	volatile int64_t t8 = 54689LL;

	t8 = (((x41-x42)/x43)*x44);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x46 = 15U;
	uint16_t x47 = 3073U;
	uint32_t t9 = 516509214U;

	t9 = (((x45-x46)/x47)*x48);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = UINT32_MAX;
	uint16_t x50 = 34U;
	int16_t x51 = -1;
	int16_t x52 = -412;

	t10 = (((x49-x50)/x51)*x52);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -3;
	volatile uint16_t x55 = UINT16_MAX;
	int16_t x56 = -438;

	t11 = (((x53-x54)/x55)*x56);

	if (t11 != 18323456152685903872LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	uint64_t x58 = 74657554LLU;
	uint8_t x59 = UINT8_MAX;
	uint8_t x60 = 4U;
	volatile uint64_t t12 = 4540LLU;

	t12 = (((x57-x58)/x59)*x60);

	if (t12 != 289360691351135592LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = 7255125LL;
	int8_t x62 = INT8_MIN;
	uint8_t x63 = 44U;
	volatile int64_t t13 = 4636709659711677LL;

	t13 = (((x61-x62)/x63)*x64);

	if (t13 != 5403016164LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 6U;
	static uint16_t x66 = 82U;
	uint64_t x67 = 1022LLU;
	static int8_t x68 = INT8_MIN;
	volatile uint64_t t14 = 6709940251363621213LLU;

	t14 = (((x65-x66)/x67)*x68);

	if (t14 != 18446744073171630208LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = -1LL;
	int16_t x71 = -3;
	uint8_t x72 = UINT8_MAX;
	int64_t t15 = 134242756LL;

	t15 = (((x69-x70)/x71)*x72);

	if (t15 != 182536109910LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = INT32_MAX;
	int32_t x75 = INT32_MIN;
	static int32_t x76 = -1;

	t16 = (((x73-x74)/x75)*x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = -64656832LL;
	int8_t x79 = -9;
	uint64_t x80 = 37066865621292579LLU;
	volatile uint64_t t17 = 13037173794LLU;

	t17 = (((x77-x78)/x79)*x80);

	if (t17 != 6241825354278162346LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x81 = 4;
	int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MIN;
	uint32_t t18 = 3178340U;

	t18 = (((x81-x82)/x83)*x84);

	if (t18 != 2147483648U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x90 = INT8_MAX;
	int32_t x91 = INT32_MAX;
	volatile int8_t x92 = -6;
	uint64_t t19 = 949294999380LLU;

	t19 = (((x89-x90)/x91)*x92);

	if (t19 != 18446744073709550800LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -4262;
	static volatile int64_t x94 = 37605909069409LL;
	volatile uint64_t x95 = 9532313132472503LLU;
	int64_t x96 = 7686071033304LL;
	volatile uint64_t t20 = 297662904996535LLU;

	t20 = (((x93-x94)/x95)*x96);

	if (t20 != 14872547449443240LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -1965;
	uint32_t x98 = 1028404U;
	static uint64_t x99 = UINT64_MAX;
	int8_t x100 = -1;

	t21 = (((x97-x98)/x99)*x100);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x101 = UINT8_MAX;
	static uint64_t x102 = 1LLU;
	int64_t x103 = -1LL;

	t22 = (((x101-x102)/x103)*x104);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x105 = 1;
	volatile int16_t x106 = -1;
	int64_t x108 = 27725714422103LL;
	int64_t t23 = 9551209125034094LL;

	t23 = (((x105-x106)/x107)*x108);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x109 = 14946942U;
	uint64_t x110 = 61022LLU;
	uint16_t x111 = 155U;
	uint64_t t24 = 280603LLU;

	t24 = (((x109-x110)/x111)*x112);

	if (t24 != 1824722LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 223LLU;
	uint64_t x114 = 1039149LLU;
	volatile int8_t x115 = 63;
	volatile uint64_t t25 = 2053LLU;

	t25 = (((x113-x114)/x115)*x116);

	if (t25 != 17861133150736756096LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = 116LL;
	int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	volatile int16_t x120 = -1;
	static volatile int64_t t26 = -2LL;

	t26 = (((x117-x118)/x119)*x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	static uint64_t x122 = UINT64_MAX;
	uint64_t x123 = 230871466766309375LLU;
	volatile int8_t x124 = 0;

	t27 = (((x121-x122)/x123)*x124);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x125 = INT16_MIN;
	int16_t x127 = INT16_MAX;
	volatile uint16_t x128 = 17U;
	volatile int32_t t28 = 3723977;

	t28 = (((x125-x126)/x127)*x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	volatile int64_t x130 = 1LL;
	volatile int8_t x131 = INT8_MAX;

	t29 = (((x129-x130)/x131)*x132);

	if (t29 != 17022371231803794130LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x134 = INT16_MIN;
	int64_t x135 = INT64_MIN;
	int32_t x136 = 20;
	volatile int64_t t30 = 1662588752LL;

	t30 = (((x133-x134)/x135)*x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x138 = INT16_MIN;
	int32_t x139 = 1;
	int8_t x140 = INT8_MAX;
	volatile int32_t t31 = -3042050;

	t31 = (((x137-x138)/x139)*x140);

	if (t31 != 4161409) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	int32_t x142 = -3399;
	int64_t x143 = 281870LL;
	uint16_t x144 = UINT16_MAX;
	volatile int64_t t32 = 9760LL;

	t32 = (((x141-x142)/x143)*x144);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x146 = -213;
	int8_t x147 = 6;

	t33 = (((x145-x146)/x147)*x148);

	if (t33 != 630LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x149 = 7U;
	int32_t x150 = -1373;
	uint8_t x151 = UINT8_MAX;
	static volatile uint64_t x152 = UINT64_MAX;
	uint64_t t34 = 184897558117871LLU;

	t34 = (((x149-x150)/x151)*x152);

	if (t34 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x155 = -1LL;
	uint16_t x156 = 2017U;
	static volatile int64_t t35 = 13744482311528LL;

	t35 = (((x153-x154)/x155)*x156);

	if (t35 != 6051LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	int64_t x159 = INT64_MIN;
	static int32_t x160 = 2663193;
	volatile int64_t t36 = -1189461452903470LL;

	t36 = (((x157-x158)/x159)*x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = 188U;
	volatile int16_t x163 = -1;
	uint32_t t37 = 1948498U;

	t37 = (((x161-x162)/x163)*x164);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x169 = 251411129533770277LL;
	static int32_t x170 = INT32_MIN;
	int64_t x171 = INT64_MIN;
	uint16_t x172 = 2645U;
	volatile int64_t t38 = -3228722841LL;

	t38 = (((x169-x170)/x171)*x172);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = UINT8_MAX;
	static int32_t x174 = -25883;
	uint32_t x175 = 1335941U;
	int32_t x176 = -5792;
	uint32_t t39 = 30801504U;

	t39 = (((x173-x174)/x175)*x176);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x177 = 28U;
	volatile uint32_t x178 = 1340860612U;
	int16_t x179 = -6;
	uint32_t x180 = 5312198U;
	uint32_t t40 = 9U;

	t40 = (((x177-x178)/x179)*x180);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x181 = 328;
	static int32_t x182 = -211819078;
	int32_t x183 = -43973629;
	uint64_t x184 = 56851871902LLU;
	uint64_t t41 = 3LLU;

	t41 = (((x181-x182)/x183)*x184);

	if (t41 != 18446743846302064008LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MAX;
	static int16_t x194 = 0;
	int16_t x195 = INT16_MIN;
	uint8_t x196 = 35U;
	volatile int32_t t42 = -132791501;

	t42 = (((x193-x194)/x195)*x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x197 = 7;
	int16_t x198 = -1;
	int16_t x199 = -3381;
	uint8_t x200 = 1U;
	int32_t t43 = -45873329;

	t43 = (((x197-x198)/x199)*x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x209 = 555973U;
	uint32_t x210 = 2667U;
	int32_t x211 = -1986003;
	uint32_t x212 = UINT32_MAX;
	uint32_t t44 = 898033U;

	t44 = (((x209-x210)/x211)*x212);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = 1;
	uint64_t x214 = 984219676138797544LLU;
	int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MAX;
	static uint64_t t45 = 37707253344354LLU;

	t45 = (((x213-x214)/x215)*x216);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x221 = 424U;
	volatile int8_t x223 = INT8_MIN;
	static int16_t x224 = -108;
	volatile int32_t t46 = -1;

	t46 = (((x221-x222)/x223)*x224);

	if (t46 != -1811938896) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = -1;
	int16_t x226 = INT16_MAX;
	volatile int32_t x227 = INT32_MIN;
	static uint16_t x228 = UINT16_MAX;
	volatile int32_t t47 = 2003981;

	t47 = (((x225-x226)/x227)*x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x241 = -1;
	uint64_t x242 = 207836113197LLU;
	int16_t x243 = -3839;
	volatile int64_t x244 = INT64_MAX;

	t48 = (((x241-x242)/x243)*x244);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x245 = 998U;
	uint8_t x246 = 14U;
	int8_t x247 = INT8_MAX;

	t49 = (((x245-x246)/x247)*x248);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x258 = 1885748663116LLU;
	volatile uint32_t x260 = 630289151U;

	t50 = (((x257-x258)/x259)*x260);

	if (t50 != 1970829426729320845LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x261 = UINT16_MAX;
	static int32_t x262 = INT32_MAX;
	uint8_t x263 = UINT8_MAX;
	volatile int8_t x264 = INT8_MAX;

	t51 = (((x261-x262)/x263)*x264);

	if (t51 != -1069498369) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x269 = 4800333U;
	volatile int8_t x270 = INT8_MIN;
	static int16_t x272 = INT16_MIN;
	uint32_t t52 = 58766140U;

	t52 = (((x269-x270)/x271)*x272);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x278 = UINT8_MAX;
	uint8_t x279 = 49U;
	int64_t t53 = 2683396079LL;

	t53 = (((x277-x278)/x279)*x280);

	if (t53 != 5LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x281 = -220293130;
	volatile uint32_t x282 = 1128318250U;
	volatile int64_t x283 = -20183677454LL;
	int64_t x284 = INT64_MIN;
	volatile int64_t t54 = -878802052051489657LL;

	t54 = (((x281-x282)/x283)*x284);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x293 = 933111632U;
	static uint64_t x294 = 3090477545LLU;
	static volatile uint16_t x296 = UINT16_MAX;
	uint64_t t55 = 550678749181819136LLU;

	t55 = (((x293-x294)/x295)*x296);

	if (t55 != 56678439342645LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = INT16_MAX;

	t56 = (((x297-x298)/x299)*x300);

	if (t56 != 18446181106575736818LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x301 = 413054;
	uint16_t x302 = 563U;
	int64_t x303 = INT64_MAX;
	static volatile int64_t x304 = INT64_MIN;
	static volatile int64_t t57 = 41981984LL;

	t57 = (((x301-x302)/x303)*x304);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x305 = INT16_MAX;
	int8_t x308 = 4;
	volatile int64_t t58 = -223727054919300LL;

	t58 = (((x305-x306)/x307)*x308);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x309 = 454335446679864735LL;
	int64_t t59 = 101450631861LL;

	t59 = (((x309-x310)/x311)*x312);

	if (t59 != -4383107110400LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x313 = -14;
	int64_t x314 = 8828865775598270LL;
	int32_t x315 = INT32_MAX;
	uint16_t x316 = UINT16_MAX;
	volatile int64_t t60 = -1388213926LL;

	t60 = (((x313-x314)/x315)*x316);

	if (t60 != -269431489635LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x321 = INT16_MAX;
	static uint8_t x322 = 0U;
	uint32_t x323 = 254U;
	volatile int64_t t61 = 9681791435LL;

	t61 = (((x321-x322)/x323)*x324);

	if (t61 != -7144035637679538LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x325 = 12U;
	int8_t x326 = 0;
	static int16_t x327 = -1;
	uint8_t x328 = 13U;
	int32_t t62 = -457775;

	t62 = (((x325-x326)/x327)*x328);

	if (t62 != -156) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x329 = -1LL;
	int64_t x330 = -3131LL;
	uint8_t x331 = 2U;
	static uint16_t x332 = 43U;
	int64_t t63 = 4834468350LL;

	t63 = (((x329-x330)/x331)*x332);

	if (t63 != 67295LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x341 = 155049255568998627LLU;
	static volatile uint8_t x342 = 0U;
	volatile uint16_t x343 = UINT16_MAX;
	volatile int16_t x344 = -9;
	volatile uint64_t t64 = 1296152LLU;

	t64 = (((x341-x342)/x343)*x344);

	if (t64 != 18446722780609679479LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x345 = UINT64_MAX;
	int64_t x346 = INT64_MAX;
	int64_t x347 = -754732238802568566LL;
	int64_t x348 = INT64_MIN;
	uint64_t t65 = 987LLU;

	t65 = (((x345-x346)/x347)*x348);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x356 = 5795556412411755150LLU;

	t66 = (((x353-x354)/x355)*x356);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x357 = -1;
	int64_t x358 = 15600140750913LL;
	int32_t x359 = -1;
	uint16_t x360 = UINT16_MAX;
	static volatile int64_t t67 = 12530060706620603LL;

	t67 = (((x357-x358)/x359)*x360);

	if (t67 != 1022355224111148990LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int16_t x363 = INT16_MAX;
	int64_t x364 = INT64_MIN;
	volatile uint64_t t68 = 5164121LLU;

	t68 = (((x361-x362)/x363)*x364);

	if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x365 = 15559995U;
	volatile uint64_t x366 = UINT64_MAX;
	int8_t x368 = INT8_MIN;
	uint64_t t69 = 68554651593LLU;

	t69 = (((x365-x366)/x367)*x368);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x370 = 1603461881450190529LLU;
	int16_t x371 = INT16_MAX;
	int32_t x372 = INT32_MIN;
	uint64_t t70 = 526942238LLU;

	t70 = (((x369-x370)/x371)*x372);

	if (t70 != 15029514565110988800LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x378 = -1;
	volatile int32_t x379 = -7378014;
	int16_t x380 = INT16_MAX;
	static volatile int64_t t71 = -136LL;

	t71 = (((x377-x378)/x379)*x380);

	if (t71 != -6160196LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x381 = -1;
	int64_t x382 = INT64_MAX;
	uint64_t x383 = 63317800004347218LLU;
	uint64_t x384 = 1788587549969760348LLU;
	static volatile uint64_t t72 = 118031LLU;

	t72 = (((x381-x382)/x383)*x384);

	if (t72 != 1090777713681527836LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x385 = INT32_MIN;
	uint64_t x386 = 1230923925LLU;

	t73 = (((x385-x386)/x387)*x388);

	if (t73 != 126104637951419904LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x396 = INT8_MIN;
	volatile uint64_t t74 = 5LLU;

	t74 = (((x393-x394)/x395)*x396);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x397 = UINT64_MAX;
	uint8_t x398 = UINT8_MAX;
	static int8_t x399 = INT8_MAX;
	volatile int8_t x400 = INT8_MIN;
	volatile uint64_t t75 = 64120LLU;

	t75 = (((x397-x398)/x399)*x400);

	if (t75 != 18301494120373256192LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x409 = UINT16_MAX;
	int16_t x410 = 5;
	uint64_t x411 = UINT64_MAX;
	int32_t x412 = -229146;
	uint64_t t76 = 30LLU;

	t76 = (((x409-x410)/x411)*x412);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x415 = INT8_MIN;
	static uint64_t x416 = 8969LLU;
	volatile uint64_t t77 = 213415LLU;

	t77 = (((x413-x414)/x415)*x416);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x417 = UINT64_MAX;
	static volatile uint32_t x418 = 1351380569U;
	int64_t x419 = 644616350283LL;
	volatile uint8_t x420 = 2U;
	static volatile uint64_t t78 = 869300139LLU;

	t78 = (((x417-x418)/x419)*x420);

	if (t78 != 57233248LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x421 = INT16_MAX;
	int32_t x422 = -219;
	uint64_t x423 = 282405714674432743LLU;
	static int8_t x424 = -1;
	uint64_t t79 = 6046LLU;

	t79 = (((x421-x422)/x423)*x424);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x426 = UINT64_MAX;
	static int32_t x428 = INT32_MAX;

	t80 = (((x425-x426)/x427)*x428);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x429 = INT16_MIN;
	uint16_t x430 = 198U;
	static volatile int32_t x431 = -3;
	static int16_t x432 = INT16_MIN;
	volatile int32_t t81 = 113;

	t81 = (((x429-x430)/x431)*x432);

	if (t81 != -360054784) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x435 = -17060026604766032LL;
	volatile int64_t x436 = INT64_MIN;

	t82 = (((x433-x434)/x435)*x436);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x437 = 1980851586339036142LLU;
	uint8_t x439 = 76U;
	int64_t x440 = -1LL;

	t83 = (((x437-x438)/x439)*x440);

	if (t83 != 18420680237047195930LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x442 = INT64_MIN;
	int8_t x443 = INT8_MIN;
	static volatile uint64_t t84 = 186219327144LLU;

	t84 = (((x441-x442)/x443)*x444);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x445 = -1010723400850122LL;
	volatile int16_t x446 = -1;
	int32_t x447 = INT32_MIN;
	int16_t x448 = INT16_MAX;
	int64_t t85 = -7360556940109289LL;

	t85 = (((x445-x446)/x447)*x448);

	if (t85 != 15421919618LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x450 = INT16_MIN;
	int8_t x451 = INT8_MAX;
	static int8_t x452 = -1;
	uint64_t t86 = 50943420LLU;

	t86 = (((x449-x450)/x451)*x452);

	if (t86 != 18446744073707850078LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x453 = UINT8_MAX;
	int8_t x455 = INT8_MAX;
	int64_t x456 = INT64_MAX;
	volatile uint64_t t87 = 12371961LLU;

	t87 = (((x453-x454)/x455)*x456);

	if (t87 != 18301494120373256960LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x457 = INT8_MIN;
	static uint32_t x458 = UINT32_MAX;
	int64_t t88 = 1024468899650282LL;

	t88 = (((x457-x458)/x459)*x460);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x461 = -1LL;
	static volatile int64_t x462 = 22455LL;
	int8_t x463 = INT8_MIN;
	uint64_t x464 = 190851870667274589LLU;
	uint64_t t89 = 30LLU;

	t89 = (((x461-x462)/x463)*x464);

	if (t89 != 14952333293063501459LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x465 = 2U;
	static int64_t x466 = INT64_MAX;
	uint64_t x467 = 591812575639LLU;
	uint32_t x468 = 3440U;
	static volatile uint64_t t90 = 8691538592245LLU;

	t90 = (((x465-x466)/x467)*x468);

	if (t90 != 53612241760LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x474 = UINT32_MAX;
	int8_t x475 = INT8_MAX;
	volatile uint64_t t91 = 3786887755175871LLU;

	t91 = (((x473-x474)/x475)*x476);

	if (t91 != 33818640LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x477 = UINT32_MAX;
	volatile int8_t x478 = 53;
	int8_t x479 = INT8_MIN;
	int32_t x480 = INT32_MIN;
	static volatile uint32_t t92 = 57273469U;

	t92 = (((x477-x478)/x479)*x480);

	if (t92 != 2147483648U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x481 = 8U;
	uint64_t x484 = UINT64_MAX;
	static uint64_t t93 = 3346312913658LLU;

	t93 = (((x481-x482)/x483)*x484);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x485 = UINT32_MAX;
	static int16_t x486 = INT16_MAX;
	int8_t x487 = INT8_MAX;
	int16_t x488 = 1;
	static uint32_t t94 = 1911U;

	t94 = (((x485-x486)/x487)*x488);

	if (t94 != 33818382U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x490 = -2;
	uint32_t t95 = 148113U;

	t95 = (((x489-x490)/x491)*x492);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x497 = -1;
	int8_t x499 = -1;
	static uint32_t x500 = 424480898U;
	static uint32_t t96 = 23358U;

	t96 = (((x497-x498)/x499)*x500);

	if (t96 != 1925500802U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x503 = -80434;
	int32_t x504 = -1;

	t97 = (((x501-x502)/x503)*x504);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x505 = -52;
	int32_t x506 = INT32_MIN;
	int16_t x508 = -1;
	int64_t t98 = -100911206LL;

	t98 = (((x505-x506)/x507)*x508);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x509 = 1;
	volatile int16_t x510 = -940;
	int8_t x511 = -1;
	volatile uint64_t x512 = UINT64_MAX;

	t99 = (((x509-x510)/x511)*x512);

	if (t99 != 941LLU) { NG(); } else { ; }
	
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

