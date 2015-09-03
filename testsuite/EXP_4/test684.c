#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
int16_t x6 = INT16_MIN;
int16_t x9 = 26;
int32_t x12 = -1;
int16_t x15 = INT16_MIN;
volatile int32_t t3 = 845422;
volatile uint16_t x20 = 12U;
int16_t x36 = -7;
uint64_t x59 = 902259563075082LLU;
uint32_t x66 = 1651U;
int8_t x69 = INT8_MIN;
volatile int32_t t16 = 128401052;
volatile int8_t x74 = INT8_MIN;
int32_t t17 = -62656283;
int32_t t20 = -3980;
static volatile uint16_t x90 = 386U;
volatile int16_t x92 = 117;
volatile uint64_t x104 = 2137753265LLU;
static uint16_t x116 = UINT16_MAX;
int16_t x117 = 397;
int32_t t25 = 4296;
static int32_t x122 = -1;
static int8_t x124 = 1;
volatile int32_t t27 = 83340;
int8_t x131 = -4;
static uint16_t x136 = 5U;
volatile int32_t x137 = INT32_MAX;
volatile int8_t x139 = -1;
int32_t t31 = -615;
int16_t x145 = -1;
uint32_t x149 = UINT32_MAX;
int32_t x158 = INT32_MIN;
static int8_t x160 = INT8_MIN;
uint16_t x166 = UINT16_MAX;
volatile uint64_t x170 = 3515208679492624LLU;
int8_t x171 = INT8_MIN;
volatile int32_t x172 = 6666;
int32_t t38 = 13885;
int8_t x179 = -1;
int8_t x184 = INT8_MIN;
uint16_t x186 = UINT16_MAX;
int32_t t41 = 14;
uint64_t x192 = 3LLU;
static int16_t x194 = -2;
uint8_t x201 = 26U;
static uint8_t x214 = UINT8_MAX;
int32_t x215 = 649020;
static int16_t x222 = -1;
int16_t x224 = INT16_MIN;
uint8_t x227 = 11U;
int32_t t52 = -282991;
int64_t x241 = INT64_MIN;
static int8_t x255 = -1;
static uint64_t x256 = 1944140LLU;
int32_t t59 = -331;
int16_t x273 = INT16_MIN;
volatile uint8_t x276 = 31U;
volatile int64_t x277 = INT64_MAX;
volatile int64_t x279 = -1LL;
static int64_t x280 = INT64_MIN;
static int32_t x284 = 30632854;
uint32_t x301 = 222431U;
int32_t x310 = INT32_MIN;
static volatile int32_t t68 = 636758;
uint8_t x313 = 1U;
int64_t x314 = -1LL;
static volatile int32_t x328 = -1;
int64_t x330 = INT64_MIN;
uint64_t x332 = 21032LLU;
int8_t x334 = INT8_MIN;
int8_t x336 = -1;
volatile int32_t t74 = -156219;
static int64_t x344 = -1678830063038670LL;
int32_t t76 = -25968066;
static int8_t x354 = INT8_MAX;
static int32_t t81 = 11383918;
static int64_t x366 = 126352528124757LL;
static int64_t x374 = INT64_MAX;
static uint8_t x375 = UINT8_MAX;
int32_t t83 = -698835;
int8_t x379 = -1;
int32_t x391 = INT32_MIN;
int64_t x399 = -8LL;
uint8_t x400 = UINT8_MAX;
int8_t x405 = INT8_MIN;
int64_t x406 = INT64_MAX;
static volatile int32_t t91 = -33265677;
int16_t x412 = INT16_MIN;
int32_t x421 = INT32_MIN;
volatile int32_t x424 = -1;
int64_t x426 = INT64_MIN;
int64_t x434 = INT64_MIN;
int64_t x436 = -1LL;
int32_t t97 = -735;
static volatile uint64_t x443 = UINT64_MAX;


void f0(void) {
	uint64_t x2 = 2LLU;
	static int64_t x3 = -1LL;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 7232582;

	t0 = (x1==(x2+(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int64_t x7 = INT64_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -7974056;

	t1 = (x5==(x6+(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	int16_t x11 = -1;
	volatile int32_t t2 = 22854;

	t2 = (x9==(x10+(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint64_t x14 = 10794642LLU;
	uint16_t x16 = UINT16_MAX;

	t3 = (x13==(x14+(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static uint64_t x18 = UINT64_MAX;
	int8_t x19 = INT8_MAX;
	volatile int32_t t4 = -857169;

	t4 = (x17==(x18+(x19%x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 4538676U;
	static volatile uint8_t x22 = 1U;
	int64_t x23 = INT64_MAX;
	volatile uint64_t x24 = UINT64_MAX;
	int32_t t5 = -535;

	t5 = (x21==(x22+(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint16_t x26 = 34U;
	int8_t x27 = INT8_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -36;

	t6 = (x25==(x26+(x27%x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 33U;
	volatile int8_t x30 = INT8_MIN;
	volatile uint8_t x31 = UINT8_MAX;
	uint16_t x32 = 15851U;
	static int32_t t7 = 897544;

	t7 = (x29==(x30+(x31%x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 2;
	int32_t x34 = -39222531;
	volatile uint16_t x35 = 3828U;
	int32_t t8 = -232319;

	t8 = (x33==(x34+(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 10;
	volatile int32_t x38 = -1;
	static int16_t x39 = INT16_MIN;
	int16_t x40 = -1;
	int32_t t9 = -67;

	t9 = (x37==(x38+(x39%x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	volatile int16_t x46 = INT16_MIN;
	int8_t x47 = -1;
	static int8_t x48 = INT8_MIN;
	static volatile int32_t t10 = -239956729;

	t10 = (x45==(x46+(x47%x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x49 = 0U;
	int64_t x50 = INT64_MAX;
	static uint64_t x51 = 127LLU;
	int64_t x52 = INT64_MIN;
	int32_t t11 = 11;

	t11 = (x49==(x50+(x51%x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -7180;
	static uint16_t x54 = 24U;
	static int64_t x55 = -1LL;
	uint64_t x56 = 297742989LLU;
	int32_t t12 = -54200998;

	t12 = (x53==(x54+(x55%x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 7U;
	int16_t x58 = 2;
	int16_t x60 = -597;
	volatile int32_t t13 = -19888;

	t13 = (x57==(x58+(x59%x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = UINT32_MAX;
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = INT64_MIN;
	int32_t x64 = INT32_MAX;
	static int32_t t14 = -680;

	t14 = (x61==(x62+(x63%x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = -1;
	int32_t x67 = 3;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t15 = -1;

	t15 = (x65==(x66+(x67%x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = -162992;
	uint8_t x71 = 1U;
	static uint16_t x72 = 139U;

	t16 = (x69==(x70+(x71%x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = 8;
	uint64_t x75 = 375143895144682088LLU;
	volatile uint16_t x76 = 2U;

	t17 = (x73==(x74+(x75%x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = INT64_MIN;
	uint32_t x79 = UINT32_MAX;
	uint32_t x80 = 694220U;
	int32_t t18 = 20224;

	t18 = (x77==(x78+(x79%x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x81 = 1635588749U;
	volatile uint64_t x82 = 227LLU;
	static int64_t x83 = INT64_MIN;
	static int8_t x84 = 3;
	int32_t t19 = 3;

	t19 = (x81==(x82+(x83%x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x85 = 1U;
	static int64_t x86 = INT64_MIN;
	static int32_t x87 = 8399108;
	int64_t x88 = -1LL;

	t20 = (x85==(x86+(x87%x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = INT64_MIN;
	int8_t x91 = 1;
	int32_t t21 = -80807436;

	t21 = (x89==(x90+(x91%x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x101 = INT16_MIN;
	static uint16_t x102 = 215U;
	int16_t x103 = INT16_MAX;
	volatile int32_t t22 = -1;

	t22 = (x101==(x102+(x103%x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MAX;
	volatile int64_t x107 = -1LL;
	int16_t x108 = INT16_MAX;
	volatile int32_t t23 = 9;

	t23 = (x105==(x106+(x107%x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 410U;
	static uint16_t x114 = 826U;
	int64_t x115 = 893976462550127827LL;
	volatile int32_t t24 = 326944968;

	t24 = (x113==(x114+(x115%x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x118 = -69548550561953044LL;
	int16_t x119 = 15313;
	volatile int16_t x120 = INT16_MIN;

	t25 = (x117==(x118+(x119%x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = INT16_MIN;
	int16_t x123 = -1;
	volatile int32_t t26 = -2953;

	t26 = (x121==(x122+(x123%x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -2;
	int16_t x126 = 0;
	static int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;

	t27 = (x125==(x126+(x127%x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x129 = -1;
	int64_t x130 = INT64_MIN;
	uint32_t x132 = 1037U;
	static volatile int32_t t28 = -7867542;

	t28 = (x129==(x130+(x131%x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = 0;
	static int64_t x134 = INT64_MIN;
	volatile uint16_t x135 = 31950U;
	volatile int32_t t29 = -60501361;

	t29 = (x133==(x134+(x135%x136)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x138 = 1U;
	int8_t x140 = -1;
	int32_t t30 = 30027;

	t30 = (x137==(x138+(x139%x140)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = INT64_MIN;
	int32_t x142 = -228;
	volatile int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MAX;

	t31 = (x141==(x142+(x143%x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x146 = 17U;
	volatile int64_t x147 = INT64_MIN;
	uint32_t x148 = UINT32_MAX;
	static volatile int32_t t32 = -10590;

	t32 = (x145==(x146+(x147%x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x150 = INT64_MIN;
	volatile int32_t x151 = 0;
	uint8_t x152 = UINT8_MAX;
	static int32_t t33 = 47640;

	t33 = (x149==(x150+(x151%x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = INT8_MIN;
	static int32_t x159 = INT32_MAX;
	volatile int32_t t34 = 5687;

	t34 = (x157==(x158+(x159%x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = -12;
	int16_t x162 = INT16_MIN;
	uint8_t x163 = UINT8_MAX;
	volatile int8_t x164 = -21;
	int32_t t35 = -5784640;

	t35 = (x161==(x162+(x163%x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -540681173745619LL;
	uint64_t x167 = 96LLU;
	static int16_t x168 = -1;
	int32_t t36 = -12542917;

	t36 = (x165==(x166+(x167%x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MIN;
	int32_t t37 = -653;

	t37 = (x169==(x170+(x171%x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = -1LL;
	int64_t x174 = INT64_MIN;
	static uint64_t x175 = 1892579458LLU;
	int8_t x176 = INT8_MAX;

	t38 = (x173==(x174+(x175%x176)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x177 = INT32_MAX;
	int16_t x178 = INT16_MIN;
	volatile int16_t x180 = -1;
	int32_t t39 = 406;

	t39 = (x177==(x178+(x179%x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x181 = INT64_MIN;
	static volatile uint8_t x182 = UINT8_MAX;
	static int16_t x183 = INT16_MIN;
	volatile int32_t t40 = 168740;

	t40 = (x181==(x182+(x183%x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = 0;
	static uint8_t x187 = 49U;
	int16_t x188 = INT16_MAX;

	t41 = (x185==(x186+(x187%x188)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = 1912;
	int64_t x190 = INT64_MIN;
	int8_t x191 = -13;
	int32_t t42 = -51;

	t42 = (x189==(x190+(x191%x192)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 1443U;
	int32_t x195 = INT32_MAX;
	static int64_t x196 = INT64_MIN;
	int32_t t43 = 552228621;

	t43 = (x193==(x194+(x195%x196)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = 240981721U;
	uint32_t x198 = UINT32_MAX;
	volatile int32_t x199 = -1;
	static int32_t x200 = -108706993;
	int32_t t44 = 663387;

	t44 = (x197==(x198+(x199%x200)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x202 = -56;
	int16_t x203 = -3;
	int8_t x204 = -1;
	int32_t t45 = 16005895;

	t45 = (x201==(x202+(x203%x204)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x205 = UINT32_MAX;
	uint64_t x206 = 3637986039927187185LLU;
	int8_t x207 = INT8_MAX;
	static int64_t x208 = INT64_MIN;
	int32_t t46 = -113;

	t46 = (x205==(x206+(x207%x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = 0;
	int16_t x210 = -1;
	volatile int32_t x211 = INT32_MIN;
	volatile uint32_t x212 = 119U;
	volatile int32_t t47 = 1599;

	t47 = (x209==(x210+(x211%x212)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = 415;
	volatile int32_t x216 = INT32_MAX;
	static volatile int32_t t48 = 442797;

	t48 = (x213==(x214+(x215%x216)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	volatile int32_t t49 = -2489;

	t49 = (x221==(x222+(x223%x224)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = -13;
	static int32_t x226 = -1;
	int16_t x228 = INT16_MIN;
	int32_t t50 = 590205;

	t50 = (x225==(x226+(x227%x228)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = INT16_MIN;
	volatile int16_t x230 = -8;
	int32_t x231 = 1021871;
	int16_t x232 = -14;
	volatile int32_t t51 = -1015919;

	t51 = (x229==(x230+(x231%x232)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x237 = UINT8_MAX;
	volatile int8_t x238 = 10;
	static uint64_t x239 = 70901LLU;
	int8_t x240 = -13;

	t52 = (x237==(x238+(x239%x240)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x242 = 570U;
	static int16_t x243 = INT16_MIN;
	uint8_t x244 = 1U;
	int32_t t53 = -87;

	t53 = (x241==(x242+(x243%x244)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x249 = 0;
	uint16_t x250 = 797U;
	static int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t54 = -40996058;

	t54 = (x249==(x250+(x251%x252)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = 1046537LL;
	int64_t x254 = -3487103654LL;
	static int32_t t55 = 1904699;

	t55 = (x253==(x254+(x255%x256)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x257 = 168083U;
	static uint64_t x258 = UINT64_MAX;
	volatile uint8_t x259 = 50U;
	uint16_t x260 = 5U;
	int32_t t56 = 120;

	t56 = (x257==(x258+(x259%x260)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x261 = UINT16_MAX;
	uint16_t x262 = UINT16_MAX;
	uint16_t x263 = UINT16_MAX;
	static int8_t x264 = -3;
	volatile int32_t t57 = 178991;

	t57 = (x261==(x262+(x263%x264)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x265 = 1639902LLU;
	static volatile int16_t x266 = INT16_MAX;
	static uint8_t x267 = UINT8_MAX;
	volatile uint32_t x268 = UINT32_MAX;
	int32_t t58 = 4;

	t58 = (x265==(x266+(x267%x268)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x269 = 1;
	uint32_t x270 = 85622584U;
	int64_t x271 = 85920LL;
	static int16_t x272 = INT16_MAX;

	t59 = (x269==(x270+(x271%x272)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x274 = UINT16_MAX;
	int16_t x275 = -1;
	int32_t t60 = -14267;

	t60 = (x273==(x274+(x275%x276)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x278 = INT16_MIN;
	volatile int32_t t61 = -7;

	t61 = (x277==(x278+(x279%x280)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = -1;
	int16_t x282 = INT16_MAX;
	int64_t x283 = INT64_MIN;
	static int32_t t62 = 18635860;

	t62 = (x281==(x282+(x283%x284)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = -3;
	static uint32_t x290 = 25346945U;
	uint64_t x291 = 1723461924292753LLU;
	uint64_t x292 = UINT64_MAX;
	int32_t t63 = -94022;

	t63 = (x289==(x290+(x291%x292)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x293 = 154;
	uint64_t x294 = 175564776796LLU;
	int32_t x295 = INT32_MIN;
	int8_t x296 = -1;
	volatile int32_t t64 = 39;

	t64 = (x293==(x294+(x295%x296)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = -66223;
	volatile uint64_t x298 = UINT64_MAX;
	int8_t x299 = INT8_MIN;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t65 = -24;

	t65 = (x297==(x298+(x299%x300)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x302 = INT16_MIN;
	volatile uint8_t x303 = 1U;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t66 = -109572041;

	t66 = (x301==(x302+(x303%x304)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x305 = 5U;
	uint32_t x306 = 216009U;
	volatile uint64_t x307 = 54LLU;
	static uint16_t x308 = 11547U;
	volatile int32_t t67 = -11789809;

	t67 = (x305==(x306+(x307%x308)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x309 = 43859103140LLU;
	static int32_t x311 = 6141;
	int16_t x312 = -355;

	t68 = (x309==(x310+(x311%x312)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x315 = UINT64_MAX;
	static int64_t x316 = INT64_MIN;
	volatile int32_t t69 = -1092;

	t69 = (x313==(x314+(x315%x316)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x317 = 11LL;
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = INT8_MIN;
	uint8_t x320 = 3U;
	int32_t t70 = 21;

	t70 = (x317==(x318+(x319%x320)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x321 = 6093489U;
	int64_t x322 = 2681882164303328LL;
	int64_t x323 = 3461LL;
	uint8_t x324 = 9U;
	static volatile int32_t t71 = -20639462;

	t71 = (x321==(x322+(x323%x324)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x325 = -666793962LL;
	int8_t x326 = INT8_MIN;
	static uint16_t x327 = 9U;
	volatile int32_t t72 = 9;

	t72 = (x325==(x326+(x327%x328)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = -1;
	uint32_t x331 = 8U;
	volatile int32_t t73 = 69660;

	t73 = (x329==(x330+(x331%x332)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x333 = UINT8_MAX;
	int64_t x335 = -7LL;

	t74 = (x333==(x334+(x335%x336)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x337 = INT8_MIN;
	uint64_t x338 = 727872661032264LLU;
	volatile int8_t x339 = -11;
	volatile uint16_t x340 = UINT16_MAX;
	int32_t t75 = 116690;

	t75 = (x337==(x338+(x339%x340)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x341 = 5U;
	int16_t x342 = 1;
	int16_t x343 = INT16_MIN;

	t76 = (x341==(x342+(x343%x344)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = 2;
	int16_t x346 = -1;
	volatile uint8_t x347 = UINT8_MAX;
	int16_t x348 = INT16_MIN;
	static int32_t t77 = 441247;

	t77 = (x345==(x346+(x347%x348)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x349 = -1;
	int16_t x350 = INT16_MIN;
	int64_t x351 = -1LL;
	int64_t x352 = INT64_MIN;
	volatile int32_t t78 = 201492;

	t78 = (x349==(x350+(x351%x352)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x353 = INT8_MIN;
	static volatile int16_t x355 = INT16_MAX;
	int32_t x356 = INT32_MIN;
	int32_t t79 = 93361;

	t79 = (x353==(x354+(x355%x356)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x357 = 9475637U;
	volatile uint32_t x358 = UINT32_MAX;
	int16_t x359 = INT16_MAX;
	int64_t x360 = INT64_MIN;
	int32_t t80 = -314552700;

	t80 = (x357==(x358+(x359%x360)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = -36;
	int8_t x362 = 0;
	uint8_t x363 = UINT8_MAX;
	static volatile int8_t x364 = -1;

	t81 = (x361==(x362+(x363%x364)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = -1;
	volatile int32_t x367 = INT32_MIN;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t82 = 8;

	t82 = (x365==(x366+(x367%x368)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x373 = INT32_MAX;
	int64_t x376 = -1LL;

	t83 = (x373==(x374+(x375%x376)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = INT16_MIN;
	uint32_t x378 = UINT32_MAX;
	int16_t x380 = -1;
	int32_t t84 = 3;

	t84 = (x377==(x378+(x379%x380)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MAX;
	int16_t x383 = INT16_MAX;
	uint16_t x384 = 500U;
	volatile int32_t t85 = -1148309;

	t85 = (x381==(x382+(x383%x384)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x385 = UINT64_MAX;
	int64_t x386 = -1LL;
	static int32_t x387 = -1;
	uint8_t x388 = UINT8_MAX;
	int32_t t86 = -319328046;

	t86 = (x385==(x386+(x387%x388)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x389 = 10LLU;
	uint64_t x390 = 56LLU;
	int64_t x392 = -1LL;
	int32_t t87 = -1;

	t87 = (x389==(x390+(x391%x392)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x393 = -1LL;
	static int16_t x394 = -1259;
	uint16_t x395 = UINT16_MAX;
	uint64_t x396 = 15423075531LLU;
	volatile int32_t t88 = -2037;

	t88 = (x393==(x394+(x395%x396)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x397 = -1;
	uint32_t x398 = 11U;
	int32_t t89 = 13692;

	t89 = (x397==(x398+(x399%x400)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x401 = INT64_MAX;
	int16_t x402 = INT16_MIN;
	int8_t x403 = INT8_MAX;
	static int64_t x404 = INT64_MIN;
	volatile int32_t t90 = 2;

	t90 = (x401==(x402+(x403%x404)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x407 = INT32_MIN;
	uint64_t x408 = 109655198250280LLU;

	t91 = (x405==(x406+(x407%x408)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x409 = UINT64_MAX;
	int8_t x410 = INT8_MAX;
	int32_t x411 = INT32_MIN;
	int32_t t92 = -14730317;

	t92 = (x409==(x410+(x411%x412)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x413 = 167492892228LLU;
	static uint8_t x414 = 8U;
	static int8_t x415 = -14;
	int64_t x416 = 320159254147LL;
	int32_t t93 = -262;

	t93 = (x413==(x414+(x415%x416)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x417 = INT16_MAX;
	int16_t x418 = 20;
	int16_t x419 = 3;
	uint32_t x420 = 2133861U;
	volatile int32_t t94 = -2339;

	t94 = (x417==(x418+(x419%x420)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x422 = -653796492;
	static volatile int64_t x423 = -33382618083650621LL;
	int32_t t95 = -31;

	t95 = (x421==(x422+(x423%x424)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = INT16_MAX;
	int8_t x427 = 7;
	int8_t x428 = INT8_MIN;
	int32_t t96 = 174;

	t96 = (x425==(x426+(x427%x428)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x433 = 21841159U;
	uint16_t x435 = 0U;

	t97 = (x433==(x434+(x435%x436)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x437 = 0;
	uint32_t x438 = 2U;
	static int32_t x439 = INT32_MIN;
	uint16_t x440 = 5558U;
	int32_t t98 = -1;

	t98 = (x437==(x438+(x439%x440)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x441 = 192LLU;
	int64_t x442 = INT64_MIN;
	volatile uint64_t x444 = 19008482LLU;
	int32_t t99 = -15419;

	t99 = (x441==(x442+(x443%x444)));

	if (t99 != 0) { NG(); } else { ; }
	
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

