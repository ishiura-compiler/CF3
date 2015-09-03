#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -35;
volatile int16_t x2 = INT16_MIN;
int64_t x7 = 21273123133036359LL;
int64_t t1 = -8169477436224732LL;
uint16_t x22 = 13U;
int64_t x23 = INT64_MIN;
uint32_t x28 = 11U;
int16_t x30 = INT16_MAX;
int8_t x32 = -1;
uint16_t x35 = 13U;
uint16_t x38 = UINT16_MAX;
volatile uint16_t x44 = 1666U;
int8_t x50 = INT8_MAX;
uint32_t x81 = UINT32_MAX;
int64_t t18 = 76844343560290LL;
static int16_t x101 = INT16_MIN;
volatile int32_t x112 = 9;
volatile uint64_t x115 = 212LLU;
volatile int64_t t24 = -17061LL;
volatile uint16_t x122 = UINT16_MAX;
static int16_t x123 = INT16_MIN;
volatile uint8_t x128 = UINT8_MAX;
int32_t x132 = INT32_MIN;
static int64_t x136 = 330468701564LL;
int32_t t28 = 5;
int64_t t29 = -657518953143083646LL;
static int32_t x148 = INT32_MIN;
static volatile int8_t x149 = -1;
static int64_t x150 = INT64_MAX;
static int64_t x154 = INT64_MAX;
static int32_t x155 = INT32_MAX;
volatile int32_t x157 = 27;
int16_t x162 = INT16_MIN;
volatile int8_t x166 = -2;
uint16_t x167 = 72U;
volatile uint32_t x170 = 232911U;
int32_t x172 = INT32_MAX;
volatile uint32_t t36 = 4173407U;
uint64_t x175 = UINT64_MAX;
uint32_t x177 = UINT32_MAX;
volatile int8_t x180 = 1;
uint8_t x181 = 1U;
static uint8_t x184 = UINT8_MAX;
int16_t x189 = -1;
int16_t x191 = INT16_MIN;
int32_t x196 = 166;
int8_t x199 = -1;
int8_t x200 = INT8_MIN;
int32_t x204 = INT32_MIN;
volatile int32_t x206 = INT32_MIN;
uint32_t x215 = UINT32_MAX;
int8_t x216 = INT8_MIN;
int32_t x228 = INT32_MIN;
static int32_t t51 = 6508;
uint64_t t55 = 458794LLU;
int8_t x262 = -49;
volatile int32_t t58 = -1268662;
uint32_t t59 = 11U;
uint16_t x279 = UINT16_MAX;
uint8_t x280 = UINT8_MAX;
int32_t t62 = 57;
int64_t x294 = -466214347957LL;
static int64_t x295 = 1LL;
int64_t x303 = INT64_MIN;
uint16_t x312 = 25U;
volatile int64_t t70 = 33382455090743485LL;
int16_t x317 = 0;
static volatile int32_t x322 = -1;
uint64_t x323 = 2369090392166016LLU;
int32_t x332 = INT32_MAX;
int64_t t74 = 121LL;
uint64_t x334 = 3LLU;
uint64_t x335 = 21603223667LLU;
uint64_t x336 = 237696LLU;
static int32_t t76 = 3429394;
int16_t x349 = INT16_MIN;
volatile int32_t t77 = 645140876;
volatile int8_t x370 = 0;
uint32_t x377 = 5U;
int64_t x384 = -47095001436LL;
uint64_t x396 = 161880100303783LLU;
static int64_t x397 = -408693020603144622LL;
int32_t t89 = -3480;
int32_t x417 = -1;
static uint16_t x430 = 0U;
int64_t x432 = -349072904631196LL;
volatile int32_t x433 = 32127;
volatile uint8_t x437 = 3U;
int32_t x443 = -925426107;
int64_t x446 = 210555322536733011LL;


void f0(void) {
	uint8_t x3 = 1U;
	static int64_t x4 = INT64_MIN;
	static int32_t t0 = 25745;

	t0 = (x1+(x2+(x3<=x4)));

	if (t0 != -32803) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 1579886320181412562LL;
	volatile int32_t x6 = INT32_MAX;
	int16_t x8 = 1;

	t1 = (x5+(x6+(x7<=x8)));

	if (t1 != 1579886322328896209LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 23U;
	static volatile int64_t x10 = -1LL;
	int32_t x11 = INT32_MAX;
	volatile int64_t x12 = -1160032608LL;
	volatile int64_t t2 = 1099058005934LL;

	t2 = (x9+(x10+(x11<=x12)));

	if (t2 != 22LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 868U;
	int16_t x18 = -1;
	uint32_t x19 = 27U;
	int64_t x20 = -1LL;
	int32_t t3 = 0;

	t3 = (x17+(x18+(x19<=x20)));

	if (t3 != 867) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	static uint8_t x24 = 2U;
	volatile int64_t t4 = -4189042223522LL;

	t4 = (x21+(x22+(x23<=x24)));

	if (t4 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MIN;
	static int8_t x26 = INT8_MAX;
	static volatile int32_t x27 = INT32_MAX;
	int32_t t5 = -1;

	t5 = (x25+(x26+(x27<=x28)));

	if (t5 != -32641) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	static volatile uint8_t x31 = UINT8_MAX;
	volatile int32_t t6 = -183537;

	t6 = (x29+(x30+(x31<=x32)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 32086532860336211LLU;
	int16_t x34 = INT16_MIN;
	volatile uint64_t x36 = 169126534LLU;
	static volatile uint64_t t7 = 239591998994LLU;

	t7 = (x33+(x34+(x35<=x36)));

	if (t7 != 32086532860303444LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	uint16_t x39 = 2991U;
	volatile uint32_t x40 = 7369085U;
	static int32_t t8 = -65193453;

	t8 = (x37+(x38+(x39<=x40)));

	if (t8 != -2147418112) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 573LL;
	uint8_t x42 = 1U;
	int64_t x43 = INT64_MIN;
	volatile int64_t t9 = 14LL;

	t9 = (x41+(x42+(x43<=x44)));

	if (t9 != 575LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = INT16_MIN;
	static int16_t x46 = INT16_MAX;
	int64_t x47 = 423568843719964LL;
	uint64_t x48 = UINT64_MAX;
	static volatile int32_t t10 = -108238;

	t10 = (x45+(x46+(x47<=x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 3762374;
	int16_t x51 = -1;
	int32_t x52 = INT32_MIN;
	int32_t t11 = 3490;

	t11 = (x49+(x50+(x51<=x52)));

	if (t11 != 3762501) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MAX;
	uint8_t x58 = 0U;
	static volatile int64_t x59 = INT64_MIN;
	int16_t x60 = -11;
	volatile int32_t t12 = 28;

	t12 = (x57+(x58+(x59<=x60)));

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MAX;
	int64_t x62 = -1LL;
	volatile int64_t x63 = -1LL;
	volatile int8_t x64 = 3;
	volatile int64_t t13 = INT64_MAX;

	t13 = (x61+(x62+(x63<=x64)));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = INT32_MIN;
	int32_t x66 = 157239;
	uint8_t x67 = UINT8_MAX;
	static uint8_t x68 = 1U;
	volatile int32_t t14 = -24505171;

	t14 = (x65+(x66+(x67<=x68)));

	if (t14 != -2147326409) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x77 = 269254412251LLU;
	int32_t x78 = INT32_MAX;
	int32_t x79 = 50849;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t15 = 349649832439LLU;

	t15 = (x77+(x78+(x79<=x80)));

	if (t15 != 271401895898LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x82 = INT32_MIN;
	uint64_t x83 = 33LLU;
	int64_t x84 = INT64_MIN;
	volatile uint32_t t16 = 0U;

	t16 = (x81+(x82+(x83<=x84)));

	if (t16 != 2147483648U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x85 = -357549;
	int64_t x86 = 1764890LL;
	volatile uint64_t x87 = UINT64_MAX;
	volatile uint16_t x88 = UINT16_MAX;
	int64_t t17 = -2460393LL;

	t17 = (x85+(x86+(x87<=x88)));

	if (t17 != 1407341LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = INT64_MIN;
	volatile int32_t x90 = 18717;
	int64_t x91 = -1LL;
	volatile int8_t x92 = -1;

	t18 = (x89+(x90+(x91<=x92)));

	if (t18 != -9223372036854757090LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x93 = UINT64_MAX;
	int32_t x94 = INT32_MIN;
	int8_t x95 = -1;
	int16_t x96 = INT16_MIN;
	uint64_t t19 = 89411245893842LLU;

	t19 = (x93+(x94+(x95<=x96)));

	if (t19 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x102 = UINT64_MAX;
	uint8_t x103 = UINT8_MAX;
	int32_t x104 = -1;
	volatile uint64_t t20 = 508355012921312LLU;

	t20 = (x101+(x102+(x103<=x104)));

	if (t20 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = -1;
	int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MAX;
	static int8_t x108 = INT8_MAX;
	volatile int32_t t21 = 16091;

	t21 = (x105+(x106+(x107<=x108)));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x109 = 5U;
	uint32_t x110 = 10U;
	int16_t x111 = -1;
	uint32_t t22 = 103530608U;

	t22 = (x109+(x110+(x111<=x112)));

	if (t22 != 16U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = INT16_MIN;
	int64_t x114 = -7401450LL;
	volatile int32_t x116 = -9974724;
	volatile int64_t t23 = 605924LL;

	t23 = (x113+(x114+(x115<=x116)));

	if (t23 != -7434217LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = -39130868469LL;
	static int32_t x118 = INT32_MIN;
	volatile int64_t x119 = -1LL;
	int8_t x120 = INT8_MAX;

	t24 = (x117+(x118+(x119<=x120)));

	if (t24 != -41278352116LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = UINT64_MAX;
	static int8_t x124 = -19;
	uint64_t t25 = 79LLU;

	t25 = (x121+(x122+(x123<=x124)));

	if (t25 != 65535LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x125 = UINT32_MAX;
	int32_t x126 = INT32_MIN;
	static volatile int64_t x127 = -57LL;
	uint32_t t26 = 32467281U;

	t26 = (x125+(x126+(x127<=x128)));

	if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = INT16_MIN;
	uint64_t x130 = 34975LLU;
	static uint32_t x131 = 99820303U;
	static volatile uint64_t t27 = 7553179LLU;

	t27 = (x129+(x130+(x131<=x132)));

	if (t27 != 2208LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = -1;
	int8_t x134 = INT8_MIN;
	volatile int16_t x135 = INT16_MAX;

	t28 = (x133+(x134+(x135<=x136)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = -1LL;
	int32_t x142 = -74;
	uint64_t x143 = UINT64_MAX;
	int64_t x144 = -287LL;

	t29 = (x141+(x142+(x143<=x144)));

	if (t29 != -75LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = INT32_MIN;
	static volatile uint64_t x146 = 4314183181135194LLU;
	int8_t x147 = 0;
	volatile uint64_t t30 = 0LLU;

	t30 = (x145+(x146+(x147<=x148)));

	if (t30 != 4314181033651546LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x151 = -1LL;
	int64_t x152 = INT64_MIN;
	static int64_t t31 = -359912LL;

	t31 = (x149+(x150+(x151<=x152)));

	if (t31 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = 220215807026LLU;
	static uint32_t x156 = 1713728U;
	volatile uint64_t t32 = 0LLU;

	t32 = (x153+(x154+(x155<=x156)));

	if (t32 != 9223372257070582833LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x158 = -1;
	int16_t x159 = INT16_MIN;
	static int8_t x160 = INT8_MIN;
	static volatile int32_t t33 = -1057;

	t33 = (x157+(x158+(x159<=x160)));

	if (t33 != 27) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = 0;
	volatile int64_t x163 = 210188262067459LL;
	volatile uint16_t x164 = 11U;
	volatile int32_t t34 = -15031903;

	t34 = (x161+(x162+(x163<=x164)));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x165 = 17581LLU;
	uint64_t x168 = 26384984483926857LLU;
	volatile uint64_t t35 = 15561323268186LLU;

	t35 = (x165+(x166+(x167<=x168)));

	if (t35 != 17580LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = 2;
	static int64_t x171 = INT64_MIN;

	t36 = (x169+(x170+(x171<=x172)));

	if (t36 != 232914U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = UINT32_MAX;
	uint8_t x176 = 118U;
	volatile uint32_t t37 = 60894060U;

	t37 = (x173+(x174+(x175<=x176)));

	if (t37 != 4294967167U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x178 = INT16_MAX;
	uint64_t x179 = 134281592LLU;
	uint32_t t38 = 22U;

	t38 = (x177+(x178+(x179<=x180)));

	if (t38 != 32766U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x182 = -253;
	volatile int32_t x183 = 2008364;
	int32_t t39 = 911456;

	t39 = (x181+(x182+(x183<=x184)));

	if (t39 != -252) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = 0U;
	int64_t x186 = -1LL;
	uint32_t x187 = 178414896U;
	int8_t x188 = INT8_MAX;
	volatile int64_t t40 = 1LL;

	t40 = (x185+(x186+(x187<=x188)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x190 = 220U;
	int32_t x192 = INT32_MIN;
	int32_t t41 = -137910;

	t41 = (x189+(x190+(x191<=x192)));

	if (t41 != 219) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = 1;
	int16_t x194 = -9;
	int64_t x195 = 1447969837716LL;
	volatile int32_t t42 = -4729;

	t42 = (x193+(x194+(x195<=x196)));

	if (t42 != -8) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x197 = -8;
	static uint16_t x198 = UINT16_MAX;
	int32_t t43 = -6467305;

	t43 = (x197+(x198+(x199<=x200)));

	if (t43 != 65527) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = -1;
	int32_t x202 = -533;
	int8_t x203 = 55;
	int32_t t44 = 3;

	t44 = (x201+(x202+(x203<=x204)));

	if (t44 != -534) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x205 = 10;
	uint32_t x207 = 209584319U;
	int32_t x208 = INT32_MAX;
	volatile int32_t t45 = 1;

	t45 = (x205+(x206+(x207<=x208)));

	if (t45 != -2147483637) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x209 = -213;
	int8_t x210 = 6;
	static volatile uint64_t x211 = 537474483692LLU;
	uint64_t x212 = UINT64_MAX;
	int32_t t46 = 24052036;

	t46 = (x209+(x210+(x211<=x212)));

	if (t46 != -206) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x213 = 101544U;
	static uint8_t x214 = 1U;
	static volatile uint32_t t47 = 11U;

	t47 = (x213+(x214+(x215<=x216)));

	if (t47 != 101545U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x217 = UINT8_MAX;
	uint32_t x218 = UINT32_MAX;
	int64_t x219 = INT64_MIN;
	static volatile int64_t x220 = INT64_MIN;
	volatile uint32_t t48 = 696771130U;

	t48 = (x217+(x218+(x219<=x220)));

	if (t48 != 255U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = -1;
	static int64_t x223 = -14LL;
	int8_t x224 = 35;
	int32_t t49 = -884369;

	t49 = (x221+(x222+(x223<=x224)));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x225 = INT16_MIN;
	static volatile int8_t x226 = INT8_MIN;
	int64_t x227 = -67164224507LL;
	int32_t t50 = -407;

	t50 = (x225+(x226+(x227<=x228)));

	if (t50 != -32895) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x229 = INT32_MIN;
	uint16_t x230 = 1U;
	static uint8_t x231 = UINT8_MAX;
	static int16_t x232 = INT16_MIN;

	t51 = (x229+(x230+(x231<=x232)));

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x233 = 28U;
	static int8_t x234 = INT8_MAX;
	int64_t x235 = 229009385769LL;
	int64_t x236 = INT64_MIN;
	static volatile int32_t t52 = 444;

	t52 = (x233+(x234+(x235<=x236)));

	if (t52 != 155) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = -11;
	int8_t x238 = INT8_MIN;
	int8_t x239 = -1;
	int64_t x240 = INT64_MAX;
	static int32_t t53 = 800917850;

	t53 = (x237+(x238+(x239<=x240)));

	if (t53 != -138) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x241 = UINT32_MAX;
	int32_t x242 = 12;
	int32_t x243 = -1;
	int8_t x244 = INT8_MAX;
	uint32_t t54 = 36U;

	t54 = (x241+(x242+(x243<=x244)));

	if (t54 != 12U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x245 = 5227615152987982LLU;
	uint64_t x246 = 3913235LLU;
	int64_t x247 = -5545674244536LL;
	uint8_t x248 = 116U;

	t55 = (x245+(x246+(x247<=x248)));

	if (t55 != 5227615156901218LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x249 = -1;
	volatile int8_t x250 = INT8_MIN;
	static uint16_t x251 = UINT16_MAX;
	int32_t x252 = INT32_MAX;
	volatile int32_t t56 = -209120918;

	t56 = (x249+(x250+(x251<=x252)));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x253 = INT32_MIN;
	uint16_t x254 = 30U;
	int64_t x255 = INT64_MAX;
	int32_t x256 = INT32_MIN;
	volatile int32_t t57 = 1;

	t57 = (x253+(x254+(x255<=x256)));

	if (t57 != -2147483618) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x261 = 0U;
	static uint64_t x263 = 6811LLU;
	uint32_t x264 = 24U;

	t58 = (x261+(x262+(x263<=x264)));

	if (t58 != -49) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x265 = INT32_MIN;
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = 1268LL;
	int64_t x268 = INT64_MAX;

	t59 = (x265+(x266+(x267<=x268)));

	if (t59 != 2147483648U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = -1;
	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MIN;
	volatile int64_t t60 = INT64_MIN;

	t60 = (x269+(x270+(x271<=x272)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x273 = UINT32_MAX;
	int8_t x274 = -1;
	int16_t x275 = -1;
	int64_t x276 = INT64_MIN;
	volatile uint32_t t61 = 127178439U;

	t61 = (x273+(x274+(x275<=x276)));

	if (t61 != 4294967294U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;

	t62 = (x277+(x278+(x279<=x280)));

	if (t62 != -65536) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x281 = 29608LLU;
	int16_t x282 = 2028;
	static uint32_t x283 = 212699717U;
	uint32_t x284 = 449108U;
	static uint64_t t63 = 6LLU;

	t63 = (x281+(x282+(x283<=x284)));

	if (t63 != 31636LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x285 = 46;
	uint64_t x286 = 13LLU;
	int64_t x287 = 6563312307LL;
	int16_t x288 = -1;
	static uint64_t t64 = 501328105490825622LLU;

	t64 = (x285+(x286+(x287<=x288)));

	if (t64 != 59LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x289 = 1U;
	static int64_t x290 = INT64_MIN;
	static int8_t x291 = 1;
	uint8_t x292 = 0U;
	volatile int64_t t65 = 5LL;

	t65 = (x289+(x290+(x291<=x292)));

	if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = -1;
	int64_t x296 = -142LL;
	static int64_t t66 = -633704356LL;

	t66 = (x293+(x294+(x295<=x296)));

	if (t66 != -466214347958LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x301 = 0;
	int8_t x302 = INT8_MIN;
	volatile int32_t x304 = INT32_MIN;
	static int32_t t67 = 43271;

	t67 = (x301+(x302+(x303<=x304)));

	if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x305 = 236771;
	volatile int16_t x306 = -117;
	int64_t x307 = INT64_MAX;
	int64_t x308 = -71LL;
	static int32_t t68 = 1;

	t68 = (x305+(x306+(x307<=x308)));

	if (t68 != 236654) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x309 = -5558;
	int16_t x310 = INT16_MIN;
	volatile int16_t x311 = INT16_MAX;
	volatile int32_t t69 = -103506131;

	t69 = (x309+(x310+(x311<=x312)));

	if (t69 != -38326) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = INT64_MIN;
	static int32_t x314 = 8;
	uint32_t x315 = UINT32_MAX;
	volatile int8_t x316 = INT8_MAX;

	t70 = (x313+(x314+(x315<=x316)));

	if (t70 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x318 = -1;
	static int16_t x319 = INT16_MAX;
	int8_t x320 = 7;
	volatile int32_t t71 = 385765;

	t71 = (x317+(x318+(x319<=x320)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x321 = 617U;
	int64_t x324 = INT64_MAX;
	int32_t t72 = -405;

	t72 = (x321+(x322+(x323<=x324)));

	if (t72 != 617) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x325 = INT8_MIN;
	uint64_t x326 = 4089LLU;
	static uint8_t x327 = 4U;
	volatile int16_t x328 = -6;
	volatile uint64_t t73 = 7540LLU;

	t73 = (x325+(x326+(x327<=x328)));

	if (t73 != 3961LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x329 = INT64_MIN;
	static uint32_t x330 = 9U;
	int64_t x331 = 1219LL;

	t74 = (x329+(x330+(x331<=x332)));

	if (t74 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x333 = 28437U;
	volatile uint64_t t75 = 10436795351425LLU;

	t75 = (x333+(x334+(x335<=x336)));

	if (t75 != 28440LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x337 = UINT16_MAX;
	uint8_t x338 = UINT8_MAX;
	uint8_t x339 = 38U;
	volatile int64_t x340 = -1LL;

	t76 = (x337+(x338+(x339<=x340)));

	if (t76 != 65790) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x350 = 0;
	int16_t x351 = INT16_MIN;
	uint64_t x352 = 143661769LLU;

	t77 = (x349+(x350+(x351<=x352)));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = 0;
	int8_t x354 = INT8_MIN;
	uint16_t x355 = 60U;
	int32_t x356 = -1;
	int32_t t78 = 4177957;

	t78 = (x353+(x354+(x355<=x356)));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x357 = INT64_MIN;
	int64_t x358 = -1LL;
	int8_t x359 = INT8_MIN;
	uint8_t x360 = 8U;
	static volatile int64_t t79 = INT64_MIN;

	t79 = (x357+(x358+(x359<=x360)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x361 = INT64_MIN;
	static uint32_t x362 = 8580U;
	int32_t x363 = INT32_MIN;
	int64_t x364 = -1601460724255LL;
	static int64_t t80 = 192LL;

	t80 = (x361+(x362+(x363<=x364)));

	if (t80 != -9223372036854767228LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x365 = INT16_MAX;
	static int8_t x366 = INT8_MIN;
	int8_t x367 = 19;
	volatile int64_t x368 = INT64_MIN;
	volatile int32_t t81 = -5;

	t81 = (x365+(x366+(x367<=x368)));

	if (t81 != 32639) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = INT8_MIN;
	int16_t x371 = 0;
	uint8_t x372 = 32U;
	volatile int32_t t82 = 0;

	t82 = (x369+(x370+(x371<=x372)));

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x378 = INT32_MIN;
	uint64_t x379 = 1040LLU;
	int8_t x380 = INT8_MIN;
	uint32_t t83 = 2965491U;

	t83 = (x377+(x378+(x379<=x380)));

	if (t83 != 2147483654U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x381 = 445U;
	static int16_t x382 = INT16_MIN;
	static volatile int16_t x383 = -1;
	volatile int32_t t84 = 22934383;

	t84 = (x381+(x382+(x383<=x384)));

	if (t84 != -32323) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x385 = -1;
	int16_t x386 = -1;
	int64_t x387 = INT64_MIN;
	volatile int64_t x388 = INT64_MIN;
	int32_t t85 = 76449268;

	t85 = (x385+(x386+(x387<=x388)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x389 = 21;
	static int16_t x390 = INT16_MIN;
	static int8_t x391 = INT8_MAX;
	uint64_t x392 = 822484579LLU;
	static volatile int32_t t86 = -22;

	t86 = (x389+(x390+(x391<=x392)));

	if (t86 != -32746) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = 0;
	int64_t x394 = -495LL;
	volatile int32_t x395 = 6302005;
	int64_t t87 = -4502483485003LL;

	t87 = (x393+(x394+(x395<=x396)));

	if (t87 != -494LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x398 = 1636084LL;
	uint64_t x399 = 366391364659341LLU;
	int8_t x400 = INT8_MAX;
	volatile int64_t t88 = -145749329490LL;

	t88 = (x397+(x398+(x399<=x400)));

	if (t88 != -408693020601508538LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x405 = 1U;
	volatile int8_t x406 = -1;
	uint64_t x407 = 38664954382LLU;
	uint8_t x408 = 0U;

	t89 = (x405+(x406+(x407<=x408)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x409 = UINT16_MAX;
	volatile int16_t x410 = INT16_MIN;
	uint8_t x411 = 105U;
	int32_t x412 = -1;
	volatile int32_t t90 = -132079976;

	t90 = (x409+(x410+(x411<=x412)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x413 = UINT8_MAX;
	static int8_t x414 = -57;
	volatile int16_t x415 = INT16_MIN;
	uint32_t x416 = 375U;
	volatile int32_t t91 = 996;

	t91 = (x413+(x414+(x415<=x416)));

	if (t91 != 198) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x418 = 54;
	static int8_t x419 = INT8_MIN;
	static uint32_t x420 = 24714U;
	volatile int32_t t92 = 5842878;

	t92 = (x417+(x418+(x419<=x420)));

	if (t92 != 53) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x425 = 178054791;
	static int16_t x426 = -766;
	int8_t x427 = INT8_MIN;
	uint32_t x428 = UINT32_MAX;
	int32_t t93 = -67189;

	t93 = (x425+(x426+(x427<=x428)));

	if (t93 != 178054026) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x429 = 6807258LL;
	static int32_t x431 = -1;
	volatile int64_t t94 = -2244360LL;

	t94 = (x429+(x430+(x431<=x432)));

	if (t94 != 6807258LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x434 = INT64_MIN;
	int16_t x435 = INT16_MIN;
	static uint8_t x436 = 12U;
	int64_t t95 = 43LL;

	t95 = (x433+(x434+(x435<=x436)));

	if (t95 != -9223372036854743680LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x438 = UINT8_MAX;
	static uint64_t x439 = UINT64_MAX;
	uint64_t x440 = 179124987LLU;
	int32_t t96 = -246;

	t96 = (x437+(x438+(x439<=x440)));

	if (t96 != 258) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = 1318963;
	int32_t x442 = INT32_MIN;
	int64_t x444 = -1LL;
	volatile int32_t t97 = -21;

	t97 = (x441+(x442+(x443<=x444)));

	if (t97 != -2146164684) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = INT32_MAX;
	volatile uint8_t x447 = 41U;
	int8_t x448 = INT8_MIN;
	volatile int64_t t98 = -8438688668062645LL;

	t98 = (x445+(x446+(x447<=x448)));

	if (t98 != 210555324684216658LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x449 = INT8_MAX;
	volatile int16_t x450 = INT16_MIN;
	static volatile int64_t x451 = INT64_MAX;
	static int16_t x452 = -1;
	int32_t t99 = -7615;

	t99 = (x449+(x450+(x451<=x452)));

	if (t99 != -32641) { NG(); } else { ; }
	
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

