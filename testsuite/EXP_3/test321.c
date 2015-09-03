#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
uint32_t x7 = UINT32_MAX;
volatile uint64_t x8 = 2024LLU;
static uint64_t x9 = 12038054901907652LLU;
volatile int64_t x10 = 237971087689599700LL;
int32_t x14 = INT32_MIN;
uint8_t x24 = UINT8_MAX;
static int16_t x25 = -1;
static int64_t x27 = -1317183426504LL;
int16_t x30 = -1;
static int8_t x32 = 2;
volatile int32_t t6 = 400064;
int64_t x38 = INT64_MAX;
uint64_t x40 = UINT64_MAX;
int32_t x46 = 1734763;
int32_t t10 = -574111547;
static int16_t x54 = -60;
static int32_t t12 = 1;
int8_t x68 = INT8_MIN;
uint8_t x79 = 1U;
int8_t x81 = 0;
int64_t x82 = INT64_MIN;
static int16_t x89 = INT16_MIN;
volatile int8_t x92 = 1;
uint16_t x93 = UINT16_MAX;
uint64_t x94 = 2LLU;
static int64_t x104 = -1LL;
int32_t t22 = 106105494;
static volatile uint32_t x105 = UINT32_MAX;
volatile int32_t t24 = 335226028;
uint8_t x121 = 89U;
volatile uint32_t x123 = 14944U;
int32_t t26 = 128935;
int16_t x129 = 0;
static int32_t t27 = -60875008;
int8_t x148 = 0;
int32_t t30 = -634340;
int16_t x151 = -1;
static uint64_t x157 = 54318343LLU;
volatile uint16_t x158 = UINT16_MAX;
volatile uint16_t x159 = 2157U;
int64_t x165 = INT64_MIN;
volatile int16_t x167 = INT16_MIN;
int32_t t36 = 392088530;
int32_t x175 = 86234024;
uint32_t x180 = 108898885U;
uint16_t x186 = 133U;
int8_t x187 = 17;
volatile int32_t x189 = -1;
int32_t x191 = 476369262;
uint16_t x192 = 186U;
int32_t t41 = 246297609;
volatile int8_t x193 = 20;
uint8_t x195 = UINT8_MAX;
int32_t x196 = -43812054;
volatile int8_t x198 = 11;
int8_t x199 = INT8_MIN;
int16_t x201 = -53;
int16_t x202 = INT16_MIN;
static volatile int64_t x208 = 8290041LL;
static volatile int32_t t46 = 158194585;
int32_t t47 = 1;
uint16_t x220 = 13U;
int32_t t48 = 246398;
int16_t x227 = -1;
int32_t t50 = 277428;
int16_t x230 = INT16_MAX;
int32_t t51 = 0;
uint16_t x241 = 15002U;
int32_t x244 = -523482000;
static volatile int32_t t54 = 26472992;
int8_t x247 = INT8_MAX;
volatile uint8_t x252 = 0U;
volatile int32_t t56 = -777;
static int32_t x254 = INT32_MIN;
uint8_t x265 = 14U;
volatile int16_t x268 = INT16_MAX;
uint8_t x271 = UINT8_MAX;
volatile uint16_t x285 = 225U;
int32_t x287 = 139417886;
int8_t x290 = INT8_MIN;
int32_t x306 = INT32_MAX;
uint64_t x313 = 58010LLU;
volatile int16_t x315 = INT16_MAX;
int8_t x325 = INT8_MAX;
int64_t x326 = INT64_MAX;
static int64_t x334 = INT64_MAX;
int32_t x341 = -1107865;
static int32_t x343 = -1;
uint16_t x344 = UINT16_MAX;
static int16_t x350 = 15586;
int8_t x352 = 1;
static int32_t t78 = 297;
int8_t x367 = INT8_MIN;
static int16_t x368 = INT16_MIN;
int16_t x376 = -1;
int8_t x377 = INT8_MAX;
int64_t x383 = INT64_MIN;
static int64_t x384 = INT64_MIN;
static int32_t x386 = INT32_MIN;
int8_t x388 = -4;
uint8_t x391 = UINT8_MAX;
uint32_t x402 = 32686651U;
uint16_t x404 = UINT16_MAX;
volatile int32_t t90 = 0;
int32_t x412 = -74786;
static int8_t x420 = 8;
int32_t x425 = -1;
uint32_t x437 = 55960U;
int64_t x439 = -438508524517830LL;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	int32_t t0 = 249025509;

	t0 = ((x5|x6)<(x7-x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x11 = INT8_MIN;
	static uint8_t x12 = 2U;
	static int32_t t1 = 1;

	t1 = ((x9|x10)<(x11-x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 18597972U;
	volatile uint16_t x15 = 12U;
	volatile uint32_t x16 = UINT32_MAX;
	static int32_t t2 = -1;

	t2 = ((x13|x14)<(x15-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	int16_t x18 = -3;
	uint64_t x19 = UINT64_MAX;
	static volatile int64_t x20 = INT64_MAX;
	int32_t t3 = -3929999;

	t3 = ((x17|x18)<(x19-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = 6;
	static int32_t x22 = -1;
	uint32_t x23 = 603790U;
	static volatile int32_t t4 = -54587560;

	t4 = ((x21|x22)<(x23-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = -762784LL;
	int32_t x28 = 187;
	int32_t t5 = -64183;

	t5 = ((x25|x26)<(x27-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	uint16_t x31 = UINT16_MAX;

	t6 = ((x29|x30)<(x31-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MAX;
	uint32_t x39 = 1U;
	static int32_t t7 = 0;

	t7 = ((x37|x38)<(x39-x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = 467;
	static int32_t x42 = INT32_MIN;
	int64_t x43 = -465635528773413LL;
	int64_t x44 = -8LL;
	int32_t t8 = 53884;

	t8 = ((x41|x42)<(x43-x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x45 = INT64_MIN;
	int8_t x47 = -1;
	int64_t x48 = INT64_MAX;
	volatile int32_t t9 = -1356;

	t9 = ((x45|x46)<(x47-x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	int8_t x50 = 12;
	volatile int8_t x51 = INT8_MIN;
	volatile int8_t x52 = INT8_MIN;

	t10 = ((x49|x50)<(x51-x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 121U;
	volatile uint64_t x55 = 280448056LLU;
	int64_t x56 = -1LL;
	volatile int32_t t11 = -20;

	t11 = ((x53|x54)<(x55-x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = INT32_MIN;
	static int8_t x58 = INT8_MIN;
	volatile int32_t x59 = -1;
	int32_t x60 = -1;

	t12 = ((x57|x58)<(x59-x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = INT64_MAX;
	static int16_t x67 = INT16_MAX;
	int32_t t13 = -260675;

	t13 = ((x65|x66)<(x67-x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MIN;
	static uint32_t x70 = 36639468U;
	int8_t x71 = -1;
	int64_t x72 = INT64_MAX;
	volatile int32_t t14 = 7;

	t14 = ((x69|x70)<(x71-x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 825LLU;
	uint32_t x74 = 1678099642U;
	volatile int32_t x75 = -1;
	static uint32_t x76 = 0U;
	static int32_t t15 = 8;

	t15 = ((x73|x74)<(x75-x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x77 = 5745LL;
	volatile uint64_t x78 = 219713809LLU;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t16 = 114;

	t16 = ((x77|x78)<(x79-x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x83 = -1;
	int16_t x84 = -1;
	int32_t t17 = 696611;

	t17 = ((x81|x82)<(x83-x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x85 = -3;
	static int16_t x86 = INT16_MIN;
	static int64_t x87 = INT64_MAX;
	static uint8_t x88 = UINT8_MAX;
	volatile int32_t t18 = 54810;

	t18 = ((x85|x86)<(x87-x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x90 = 1U;
	uint64_t x91 = 111953LLU;
	static int32_t t19 = 3711;

	t19 = ((x89|x90)<(x91-x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x95 = -1;
	int64_t x96 = -1LL;
	int32_t t20 = -623;

	t20 = ((x93|x94)<(x95-x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x97 = UINT64_MAX;
	static volatile int32_t x98 = 3490310;
	static int16_t x99 = INT16_MAX;
	uint32_t x100 = 1684134U;
	volatile int32_t t21 = -5780;

	t21 = ((x97|x98)<(x99-x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	int16_t x103 = -1;

	t22 = ((x101|x102)<(x103-x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x106 = -1;
	int16_t x107 = -1;
	uint16_t x108 = UINT16_MAX;
	static volatile int32_t t23 = -659567;

	t23 = ((x105|x106)<(x107-x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	uint32_t x115 = UINT32_MAX;
	volatile int8_t x116 = 54;

	t24 = ((x113|x114)<(x115-x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x117 = 7U;
	int16_t x118 = -1;
	int8_t x119 = 44;
	volatile int8_t x120 = INT8_MIN;
	int32_t t25 = -330;

	t25 = ((x117|x118)<(x119-x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x122 = UINT32_MAX;
	int8_t x124 = 18;

	t26 = ((x121|x122)<(x123-x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x130 = 774474807U;
	volatile int32_t x131 = 1566;
	int8_t x132 = INT8_MIN;

	t27 = ((x129|x130)<(x131-x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x137 = INT64_MIN;
	volatile int64_t x138 = INT64_MIN;
	int16_t x139 = -5817;
	uint32_t x140 = UINT32_MAX;
	volatile int32_t t28 = 1;

	t28 = ((x137|x138)<(x139-x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x141 = 473531422U;
	volatile int8_t x142 = INT8_MIN;
	int16_t x143 = -796;
	int8_t x144 = INT8_MIN;
	int32_t t29 = -6058;

	t29 = ((x141|x142)<(x143-x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x145 = 4U;
	int32_t x146 = INT32_MIN;
	int64_t x147 = INT64_MAX;

	t30 = ((x145|x146)<(x147-x148));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x149 = 0U;
	int8_t x150 = INT8_MIN;
	uint32_t x152 = 1360763836U;
	static volatile int32_t t31 = 5644;

	t31 = ((x149|x150)<(x151-x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = INT64_MIN;
	static uint32_t x154 = 400042U;
	int32_t x155 = INT32_MAX;
	int64_t x156 = -931LL;
	volatile int32_t t32 = 53444819;

	t32 = ((x153|x154)<(x155-x156));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x160 = INT8_MIN;
	volatile int32_t t33 = 36;

	t33 = ((x157|x158)<(x159-x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MIN;
	static uint16_t x162 = 1539U;
	static volatile int8_t x163 = -18;
	int64_t x164 = -1LL;
	volatile int32_t t34 = -58471988;

	t34 = ((x161|x162)<(x163-x164));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x166 = INT64_MIN;
	static int32_t x168 = -103;
	int32_t t35 = -1;

	t35 = ((x165|x166)<(x167-x168));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MIN;
	static int64_t x171 = 10431798950LL;
	int8_t x172 = INT8_MAX;

	t36 = ((x169|x170)<(x171-x172));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = INT8_MIN;
	int16_t x174 = -1;
	static uint64_t x176 = UINT64_MAX;
	int32_t t37 = -595287937;

	t37 = ((x173|x174)<(x175-x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x177 = UINT32_MAX;
	volatile int64_t x178 = -1LL;
	int16_t x179 = -28;
	volatile int32_t t38 = 85556118;

	t38 = ((x177|x178)<(x179-x180));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x181 = -692913499;
	uint64_t x182 = UINT64_MAX;
	uint64_t x183 = UINT64_MAX;
	static uint32_t x184 = 1016437U;
	static int32_t t39 = 25200;

	t39 = ((x181|x182)<(x183-x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x185 = 732581898U;
	uint16_t x188 = 14U;
	volatile int32_t t40 = -40578252;

	t40 = ((x185|x186)<(x187-x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x190 = INT8_MAX;

	t41 = ((x189|x190)<(x191-x192));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x194 = -244;
	int32_t t42 = -2;

	t42 = ((x193|x194)<(x195-x196));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x197 = -311;
	int32_t x200 = 199274612;
	int32_t t43 = -436;

	t43 = ((x197|x198)<(x199-x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x203 = INT16_MAX;
	int32_t x204 = -220344;
	volatile int32_t t44 = 1123;

	t44 = ((x201|x202)<(x203-x204));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = INT16_MIN;
	volatile uint8_t x206 = UINT8_MAX;
	uint32_t x207 = 415154630U;
	static int32_t t45 = 58181468;

	t45 = ((x205|x206)<(x207-x208));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x209 = 0U;
	static volatile int32_t x210 = INT32_MIN;
	volatile int32_t x211 = -1;
	static int64_t x212 = -1LL;

	t46 = ((x209|x210)<(x211-x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = -1979458686LL;
	static volatile uint64_t x214 = 6267940LLU;
	int16_t x215 = INT16_MIN;
	static uint8_t x216 = UINT8_MAX;

	t47 = ((x213|x214)<(x215-x216));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MAX;
	static volatile int32_t x218 = INT32_MAX;
	int8_t x219 = INT8_MAX;

	t48 = ((x217|x218)<(x219-x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x221 = -7;
	uint16_t x222 = 0U;
	uint8_t x223 = 3U;
	int8_t x224 = -1;
	static int32_t t49 = -200487471;

	t49 = ((x221|x222)<(x223-x224));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x225 = 149808445796LLU;
	int32_t x226 = -55340020;
	uint8_t x228 = UINT8_MAX;

	t50 = ((x225|x226)<(x227-x228));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x229 = 6170U;
	uint64_t x231 = 74813178572549537LLU;
	volatile int64_t x232 = 30607LL;

	t51 = ((x229|x230)<(x231-x232));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x233 = 5LLU;
	uint64_t x234 = 4LLU;
	int8_t x235 = INT8_MIN;
	static int32_t x236 = 630785567;
	int32_t t52 = 52317079;

	t52 = ((x233|x234)<(x235-x236));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x237 = INT64_MAX;
	int16_t x238 = -1;
	int16_t x239 = -1;
	volatile int8_t x240 = 0;
	volatile int32_t t53 = -9610;

	t53 = ((x237|x238)<(x239-x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x242 = -1;
	int32_t x243 = INT32_MIN;

	t54 = ((x241|x242)<(x243-x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = 0LL;
	int32_t x246 = INT32_MIN;
	int16_t x248 = INT16_MIN;
	volatile int32_t t55 = 1;

	t55 = ((x245|x246)<(x247-x248));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x249 = 6636U;
	uint8_t x250 = 10U;
	int64_t x251 = 5956141LL;

	t56 = ((x249|x250)<(x251-x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x253 = UINT8_MAX;
	int16_t x255 = 11810;
	volatile int8_t x256 = INT8_MIN;
	int32_t t57 = -906896339;

	t57 = ((x253|x254)<(x255-x256));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = -1;
	static int64_t x258 = -28737460956LL;
	static int64_t x259 = INT64_MIN;
	int8_t x260 = -3;
	int32_t t58 = 370;

	t58 = ((x257|x258)<(x259-x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x261 = 213665566U;
	int8_t x262 = INT8_MIN;
	uint8_t x263 = 25U;
	static uint16_t x264 = 9204U;
	volatile int32_t t59 = 9875412;

	t59 = ((x261|x262)<(x263-x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x266 = -1LL;
	uint32_t x267 = 987212035U;
	int32_t t60 = -191097;

	t60 = ((x265|x266)<(x267-x268));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x269 = UINT16_MAX;
	int32_t x270 = INT32_MAX;
	static int64_t x272 = -6239LL;
	static volatile int32_t t61 = 525;

	t61 = ((x269|x270)<(x271-x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x273 = 0;
	static int32_t x274 = 26312;
	volatile int8_t x275 = INT8_MIN;
	static uint16_t x276 = 9399U;
	volatile int32_t t62 = -171217720;

	t62 = ((x273|x274)<(x275-x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x277 = 4805U;
	volatile int8_t x278 = 0;
	volatile int8_t x279 = 1;
	int8_t x280 = INT8_MIN;
	volatile int32_t t63 = 1707294;

	t63 = ((x277|x278)<(x279-x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = INT16_MIN;
	uint32_t x282 = 1003666820U;
	uint8_t x283 = 3U;
	static uint16_t x284 = 0U;
	static int32_t t64 = -50218;

	t64 = ((x281|x282)<(x283-x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x286 = UINT32_MAX;
	int8_t x288 = INT8_MAX;
	static volatile int32_t t65 = 2438;

	t65 = ((x285|x286)<(x287-x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x289 = 3427611272542678412LLU;
	volatile int16_t x291 = -1;
	uint32_t x292 = 176126U;
	int32_t t66 = -3746632;

	t66 = ((x289|x290)<(x291-x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x293 = INT32_MIN;
	volatile int8_t x294 = -1;
	int64_t x295 = 3582239LL;
	uint8_t x296 = 14U;
	volatile int32_t t67 = 128;

	t67 = ((x293|x294)<(x295-x296));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x305 = UINT32_MAX;
	static int32_t x307 = -1236393;
	uint64_t x308 = 8523814099LLU;
	volatile int32_t t68 = 40802;

	t68 = ((x305|x306)<(x307-x308));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x309 = UINT32_MAX;
	static int32_t x310 = -15037;
	volatile uint32_t x311 = 1015U;
	static int32_t x312 = INT32_MIN;
	static int32_t t69 = 8;

	t69 = ((x309|x310)<(x311-x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x314 = INT16_MAX;
	static uint8_t x316 = 1U;
	int32_t t70 = 62;

	t70 = ((x313|x314)<(x315-x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x317 = 4354U;
	static uint64_t x318 = UINT64_MAX;
	int64_t x319 = -59127194828LL;
	uint8_t x320 = 1U;
	int32_t t71 = 0;

	t71 = ((x317|x318)<(x319-x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x321 = 120U;
	uint8_t x322 = UINT8_MAX;
	int32_t x323 = -1;
	static int64_t x324 = 6459LL;
	static volatile int32_t t72 = 148496107;

	t72 = ((x321|x322)<(x323-x324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x327 = -14;
	uint64_t x328 = UINT64_MAX;
	volatile int32_t t73 = -1;

	t73 = ((x325|x326)<(x327-x328));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x329 = 1;
	int16_t x330 = 3497;
	int16_t x331 = 6272;
	int8_t x332 = INT8_MIN;
	int32_t t74 = -15511469;

	t74 = ((x329|x330)<(x331-x332));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x333 = 3443U;
	static int8_t x335 = INT8_MAX;
	uint32_t x336 = UINT32_MAX;
	static int32_t t75 = 46;

	t75 = ((x333|x334)<(x335-x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x342 = 21126869913098222LLU;
	int32_t t76 = -1154;

	t76 = ((x341|x342)<(x343-x344));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x345 = -695854LL;
	static int8_t x346 = INT8_MIN;
	volatile int8_t x347 = INT8_MAX;
	uint16_t x348 = UINT16_MAX;
	int32_t t77 = 84171;

	t77 = ((x345|x346)<(x347-x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x349 = INT32_MIN;
	int16_t x351 = INT16_MAX;

	t78 = ((x349|x350)<(x351-x352));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MAX;
	int16_t x359 = INT16_MAX;
	uint64_t x360 = 682419LLU;
	static volatile int32_t t79 = 224581420;

	t79 = ((x357|x358)<(x359-x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x361 = INT64_MIN;
	uint16_t x362 = UINT16_MAX;
	int64_t x363 = INT64_MIN;
	static int16_t x364 = -1;
	volatile int32_t t80 = 36;

	t80 = ((x361|x362)<(x363-x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x365 = -94;
	uint16_t x366 = 11U;
	int32_t t81 = 424269046;

	t81 = ((x365|x366)<(x367-x368));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = -1;
	int64_t x370 = -12772110876LL;
	static int16_t x371 = 5518;
	static int64_t x372 = -10101LL;
	volatile int32_t t82 = 218551201;

	t82 = ((x369|x370)<(x371-x372));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x373 = 586U;
	uint16_t x374 = 409U;
	uint32_t x375 = UINT32_MAX;
	volatile int32_t t83 = -9;

	t83 = ((x373|x374)<(x375-x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x378 = -3;
	int64_t x379 = -16380070LL;
	int32_t x380 = -1;
	int32_t t84 = -29;

	t84 = ((x377|x378)<(x379-x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = 6755022911LL;
	uint8_t x382 = 3U;
	volatile int32_t t85 = 50626447;

	t85 = ((x381|x382)<(x383-x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x385 = 3U;
	static int32_t x387 = -1;
	int32_t t86 = 31071;

	t86 = ((x385|x386)<(x387-x388));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x389 = -15;
	volatile uint32_t x390 = 11913U;
	static int8_t x392 = -1;
	volatile int32_t t87 = 0;

	t87 = ((x389|x390)<(x391-x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x393 = 168680261992LLU;
	int32_t x394 = INT32_MIN;
	int8_t x395 = -31;
	int8_t x396 = INT8_MIN;
	int32_t t88 = 22;

	t88 = ((x393|x394)<(x395-x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x397 = UINT16_MAX;
	int32_t x398 = -494940263;
	uint8_t x399 = 0U;
	static volatile uint16_t x400 = 3328U;
	static int32_t t89 = -489582451;

	t89 = ((x397|x398)<(x399-x400));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x401 = -1;
	uint16_t x403 = 13U;

	t90 = ((x401|x402)<(x403-x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x405 = INT32_MIN;
	int64_t x406 = -906542446418708LL;
	int8_t x407 = -1;
	static int8_t x408 = -1;
	int32_t t91 = 82;

	t91 = ((x405|x406)<(x407-x408));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x409 = 13506847U;
	uint64_t x410 = 55040137LLU;
	uint16_t x411 = 249U;
	int32_t t92 = 3;

	t92 = ((x409|x410)<(x411-x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = 2;
	volatile int64_t x414 = 121859386661LL;
	volatile int64_t x415 = INT64_MIN;
	static int16_t x416 = INT16_MIN;
	int32_t t93 = -3;

	t93 = ((x413|x414)<(x415-x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x417 = INT32_MIN;
	int8_t x418 = 1;
	uint64_t x419 = 24038LLU;
	int32_t t94 = -451;

	t94 = ((x417|x418)<(x419-x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x426 = -1LL;
	volatile uint32_t x427 = UINT32_MAX;
	static volatile uint32_t x428 = UINT32_MAX;
	volatile int32_t t95 = 1861298;

	t95 = ((x425|x426)<(x427-x428));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x429 = UINT16_MAX;
	int16_t x430 = INT16_MIN;
	int8_t x431 = INT8_MIN;
	volatile int16_t x432 = 370;
	volatile int32_t t96 = -107247;

	t96 = ((x429|x430)<(x431-x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x433 = -49;
	int32_t x434 = INT32_MIN;
	int64_t x435 = -2238809779142235LL;
	volatile uint32_t x436 = 6864706U;
	volatile int32_t t97 = -53;

	t97 = ((x433|x434)<(x435-x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x438 = 6716;
	uint8_t x440 = 95U;
	static int32_t t98 = -15331088;

	t98 = ((x437|x438)<(x439-x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x441 = UINT8_MAX;
	int64_t x442 = INT64_MAX;
	int64_t x443 = -1LL;
	static volatile int32_t x444 = INT32_MIN;
	volatile int32_t t99 = -421862;

	t99 = ((x441|x442)<(x443-x444));

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

