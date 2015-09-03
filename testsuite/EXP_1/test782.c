#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -1017;
volatile int8_t x6 = INT8_MIN;
int64_t t1 = -35240194274353950LL;
static uint16_t x11 = 14U;
volatile int16_t x12 = -1;
int32_t x17 = INT32_MAX;
int64_t x22 = -1LL;
uint32_t x25 = 223974U;
static int32_t x33 = INT32_MAX;
static volatile uint64_t x34 = UINT64_MAX;
int8_t x52 = -1;
static int16_t x54 = INT16_MIN;
int32_t x61 = -5;
int8_t x64 = INT8_MAX;
volatile uint16_t x65 = UINT16_MAX;
int64_t x66 = INT64_MIN;
int16_t x67 = -839;
int32_t x68 = -612;
volatile int32_t t15 = 113353463;
uint32_t x77 = 3U;
uint16_t x84 = UINT16_MAX;
volatile int32_t t17 = -91355167;
int8_t x88 = -1;
static int64_t x97 = INT64_MIN;
static int32_t t20 = 23913;
int16_t x105 = INT16_MAX;
int32_t t21 = 202681;
uint16_t x109 = 1176U;
int8_t x120 = INT8_MAX;
int8_t x123 = 1;
int64_t t25 = 3650367061LL;
int64_t x129 = -1LL;
int8_t x152 = INT8_MIN;
static volatile int16_t x154 = 52;
volatile int32_t t30 = -784554165;
int64_t x157 = 41135386900982032LL;
static int64_t x160 = 2LL;
static volatile int8_t x164 = INT8_MIN;
int8_t x172 = INT8_MIN;
volatile uint32_t x174 = 179U;
static int32_t t34 = 5;
volatile uint64_t t36 = 8692228082613024847LLU;
volatile int32_t t37 = -464546;
uint64_t x192 = 7127389LLU;
volatile int8_t x193 = 11;
uint32_t x204 = 706557U;
static int32_t t46 = -792;
volatile uint32_t x228 = 3194147U;
int8_t x232 = 0;
int32_t x236 = INT32_MAX;
static uint16_t x238 = UINT16_MAX;
int16_t x240 = 29;
int16_t x248 = 5;
static volatile uint16_t x257 = 771U;
int16_t x259 = -861;
volatile uint16_t x276 = 1435U;
static int64_t x283 = -70142221564291LL;
int64_t x289 = INT64_MIN;
int8_t x294 = INT8_MAX;
volatile int64_t x295 = 164105927689060LL;
static int64_t x310 = -517227363LL;
int64_t t63 = -3916408692105533LL;
int32_t x326 = INT32_MAX;
static uint8_t x328 = 37U;
int8_t x339 = INT8_MIN;
static int64_t t68 = 28042002045546LL;
volatile int32_t x343 = INT32_MIN;
uint32_t x347 = UINT32_MAX;
static volatile int8_t x349 = INT8_MIN;
int64_t x350 = 109412409870006611LL;
int64_t x352 = 7410838LL;
int8_t x354 = INT8_MIN;
static volatile uint64_t t72 = 3825177LLU;
volatile uint32_t t74 = 98U;
int32_t x365 = INT32_MIN;
int32_t x366 = INT32_MIN;
uint64_t x379 = UINT64_MAX;
int32_t x385 = INT32_MAX;
int8_t x388 = INT8_MAX;
static uint16_t x389 = UINT16_MAX;
static int64_t x390 = INT64_MAX;
int64_t x391 = INT64_MAX;
uint16_t x399 = 237U;
static int32_t x409 = INT32_MIN;
uint64_t x414 = UINT64_MAX;
static uint16_t x416 = UINT16_MAX;
int64_t x419 = 1LL;
int32_t x420 = -74261850;
int16_t x428 = -1;
uint64_t x435 = UINT64_MAX;
int8_t x438 = INT8_MIN;
int32_t x441 = -11163965;
uint8_t x442 = UINT8_MAX;
static int8_t x451 = 18;
volatile int8_t x456 = -2;
int32_t t93 = -176;
static uint32_t x462 = UINT32_MAX;
uint64_t t95 = 7728845313LLU;
static int16_t x468 = 1;
uint64_t x470 = UINT64_MAX;
uint64_t x475 = 3LLU;
static uint16_t x478 = UINT16_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x2 = 1;
	int32_t x3 = -134;
	uint8_t x4 = UINT8_MAX;

	t0 = (((x1%x2)<x3)-x4);

	if (t0 != -255) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 50124887U;
	int16_t x7 = INT16_MIN;
	static int64_t x8 = -1LL;

	t1 = (((x5%x6)<x7)-x8);

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 29U;
	int32_t x10 = INT32_MAX;
	static int32_t t2 = -3;

	t2 = (((x9%x10)<x11)-x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = INT64_MIN;
	int8_t x19 = INT8_MAX;
	volatile uint32_t x20 = 335946636U;
	volatile uint32_t t3 = 128661536U;

	t3 = (((x17%x18)<x19)-x20);

	if (t3 != 3959020660U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 587946892048677LLU;
	uint64_t x23 = 620876651104490105LLU;
	uint32_t x24 = 78108170U;
	volatile uint32_t t4 = 15U;

	t4 = (((x21%x22)<x23)-x24);

	if (t4 != 4216859127U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MAX;
	int32_t x27 = -486052;
	int8_t x28 = INT8_MAX;
	static int32_t t5 = 65695873;

	t5 = (((x25%x26)<x27)-x28);

	if (t5 != -126) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = -4086567593382LL;
	uint16_t x30 = 1U;
	int32_t x31 = INT32_MIN;
	int32_t x32 = -1;
	int32_t t6 = -745652;

	t6 = (((x29%x30)<x31)-x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x35 = INT16_MAX;
	volatile int32_t x36 = -1;
	volatile int32_t t7 = 106;

	t7 = (((x33%x34)<x35)-x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 1U;
	static volatile int32_t x38 = -1;
	static int16_t x39 = INT16_MIN;
	uint64_t x40 = UINT64_MAX;
	uint64_t t8 = 36LLU;

	t8 = (((x37%x38)<x39)-x40);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 2U;
	int16_t x42 = -1;
	int8_t x43 = INT8_MAX;
	int8_t x44 = -28;
	volatile int32_t t9 = -485761227;

	t9 = (((x41%x42)<x43)-x44);

	if (t9 != 29) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x49 = INT32_MAX;
	static int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	volatile int32_t t10 = -3647231;

	t10 = (((x49%x50)<x51)-x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 52;
	volatile uint64_t x55 = UINT64_MAX;
	volatile uint8_t x56 = UINT8_MAX;
	static int32_t t11 = 94;

	t11 = (((x53%x54)<x55)-x56);

	if (t11 != -254) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x57 = 90U;
	static int8_t x58 = INT8_MAX;
	int16_t x59 = INT16_MIN;
	volatile int64_t x60 = -1LL;
	int64_t t12 = 63247LL;

	t12 = (((x57%x58)<x59)-x60);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = INT16_MIN;
	static int64_t x63 = -1LL;
	volatile int32_t t13 = -3671;

	t13 = (((x61%x62)<x63)-x64);

	if (t13 != -126) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t t14 = 279273;

	t14 = (((x65%x66)<x67)-x68);

	if (t14 != 612) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = 2;
	static int32_t x74 = -1;
	int32_t x75 = 15155897;
	static uint16_t x76 = 6494U;

	t15 = (((x73%x74)<x75)-x76);

	if (t15 != -6493) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x78 = -1LL;
	int32_t x79 = INT32_MIN;
	int16_t x80 = 202;
	volatile int32_t t16 = 2135;

	t16 = (((x77%x78)<x79)-x80);

	if (t16 != -202) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MAX;
	uint32_t x82 = UINT32_MAX;
	static int8_t x83 = INT8_MIN;

	t17 = (((x81%x82)<x83)-x84);

	if (t17 != -65534) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 126U;
	int64_t x86 = INT64_MAX;
	uint16_t x87 = 718U;
	static volatile int32_t t18 = 3;

	t18 = (((x85%x86)<x87)-x88);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -10441;
	static uint16_t x90 = 105U;
	uint16_t x91 = UINT16_MAX;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t19 = 16;

	t19 = (((x89%x90)<x91)-x92);

	if (t19 != -254) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x98 = -29549592;
	volatile int32_t x99 = -1;
	uint8_t x100 = 1U;

	t20 = (((x97%x98)<x99)-x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x106 = 27U;
	int16_t x107 = -317;
	volatile int16_t x108 = 6552;

	t21 = (((x105%x106)<x107)-x108);

	if (t21 != -6551) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x110 = 44490846489LL;
	volatile int64_t x111 = 28447LL;
	int8_t x112 = -3;
	int32_t t22 = -51690068;

	t22 = (((x109%x110)<x111)-x112);

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = 4;
	static volatile int64_t x118 = INT64_MAX;
	volatile uint32_t x119 = 336094141U;
	int32_t t23 = -13;

	t23 = (((x117%x118)<x119)-x120);

	if (t23 != -126) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MAX;
	int64_t x122 = 1076LL;
	uint64_t x124 = 2007115LLU;
	uint64_t t24 = 7572230282823076621LLU;

	t24 = (((x121%x122)<x123)-x124);

	if (t24 != 18446744073707544501LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x125 = 29U;
	uint16_t x126 = 11922U;
	static int32_t x127 = -31238;
	int64_t x128 = -58584680LL;

	t25 = (((x125%x126)<x127)-x128);

	if (t25 != 58584680LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x130 = UINT16_MAX;
	static int32_t x131 = -1;
	uint64_t x132 = 132905804LLU;
	uint64_t t26 = 100295683729841241LLU;

	t26 = (((x129%x130)<x131)-x132);

	if (t26 != 18446744073576645812LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x133 = INT8_MIN;
	uint32_t x134 = UINT32_MAX;
	static uint32_t x135 = UINT32_MAX;
	int64_t x136 = INT64_MAX;
	int64_t t27 = 51342166210213LL;

	t27 = (((x133%x134)<x135)-x136);

	if (t27 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x141 = UINT16_MAX;
	uint32_t x142 = 20682296U;
	int8_t x143 = -1;
	int8_t x144 = INT8_MIN;
	volatile int32_t t28 = 192368348;

	t28 = (((x141%x142)<x143)-x144);

	if (t28 != 129) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = 11;
	static volatile int16_t x150 = INT16_MIN;
	volatile int8_t x151 = -16;
	int32_t t29 = 148;

	t29 = (((x149%x150)<x151)-x152);

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = INT8_MAX;
	uint64_t x155 = UINT64_MAX;
	uint16_t x156 = 7193U;

	t30 = (((x153%x154)<x155)-x156);

	if (t30 != -7192) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x158 = INT64_MIN;
	int64_t x159 = -7914LL;
	static int64_t t31 = 18932038288049LL;

	t31 = (((x157%x158)<x159)-x160);

	if (t31 != -2LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x161 = UINT8_MAX;
	volatile uint16_t x162 = UINT16_MAX;
	static volatile int32_t x163 = INT32_MIN;
	int32_t t32 = 1;

	t32 = (((x161%x162)<x163)-x164);

	if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x169 = -537;
	uint8_t x170 = 82U;
	int64_t x171 = INT64_MAX;
	static int32_t t33 = 62845318;

	t33 = (((x169%x170)<x171)-x172);

	if (t33 != 129) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = -132290088507375LL;
	int16_t x175 = 230;
	int8_t x176 = INT8_MIN;

	t34 = (((x173%x174)<x175)-x176);

	if (t34 != 129) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = -1;
	int32_t x179 = -2297;
	static int32_t x180 = -1;
	volatile int32_t t35 = -18;

	t35 = (((x177%x178)<x179)-x180);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x181 = INT64_MAX;
	static uint8_t x182 = 1U;
	volatile uint8_t x183 = UINT8_MAX;
	uint64_t x184 = UINT64_MAX;

	t36 = (((x181%x182)<x183)-x184);

	if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x185 = 676441014480LLU;
	volatile int32_t x186 = INT32_MIN;
	uint64_t x187 = 1749742792LLU;
	static volatile uint16_t x188 = 901U;

	t37 = (((x185%x186)<x187)-x188);

	if (t37 != -901) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x189 = 0U;
	int32_t x190 = 1602587;
	volatile uint8_t x191 = 16U;
	volatile uint64_t t38 = 357547592621LLU;

	t38 = (((x189%x190)<x191)-x192);

	if (t38 != 18446744073702424228LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x194 = 1;
	uint8_t x195 = 4U;
	int32_t x196 = -1;
	static int32_t t39 = -18;

	t39 = (((x193%x194)<x195)-x196);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x197 = INT64_MIN;
	static int16_t x198 = INT16_MIN;
	uint8_t x199 = 21U;
	volatile int16_t x200 = INT16_MIN;
	static int32_t t40 = 2;

	t40 = (((x197%x198)<x199)-x200);

	if (t40 != 32769) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x201 = 1125122LL;
	int64_t x202 = -46671017733715LL;
	volatile int64_t x203 = -630LL;
	static volatile uint32_t t41 = 941755U;

	t41 = (((x201%x202)<x203)-x204);

	if (t41 != 4294260739U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x205 = 1U;
	int64_t x206 = INT64_MAX;
	int8_t x207 = -1;
	volatile uint64_t x208 = UINT64_MAX;
	uint64_t t42 = 553888LLU;

	t42 = (((x205%x206)<x207)-x208);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x209 = -1;
	int16_t x210 = 1;
	static uint64_t x211 = 287977193LLU;
	volatile int8_t x212 = INT8_MIN;
	int32_t t43 = -575086;

	t43 = (((x209%x210)<x211)-x212);

	if (t43 != 129) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = INT8_MAX;
	int8_t x214 = INT8_MIN;
	int8_t x215 = -1;
	volatile int8_t x216 = 8;
	volatile int32_t t44 = 1798888;

	t44 = (((x213%x214)<x215)-x216);

	if (t44 != -8) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = -6;
	int32_t x218 = INT32_MIN;
	int8_t x219 = -30;
	int16_t x220 = -1;
	int32_t t45 = -45;

	t45 = (((x217%x218)<x219)-x220);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = 1265;
	static uint64_t x223 = UINT64_MAX;
	static int16_t x224 = INT16_MIN;

	t46 = (((x221%x222)<x223)-x224);

	if (t46 != 32769) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = -1;
	uint64_t x226 = UINT64_MAX;
	uint16_t x227 = 263U;
	static volatile uint32_t t47 = 509936U;

	t47 = (((x225%x226)<x227)-x228);

	if (t47 != 4291773150U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x229 = -1;
	int8_t x230 = -44;
	uint8_t x231 = 0U;
	volatile int32_t t48 = -2924;

	t48 = (((x229%x230)<x231)-x232);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = 5;
	static uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MIN;
	static int32_t t49 = -76346;

	t49 = (((x233%x234)<x235)-x236);

	if (t49 != -2147483646) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x237 = INT64_MIN;
	volatile int16_t x239 = -1;
	volatile int32_t t50 = 1451;

	t50 = (((x237%x238)<x239)-x240);

	if (t50 != -28) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x241 = -278633400LL;
	int32_t x242 = -22371400;
	static uint8_t x243 = 1U;
	int8_t x244 = INT8_MIN;
	int32_t t51 = 163830615;

	t51 = (((x241%x242)<x243)-x244);

	if (t51 != 129) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x245 = -1;
	volatile int8_t x246 = 6;
	int16_t x247 = INT16_MAX;
	int32_t t52 = -30390039;

	t52 = (((x245%x246)<x247)-x248);

	if (t52 != -4) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = INT32_MAX;
	int32_t x250 = INT32_MIN;
	int64_t x251 = 17395798741LL;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t53 = -27121;

	t53 = (((x249%x250)<x251)-x252);

	if (t53 != -65534) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MAX;
	int32_t x255 = INT32_MIN;
	int64_t x256 = -1LL;
	volatile int64_t t54 = 1090608867012234667LL;

	t54 = (((x253%x254)<x255)-x256);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x258 = INT16_MAX;
	static volatile int16_t x260 = 4;
	static volatile int32_t t55 = -836287;

	t55 = (((x257%x258)<x259)-x260);

	if (t55 != -4) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x273 = -1;
	uint16_t x274 = UINT16_MAX;
	static volatile int32_t x275 = INT32_MIN;
	volatile int32_t t56 = 912;

	t56 = (((x273%x274)<x275)-x276);

	if (t56 != -1435) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x277 = 31;
	uint32_t x278 = 9U;
	uint16_t x279 = 4812U;
	uint32_t x280 = 300U;
	uint32_t t57 = 49365U;

	t57 = (((x277%x278)<x279)-x280);

	if (t57 != 4294966997U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = -277;
	volatile int16_t x282 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t58 = 31848LLU;

	t58 = (((x281%x282)<x283)-x284);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x285 = 16996U;
	uint32_t x286 = 677U;
	int64_t x287 = INT64_MIN;
	uint16_t x288 = 286U;
	static int32_t t59 = -39645;

	t59 = (((x285%x286)<x287)-x288);

	if (t59 != -286) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x290 = 7U;
	uint64_t x291 = 6LLU;
	uint8_t x292 = 6U;
	volatile int32_t t60 = 0;

	t60 = (((x289%x290)<x291)-x292);

	if (t60 != -6) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = -23;
	int32_t x296 = -1;
	int32_t t61 = 3301;

	t61 = (((x293%x294)<x295)-x296);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x305 = 28U;
	volatile int8_t x306 = 1;
	int64_t x307 = -9LL;
	uint8_t x308 = UINT8_MAX;
	static volatile int32_t t62 = 56;

	t62 = (((x305%x306)<x307)-x308);

	if (t62 != -255) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x309 = INT64_MIN;
	static int32_t x311 = -78716;
	int64_t x312 = -22130600LL;

	t63 = (((x309%x310)<x311)-x312);

	if (t63 != 22130601LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x313 = 27U;
	int64_t x314 = -12080872552895LL;
	volatile int16_t x315 = 25;
	int8_t x316 = -1;
	volatile int32_t t64 = 172432;

	t64 = (((x313%x314)<x315)-x316);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MIN;
	int32_t x323 = -183416162;
	int8_t x324 = -1;
	int32_t t65 = -3;

	t65 = (((x321%x322)<x323)-x324);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x325 = 10LLU;
	uint16_t x327 = 4084U;
	static volatile int32_t t66 = -1;

	t66 = (((x325%x326)<x327)-x328);

	if (t66 != -36) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x333 = INT64_MAX;
	uint32_t x334 = UINT32_MAX;
	uint8_t x335 = UINT8_MAX;
	volatile int32_t x336 = -28834555;
	volatile int32_t t67 = -3876493;

	t67 = (((x333%x334)<x335)-x336);

	if (t67 != 28834555) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x337 = -1;
	static volatile uint32_t x338 = 323U;
	volatile int64_t x340 = INT64_MAX;

	t68 = (((x337%x338)<x339)-x340);

	if (t68 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x341 = 40U;
	int8_t x342 = INT8_MIN;
	int8_t x344 = -3;
	static volatile int32_t t69 = -57700676;

	t69 = (((x341%x342)<x343)-x344);

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x345 = INT16_MAX;
	static volatile int32_t x346 = -1;
	int32_t x348 = 711775467;
	int32_t t70 = -160;

	t70 = (((x345%x346)<x347)-x348);

	if (t70 != -711775466) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x351 = -1;
	int64_t t71 = -1681034LL;

	t71 = (((x349%x350)<x351)-x352);

	if (t71 != -7410837LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x353 = UINT16_MAX;
	static volatile int8_t x355 = INT8_MIN;
	uint64_t x356 = UINT64_MAX;

	t72 = (((x353%x354)<x355)-x356);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x357 = 22756926617772LLU;
	static volatile uint16_t x358 = UINT16_MAX;
	int8_t x359 = -5;
	static volatile int8_t x360 = -1;
	static volatile int32_t t73 = 16772732;

	t73 = (((x357%x358)<x359)-x360);

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x361 = INT16_MIN;
	static uint64_t x362 = 5401816682950667233LLU;
	uint16_t x363 = 27U;
	static uint32_t x364 = 133U;

	t74 = (((x361%x362)<x363)-x364);

	if (t74 != 4294967163U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x367 = -37;
	volatile int8_t x368 = 0;
	int32_t t75 = -79936;

	t75 = (((x365%x366)<x367)-x368);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MIN;
	int8_t x380 = -19;
	volatile int32_t t76 = 0;

	t76 = (((x377%x378)<x379)-x380);

	if (t76 != 20) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x381 = -1;
	int32_t x382 = INT32_MIN;
	uint64_t x383 = UINT64_MAX;
	int16_t x384 = INT16_MIN;
	int32_t t77 = -29243815;

	t77 = (((x381%x382)<x383)-x384);

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x386 = INT32_MIN;
	int16_t x387 = -56;
	int32_t t78 = -1196197;

	t78 = (((x385%x386)<x387)-x388);

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x392 = -1LL;
	int64_t t79 = -50LL;

	t79 = (((x389%x390)<x391)-x392);

	if (t79 != 2LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x393 = -62228;
	uint64_t x394 = 13LLU;
	volatile int16_t x395 = 176;
	volatile int8_t x396 = -22;
	volatile int32_t t80 = -59;

	t80 = (((x393%x394)<x395)-x396);

	if (t80 != 23) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x397 = 0;
	int32_t x398 = INT32_MIN;
	static volatile int8_t x400 = INT8_MAX;
	int32_t t81 = -1916;

	t81 = (((x397%x398)<x399)-x400);

	if (t81 != -126) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x405 = UINT32_MAX;
	volatile int32_t x406 = -13718777;
	uint64_t x407 = UINT64_MAX;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t82 = 23304477519193172LLU;

	t82 = (((x405%x406)<x407)-x408);

	if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x410 = INT64_MIN;
	int16_t x411 = INT16_MIN;
	static uint64_t x412 = 321973571031262705LLU;
	volatile uint64_t t83 = 1527090481532196072LLU;

	t83 = (((x409%x410)<x411)-x412);

	if (t83 != 18124770502678288912LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x413 = INT16_MIN;
	int32_t x415 = INT32_MIN;
	volatile int32_t t84 = 17;

	t84 = (((x413%x414)<x415)-x416);

	if (t84 != -65535) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x417 = 6116184;
	int16_t x418 = 13;
	volatile int32_t t85 = 14;

	t85 = (((x417%x418)<x419)-x420);

	if (t85 != 74261850) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x421 = UINT64_MAX;
	uint8_t x422 = 3U;
	int8_t x423 = -3;
	static int8_t x424 = -1;
	int32_t t86 = 460124;

	t86 = (((x421%x422)<x423)-x424);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x425 = -6794;
	int32_t x426 = INT32_MAX;
	static int64_t x427 = INT64_MIN;
	int32_t t87 = -4638;

	t87 = (((x425%x426)<x427)-x428);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x429 = -1;
	int8_t x430 = INT8_MIN;
	uint8_t x431 = 38U;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t88 = 12492712LLU;

	t88 = (((x429%x430)<x431)-x432);

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x433 = INT64_MIN;
	int8_t x434 = INT8_MIN;
	int16_t x436 = -3;
	volatile int32_t t89 = 85689;

	t89 = (((x433%x434)<x435)-x436);

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x437 = INT64_MIN;
	int64_t x439 = INT64_MIN;
	int64_t x440 = INT64_MAX;
	int64_t t90 = -17330124LL;

	t90 = (((x437%x438)<x439)-x440);

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x443 = INT8_MAX;
	static volatile int32_t x444 = 448643254;
	int32_t t91 = -455493;

	t91 = (((x441%x442)<x443)-x444);

	if (t91 != -448643253) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x449 = UINT8_MAX;
	int64_t x450 = INT64_MIN;
	int8_t x452 = INT8_MIN;
	volatile int32_t t92 = -1040141;

	t92 = (((x449%x450)<x451)-x452);

	if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x453 = -1;
	uint32_t x454 = UINT32_MAX;
	int16_t x455 = INT16_MAX;

	t93 = (((x453%x454)<x455)-x456);

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x457 = 942484633;
	volatile int16_t x458 = -1;
	uint32_t x459 = UINT32_MAX;
	static int8_t x460 = INT8_MIN;
	static volatile int32_t t94 = 1719;

	t94 = (((x457%x458)<x459)-x460);

	if (t94 != 129) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x461 = INT64_MIN;
	uint32_t x463 = 216272693U;
	volatile uint64_t x464 = 7570485064112041614LLU;

	t95 = (((x461%x462)<x463)-x464);

	if (t95 != 10876259009597510003LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x465 = INT64_MIN;
	int32_t x466 = -17156;
	uint16_t x467 = 5U;
	int32_t t96 = 252822634;

	t96 = (((x465%x466)<x467)-x468);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x469 = -1;
	static int16_t x471 = INT16_MAX;
	int16_t x472 = -575;
	static volatile int32_t t97 = -869;

	t97 = (((x469%x470)<x471)-x472);

	if (t97 != 576) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x473 = 0U;
	uint16_t x474 = 4U;
	volatile int64_t x476 = 136388809LL;
	static int64_t t98 = 16963314759841698LL;

	t98 = (((x473%x474)<x475)-x476);

	if (t98 != -136388808LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x477 = INT64_MIN;
	int16_t x479 = INT16_MIN;
	int8_t x480 = INT8_MIN;
	int32_t t99 = 56498;

	t99 = (((x477%x478)<x479)-x480);

	if (t99 != 128) { NG(); } else { ; }
	
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

