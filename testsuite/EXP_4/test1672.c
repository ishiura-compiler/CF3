#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x10 = 0U;
int32_t x14 = INT32_MIN;
int32_t x24 = INT32_MIN;
int32_t t5 = -519942;
int32_t x27 = INT32_MIN;
uint8_t x28 = UINT8_MAX;
volatile int64_t x29 = 15597776LL;
volatile int32_t t7 = 161291;
int8_t x37 = INT8_MAX;
volatile uint64_t x48 = 163615LLU;
int32_t x54 = 4;
int16_t x57 = -1;
int32_t x58 = -990;
uint16_t x61 = 7262U;
int64_t x64 = INT64_MIN;
volatile int32_t x65 = INT32_MIN;
static int32_t x67 = 2549924;
static volatile int8_t x70 = INT8_MIN;
int32_t x72 = INT32_MIN;
uint8_t x76 = UINT8_MAX;
volatile int32_t t20 = 45277627;
static uint64_t x87 = 38332050422503295LLU;
uint8_t x88 = 1U;
uint32_t x91 = UINT32_MAX;
int16_t x92 = 6;
int32_t x94 = INT32_MIN;
volatile uint64_t x96 = UINT64_MAX;
int8_t x99 = INT8_MAX;
int64_t x106 = INT64_MAX;
volatile int16_t x110 = INT16_MAX;
int32_t t27 = 25411;
volatile int16_t x117 = INT16_MIN;
int32_t t30 = -6341947;
int32_t x125 = 3;
volatile int8_t x126 = -1;
uint64_t x130 = 1478247507LLU;
int32_t t32 = 234;
int32_t t33 = 1;
uint8_t x137 = UINT8_MAX;
uint32_t x140 = UINT32_MAX;
uint16_t x146 = UINT16_MAX;
volatile int32_t t36 = -1834898;
int16_t x150 = INT16_MIN;
int16_t x151 = INT16_MAX;
int16_t x155 = INT16_MIN;
volatile int8_t x165 = -1;
int16_t x168 = INT16_MAX;
uint32_t x169 = 2646U;
static int16_t x172 = -1;
uint8_t x173 = 60U;
volatile uint64_t x180 = 257907LLU;
int32_t t44 = 12232344;
static int32_t x184 = -1;
int8_t x186 = -5;
volatile int32_t t46 = 101683;
int32_t x192 = INT32_MAX;
int32_t x195 = 2004504;
int64_t x199 = INT64_MIN;
static int8_t x200 = INT8_MAX;
static volatile int32_t t49 = -2017781;
int64_t x201 = -1LL;
volatile int16_t x203 = -1;
volatile int32_t t51 = 60017961;
volatile int32_t t53 = 128133492;
static int8_t x220 = INT8_MAX;
uint32_t x221 = 6493U;
volatile int32_t t57 = 16035792;
uint16_t x238 = 79U;
uint8_t x242 = 10U;
int16_t x250 = INT16_MIN;
volatile int32_t x267 = 6079;
static volatile int32_t t66 = 169782;
static uint64_t x269 = 27668503LLU;
int16_t x270 = 59;
int32_t x276 = INT32_MAX;
int64_t x280 = INT64_MIN;
int64_t x282 = -1LL;
int32_t x284 = INT32_MIN;
int32_t x287 = -49428477;
static int32_t t71 = 2679;
volatile int8_t x290 = -1;
int32_t x296 = -5120650;
volatile int32_t t74 = 59987605;
int16_t x301 = INT16_MAX;
int8_t x304 = INT8_MIN;
int32_t t75 = -32;
int64_t x305 = INT64_MAX;
uint16_t x312 = 2036U;
volatile int64_t x313 = INT64_MAX;
int16_t x314 = 7;
static uint8_t x315 = 0U;
int64_t x316 = INT64_MAX;
int32_t t79 = 1;
int8_t x321 = -1;
uint32_t x331 = UINT32_MAX;
int64_t x346 = 136833540912187LL;
static uint32_t x349 = 49U;
volatile int64_t x359 = -7468350LL;
static int16_t x366 = 1;
int16_t x368 = INT16_MIN;
uint8_t x376 = 101U;
uint32_t x378 = 242675849U;
static volatile int64_t x379 = 3LL;
int8_t x388 = -1;
static int32_t t96 = 544014875;
int32_t x389 = INT32_MAX;
volatile uint32_t x393 = UINT32_MAX;
int64_t x397 = INT64_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MAX;
	int32_t x3 = 4810;
	int32_t x4 = -1;
	volatile int32_t t0 = -6186;

	t0 = (x1==(x2|(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile int8_t x6 = INT8_MAX;
	static int32_t x7 = 263367622;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 0;

	t1 = (x5==(x6|(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	uint8_t x11 = 0U;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -14040286;

	t2 = (x9==(x10|(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	static uint16_t x15 = 216U;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -26927;

	t3 = (x13==(x14|(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	volatile int8_t x18 = 54;
	uint16_t x19 = 39U;
	static int64_t x20 = -1893268648024610247LL;
	volatile int32_t t4 = -295;

	t4 = (x17==(x18|(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 28U;
	static uint32_t x22 = 189U;
	volatile uint8_t x23 = 0U;

	t5 = (x21==(x22|(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	int8_t x26 = -1;
	int32_t t6 = 12551198;

	t6 = (x25==(x26|(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = UINT8_MAX;
	int8_t x31 = 0;
	int32_t x32 = INT32_MAX;

	t7 = (x29==(x30|(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = -1;
	int16_t x35 = -1;
	volatile int8_t x36 = 3;
	static volatile int32_t t8 = -1444;

	t8 = (x33==(x34|(x35<=x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	uint32_t x39 = 19453643U;
	volatile int32_t x40 = -1;
	volatile int32_t t9 = 16;

	t9 = (x37==(x38|(x39<=x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	int8_t x42 = -1;
	volatile uint64_t x43 = UINT64_MAX;
	uint8_t x44 = UINT8_MAX;
	int32_t t10 = 11;

	t10 = (x41==(x42|(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 6;
	int32_t x46 = -1;
	uint64_t x47 = UINT64_MAX;
	int32_t t11 = 200410766;

	t11 = (x45==(x46|(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = 5065;
	static int16_t x50 = -465;
	static int64_t x51 = INT64_MIN;
	int64_t x52 = 162857635468295940LL;
	int32_t t12 = 639;

	t12 = (x49==(x50|(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint16_t x55 = 3650U;
	uint16_t x56 = 3U;
	static volatile int32_t t13 = -236;

	t13 = (x53==(x54|(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x59 = INT16_MIN;
	int32_t x60 = 2430;
	volatile int32_t t14 = -1050553426;

	t14 = (x57==(x58|(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = INT8_MIN;
	static int64_t x63 = INT64_MIN;
	int32_t t15 = 18;

	t15 = (x61==(x62|(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -1726LL;
	uint32_t x68 = 15929U;
	int32_t t16 = -496;

	t16 = (x65==(x66|(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	volatile int16_t x71 = -11321;
	volatile int32_t t17 = 5;

	t17 = (x69==(x70|(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MAX;
	static int64_t x74 = INT64_MIN;
	uint64_t x75 = UINT64_MAX;
	volatile int32_t t18 = -5651;

	t18 = (x73==(x74|(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	int64_t x79 = 1020640LL;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = -897328279;

	t19 = (x77==(x78|(x79<=x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = -1;
	volatile int64_t x82 = -2513LL;
	int8_t x83 = INT8_MIN;
	uint16_t x84 = 14U;

	t20 = (x81==(x82|(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x85 = INT16_MIN;
	int32_t x86 = -59;
	volatile int32_t t21 = 7584;

	t21 = (x85==(x86|(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	volatile uint32_t x90 = 270899U;
	static int32_t t22 = 35;

	t22 = (x89==(x90|(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MAX;
	volatile int8_t x95 = -1;
	static int32_t t23 = 320395377;

	t23 = (x93==(x94|(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	static int16_t x98 = INT16_MIN;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 1;

	t24 = (x97==(x98|(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -1;
	static int64_t x102 = INT64_MIN;
	int8_t x103 = 0;
	int16_t x104 = 587;
	static int32_t t25 = -15;

	t25 = (x101==(x102|(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -2;
	static int16_t x107 = -5;
	uint32_t x108 = 5622U;
	int32_t t26 = 14;

	t26 = (x105==(x106|(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x111 = 5190U;
	static uint64_t x112 = 138703198546112211LLU;

	t27 = (x109==(x110|(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static int64_t x114 = INT64_MIN;
	int64_t x115 = -90141576096378444LL;
	int32_t x116 = -1;
	volatile int32_t t28 = 173857;

	t28 = (x113==(x114|(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = 26;
	volatile uint32_t x119 = UINT32_MAX;
	int32_t x120 = INT32_MIN;
	int32_t t29 = 7560;

	t29 = (x117==(x118|(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = 115U;
	int8_t x122 = -24;
	int32_t x123 = -531631758;
	static int8_t x124 = -1;

	t30 = (x121==(x122|(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x127 = INT32_MIN;
	uint32_t x128 = 33694344U;
	int32_t t31 = 2;

	t31 = (x125==(x126|(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 25552981U;
	static int16_t x131 = INT16_MAX;
	int16_t x132 = INT16_MIN;

	t32 = (x129==(x130|(x131<=x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 3765U;
	int32_t x134 = -1;
	int32_t x135 = 14359;
	int32_t x136 = -11936;

	t33 = (x133==(x134|(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MIN;
	int32_t x139 = -104256;
	int32_t t34 = -29005;

	t34 = (x137==(x138|(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = INT32_MAX;
	int64_t x142 = -1LL;
	int16_t x143 = -4100;
	static int16_t x144 = 1928;
	int32_t t35 = 17997;

	t35 = (x141==(x142|(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	uint16_t x147 = 244U;
	static int8_t x148 = 0;

	t36 = (x145==(x146|(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 22U;
	volatile uint8_t x152 = 27U;
	int32_t t37 = -18996;

	t37 = (x149==(x150|(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 28LLU;
	int16_t x154 = INT16_MIN;
	static volatile uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = 64;

	t38 = (x153==(x154|(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 0U;
	volatile int8_t x158 = INT8_MIN;
	int32_t x159 = -853;
	static int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 731979;

	t39 = (x157==(x158|(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = 734526603763745675LL;
	int16_t x164 = 473;
	volatile int32_t t40 = 2862275;

	t40 = (x161==(x162|(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x166 = 0;
	int16_t x167 = INT16_MAX;
	volatile int32_t t41 = 55125766;

	t41 = (x165==(x166|(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -1;
	uint64_t x171 = 3333LLU;
	int32_t t42 = 61413;

	t42 = (x169==(x170|(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = 3U;
	static int32_t x175 = -7;
	int32_t x176 = INT32_MIN;
	int32_t t43 = -1603520;

	t43 = (x173==(x174|(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MIN;
	int16_t x178 = -12204;
	uint16_t x179 = UINT16_MAX;

	t44 = (x177==(x178|(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int64_t x182 = -1LL;
	int8_t x183 = -1;
	int32_t t45 = 376976;

	t45 = (x181==(x182|(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 0U;
	volatile uint8_t x187 = UINT8_MAX;
	uint8_t x188 = 8U;

	t46 = (x185==(x186|(x187<=x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 15;
	int8_t x190 = 1;
	volatile uint32_t x191 = UINT32_MAX;
	volatile int32_t t47 = 918;

	t47 = (x189==(x190|(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 4949;
	int8_t x194 = INT8_MIN;
	uint8_t x196 = 6U;
	volatile int32_t t48 = 1;

	t48 = (x193==(x194|(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = -5LL;
	int32_t x198 = -1958;

	t49 = (x197==(x198|(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = INT32_MAX;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t50 = -6389808;

	t50 = (x201==(x202|(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = UINT64_MAX;
	int64_t x206 = -1LL;
	int8_t x207 = -1;
	int32_t x208 = -1;

	t51 = (x205==(x206|(x207<=x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	int64_t x210 = -1LL;
	uint16_t x211 = 13U;
	int16_t x212 = -9198;
	volatile int32_t t52 = 27187;

	t52 = (x209==(x210|(x211<=x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MIN;
	volatile int64_t x215 = INT64_MAX;
	volatile int64_t x216 = -1LL;

	t53 = (x213==(x214|(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = 96812654103LLU;
	int32_t x218 = 623443377;
	static int64_t x219 = INT64_MAX;
	int32_t t54 = -3137272;

	t54 = (x217==(x218|(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = 219764U;
	static int8_t x223 = INT8_MIN;
	int64_t x224 = INT64_MIN;
	int32_t t55 = -531352733;

	t55 = (x221==(x222|(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MAX;
	static uint16_t x226 = UINT16_MAX;
	int64_t x227 = -1096308609079807LL;
	volatile int64_t x228 = INT64_MIN;
	int32_t t56 = -90874;

	t56 = (x225==(x226|(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 423796364LLU;
	int8_t x230 = -23;
	int16_t x231 = -181;
	int16_t x232 = INT16_MIN;

	t57 = (x229==(x230|(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	volatile int64_t x234 = -1LL;
	int8_t x235 = INT8_MAX;
	int16_t x236 = 7726;
	volatile int32_t t58 = -3;

	t58 = (x233==(x234|(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -14757;
	static int16_t x239 = INT16_MAX;
	uint64_t x240 = UINT64_MAX;
	int32_t t59 = 12;

	t59 = (x237==(x238|(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 64U;
	int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MIN;
	int32_t t60 = 211096821;

	t60 = (x241==(x242|(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	static int64_t x246 = -1LL;
	uint64_t x247 = UINT64_MAX;
	static int32_t x248 = INT32_MIN;
	int32_t t61 = 1;

	t61 = (x245==(x246|(x247<=x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 20560;
	uint16_t x251 = 2815U;
	uint8_t x252 = 1U;
	static volatile int32_t t62 = -4;

	t62 = (x249==(x250|(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x253 = 15011568U;
	volatile int64_t x254 = 3299181LL;
	uint16_t x255 = UINT16_MAX;
	volatile uint32_t x256 = 6948176U;
	static volatile int32_t t63 = 24579;

	t63 = (x253==(x254|(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 257669190524LLU;
	volatile uint32_t x258 = UINT32_MAX;
	int64_t x259 = INT64_MAX;
	int32_t x260 = -1946;
	int32_t t64 = 1;

	t64 = (x257==(x258|(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 902U;
	static int64_t x262 = INT64_MIN;
	volatile int32_t x263 = -3;
	uint16_t x264 = 4753U;
	volatile int32_t t65 = 1984905;

	t65 = (x261==(x262|(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 12U;
	int16_t x266 = -1;
	volatile int32_t x268 = -996089308;

	t66 = (x265==(x266|(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x271 = 1;
	static volatile int64_t x272 = INT64_MAX;
	static int32_t t67 = 29896296;

	t67 = (x269==(x270|(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = -1;
	int8_t x274 = -1;
	uint32_t x275 = 231U;
	int32_t t68 = 1235;

	t68 = (x273==(x274|(x275<=x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MIN;
	volatile int32_t x278 = -1;
	volatile int16_t x279 = 90;
	volatile int32_t t69 = 47751685;

	t69 = (x277==(x278|(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 13670LL;
	int16_t x283 = INT16_MIN;
	int32_t t70 = -9218;

	t70 = (x281==(x282|(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	static int8_t x288 = INT8_MAX;

	t71 = (x285==(x286|(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 101U;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = INT16_MIN;
	static volatile int32_t t72 = 1;

	t72 = (x289==(x290|(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = 23U;
	volatile uint16_t x294 = UINT16_MAX;
	int64_t x295 = 345LL;
	volatile int32_t t73 = 336;

	t73 = (x293==(x294|(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x297 = UINT8_MAX;
	static uint64_t x298 = UINT64_MAX;
	int16_t x299 = INT16_MIN;
	static int16_t x300 = -79;

	t74 = (x297==(x298|(x299<=x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = INT64_MAX;
	int16_t x303 = -1;

	t75 = (x301==(x302|(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;
	int64_t x307 = INT64_MAX;
	int16_t x308 = -1;
	int32_t t76 = -950;

	t76 = (x305==(x306|(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 48960604LLU;
	int32_t x310 = INT32_MIN;
	uint8_t x311 = UINT8_MAX;
	int32_t t77 = 3;

	t77 = (x309==(x310|(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t t78 = -1262;

	t78 = (x313==(x314|(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1;
	static int64_t x318 = -133525627010610LL;
	volatile int16_t x319 = INT16_MAX;
	uint16_t x320 = UINT16_MAX;

	t79 = (x317==(x318|(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x322 = UINT32_MAX;
	int16_t x323 = INT16_MIN;
	uint64_t x324 = 108046299440718841LLU;
	volatile int32_t t80 = -17207817;

	t80 = (x321==(x322|(x323<=x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	static int32_t x326 = INT32_MIN;
	uint16_t x327 = UINT16_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t81 = 62717627;

	t81 = (x325==(x326|(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 61553143528299LLU;
	static volatile uint16_t x330 = 143U;
	int64_t x332 = INT64_MIN;
	static int32_t t82 = -14;

	t82 = (x329==(x330|(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -13;
	volatile uint16_t x334 = UINT16_MAX;
	volatile uint16_t x335 = 5918U;
	int64_t x336 = -32996560LL;
	volatile int32_t t83 = -240;

	t83 = (x333==(x334|(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 277557LLU;
	int32_t x338 = -1;
	int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MIN;
	int32_t t84 = 988202;

	t84 = (x337==(x338|(x339<=x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	uint16_t x342 = 18780U;
	static int64_t x343 = INT64_MAX;
	volatile int16_t x344 = 89;
	int32_t t85 = -252;

	t85 = (x341==(x342|(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = 9728371373203LL;
	volatile int16_t x347 = -1;
	static int16_t x348 = 99;
	volatile int32_t t86 = 12;

	t86 = (x345==(x346|(x347<=x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x350 = INT16_MAX;
	uint8_t x351 = 0U;
	int32_t x352 = -1;
	static int32_t t87 = -208;

	t87 = (x349==(x350|(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 1;
	int32_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MAX;
	volatile int32_t t88 = 244881;

	t88 = (x353==(x354|(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x357 = UINT16_MAX;
	volatile int64_t x358 = -1LL;
	int32_t x360 = INT32_MIN;
	static int32_t t89 = -1668;

	t89 = (x357==(x358|(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x362 = -103;
	static volatile uint64_t x363 = 48029340753LLU;
	int32_t x364 = -1;
	volatile int32_t t90 = -80392;

	t90 = (x361==(x362|(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	uint8_t x367 = UINT8_MAX;
	int32_t t91 = 7438;

	t91 = (x365==(x366|(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 893U;
	static volatile uint8_t x370 = UINT8_MAX;
	static int64_t x371 = INT64_MAX;
	int8_t x372 = 0;
	static int32_t t92 = -557966210;

	t92 = (x369==(x370|(x371<=x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	uint64_t x374 = 88LLU;
	uint16_t x375 = 5U;
	int32_t t93 = 168;

	t93 = (x373==(x374|(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 1U;
	static int64_t x380 = 20317703LL;
	volatile int32_t t94 = -180;

	t94 = (x377==(x378|(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	static int64_t x382 = -1448708041731LL;
	static volatile int32_t x383 = INT32_MAX;
	static int8_t x384 = -1;
	static int32_t t95 = -323;

	t95 = (x381==(x382|(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -172816;
	int64_t x386 = INT64_MIN;
	int16_t x387 = 2;

	t96 = (x385==(x386|(x387<=x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x390 = INT16_MAX;
	uint16_t x391 = 15510U;
	volatile int64_t x392 = -1LL;
	int32_t t97 = 1;

	t97 = (x389==(x390|(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MIN;
	int64_t x395 = -105099421702817LL;
	int16_t x396 = INT16_MAX;
	int32_t t98 = -720;

	t98 = (x393==(x394|(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = 17;
	uint32_t x399 = 922709U;
	static volatile int64_t x400 = INT64_MIN;
	int32_t t99 = -2;

	t99 = (x397==(x398|(x399<=x400)));

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

