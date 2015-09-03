#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x5 = 117U;
uint16_t x6 = 829U;
static int64_t x16 = -1LL;
int32_t x20 = -4;
int64_t x25 = INT64_MIN;
int32_t x29 = 62566434;
int8_t x30 = INT8_MAX;
static volatile int8_t x38 = INT8_MAX;
static volatile int32_t x45 = 1;
uint64_t t8 = 502150086767940125LLU;
int64_t x81 = INT64_MIN;
static int64_t x84 = 3417700LL;
int64_t t14 = -2145267765429LL;
uint32_t x86 = 491436000U;
int32_t x88 = INT32_MIN;
int32_t x94 = -152284;
volatile int32_t t17 = -85257563;
uint64_t x103 = UINT64_MAX;
int16_t x104 = -8239;
static int64_t x107 = -55527LL;
int16_t x108 = 0;
int16_t x109 = -1;
static uint8_t x110 = UINT8_MAX;
int32_t x114 = -1;
volatile uint32_t t21 = 44591406U;
int8_t x117 = INT8_MIN;
uint64_t x120 = 141887448107171396LLU;
static uint64_t t25 = 33438155822LLU;
int16_t x139 = INT16_MAX;
static uint64_t x140 = 3298442774196679LLU;
int8_t x141 = -1;
int64_t x142 = INT64_MIN;
uint16_t x156 = 2340U;
uint32_t x157 = 936966391U;
static volatile int64_t x158 = -1LL;
uint64_t t32 = 86LLU;
int8_t x161 = INT8_MIN;
int16_t x166 = INT16_MIN;
uint16_t x170 = 10U;
volatile uint64_t t35 = 5318483328LLU;
uint64_t x175 = UINT64_MAX;
volatile uint16_t x184 = UINT16_MAX;
volatile uint32_t t38 = 7074821U;
volatile int64_t t40 = 116LL;
uint32_t x202 = 44U;
static int64_t x205 = INT64_MAX;
int64_t x207 = INT64_MIN;
static int16_t x218 = INT16_MIN;
int8_t x220 = 0;
volatile int64_t t44 = 8920LL;
uint64_t x224 = 19022LLU;
int16_t x226 = INT16_MAX;
uint64_t x230 = UINT64_MAX;
int32_t x232 = -1;
int8_t x234 = INT8_MIN;
int64_t t48 = 5166283LL;
uint32_t x253 = 1154583600U;
uint32_t x272 = 130U;
uint8_t x278 = 3U;
int32_t x279 = 1462570;
int16_t x280 = 11;
static uint32_t x287 = 182839U;
volatile int8_t x289 = -1;
int32_t x290 = 31713473;
int64_t x291 = -5LL;
static int16_t x294 = 3;
static uint64_t t62 = 1540098774799LLU;
uint8_t x297 = 3U;
int64_t x299 = 536630057267067LL;
static int8_t x305 = INT8_MIN;
int64_t x307 = -1LL;
volatile int64_t x311 = INT64_MIN;
int16_t x312 = -1;
int8_t x325 = 20;
int64_t x326 = INT64_MIN;
int8_t x329 = INT8_MAX;
volatile int64_t x332 = INT64_MIN;
int8_t x335 = -1;
int32_t x336 = INT32_MAX;
static int8_t x343 = INT8_MIN;
uint8_t x344 = 0U;
volatile int8_t x351 = INT8_MAX;
static volatile int8_t x366 = 14;
int8_t x367 = INT8_MIN;
int32_t x378 = INT32_MIN;
volatile uint32_t t83 = 1053381U;
uint16_t x390 = UINT16_MAX;
static uint64_t x398 = 125041LLU;
int32_t x401 = 50522766;
int64_t t88 = 354777607LL;
volatile uint16_t x421 = 0U;
int8_t x430 = INT8_MIN;
uint8_t x432 = 99U;
volatile int32_t x434 = -1;
uint16_t x436 = 2U;
int8_t x440 = -1;
static int64_t t94 = 1287985LL;
int16_t x444 = INT16_MIN;
volatile uint64_t x449 = UINT64_MAX;
uint64_t t97 = 233310233341824LLU;


void f0(void) {
	int16_t x1 = 14432;
	volatile uint16_t x2 = 5U;
	volatile int64_t x3 = INT64_MIN;
	volatile int32_t x4 = INT32_MIN;
	int64_t t0 = -26412284411885LL;

	t0 = (x1-(x2-(x3|x4)));

	if (t0 != -2147469221LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x7 = 11U;
	static uint8_t x8 = 14U;
	int32_t t1 = -370346297;

	t1 = (x5-(x6-(x7|x8)));

	if (t1 != -697) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = -89;
	uint64_t x14 = 167439302597080LLU;
	static uint32_t x15 = 666U;
	uint64_t t2 = 19502860866369LLU;

	t2 = (x13-(x14-(x15|x16)));

	if (t2 != 18446576634406954446LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 0;
	static int64_t x18 = -7052LL;
	int8_t x19 = 0;
	int64_t t3 = 33267159276534LL;

	t3 = (x17-(x18-(x19|x20)));

	if (t3 != 7048LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x26 = UINT32_MAX;
	int8_t x27 = 1;
	uint64_t x28 = 168075060805549527LLU;
	volatile uint64_t t4 = 56859017134613LLU;

	t4 = (x25-(x26-(x27|x28)));

	if (t4 != 9391447093365358040LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x31 = UINT8_MAX;
	int64_t x32 = INT64_MIN;
	int64_t t5 = 133406974215LL;

	t5 = (x29-(x30-(x31|x32)));

	if (t5 != -9223372036792209246LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -1;
	volatile uint16_t x39 = 276U;
	volatile int64_t x40 = INT64_MAX;
	volatile int64_t t6 = 50297165277279LL;

	t6 = (x37-(x38-(x39|x40)));

	if (t6 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x46 = -1;
	int16_t x47 = -5337;
	uint64_t x48 = 7474393850LLU;
	uint64_t t7 = 7LLU;

	t7 = (x45-(x46-(x47|x48)));

	if (t7 != 18446744073709550593LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = 52;
	static uint64_t x50 = 117007800903396758LLU;
	volatile int32_t x51 = -33837;
	uint16_t x52 = UINT16_MAX;

	t8 = (x49-(x50-(x51|x52)));

	if (t8 != 18329736272806154909LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x57 = 102315439169LLU;
	static int32_t x58 = -1;
	int16_t x59 = INT16_MIN;
	static volatile int16_t x60 = INT16_MIN;
	uint64_t t9 = 27LLU;

	t9 = (x57-(x58-(x59|x60)));

	if (t9 != 102315406402LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x61 = 68U;
	int8_t x62 = -2;
	int64_t x63 = 76558LL;
	int8_t x64 = -4;
	static volatile int64_t t10 = -781117181619332LL;

	t10 = (x61-(x62-(x63|x64)));

	if (t10 != 68LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = 1;
	static volatile int32_t x66 = INT32_MAX;
	volatile int32_t x67 = -1;
	static int64_t x68 = INT64_MAX;
	int64_t t11 = -11LL;

	t11 = (x65-(x66-(x67|x68)));

	if (t11 != -2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x69 = -118247992403LL;
	int64_t x70 = -1LL;
	uint64_t x71 = 100665LLU;
	int16_t x72 = INT16_MIN;
	uint64_t t12 = 5153777720LLU;

	t12 = (x69-(x70-(x71|x72)));

	if (t12 != 18446743955461528807LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = 8719774704364233523LLU;
	uint64_t x78 = 26LLU;
	volatile int8_t x79 = INT8_MAX;
	int32_t x80 = 18392508;
	volatile uint64_t t13 = 58300457LLU;

	t13 = (x77-(x78-(x79|x80)));

	if (t13 != 8719774704382626072LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x82 = -1;
	int8_t x83 = 28;

	t14 = (x81-(x82-(x83|x84)));

	if (t14 != -9223372036851358083LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x85 = 12;
	int8_t x87 = -1;
	uint32_t t15 = 3010U;

	t15 = (x85-(x86-(x87|x88)));

	if (t15 != 3803531307U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x89 = INT8_MIN;
	int8_t x90 = -11;
	volatile uint64_t x91 = 36289583111LLU;
	uint16_t x92 = 0U;
	static uint64_t t16 = 980LLU;

	t16 = (x89-(x90-(x91|x92)));

	if (t16 != 36289582994LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = INT8_MAX;
	static uint8_t x95 = UINT8_MAX;
	int8_t x96 = INT8_MIN;

	t17 = (x93-(x94-(x95|x96)));

	if (t17 != 152410) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x101 = 3297U;
	int16_t x102 = -129;
	uint64_t t18 = 874979019318994LLU;

	t18 = (x101-(x102-(x103|x104)));

	if (t18 != 3425LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = INT8_MIN;
	volatile int16_t x106 = INT16_MAX;
	volatile int64_t t19 = -1423938170639LL;

	t19 = (x105-(x106-(x107|x108)));

	if (t19 != -88422LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x111 = 0;
	uint64_t x112 = UINT64_MAX;
	uint64_t t20 = 8444833116LLU;

	t20 = (x109-(x110-(x111|x112)));

	if (t20 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x113 = 12980U;
	int32_t x115 = -1;
	int16_t x116 = INT16_MAX;

	t21 = (x113-(x114-(x115|x116)));

	if (t21 != 12980U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x118 = INT32_MIN;
	static int64_t x119 = 68933039LL;
	volatile uint64_t t22 = 1849LLU;

	t22 = (x117-(x118-(x119|x120)));

	if (t22 != 141887450256244591LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x121 = 5U;
	uint64_t x122 = 2LLU;
	volatile int32_t x123 = -67;
	uint32_t x124 = 972094912U;
	uint64_t t23 = 8LLU;

	t23 = (x121-(x122-(x123|x124)));

	if (t23 != 4294967296LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x125 = 1U;
	int8_t x126 = -39;
	static int64_t x127 = 4249833484LL;
	volatile int16_t x128 = -62;
	volatile int64_t t24 = 763761720864LL;

	t24 = (x125-(x126-(x127|x128)));

	if (t24 != -10LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MIN;
	volatile uint64_t x130 = UINT64_MAX;
	static uint8_t x131 = 10U;
	static volatile int64_t x132 = -25527293899102LL;

	t25 = (x129-(x130-(x131|x132)));

	if (t25 != 18446718546415619755LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x133 = 255U;
	int32_t x134 = -1299302;
	int8_t x135 = 24;
	int32_t x136 = INT32_MIN;
	int32_t t26 = -29307;

	t26 = (x133-(x134-(x135|x136)));

	if (t26 != -2146184067) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = -1;
	static uint16_t x138 = 3U;
	uint64_t t27 = 578698LLU;

	t27 = (x137-(x138-(x139|x140)));

	if (t27 != 3298442774216699LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x143 = 924728568603LLU;
	uint8_t x144 = UINT8_MAX;
	uint64_t t28 = 9131920944050LLU;

	t28 = (x141-(x142-(x143|x144)));

	if (t28 != 9223372961583344638LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x145 = -351620169;
	static uint32_t x146 = 12900883U;
	uint16_t x147 = UINT16_MAX;
	int32_t x148 = -3;
	volatile uint32_t t29 = 40712U;

	t29 = (x145-(x146-(x147|x148)));

	if (t29 != 3930446243U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = 3828U;
	int16_t x150 = INT16_MIN;
	volatile int16_t x151 = INT16_MIN;
	int32_t x152 = -1;
	int32_t t30 = -661483;

	t30 = (x149-(x150-(x151|x152)));

	if (t30 != 36595) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = -1;
	int32_t x154 = -1;
	static int32_t x155 = INT32_MAX;
	static volatile int32_t t31 = INT32_MAX;

	t31 = (x153-(x154-(x155|x156)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x159 = -62579565275LL;
	uint64_t x160 = 660725LLU;

	t32 = (x157-(x158-(x159|x160)));

	if (t32 != 18446744012067477229LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x162 = INT16_MAX;
	int32_t x163 = -4035;
	int64_t x164 = -1LL;
	int64_t t33 = 758LL;

	t33 = (x161-(x162-(x163|x164)));

	if (t33 != -32896LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MIN;
	volatile uint16_t x167 = 393U;
	volatile uint32_t x168 = 181U;
	uint32_t t34 = 585U;

	t34 = (x165-(x166-(x167|x168)));

	if (t34 != 445U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = INT8_MIN;
	static volatile uint64_t x171 = 46305LLU;
	volatile int64_t x172 = 685012672307970LL;

	t35 = (x169-(x170-(x171|x172)));

	if (t35 != 685012672313177LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = 15240;
	int32_t x174 = 32;
	volatile int8_t x176 = 0;
	uint64_t t36 = 55665081946326156LLU;

	t36 = (x173-(x174-(x175|x176)));

	if (t36 != 15207LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x181 = 1U;
	static int16_t x182 = -1;
	uint32_t x183 = 383472588U;
	static volatile uint32_t t37 = 11U;

	t37 = (x181-(x182-(x183|x184)));

	if (t37 != 383516673U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	static uint8_t x187 = UINT8_MAX;
	uint32_t x188 = 20055U;

	t38 = (x185-(x186-(x187|x188)));

	if (t38 != 2147536639U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x193 = 448605LLU;
	static int64_t x194 = 570466152LL;
	int64_t x195 = INT64_MAX;
	uint32_t x196 = UINT32_MAX;
	uint64_t t39 = 9392638745074LLU;

	t39 = (x193-(x194-(x195|x196)));

	if (t39 != 9223372036284758260LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x197 = UINT8_MAX;
	uint16_t x198 = 1977U;
	volatile int64_t x199 = INT64_MIN;
	int8_t x200 = -1;

	t40 = (x197-(x198-(x199|x200)));

	if (t40 != -1723LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x201 = 244940816972488LLU;
	int16_t x203 = -1;
	int64_t x204 = -1LL;
	volatile uint64_t t41 = 530367634020329346LLU;

	t41 = (x201-(x202-(x203|x204)));

	if (t41 != 244940816972443LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x206 = UINT32_MAX;
	volatile uint64_t x208 = 733743809LLU;
	static uint64_t t42 = 473557290647322LLU;

	t42 = (x205-(x206-(x207|x208)));

	if (t42 != 18446744070148328129LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = INT64_MIN;
	int16_t x210 = INT16_MIN;
	int8_t x211 = 30;
	uint8_t x212 = 1U;
	static volatile int64_t t43 = -506633LL;

	t43 = (x209-(x210-(x211|x212)));

	if (t43 != -9223372036854743009LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x217 = -1LL;
	static int8_t x219 = 22;

	t44 = (x217-(x218-(x219|x220)));

	if (t44 != 32789LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = INT16_MAX;
	uint64_t x222 = 121643075531139LLU;
	volatile int16_t x223 = -1;
	static volatile uint64_t t45 = 220814601013393068LLU;

	t45 = (x221-(x222-(x223|x224)));

	if (t45 != 18446622430634053243LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x227 = -1;
	volatile int64_t x228 = -1LL;
	volatile int64_t t46 = -96780LL;

	t46 = (x225-(x226-(x227|x228)));

	if (t46 != 4294934527LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x229 = -1;
	uint64_t x231 = 27125540362563LLU;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x229-(x230-(x231|x232)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x233 = 69U;
	int8_t x235 = 0;
	volatile int64_t x236 = -15699807LL;

	t48 = (x233-(x234-(x235|x236)));

	if (t48 != -15699610LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x237 = -1;
	volatile int16_t x238 = -1;
	int8_t x239 = -5;
	uint16_t x240 = 3U;
	volatile int32_t t49 = -32412;

	t49 = (x237-(x238-(x239|x240)));

	if (t49 != -5) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x241 = INT8_MIN;
	static int16_t x242 = INT16_MIN;
	uint8_t x243 = 7U;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t50 = 47529215;

	t50 = (x241-(x242-(x243|x244)));

	if (t50 != 32519) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = -47279;
	int16_t x246 = 1989;
	int16_t x247 = INT16_MIN;
	int8_t x248 = -1;
	int32_t t51 = -3208;

	t51 = (x245-(x246-(x247|x248)));

	if (t51 != -49269) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x249 = UINT16_MAX;
	volatile int32_t x250 = -1;
	static int8_t x251 = INT8_MIN;
	int16_t x252 = 3;
	volatile int32_t t52 = -631685403;

	t52 = (x249-(x250-(x251|x252)));

	if (t52 != 65411) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x254 = -1;
	int8_t x255 = -1;
	static int8_t x256 = INT8_MIN;
	uint32_t t53 = 14U;

	t53 = (x253-(x254-(x255|x256)));

	if (t53 != 1154583600U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = 0;
	uint32_t x262 = 51243U;
	uint64_t x263 = 71LLU;
	int8_t x264 = INT8_MIN;
	static volatile uint64_t t54 = 29870397148LLU;

	t54 = (x261-(x262-(x263|x264)));

	if (t54 != 18446744073709500316LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x265 = -10736819766724784LL;
	static int64_t x266 = INT64_MAX;
	uint64_t x267 = 13604480340LLU;
	int8_t x268 = 0;
	volatile uint64_t t55 = 6825501517LLU;

	t55 = (x265-(x266-(x267|x268)));

	if (t55 != 9212635230692531365LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x269 = 38U;
	static int16_t x270 = INT16_MAX;
	uint8_t x271 = 36U;
	static uint32_t t56 = 112032U;

	t56 = (x269-(x270-(x271|x272)));

	if (t56 != 4294934733U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = -28088461LL;
	static int16_t x274 = 771;
	volatile int32_t x275 = 229949;
	volatile uint16_t x276 = 59U;
	volatile int64_t t57 = 20603LL;

	t57 = (x273-(x274-(x275|x276)));

	if (t57 != -27859281LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = INT16_MAX;
	int32_t t58 = -5072;

	t58 = (x277-(x278-(x279|x280)));

	if (t58 != 1495335) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x281 = UINT8_MAX;
	int64_t x282 = -1LL;
	volatile uint64_t x283 = 2467883072135150245LLU;
	volatile int64_t x284 = -1LL;
	uint64_t t59 = 15072151LLU;

	t59 = (x281-(x282-(x283|x284)));

	if (t59 != 255LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = INT32_MAX;
	int16_t x288 = INT16_MIN;
	volatile uint32_t t60 = 1269U;

	t60 = (x285-(x286-(x287|x288)));

	if (t60 != 2147437112U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x292 = -1LL;
	int64_t t61 = 44026456LL;

	t61 = (x289-(x290-(x291|x292)));

	if (t61 != -31713475LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x293 = 2589LLU;
	volatile uint16_t x295 = 11161U;
	int16_t x296 = INT16_MIN;

	t62 = (x293-(x294-(x295|x296)));

	if (t62 != 18446744073709532595LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x298 = -7;
	int32_t x300 = -1;
	volatile int64_t t63 = 6797277635162LL;

	t63 = (x297-(x298-(x299|x300)));

	if (t63 != 9LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x301 = 0;
	static uint64_t x302 = 13813406LLU;
	static int64_t x303 = -1LL;
	static int16_t x304 = -1;
	uint64_t t64 = 4660672631081LLU;

	t64 = (x301-(x302-(x303|x304)));

	if (t64 != 18446744073695738209LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x306 = INT8_MIN;
	int64_t x308 = -1LL;
	static int64_t t65 = -262278879314140502LL;

	t65 = (x305-(x306-(x307|x308)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = 75575983;
	volatile uint8_t x310 = 1U;
	volatile int64_t t66 = -29LL;

	t66 = (x309-(x310-(x311|x312)));

	if (t66 != 75575981LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	int16_t x315 = -1;
	int64_t x316 = -1LL;
	volatile int64_t t67 = -12526LL;

	t67 = (x313-(x314-(x315|x316)));

	if (t67 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = INT16_MIN;
	static uint8_t x318 = 12U;
	static int8_t x319 = INT8_MAX;
	static uint64_t x320 = UINT64_MAX;
	volatile uint64_t t68 = 31907324242110LLU;

	t68 = (x317-(x318-(x319|x320)));

	if (t68 != 18446744073709518835LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = INT8_MAX;
	int16_t x322 = 665;
	int32_t x323 = INT32_MIN;
	volatile int16_t x324 = INT16_MIN;
	int32_t t69 = -2;

	t69 = (x321-(x322-(x323|x324)));

	if (t69 != -33306) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x327 = INT8_MAX;
	int32_t x328 = INT32_MIN;
	int64_t t70 = 2674LL;

	t70 = (x325-(x326-(x327|x328)));

	if (t70 != 9223372034707292307LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x330 = 2;
	volatile uint64_t x331 = 6453650686304538LLU;
	volatile uint64_t t71 = 12443984860641LLU;

	t71 = (x329-(x330-(x331|x332)));

	if (t71 != 9229825687541080471LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x333 = -1;
	uint16_t x334 = 2U;
	int32_t t72 = 206970759;

	t72 = (x333-(x334-(x335|x336)));

	if (t72 != -4) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x337 = INT8_MIN;
	uint8_t x338 = UINT8_MAX;
	volatile int16_t x339 = INT16_MIN;
	static uint16_t x340 = 7U;
	static volatile int32_t t73 = -4;

	t73 = (x337-(x338-(x339|x340)));

	if (t73 != -33144) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x341 = 29U;
	int32_t x342 = INT32_MIN;
	volatile int32_t t74 = 1938;

	t74 = (x341-(x342-(x343|x344)));

	if (t74 != 2147483549) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x345 = INT32_MIN;
	uint64_t x346 = 124427911531634822LLU;
	static int8_t x347 = INT8_MIN;
	volatile uint16_t x348 = 1U;
	static uint64_t t75 = 678LLU;

	t75 = (x345-(x346-(x347|x348)));

	if (t75 != 18322316160030433019LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x349 = -883;
	static int8_t x350 = -30;
	static int8_t x352 = -7;
	volatile int32_t t76 = 3777;

	t76 = (x349-(x350-(x351|x352)));

	if (t76 != -854) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = INT32_MAX;
	static volatile int64_t x354 = INT64_MAX;
	int32_t x355 = -1;
	uint64_t x356 = 16161295811LLU;
	uint64_t t77 = 1122348394089997308LLU;

	t77 = (x353-(x354-(x355|x356)));

	if (t77 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = -1;
	volatile uint8_t x358 = 111U;
	uint64_t x359 = UINT64_MAX;
	uint8_t x360 = UINT8_MAX;
	static volatile uint64_t t78 = 153902671169522LLU;

	t78 = (x357-(x358-(x359|x360)));

	if (t78 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = -14932;
	int8_t x362 = -1;
	uint64_t x363 = 1999LLU;
	static int16_t x364 = INT16_MIN;
	volatile uint64_t t79 = 4967465104LLU;

	t79 = (x361-(x362-(x363|x364)));

	if (t79 != 18446744073709505916LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x365 = 0;
	int16_t x368 = -1;
	static int32_t t80 = 276890906;

	t80 = (x365-(x366-(x367|x368)));

	if (t80 != -15) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x369 = 50250U;
	int64_t x370 = -1LL;
	int64_t x371 = -1LL;
	int32_t x372 = -10;
	volatile int64_t t81 = 993LL;

	t81 = (x369-(x370-(x371|x372)));

	if (t81 != 50250LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x373 = -1;
	int32_t x374 = INT32_MAX;
	static int16_t x375 = -29;
	uint64_t x376 = 34258645250298672LLU;
	volatile uint64_t t82 = 35814LLU;

	t82 = (x373-(x374-(x375|x376)));

	if (t82 != 18446744071562067955LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x377 = UINT32_MAX;
	volatile int8_t x379 = -1;
	int8_t x380 = -1;

	t83 = (x377-(x378-(x379|x380)));

	if (t83 != 2147483646U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x381 = INT8_MIN;
	int8_t x382 = 34;
	uint32_t x383 = 193208U;
	static int8_t x384 = INT8_MIN;
	volatile uint32_t t84 = 25U;

	t84 = (x381-(x382-(x383|x384)));

	if (t84 != 4294967062U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MIN;
	int8_t x387 = 0;
	static int32_t x388 = -1;
	int32_t t85 = -1;

	t85 = (x385-(x386-(x387|x388)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x389 = 596U;
	int16_t x391 = INT16_MIN;
	int8_t x392 = -1;
	static uint32_t t86 = 11113163U;

	t86 = (x389-(x390-(x391|x392)));

	if (t86 != 4294902356U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x397 = INT16_MAX;
	volatile int8_t x399 = 0;
	static volatile int64_t x400 = INT64_MIN;
	volatile uint64_t t87 = 803857521343545898LLU;

	t87 = (x397-(x398-(x399|x400)));

	if (t87 != 9223372036854683534LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x402 = INT64_MAX;
	uint16_t x403 = UINT16_MAX;
	volatile uint16_t x404 = 70U;

	t88 = (x401-(x402-(x403|x404)));

	if (t88 != -9223372036804187506LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x413 = UINT8_MAX;
	uint8_t x414 = UINT8_MAX;
	static uint64_t x415 = 8LLU;
	static int8_t x416 = INT8_MIN;
	static volatile uint64_t t89 = 31919512LLU;

	t89 = (x413-(x414-(x415|x416)));

	if (t89 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x417 = -1;
	uint64_t x418 = 274872590LLU;
	int16_t x419 = -10457;
	int8_t x420 = -2;
	volatile uint64_t t90 = 16367851668904053LLU;

	t90 = (x417-(x418-(x419|x420)));

	if (t90 != 18446744073434679024LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x422 = 5977986062514LLU;
	int8_t x423 = 52;
	static uint16_t x424 = 1U;
	static uint64_t t91 = 116986664789LLU;

	t91 = (x421-(x422-(x423|x424)));

	if (t91 != 18446738095723489155LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x429 = 3837U;
	uint8_t x431 = 37U;
	volatile uint32_t t92 = 2U;

	t92 = (x429-(x430-(x431|x432)));

	if (t92 != 4068U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x433 = UINT16_MAX;
	int32_t x435 = INT32_MIN;
	static int32_t t93 = -113;

	t93 = (x433-(x434-(x435|x436)));

	if (t93 != -2147418110) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x437 = -51472LL;
	int32_t x438 = INT32_MAX;
	uint32_t x439 = UINT32_MAX;

	t94 = (x437-(x438-(x439|x440)));

	if (t94 != -2147535120LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x441 = 1512411;
	int16_t x442 = -16;
	int32_t x443 = INT32_MAX;
	volatile int32_t t95 = -827;

	t95 = (x441-(x442-(x443|x444)));

	if (t95 != 1512426) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x445 = -1;
	uint8_t x446 = 0U;
	uint16_t x447 = 1U;
	static int8_t x448 = INT8_MAX;
	volatile int32_t t96 = 51981524;

	t96 = (x445-(x446-(x447|x448)));

	if (t96 != 126) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x450 = INT32_MIN;
	int8_t x451 = -15;
	int64_t x452 = 12LL;

	t97 = (x449-(x450-(x451|x452)));

	if (t97 != 2147483644LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x453 = -1;
	uint64_t x454 = UINT64_MAX;
	int32_t x455 = -1;
	uint16_t x456 = 19U;
	uint64_t t98 = UINT64_MAX;

	t98 = (x453-(x454-(x455|x456)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x457 = -7653717LL;
	static int32_t x458 = -1;
	int32_t x459 = INT32_MIN;
	uint16_t x460 = 120U;
	int64_t t99 = 16LL;

	t99 = (x457-(x458-(x459|x460)));

	if (t99 != -2155137244LL) { NG(); } else { ; }
	
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

