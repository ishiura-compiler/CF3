#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
int32_t x3 = 65893896;
int16_t x6 = INT16_MIN;
int32_t x16 = 1835;
uint8_t x19 = UINT8_MAX;
int32_t x22 = INT32_MAX;
static uint32_t x24 = 58U;
uint64_t x25 = UINT64_MAX;
int32_t x27 = INT32_MIN;
static int8_t x28 = 3;
volatile uint64_t t5 = 74836030517LLU;
static int8_t x43 = 28;
static uint64_t x47 = 1411757922339822374LLU;
static int64_t x49 = -21193004896LL;
int8_t x52 = 1;
volatile uint64_t x54 = UINT64_MAX;
volatile int64_t t11 = -139929034871970369LL;
static uint16_t x62 = UINT16_MAX;
uint64_t x69 = UINT64_MAX;
static volatile int16_t x70 = INT16_MIN;
volatile uint32_t x71 = 3U;
int32_t x75 = -7;
int8_t x76 = -1;
volatile uint64_t x81 = 930500296227949LLU;
uint64_t t17 = 297729387LLU;
static volatile int64_t x92 = -1LL;
static int64_t t19 = -62475770LL;
int32_t t22 = 54215764;
uint32_t x116 = 147083U;
int64_t t26 = 5925721987963LL;
int8_t x142 = INT8_MAX;
static int32_t x145 = INT32_MIN;
volatile int8_t x156 = INT8_MIN;
static int32_t x161 = INT32_MIN;
uint8_t x162 = UINT8_MAX;
static int8_t x166 = INT8_MIN;
int16_t x168 = 147;
int16_t x174 = 997;
static int32_t x176 = INT32_MIN;
int64_t x178 = INT64_MIN;
uint32_t t37 = 41899900U;
int16_t x189 = INT16_MIN;
int8_t x205 = INT8_MIN;
static uint32_t x215 = 585037U;
volatile uint64_t t44 = 35300821LLU;
uint8_t x218 = UINT8_MAX;
static int16_t x220 = INT16_MAX;
uint32_t x221 = 4110804U;
static volatile uint8_t x223 = 8U;
int8_t x225 = 2;
uint16_t x228 = UINT16_MAX;
int8_t x235 = 15;
int8_t x238 = -1;
uint32_t x242 = 12U;
static uint16_t x244 = 9U;
volatile uint32_t x255 = UINT32_MAX;
static int64_t t53 = 1805892880LL;
uint64_t t59 = 3196LLU;
int32_t x305 = 29873576;
int8_t x308 = INT8_MIN;
int16_t x310 = -14;
int64_t x319 = -1LL;
static volatile int32_t x323 = -1;
int32_t x343 = -517174;
volatile int64_t x350 = -437923732112795LL;
volatile int16_t x352 = INT16_MIN;
volatile uint64_t t71 = 90216447LLU;
static volatile uint64_t x374 = UINT64_MAX;
uint32_t x378 = 3747U;
int8_t x380 = INT8_MAX;
uint16_t x381 = UINT16_MAX;
int64_t x384 = INT64_MAX;
volatile uint64_t t75 = 0LLU;
static volatile int16_t x395 = 5066;
static uint16_t x403 = UINT16_MAX;
uint64_t x414 = 2073LLU;
uint32_t x419 = UINT32_MAX;
int64_t x421 = INT64_MAX;
uint64_t x422 = 29378860125143238LLU;
volatile int64_t x425 = INT64_MIN;
int8_t x432 = 8;
uint16_t x435 = 9U;
int64_t x437 = INT64_MIN;
volatile uint64_t t85 = 506696915394294LLU;
static volatile int8_t x451 = -1;
static int16_t x469 = -1;
volatile int64_t t92 = 2345104828LL;
int64_t x475 = 412LL;
static volatile uint8_t x480 = 1U;
volatile int32_t t96 = -1088851;
int32_t x491 = -1;
uint8_t x496 = 1U;
int16_t x508 = -1;


void f0(void) {
	uint8_t x1 = 13U;
	int8_t x4 = -1;
	volatile uint64_t t0 = 65433514977948119LLU;

	t0 = (x1*(x2*(x3%x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 10844944350864924LLU;
	volatile int16_t x7 = INT16_MIN;
	volatile int32_t x8 = INT32_MIN;
	volatile uint64_t t1 = 142LLU;

	t1 = (x5*(x6*(x7%x8)));

	if (t1 != 15557994455339368448LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -4428;
	int8_t x14 = INT8_MAX;
	int8_t x15 = 2;
	static int32_t t2 = -299232280;

	t2 = (x13*(x14*(x15%x16)));

	if (t2 != -1124712) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 2;
	int64_t x18 = INT64_MIN;
	int8_t x20 = 15;
	volatile int64_t t3 = 36602LL;

	t3 = (x17*(x18*(x19%x20)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = 5552U;
	volatile uint64_t x23 = 100LLU;
	uint64_t t4 = 107LLU;

	t4 = (x21*(x22*(x23%x24)));

	if (t4 != 500758826742048LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x26 = 111969172U;

	t5 = (x25*(x26*(x27%x28)));

	if (t5 != 18446744069638522664LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -2;
	int8_t x34 = -1;
	static int8_t x35 = INT8_MIN;
	static int16_t x36 = INT16_MAX;
	volatile int32_t t6 = 7984964;

	t6 = (x33*(x34*(x35%x36)));

	if (t6 != -256) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -488715164LL;
	uint32_t x42 = 88869060U;
	int64_t x44 = -1LL;
	int64_t t7 = -133492511016581013LL;

	t7 = (x41*(x42*(x43%x44)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x45 = INT32_MIN;
	uint8_t x46 = 13U;
	static int64_t x48 = INT64_MIN;
	static uint64_t t8 = 607LLU;

	t8 = (x45*(x46*(x47%x48)));

	if (t8 != 12508765046106488832LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x50 = 2041U;
	int8_t x51 = 30;
	static int64_t t9 = 4LL;

	t9 = (x49*(x50*(x51%x52)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x53 = INT64_MAX;
	int32_t x55 = INT32_MIN;
	volatile uint8_t x56 = 13U;
	volatile uint64_t t10 = 3016786485LLU;

	t10 = (x53*(x54*(x55%x56)));

	if (t10 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x57 = -16;
	int32_t x58 = 2;
	volatile int64_t x59 = INT64_MIN;
	static int8_t x60 = -29;

	t11 = (x57*(x58*(x59%x60)));

	if (t11 != 384LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = 153LL;
	uint64_t x63 = 2139364028788783456LLU;
	uint16_t x64 = 4U;
	volatile uint64_t t12 = 16051253433288LLU;

	t12 = (x61*(x62*(x63%x64)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = -7;
	volatile uint64_t x66 = UINT64_MAX;
	uint16_t x67 = UINT16_MAX;
	int8_t x68 = INT8_MIN;
	volatile uint64_t t13 = 7904806571675LLU;

	t13 = (x65*(x66*(x67%x68)));

	if (t13 != 889LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x72 = -5;
	uint64_t t14 = 12419946421LLU;

	t14 = (x69*(x70*(x71%x72)));

	if (t14 != 18446744069414682624LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 22U;
	int64_t x74 = INT64_MAX;
	volatile int64_t t15 = -37LL;

	t15 = (x73*(x74*(x75%x76)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = 15146354;
	volatile uint64_t x78 = 69585402155519108LLU;
	int16_t x79 = 4414;
	uint32_t x80 = UINT32_MAX;
	volatile uint64_t t16 = 8117879971016469208LLU;

	t16 = (x77*(x78*(x79%x80)));

	if (t16 != 6088535853343370352LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x82 = 31U;
	int32_t x83 = INT32_MAX;
	int16_t x84 = INT16_MAX;

	t17 = (x81*(x82*(x83%x84)));

	if (t17 != 28845509183066419LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = 1;
	int32_t x86 = -3;
	int16_t x87 = 31;
	int8_t x88 = 12;
	volatile int32_t t18 = -169;

	t18 = (x85*(x86*(x87%x88)));

	if (t18 != -21) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = 3U;
	int8_t x90 = 58;
	uint8_t x91 = UINT8_MAX;

	t19 = (x89*(x90*(x91%x92)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MAX;
	int16_t x99 = INT16_MIN;
	uint8_t x100 = 28U;
	volatile int32_t t20 = 1668065;

	t20 = (x97*(x98*(x99%x100)));

	if (t20 != 130048) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -1LL;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = -1;
	int8_t x104 = 22;
	int64_t t21 = 22957709533060LL;

	t21 = (x101*(x102*(x103%x104)));

	if (t21 != 255LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = 769;
	static volatile int8_t x106 = INT8_MAX;
	int8_t x107 = -7;
	volatile uint16_t x108 = 178U;

	t22 = (x105*(x106*(x107%x108)));

	if (t22 != -683641) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x113 = INT64_MAX;
	int8_t x114 = INT8_MAX;
	int16_t x115 = 0;
	volatile int64_t t23 = -774145113LL;

	t23 = (x113*(x114*(x115%x116)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x121 = UINT8_MAX;
	uint8_t x122 = 3U;
	uint16_t x123 = UINT16_MAX;
	int64_t x124 = INT64_MIN;
	volatile int64_t t24 = 903126107132LL;

	t24 = (x121*(x122*(x123%x124)));

	if (t24 != 50134275LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x129 = 6U;
	int32_t x130 = INT32_MAX;
	static int64_t x131 = INT64_MIN;
	volatile int32_t x132 = INT32_MIN;
	int64_t t25 = -6330536043LL;

	t25 = (x129*(x130*(x131%x132)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = INT16_MIN;
	static int16_t x138 = INT16_MIN;
	int64_t x139 = -1067206LL;
	uint8_t x140 = 19U;

	t26 = (x137*(x138*(x139%x140)));

	if (t26 != -15032385536LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x141 = INT8_MIN;
	uint64_t x143 = UINT64_MAX;
	int64_t x144 = INT64_MIN;
	static volatile uint64_t t27 = 45976LLU;

	t27 = (x141*(x142*(x143%x144)));

	if (t27 != 16256LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x146 = INT32_MAX;
	volatile int64_t x147 = INT64_MIN;
	volatile uint32_t x148 = 6U;
	int64_t t28 = -153713088934185875LL;

	t28 = (x145*(x146*(x147%x148)));

	if (t28 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x149 = INT32_MIN;
	int8_t x150 = -5;
	static uint64_t x151 = 118059631985014233LLU;
	int8_t x152 = INT8_MIN;
	volatile uint64_t t29 = 22727550474LLU;

	t29 = (x149*(x150*(x151%x152)));

	if (t29 != 4824277272410193920LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x153 = UINT64_MAX;
	uint64_t x154 = UINT64_MAX;
	volatile int32_t x155 = INT32_MIN;
	static volatile uint64_t t30 = 10474753290057LLU;

	t30 = (x153*(x154*(x155%x156)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x163 = 15946084228491LL;
	volatile int8_t x164 = INT8_MIN;
	volatile int64_t t31 = 356LL;

	t31 = (x161*(x162*(x163%x164)));

	if (t31 != -6023691632640LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x165 = 1U;
	uint64_t x167 = UINT64_MAX;
	uint64_t t32 = 13141901076481825LLU;

	t32 = (x165*(x166*(x167%x168)));

	if (t32 != 18446744073709538944LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = 0;
	int64_t x170 = -1LL;
	int16_t x171 = INT16_MIN;
	volatile int8_t x172 = -1;
	int64_t t33 = -170372LL;

	t33 = (x169*(x170*(x171%x172)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	volatile uint64_t t34 = 28LLU;

	t34 = (x173*(x174*(x175%x176)));

	if (t34 != 13835060196323360768LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = -1;
	uint64_t x179 = UINT64_MAX;
	int8_t x180 = -8;
	volatile uint64_t t35 = 15333576092LLU;

	t35 = (x177*(x178*(x179%x180)));

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x181 = 0U;
	static int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MAX;
	volatile int64_t x184 = INT64_MIN;
	volatile int64_t t36 = 1632500460125LL;

	t36 = (x181*(x182*(x183%x184)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x185 = 9166;
	volatile int8_t x186 = -25;
	int16_t x187 = INT16_MIN;
	uint32_t x188 = UINT32_MAX;

	t37 = (x185*(x186*(x187%x188)));

	if (t37 != 3213819904U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x190 = -73;
	static volatile int32_t x191 = INT32_MIN;
	uint8_t x192 = 7U;
	volatile int32_t t38 = -780974910;

	t38 = (x189*(x190*(x191%x192)));

	if (t38 != -4784128) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x193 = 10995840837352LLU;
	static uint64_t x194 = 7650598LLU;
	static int64_t x195 = INT64_MIN;
	int32_t x196 = -1;
	volatile uint64_t t39 = 29700651975LLU;

	t39 = (x193*(x194*(x195%x196)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x197 = -2261585962LL;
	static uint16_t x198 = UINT16_MAX;
	volatile int8_t x199 = -5;
	int16_t x200 = -1;
	static volatile int64_t t40 = -2737LL;

	t40 = (x197*(x198*(x199%x200)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x201 = 221517U;
	uint64_t x202 = 13LLU;
	static int64_t x203 = INT64_MAX;
	int32_t x204 = INT32_MIN;
	volatile uint64_t t41 = 77681262732387LLU;

	t41 = (x201*(x202*(x203%x204)));

	if (t41 != 6184153755422487LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x206 = 4U;
	uint16_t x207 = UINT16_MAX;
	uint64_t x208 = 1888LLU;
	static volatile uint64_t t42 = 37535764492LLU;

	t42 = (x205*(x206*(x207%x208)));

	if (t42 != 18446744073708864000LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x209 = 954U;
	uint32_t x210 = 1448308U;
	int8_t x211 = INT8_MIN;
	int32_t x212 = -1;
	volatile uint32_t t43 = 22239U;

	t43 = (x209*(x210*(x211%x212)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = INT8_MIN;
	volatile uint16_t x214 = 5604U;
	uint64_t x216 = 38260091518888113LLU;

	t44 = (x213*(x214*(x215%x216)));

	if (t44 != 18446743654055491072LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = INT16_MIN;
	static int64_t x219 = -1LL;
	volatile int64_t t45 = -6246588909204214LL;

	t45 = (x217*(x218*(x219%x220)));

	if (t45 != 8355840LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x222 = 1LLU;
	int32_t x224 = 246332;
	uint64_t t46 = 349187281682681623LLU;

	t46 = (x221*(x222*(x223%x224)));

	if (t46 != 32886432LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x226 = 2;
	uint32_t x227 = 7195466U;
	volatile uint32_t t47 = 420U;

	t47 = (x225*(x226*(x227%x228)));

	if (t47 != 208604U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x233 = UINT16_MAX;
	uint32_t x234 = 137655U;
	static uint16_t x236 = 604U;
	uint32_t t48 = 146961U;

	t48 = (x233*(x234*(x235%x236)));

	if (t48 != 2174320199U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x237 = UINT16_MAX;
	int8_t x239 = INT8_MIN;
	int8_t x240 = 4;
	static volatile int32_t t49 = -646515;

	t49 = (x237*(x238*(x239%x240)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x241 = 490;
	int16_t x243 = -76;
	volatile uint32_t t50 = 22625U;

	t50 = (x241*(x242*(x243%x244)));

	if (t50 != 4294943776U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x245 = 66U;
	uint32_t x246 = 3949U;
	static uint8_t x247 = UINT8_MAX;
	volatile int64_t x248 = -487979647LL;
	static int64_t t51 = -2061LL;

	t51 = (x245*(x246*(x247%x248)));

	if (t51 != 66461670LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x249 = -1LL;
	int32_t x250 = -1;
	volatile int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MIN;
	int64_t t52 = 2LL;

	t52 = (x249*(x250*(x251%x252)));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = 349LL;
	static volatile int64_t x254 = INT64_MIN;
	volatile uint16_t x256 = UINT16_MAX;

	t53 = (x253*(x254*(x255%x256)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x265 = 1448LLU;
	int64_t x266 = 210005434LL;
	int8_t x267 = INT8_MIN;
	volatile int8_t x268 = INT8_MAX;
	static volatile uint64_t t54 = 1LLU;

	t54 = (x265*(x266*(x267%x268)));

	if (t54 != 18446743769621683184LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x269 = -1;
	static uint64_t x270 = 1842383105367958589LLU;
	volatile uint64_t x271 = 31007755215323958LLU;
	static volatile uint64_t x272 = 2147320911377397LLU;
	uint64_t t55 = 185036682421LLU;

	t55 = (x269*(x270*(x271%x272)));

	if (t55 != 6906276335544700784LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x273 = INT16_MIN;
	volatile int16_t x274 = INT16_MIN;
	volatile int32_t x275 = INT32_MAX;
	int64_t x276 = INT64_MAX;
	int64_t t56 = 163002050917958LL;

	t56 = (x273*(x274*(x275%x276)));

	if (t56 != 2305843008139952128LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x277 = -11;
	uint16_t x278 = UINT16_MAX;
	static int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MIN;
	volatile int64_t t57 = -129807LL;

	t57 = (x277*(x278*(x279%x280)));

	if (t57 != -23621238795LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x285 = -1;
	uint16_t x286 = 661U;
	uint64_t x287 = 1LLU;
	int64_t x288 = INT64_MIN;
	uint64_t t58 = 5453978LLU;

	t58 = (x285*(x286*(x287%x288)));

	if (t58 != 18446744073709550955LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x297 = 650418LLU;
	static int8_t x298 = INT8_MIN;
	int64_t x299 = -1LL;
	volatile int16_t x300 = INT16_MIN;

	t59 = (x297*(x298*(x299%x300)));

	if (t59 != 83253504LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x306 = 25U;
	int8_t x307 = INT8_MIN;
	int32_t t60 = 18170856;

	t60 = (x305*(x306*(x307%x308)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x309 = -41;
	int8_t x311 = INT8_MIN;
	volatile uint16_t x312 = UINT16_MAX;
	volatile int32_t t61 = -1;

	t61 = (x309*(x310*(x311%x312)));

	if (t61 != -73472) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x317 = 19U;
	int32_t x318 = INT32_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int64_t t62 = -8570LL;

	t62 = (x317*(x318*(x319%x320)));

	if (t62 != 40802189312LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x321 = -1;
	volatile int8_t x322 = INT8_MIN;
	static volatile uint16_t x324 = 110U;
	int32_t t63 = -64725;

	t63 = (x321*(x322*(x323%x324)));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x325 = 63558065994864948LL;
	int64_t x326 = -1LL;
	int16_t x327 = 107;
	int32_t x328 = -34;
	int64_t t64 = 341371494913LL;

	t64 = (x325*(x326*(x327%x328)));

	if (t64 != -317790329974324740LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x337 = INT16_MIN;
	int16_t x338 = 73;
	int16_t x339 = INT16_MIN;
	uint64_t x340 = 169LLU;
	volatile uint64_t t65 = 22445766595LLU;

	t65 = (x337*(x338*(x339%x340)));

	if (t65 != 18446744073441640448LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = -1LL;
	static uint8_t x342 = 24U;
	int32_t x344 = 1;
	int64_t t66 = -234887649LL;

	t66 = (x341*(x342*(x343%x344)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x345 = -3;
	static int8_t x346 = INT8_MIN;
	int8_t x347 = -1;
	int16_t x348 = 38;
	volatile int32_t t67 = -582;

	t67 = (x345*(x346*(x347%x348)));

	if (t67 != -384) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x349 = UINT8_MAX;
	static uint8_t x351 = 0U;
	int64_t t68 = -457172556729LL;

	t68 = (x349*(x350*(x351%x352)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x353 = INT32_MIN;
	volatile int64_t x354 = -1LL;
	uint8_t x355 = 104U;
	int64_t x356 = INT64_MIN;
	volatile int64_t t69 = -146701061782LL;

	t69 = (x353*(x354*(x355%x356)));

	if (t69 != 223338299392LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MAX;
	uint8_t x359 = 16U;
	int64_t x360 = INT64_MIN;
	static int64_t t70 = 65225528125462LL;

	t70 = (x357*(x358*(x359%x360)));

	if (t70 != -4363686772736LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int64_t x362 = -2278713770LL;
	uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MIN;

	t71 = (x361*(x362*(x363%x364)));

	if (t71 != 4893500557268719190LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int8_t x375 = -1;
	int64_t x376 = -1244122418LL;
	uint64_t t72 = 0LLU;

	t72 = (x373*(x374*(x375%x376)));

	if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x377 = 4722LLU;
	static uint64_t x379 = 42LLU;
	static uint64_t t73 = 31910824409331LLU;

	t73 = (x377*(x378*(x379%x380)));

	if (t73 != 743120028LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x382 = 60719283075436LLU;
	uint64_t x383 = UINT64_MAX;
	uint64_t t74 = 85892LLU;

	t74 = (x381*(x382*(x383%x384)));

	if (t74 != 3979238216348698260LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x385 = 2691111LLU;
	int8_t x386 = -2;
	int32_t x387 = -1;
	uint32_t x388 = 4U;

	t75 = (x385*(x386*(x387%x388)));

	if (t75 != 11558233718759190LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x389 = 4U;
	int8_t x390 = INT8_MIN;
	static volatile uint16_t x391 = 75U;
	uint32_t x392 = 9408988U;
	static uint32_t t76 = 146U;

	t76 = (x389*(x390*(x391%x392)));

	if (t76 != 4294928896U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x393 = INT8_MAX;
	static int8_t x394 = -1;
	int16_t x396 = INT16_MAX;
	static int32_t t77 = 10;

	t77 = (x393*(x394*(x395%x396)));

	if (t77 != -643382) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x401 = INT8_MIN;
	int64_t x402 = -1LL;
	volatile uint64_t x404 = 76269LLU;
	uint64_t t78 = 233485186275407302LLU;

	t78 = (x401*(x402*(x403%x404)));

	if (t78 != 8388480LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x413 = INT16_MAX;
	static int8_t x415 = -6;
	int16_t x416 = -40;
	volatile uint64_t t79 = 16467760085LLU;

	t79 = (x413*(x414*(x415%x416)));

	if (t79 != 18446744073301995670LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x417 = 81;
	static int8_t x418 = 4;
	int32_t x420 = -1;
	uint32_t t80 = 26U;

	t80 = (x417*(x418*(x419%x420)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x423 = UINT32_MAX;
	int8_t x424 = -1;
	volatile uint64_t t81 = 81487824589910LLU;

	t81 = (x421*(x422*(x423%x424)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x426 = 3167594095525445LLU;
	volatile int32_t x427 = -34;
	uint32_t x428 = 183852534U;
	static volatile uint64_t t82 = 0LLU;

	t82 = (x425*(x426*(x427%x428)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x429 = -44;
	static volatile uint16_t x430 = 0U;
	uint8_t x431 = 62U;
	volatile int32_t t83 = -1019577;

	t83 = (x429*(x430*(x431%x432)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x433 = 124U;
	int64_t x434 = INT64_MAX;
	uint64_t x436 = 28340559636LLU;
	uint64_t t84 = 331896066054315780LLU;

	t84 = (x433*(x434*(x435%x436)));

	if (t84 != 18446744073709550500LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x438 = 426U;
	static int8_t x439 = -22;
	uint64_t x440 = UINT64_MAX;

	t85 = (x437*(x438*(x439%x440)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x441 = INT64_MIN;
	int16_t x442 = 0;
	static int16_t x443 = INT16_MAX;
	volatile int32_t x444 = INT32_MIN;
	volatile int64_t t86 = 7534655314325381LL;

	t86 = (x441*(x442*(x443%x444)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x445 = 196959250LL;
	volatile int32_t x446 = -1;
	int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	volatile int64_t t87 = -481763LL;

	t87 = (x445*(x446*(x447%x448)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x449 = -1LL;
	uint8_t x450 = 7U;
	int64_t x452 = -2020450325LL;
	int64_t t88 = 42636053116LL;

	t88 = (x449*(x450*(x451%x452)));

	if (t88 != 7LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x457 = 1U;
	static volatile int32_t x458 = 969;
	int8_t x459 = INT8_MIN;
	volatile int16_t x460 = INT16_MIN;
	volatile int32_t t89 = 310;

	t89 = (x457*(x458*(x459%x460)));

	if (t89 != -124032) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x461 = INT16_MIN;
	int16_t x462 = INT16_MIN;
	uint32_t x463 = 2006032387U;
	uint16_t x464 = 5U;
	static volatile uint32_t t90 = 1976U;

	t90 = (x461*(x462*(x463%x464)));

	if (t90 != 2147483648U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x465 = 321267147222972335LL;
	uint64_t x466 = 106265244452746LLU;
	static int32_t x467 = INT32_MIN;
	int16_t x468 = INT16_MIN;
	static uint64_t t91 = 125693761328775904LLU;

	t91 = (x465*(x466*(x467%x468)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x470 = -85924;
	int32_t x471 = 497821;
	volatile int64_t x472 = -1LL;

	t92 = (x469*(x470*(x471%x472)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x473 = UINT32_MAX;
	volatile uint8_t x474 = UINT8_MAX;
	uint16_t x476 = 26449U;
	volatile int64_t t93 = -13230LL;

	t93 = (x473*(x474*(x475%x476)));

	if (t93 != 451229264012700LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x477 = INT8_MAX;
	volatile uint8_t x478 = UINT8_MAX;
	int8_t x479 = -1;
	int32_t t94 = -674257677;

	t94 = (x477*(x478*(x479%x480)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x481 = INT8_MAX;
	static uint8_t x482 = 2U;
	int16_t x483 = INT16_MAX;
	int32_t x484 = INT32_MAX;
	volatile int32_t t95 = 1;

	t95 = (x481*(x482*(x483%x484)));

	if (t95 != 8322818) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x485 = INT8_MAX;
	int32_t x486 = -115972397;
	int16_t x487 = 1150;
	int8_t x488 = -1;

	t96 = (x485*(x486*(x487%x488)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x489 = INT8_MIN;
	uint8_t x490 = 35U;
	uint8_t x492 = 31U;
	static volatile int32_t t97 = 131;

	t97 = (x489*(x490*(x491%x492)));

	if (t97 != 4480) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x493 = 42;
	static int16_t x494 = INT16_MIN;
	uint32_t x495 = 1817501U;
	static volatile uint32_t t98 = 406355038U;

	t98 = (x493*(x494*(x495%x496)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x505 = INT32_MAX;
	int8_t x506 = INT8_MIN;
	int64_t x507 = INT64_MIN;
	volatile int64_t t99 = -230614LL;

	t99 = (x505*(x506*(x507%x508)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

