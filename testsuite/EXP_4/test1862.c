#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 2146259304498013LLU;
uint8_t x8 = UINT8_MAX;
static uint64_t t2 = 51LLU;
volatile uint16_t x17 = 3U;
int16_t x18 = INT16_MIN;
static int64_t x28 = 231569461992823LL;
int16_t x37 = INT16_MIN;
int32_t x38 = INT32_MIN;
int64_t x39 = INT64_MIN;
volatile uint64_t t8 = 394990162411047802LLU;
uint64_t x65 = UINT64_MAX;
static int8_t x66 = INT8_MIN;
uint16_t x78 = 0U;
uint8_t x80 = 27U;
volatile uint64_t t13 = 560161075081856LLU;
uint64_t x82 = 78LLU;
int64_t x83 = -13861LL;
uint64_t t14 = 8385507459LLU;
int8_t x86 = -1;
int8_t x91 = -1;
volatile uint64_t t16 = 10109667146363LLU;
int16_t x96 = -12769;
int32_t t17 = -129447;
uint64_t x99 = 140330387032315010LLU;
int16_t x104 = -1;
int32_t t19 = 11;
int64_t x106 = -16340005LL;
int16_t x109 = 1;
volatile int32_t t21 = 2926;
uint8_t x122 = 0U;
int16_t x142 = INT16_MIN;
uint64_t x143 = UINT64_MAX;
static int64_t x148 = INT64_MAX;
uint32_t t27 = 1433U;
static uint32_t t28 = 0U;
volatile int16_t x163 = INT16_MIN;
static int64_t x175 = INT64_MIN;
volatile int8_t x183 = INT8_MIN;
int8_t x187 = 1;
int8_t x188 = INT8_MAX;
static int64_t x190 = -110LL;
int8_t x191 = INT8_MIN;
static int8_t x201 = INT8_MIN;
uint8_t x204 = UINT8_MAX;
volatile uint64_t t36 = 5843LLU;
uint16_t x207 = 14U;
volatile int32_t x208 = -1;
uint16_t x209 = UINT16_MAX;
int64_t x214 = INT64_MAX;
int32_t x223 = -1;
static int16_t x227 = 187;
int16_t x229 = INT16_MAX;
volatile uint32_t x240 = 144751U;
static int16_t x244 = INT16_MIN;
int32_t x249 = INT32_MAX;
static uint8_t x252 = 91U;
volatile uint64_t t49 = 495229LLU;
volatile uint64_t t52 = 89LLU;
volatile int64_t x276 = -1541LL;
static volatile uint64_t x285 = UINT64_MAX;
static uint8_t x296 = UINT8_MAX;
volatile uint64_t t57 = 752567940156046224LLU;
int64_t x300 = 25250884LL;
static uint16_t x301 = UINT16_MAX;
uint32_t x304 = 7420357U;
uint8_t x312 = 1U;
uint64_t x324 = 5040061704LLU;
volatile uint64_t t63 = 8LLU;
static int32_t x332 = -172302;
int32_t x337 = 3579176;
static uint32_t x338 = 1U;
int8_t x342 = INT8_MIN;
uint64_t x350 = 784059212863LLU;
int32_t x352 = 14860700;
int64_t t73 = 8828LL;
int32_t x371 = INT32_MIN;
static int64_t t74 = 1814397552318778630LL;
int8_t x374 = 0;
uint32_t x377 = UINT32_MAX;
uint64_t t77 = 4124108LLU;
int32_t x395 = -898;
int32_t x398 = INT32_MIN;
static volatile uint8_t x406 = 87U;
int8_t x413 = INT8_MIN;
int32_t x421 = INT32_MIN;
int64_t t82 = -10982692369395555LL;
static int32_t x433 = -1;
int64_t x435 = -16737818950583103LL;
static volatile int16_t x439 = 2;
uint16_t x444 = 3U;
volatile uint64_t t87 = 37455348LLU;
volatile int64_t t90 = 42294302LL;
int8_t x464 = INT8_MAX;
uint32_t x467 = UINT32_MAX;
static volatile uint32_t x468 = UINT32_MAX;
uint32_t t92 = 57U;
uint64_t x496 = 3LLU;
volatile uint64_t t96 = 953575436293064182LLU;
int32_t x499 = INT32_MIN;
uint64_t x518 = UINT64_MAX;
uint16_t x519 = 1U;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x2 = -14646;
	uint64_t x3 = 6340812859781LLU;
	volatile int32_t x4 = INT32_MIN;

	t0 = (x1*(x2+(x3|x4)));

	if (t0 != 18446743893585862321LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	int64_t x6 = -5554844LL;
	uint64_t x7 = 37181611013LLU;
	uint64_t t1 = 140101782832LLU;

	t1 = (x5*(x6+(x7|x8)));

	if (t1 != 4721359165213LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x9 = 17LLU;
	static int16_t x10 = -1;
	volatile uint16_t x11 = UINT16_MAX;
	static int64_t x12 = -33955651169158LL;

	t2 = (x9*(x10+(x11|x12)));

	if (t2 != 18446166827640422366LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x19 = UINT8_MAX;
	uint8_t x20 = 64U;
	int32_t t3 = 379680770;

	t3 = (x17*(x18+(x19|x20)));

	if (t3 != -97539) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x21 = 18123879LLU;
	uint16_t x22 = 266U;
	int16_t x23 = -39;
	uint32_t x24 = 2499108U;
	static uint64_t t4 = 3950LLU;

	t4 = (x21*(x22+(x23|x24)));

	if (t4 != 4766580177LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static int8_t x26 = -1;
	int64_t x27 = 1LL;
	int64_t t5 = 990053281644762646LL;

	t5 = (x25*(x26+(x27|x28)));

	if (t5 != -29640891135081216LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 735376468992LLU;
	int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MIN;
	static int8_t x32 = -1;
	volatile uint64_t t6 = 3LLU;

	t6 = (x29*(x30+(x31|x32)));

	if (t6 != 18422646522197152768LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = INT32_MIN;
	uint16_t x34 = 3U;
	uint8_t x35 = 1U;
	volatile uint32_t x36 = UINT32_MAX;
	volatile uint32_t t7 = 14795U;

	t7 = (x33*(x34+(x35|x36)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x40 = UINT64_MAX;

	t8 = (x37*(x38+(x39|x40)));

	if (t8 != 70368744210432LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MIN;
	static int32_t x50 = -101239959;
	uint64_t x51 = 8LLU;
	uint32_t x52 = UINT32_MAX;
	static volatile uint64_t t9 = 537410127512093832LLU;

	t9 = (x49*(x50+(x51|x52)));

	if (t9 != 9440783195478949888LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x53 = 1710659388LL;
	static uint64_t x54 = 4846528LLU;
	uint32_t x55 = UINT32_MAX;
	int16_t x56 = INT16_MAX;
	uint64_t t10 = 2173331488031986079LLU;

	t10 = (x53*(x54+(x55|x56)));

	if (t10 != 7355516882967120324LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MIN;
	volatile uint32_t x59 = 1157200859U;
	int32_t x60 = -43662581;
	uint32_t t11 = 804U;

	t11 = (x57*(x58+(x59|x60)));

	if (t11 != 21107328U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x67 = -1LL;
	static volatile uint64_t x68 = 1032202LLU;
	volatile uint64_t t12 = 16917655226LLU;

	t12 = (x65*(x66+(x67|x68)));

	if (t12 != 129LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x77 = 97479LLU;
	uint16_t x79 = UINT16_MAX;

	t13 = (x77*(x78+(x79|x80)));

	if (t13 != 6388286265LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = 4;
	volatile int64_t x84 = INT64_MIN;

	t14 = (x81*(x82+(x83|x84)));

	if (t14 != 18446744073709496484LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x85 = 25U;
	int64_t x87 = INT64_MAX;
	int16_t x88 = -106;
	int64_t t15 = -2187LL;

	t15 = (x85*(x86+(x87|x88)));

	if (t15 != -50LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x89 = 1;
	uint64_t x90 = 859557219568297628LLU;
	uint8_t x92 = 78U;

	t16 = (x89*(x90+(x91|x92)));

	if (t16 != 859557219568297627LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x94 = 3062U;
	uint16_t x95 = UINT16_MAX;

	t17 = (x93*(x94+(x95|x96)));

	if (t17 != -100302848) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x97 = 0U;
	int64_t x98 = INT64_MIN;
	volatile int64_t x100 = -13847476322LL;
	static uint64_t t18 = 578487702740LLU;

	t18 = (x97*(x98+(x99|x100)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x101 = INT8_MIN;
	int16_t x102 = 0;
	static uint16_t x103 = 6U;

	t19 = (x101*(x102+(x103|x104)));

	if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x105 = 49LLU;
	uint64_t x107 = 110195025LLU;
	volatile uint8_t x108 = 0U;
	volatile uint64_t t20 = 4011242884LLU;

	t20 = (x105*(x106+(x107|x108)));

	if (t20 != 4598895980LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x110 = INT32_MAX;
	static volatile int32_t x111 = 13455;
	int16_t x112 = -1;

	t21 = (x109*(x110+(x111|x112)));

	if (t21 != 2147483646) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x113 = INT64_MIN;
	uint16_t x114 = 6633U;
	uint64_t x115 = UINT64_MAX;
	int64_t x116 = INT64_MAX;
	static uint64_t t22 = 597858741573222LLU;

	t22 = (x113*(x114+(x115|x116)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = 1;
	static int8_t x123 = INT8_MIN;
	int64_t x124 = -802751LL;
	volatile int64_t t23 = -63037831628LL;

	t23 = (x121*(x122+(x123|x124)));

	if (t23 != -63LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x133 = -1LL;
	volatile uint16_t x134 = UINT16_MAX;
	int16_t x135 = 8;
	int64_t x136 = -1LL;
	static volatile int64_t t24 = 3431271LL;

	t24 = (x133*(x134+(x135|x136)));

	if (t24 != -65534LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x141 = INT8_MAX;
	static volatile uint32_t x144 = UINT32_MAX;
	uint64_t t25 = 3608290060181LLU;

	t25 = (x141*(x142+(x143|x144)));

	if (t25 != 18446744073705389953LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x145 = 3U;
	static volatile int8_t x146 = INT8_MAX;
	int16_t x147 = -1;
	int64_t t26 = -75139020669856984LL;

	t26 = (x145*(x146+(x147|x148)));

	if (t26 != 378LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x153 = 69125U;
	int16_t x154 = -6;
	volatile int8_t x155 = 0;
	int8_t x156 = INT8_MAX;

	t27 = (x153*(x154+(x155|x156)));

	if (t27 != 8364125U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x157 = 246U;
	int32_t x158 = -1;
	int16_t x159 = INT16_MAX;
	int8_t x160 = 3;

	t28 = (x157*(x158+(x159|x160)));

	if (t28 != 8060436U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = -1;
	uint8_t x162 = 15U;
	uint16_t x164 = 14U;
	static volatile int32_t t29 = -682215103;

	t29 = (x161*(x162+(x163|x164)));

	if (t29 != 32739) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x169 = INT32_MAX;
	int32_t x170 = INT32_MAX;
	int32_t x171 = -1;
	uint32_t x172 = 31U;
	static uint32_t t30 = 80143U;

	t30 = (x169*(x170+(x171|x172)));

	if (t30 != 2147483650U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x173 = -29;
	static uint32_t x174 = UINT32_MAX;
	int16_t x176 = INT16_MIN;
	int64_t t31 = -55077LL;

	t31 = (x173*(x174+(x175|x176)));

	if (t31 != -124553101283LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x177 = 3107943U;
	uint64_t x178 = UINT64_MAX;
	static volatile uint32_t x179 = UINT32_MAX;
	uint8_t x180 = 22U;
	static uint64_t t32 = 108975LLU;

	t32 = (x177*(x178+(x179|x180)));

	if (t32 != 13348513536616242LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x181 = INT64_MIN;
	uint64_t x182 = 3LLU;
	uint8_t x184 = 2U;
	volatile uint64_t t33 = 72LLU;

	t33 = (x181*(x182+(x183|x184)));

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x185 = -1LL;
	static volatile uint32_t x186 = 107U;
	int64_t t34 = 255894307098LL;

	t34 = (x185*(x186+(x187|x188)));

	if (t34 != -234LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x189 = INT16_MAX;
	static volatile uint64_t x192 = 94LLU;
	uint64_t t35 = 889952741153LLU;

	t35 = (x189*(x190+(x191|x192)));

	if (t35 != 18446744073704833168LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x202 = UINT64_MAX;
	uint64_t x203 = UINT64_MAX;

	t36 = (x201*(x202+(x203|x204)));

	if (t36 != 256LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x205 = 404725775U;
	int8_t x206 = 7;
	static volatile uint32_t t37 = 111906532U;

	t37 = (x205*(x206+(x207|x208)));

	if (t37 != 2428354650U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x210 = -1;
	int8_t x211 = 45;
	static int8_t x212 = INT8_MAX;
	volatile int32_t t38 = 320964929;

	t38 = (x209*(x210+(x211|x212)));

	if (t38 != 8257410) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x213 = -702;
	volatile int64_t x215 = INT64_MIN;
	int32_t x216 = 1488;
	volatile int64_t t39 = -1790864365528065LL;

	t39 = (x213*(x214+(x215|x216)));

	if (t39 != -1043874LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x217 = -1LL;
	uint64_t x218 = 1715013593652537LLU;
	volatile int16_t x219 = -1;
	uint8_t x220 = 23U;
	volatile uint64_t t40 = 29071LLU;

	t40 = (x217*(x218+(x219|x220)));

	if (t40 != 18445029060115899080LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = -1668LL;
	int8_t x222 = 26;
	uint64_t x224 = UINT64_MAX;
	uint64_t t41 = 5LLU;

	t41 = (x221*(x222+(x223|x224)));

	if (t41 != 18446744073709509916LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x225 = 0LLU;
	int8_t x226 = -21;
	uint8_t x228 = 14U;
	uint64_t t42 = 74828089132377LLU;

	t42 = (x225*(x226+(x227|x228)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = 1;
	int32_t x232 = 59443;
	int32_t t43 = -197;

	t43 = (x229*(x230+(x231|x232)));

	if (t43 != 1956124366) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x233 = -39;
	volatile uint32_t x234 = 61739U;
	static uint16_t x235 = UINT16_MAX;
	volatile uint64_t x236 = UINT64_MAX;
	static uint64_t t44 = 3508927909118151LLU;

	t44 = (x233*(x234+(x235|x236)));

	if (t44 != 18446744073707143834LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x237 = 0U;
	static uint8_t x238 = UINT8_MAX;
	static int16_t x239 = 1;
	uint32_t t45 = 938441U;

	t45 = (x237*(x238+(x239|x240)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x241 = 3143741525LLU;
	static int32_t x242 = -20309173;
	volatile int8_t x243 = INT8_MIN;
	volatile uint64_t t46 = 17917261158837953LLU;

	t46 = (x241*(x242+(x243|x244)));

	if (t46 != 18382896880812127591LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x245 = INT32_MAX;
	int8_t x246 = -1;
	int64_t x247 = -1LL;
	volatile int16_t x248 = -15;
	volatile int64_t t47 = 616828LL;

	t47 = (x245*(x246+(x247|x248)));

	if (t47 != -4294967294LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x250 = 98896952180553LLU;
	int32_t x251 = INT32_MIN;
	volatile uint64_t t48 = 14516595LLU;

	t48 = (x249*(x250+(x251|x252)));

	if (t48 != 16058083513341821020LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x253 = 2804U;
	int64_t x254 = -1LL;
	volatile uint64_t x255 = 35590187651LLU;
	uint64_t x256 = 46192282LLU;

	t49 = (x253*(x254+(x255|x256)));

	if (t49 != 99912646700744LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = -11;
	static volatile int64_t x258 = 92LL;
	static uint64_t x259 = UINT64_MAX;
	static uint16_t x260 = 8U;
	uint64_t t50 = 436447693LLU;

	t50 = (x257*(x258+(x259|x260)));

	if (t50 != 18446744073709550615LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x261 = INT8_MAX;
	int16_t x262 = -1;
	static int8_t x263 = INT8_MIN;
	uint32_t x264 = UINT32_MAX;
	uint32_t t51 = 203794074U;

	t51 = (x261*(x262+(x263|x264)));

	if (t51 != 4294967042U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = INT32_MIN;
	uint64_t x266 = 22450LLU;
	volatile uint64_t x267 = UINT64_MAX;
	int8_t x268 = 16;

	t52 = (x265*(x266+(x267|x268)));

	if (t52 != 18446695864849137664LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x273 = -1210;
	int8_t x274 = INT8_MIN;
	static int16_t x275 = INT16_MIN;
	int64_t t53 = -176LL;

	t53 = (x273*(x274+(x275|x276)));

	if (t53 != 2019490LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x277 = -1;
	int32_t x278 = -1;
	int8_t x279 = -1;
	int32_t x280 = -1;
	static int32_t t54 = -1;

	t54 = (x277*(x278+(x279|x280)));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x281 = INT8_MIN;
	uint16_t x282 = UINT16_MAX;
	static volatile int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MAX;
	int32_t t55 = 22;

	t55 = (x281*(x282+(x283|x284)));

	if (t55 != -4210432) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x286 = INT8_MAX;
	static int32_t x287 = INT32_MIN;
	static volatile uint32_t x288 = UINT32_MAX;
	volatile uint64_t t56 = 6718412054LLU;

	t56 = (x285*(x286+(x287|x288)));

	if (t56 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x293 = 228618983915395576LLU;
	int32_t x294 = 46897281;
	int16_t x295 = 11;

	t57 = (x293*(x294+(x295|x296)));

	if (t57 != 13544446071970345984LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x297 = 196U;
	static int16_t x298 = INT16_MIN;
	int32_t x299 = -1;
	volatile int64_t t58 = -180916054733LL;

	t58 = (x297*(x298+(x299|x300)));

	if (t58 != -6422724LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x302 = INT64_MIN;
	uint64_t x303 = 572036987802LLU;
	uint64_t t59 = 42504742LLU;

	t59 = (x301*(x302+(x303|x304)));

	if (t59 != 9260860961883898913LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x305 = 5345U;
	volatile uint8_t x306 = 5U;
	static volatile int16_t x307 = -11;
	static uint64_t x308 = 30LLU;
	static uint64_t t60 = 6180361766LLU;

	t60 = (x305*(x306+(x307|x308)));

	if (t60 != 21380LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x309 = INT32_MIN;
	static volatile uint32_t x310 = UINT32_MAX;
	int16_t x311 = -22;
	uint32_t t61 = 13930493U;

	t61 = (x309*(x310+(x311|x312)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x317 = -1LL;
	static int32_t x318 = -51985099;
	int8_t x319 = -1;
	volatile int64_t x320 = -372578462LL;
	int64_t t62 = -7766169545655LL;

	t62 = (x317*(x318+(x319|x320)));

	if (t62 != 51985100LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x321 = 1U;
	volatile uint16_t x322 = UINT16_MAX;
	int64_t x323 = INT64_MIN;

	t63 = (x321*(x322+(x323|x324)));

	if (t63 != 9223372041894903047LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x325 = UINT16_MAX;
	uint32_t x326 = 1628501U;
	int32_t x327 = 839;
	uint32_t x328 = 269236760U;
	uint32_t t64 = 10471U;

	t64 = (x325*(x326+(x327|x328)));

	if (t64 != 76475212U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x329 = UINT16_MAX;
	uint8_t x330 = 117U;
	int64_t x331 = -1LL;
	int64_t t65 = -34268678LL;

	t65 = (x329*(x330+(x331|x332)));

	if (t65 != 7602060LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x333 = UINT8_MAX;
	int16_t x334 = 122;
	int8_t x335 = INT8_MIN;
	volatile int64_t x336 = INT64_MIN;
	volatile int64_t t66 = 0LL;

	t66 = (x333*(x334+(x335|x336)));

	if (t66 != -1530LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x339 = -1LL;
	int64_t x340 = INT64_MIN;
	int64_t t67 = 1513523535LL;

	t67 = (x337*(x338+(x339|x340)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x341 = INT32_MIN;
	uint64_t x343 = 8017810LLU;
	static uint8_t x344 = 4U;
	uint64_t t68 = 7630766936557LLU;

	t68 = (x341*(x342+(x343|x344)));

	if (t68 != 18429526224129753088LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = 885;
	volatile int32_t x346 = INT32_MIN;
	static uint64_t x347 = 102913187789LLU;
	uint8_t x348 = UINT8_MAX;
	volatile uint64_t t69 = 10036714663269783LLU;

	t69 = (x345*(x346+(x347|x348)));

	if (t69 != 89177648209035LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = -1LL;
	int64_t x351 = -1LL;
	uint64_t t70 = 13689LLU;

	t70 = (x349*(x350+(x351|x352)));

	if (t70 != 18446743289650338754LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x357 = 88U;
	volatile int64_t x358 = INT64_MIN;
	static volatile uint16_t x359 = 1U;
	volatile uint64_t x360 = 397095LLU;
	volatile uint64_t t71 = 409118LLU;

	t71 = (x357*(x358+(x359|x360)));

	if (t71 != 34944360LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x361 = 91U;
	uint8_t x362 = UINT8_MAX;
	static int32_t x363 = INT32_MAX;
	static uint32_t x364 = UINT32_MAX;
	static uint32_t t72 = 448387553U;

	t72 = (x361*(x362+(x363|x364)));

	if (t72 != 23114U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x365 = 19085084;
	int32_t x366 = INT32_MIN;
	int32_t x367 = -192855174;
	volatile int64_t x368 = INT64_MIN;

	t73 = (x365*(x366+(x367|x368)));

	if (t73 != -44665563006331048LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x369 = INT16_MIN;
	uint8_t x370 = UINT8_MAX;
	volatile int64_t x372 = -392133796621472LL;

	t74 = (x369*(x370+(x371|x372)));

	if (t74 != 37192098414592LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x373 = 1;
	int32_t x375 = INT32_MIN;
	static volatile int16_t x376 = 1;
	static int32_t t75 = -159;

	t75 = (x373*(x374+(x375|x376)));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x378 = INT8_MIN;
	int32_t x379 = 7643;
	int32_t x380 = 1;
	volatile uint32_t t76 = 1011U;

	t76 = (x377*(x378+(x379|x380)));

	if (t76 != 4294959781U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x385 = UINT32_MAX;
	uint64_t x386 = UINT64_MAX;
	uint16_t x387 = 857U;
	int16_t x388 = INT16_MIN;

	t77 = (x385*(x386+(x387|x388)));

	if (t77 != 18446607012713233576LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x393 = -61;
	int16_t x394 = INT16_MIN;
	volatile int8_t x396 = -1;
	volatile int32_t t78 = 26219;

	t78 = (x393*(x394+(x395|x396)));

	if (t78 != 1998909) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x397 = INT16_MIN;
	static uint16_t x399 = 27U;
	int32_t x400 = INT32_MAX;
	int32_t t79 = -115762598;

	t79 = (x397*(x398+(x399|x400)));

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x405 = INT32_MIN;
	int16_t x407 = 3;
	int64_t x408 = -1LL;
	volatile int64_t t80 = 17135777823609421LL;

	t80 = (x405*(x406+(x407|x408)));

	if (t80 != -184683593728LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x414 = 23;
	int32_t x415 = INT32_MIN;
	uint32_t x416 = UINT32_MAX;
	volatile uint32_t t81 = 430435531U;

	t81 = (x413*(x414+(x415|x416)));

	if (t81 != 4294964480U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x422 = INT16_MIN;
	int64_t x423 = 27610LL;
	uint32_t x424 = 915582385U;

	t82 = (x421*(x422+(x423|x424)));

	if (t82 != -1966164274237669376LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x429 = 8791529924375661997LLU;
	uint32_t x430 = 5473U;
	int32_t x431 = -1;
	int16_t x432 = -31;
	static uint64_t t83 = 871LLU;

	t83 = (x429*(x430+(x431|x432)));

	if (t83 != 16589946022821384672LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x434 = -1LL;
	static uint32_t x436 = 661U;
	volatile int64_t t84 = 708LL;

	t84 = (x433*(x434+(x435|x436)));

	if (t84 != 16737818950582572LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x437 = 96228654U;
	static int16_t x438 = INT16_MIN;
	uint8_t x440 = 2U;
	volatile uint32_t t85 = 9134035U;

	t85 = (x437*(x438+(x439|x440)));

	if (t85 != 3772885596U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x441 = 3LL;
	static int64_t x442 = 3199369561LL;
	int32_t x443 = INT32_MIN;
	int64_t t86 = -22LL;

	t86 = (x441*(x442+(x443|x444)));

	if (t86 != 3155657748LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x445 = -1;
	uint64_t x446 = 70367748264556510LLU;
	volatile int32_t x447 = INT32_MAX;
	int32_t x448 = INT32_MIN;

	t87 = (x445*(x446+(x447|x448)));

	if (t87 != 18376376325444995107LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x449 = INT32_MIN;
	uint64_t x450 = 1856296033844LLU;
	int64_t x451 = INT64_MIN;
	int32_t x452 = INT32_MAX;
	static volatile uint64_t t88 = 8211334LLU;

	t88 = (x449*(x450+(x451|x452)));

	if (t88 != 11966399451448213504LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x453 = -56748541081LL;
	uint64_t x454 = 512775743LLU;
	int32_t x455 = -565697;
	int32_t x456 = INT32_MIN;
	uint64_t t89 = 439843019557LLU;

	t89 = (x453*(x454+(x455|x456)));

	if (t89 != 7826315309887203506LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x457 = INT16_MAX;
	uint32_t x458 = UINT32_MAX;
	uint32_t x459 = UINT32_MAX;
	int64_t x460 = 8735323790199LL;

	t90 = (x457*(x458+(x459|x460)));

	if (t90 != 286392048544579586LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x461 = 7;
	uint8_t x462 = 116U;
	int8_t x463 = INT8_MAX;
	int32_t t91 = 19792412;

	t91 = (x461*(x462+(x463|x464)));

	if (t91 != 1701) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x465 = 60;
	int32_t x466 = -1;

	t92 = (x465*(x466+(x467|x468)));

	if (t92 != 4294967176U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x477 = -1;
	int32_t x478 = INT32_MIN;
	volatile int64_t x479 = -193LL;
	static int8_t x480 = INT8_MAX;
	int64_t t93 = -68350172677264LL;

	t93 = (x477*(x478+(x479|x480)));

	if (t93 != 2147483777LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x485 = -1LL;
	volatile int8_t x486 = INT8_MIN;
	volatile int64_t x487 = 302312LL;
	static int16_t x488 = 1;
	volatile int64_t t94 = 85246LL;

	t94 = (x485*(x486+(x487|x488)));

	if (t94 != -302185LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x489 = UINT16_MAX;
	int16_t x490 = INT16_MAX;
	uint32_t x491 = 1U;
	volatile int16_t x492 = 65;
	volatile uint32_t t95 = 1002U;

	t95 = (x489*(x490+(x491|x492)));

	if (t95 != 2151645120U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x493 = 48U;
	uint64_t x494 = UINT64_MAX;
	int16_t x495 = -1;

	t96 = (x493*(x494+(x495|x496)));

	if (t96 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x497 = INT32_MIN;
	int16_t x498 = INT16_MAX;
	static int64_t x500 = INT64_MIN;
	volatile int64_t t97 = 4068LL;

	t97 = (x497*(x498+(x499|x500)));

	if (t97 != 4611615651830693888LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x509 = 12165096;
	int32_t x510 = INT32_MIN;
	static int64_t x511 = -1LL;
	static uint64_t x512 = 40157LLU;
	uint64_t t98 = 92LLU;

	t98 = (x509*(x510+(x511|x512)));

	if (t98 != 18420619728961036312LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x517 = INT64_MIN;
	int64_t x520 = INT64_MIN;
	volatile uint64_t t99 = 50LLU;

	t99 = (x517*(x518+(x519|x520)));

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

