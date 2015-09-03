#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = -3;
uint64_t x10 = UINT64_MAX;
int32_t t2 = -94034;
volatile int8_t x13 = INT8_MAX;
int16_t x20 = INT16_MAX;
int32_t t4 = -3;
int8_t x27 = 35;
static int32_t t7 = 13826117;
static int8_t x33 = -1;
static uint16_t x38 = 10285U;
int32_t t9 = -14;
static int8_t x41 = INT8_MIN;
int64_t x47 = INT64_MAX;
int64_t x51 = INT64_MIN;
static volatile int16_t x55 = INT16_MAX;
int32_t x59 = -1022;
int8_t x60 = INT8_MAX;
int32_t x62 = 1;
int8_t x64 = -1;
static int16_t x65 = 525;
int32_t t16 = 708;
uint32_t x76 = 1572U;
static int16_t x83 = INT16_MIN;
volatile int16_t x85 = INT16_MIN;
static uint64_t x87 = 16887309357542686LLU;
uint8_t x96 = 22U;
uint16_t x98 = 28U;
int32_t x99 = -1;
volatile int32_t t26 = -7198034;
volatile uint16_t x111 = 0U;
volatile int32_t t28 = 4;
static volatile int32_t x117 = -55988485;
static int8_t x119 = INT8_MIN;
uint16_t x121 = UINT16_MAX;
int32_t t30 = -75473454;
int8_t x126 = 1;
volatile int32_t t32 = 16;
int32_t t33 = -920;
int16_t x138 = INT16_MIN;
int32_t x142 = -1;
volatile int32_t t35 = 40301;
int32_t t36 = 532109808;
volatile uint16_t x149 = UINT16_MAX;
int8_t x153 = INT8_MAX;
int16_t x155 = INT16_MAX;
uint64_t x158 = UINT64_MAX;
int8_t x159 = INT8_MAX;
int32_t t39 = 6919;
int16_t x165 = INT16_MIN;
volatile uint16_t x168 = 274U;
int16_t x169 = INT16_MIN;
volatile int8_t x170 = 0;
int8_t x171 = INT8_MAX;
volatile int32_t t43 = -16349;
int16_t x177 = -1;
uint32_t x181 = 194U;
uint64_t x190 = 1314020774LLU;
int32_t t49 = -30;
volatile int32_t t50 = -117943;
int8_t x217 = -4;
int8_t x218 = 24;
static uint32_t x228 = 502503828U;
static volatile int32_t t56 = 0;
int32_t x235 = -5254;
volatile int8_t x237 = -1;
int64_t x240 = -1372541489524068LL;
int32_t x246 = INT32_MIN;
int32_t t61 = 53;
static int16_t x249 = INT16_MIN;
volatile uint64_t x252 = 2095596LLU;
int8_t x257 = INT8_MIN;
volatile int32_t x266 = INT32_MIN;
int16_t x276 = INT16_MIN;
static volatile int64_t x292 = 110517295639LL;
uint16_t x297 = 12U;
int32_t x298 = -1;
static volatile int32_t t74 = -162;
int16_t x301 = INT16_MIN;
static int64_t x304 = INT64_MAX;
static uint32_t x309 = 97U;
int32_t t79 = -398818;
int16_t x321 = 21;
int8_t x335 = 1;
int8_t x336 = 1;
volatile int32_t t83 = -651;
int16_t x337 = INT16_MAX;
static uint16_t x341 = 3010U;
static volatile int64_t x342 = INT64_MIN;
int64_t x344 = 3LL;
volatile uint32_t x345 = 55077827U;
volatile int32_t x358 = -1;
volatile uint16_t x363 = 1519U;
uint16_t x366 = 2099U;
volatile int16_t x368 = INT16_MIN;
volatile int32_t t91 = -905312;
static int32_t x375 = INT32_MIN;
volatile uint8_t x378 = 64U;
int32_t t94 = -51876606;
uint8_t x383 = 1U;
static int32_t x384 = INT32_MAX;
int16_t x385 = -1;
int8_t x387 = -7;
static int8_t x396 = INT8_MIN;
volatile uint64_t x397 = UINT64_MAX;


void f0(void) {
	int64_t x1 = 9LL;
	static uint32_t x2 = 13U;
	uint8_t x3 = 0U;
	int64_t x4 = -306277LL;
	static int32_t t0 = -29554;

	t0 = ((x1==x2)<=(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int8_t x7 = INT8_MIN;
	int32_t x8 = 30;
	int32_t t1 = 454865;

	t1 = ((x5==x6)<=(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int32_t x11 = INT32_MIN;
	volatile uint8_t x12 = 0U;

	t2 = ((x9==x10)<=(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = UINT16_MAX;
	static int64_t x15 = -1LL;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = 56684321;

	t3 = ((x13==x14)<=(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int16_t x18 = INT16_MIN;
	uint16_t x19 = 296U;

	t4 = ((x17==x18)<=(x19^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int8_t x22 = -13;
	int8_t x23 = -1;
	int64_t x24 = -31761773LL;
	volatile int32_t t5 = 3;

	t5 = ((x21==x22)<=(x23^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int32_t x26 = 14395;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -5;

	t6 = ((x25==x26)<=(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	static uint64_t x30 = UINT64_MAX;
	volatile int8_t x31 = INT8_MIN;
	int32_t x32 = 5;

	t7 = ((x29==x30)<=(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x34 = UINT16_MAX;
	uint64_t x35 = 0LLU;
	static uint64_t x36 = 67867871204LLU;
	int32_t t8 = -1022810582;

	t8 = ((x33==x34)<=(x35^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 59U;
	int64_t x39 = -1LL;
	int8_t x40 = -1;

	t9 = ((x37==x38)<=(x39^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	int32_t x43 = -108;
	uint64_t x44 = 49464013138LLU;
	static volatile int32_t t10 = -36828;

	t10 = ((x41==x42)<=(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -3917;
	static int8_t x46 = -1;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = 3;

	t11 = ((x45==x46)<=(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	volatile uint64_t x50 = 264201LLU;
	static volatile int16_t x52 = 5193;
	int32_t t12 = 229104;

	t12 = ((x49==x50)<=(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int32_t x54 = -3930094;
	uint32_t x56 = 30897U;
	int32_t t13 = -27;

	t13 = ((x53==x54)<=(x55^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = UINT8_MAX;
	volatile uint32_t x58 = UINT32_MAX;
	int32_t t14 = -92570612;

	t14 = ((x57==x58)<=(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = UINT32_MAX;
	int64_t x63 = 391373LL;
	volatile int32_t t15 = 797;

	t15 = ((x61==x62)<=(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 85U;
	int16_t x67 = 7;
	int64_t x68 = INT64_MIN;

	t16 = ((x65==x66)<=(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -21;
	int32_t x70 = INT32_MIN;
	volatile int64_t x71 = -11559726LL;
	int64_t x72 = -1LL;
	volatile int32_t t17 = -85375582;

	t17 = ((x69==x70)<=(x71^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 0U;
	int16_t x74 = INT16_MIN;
	int16_t x75 = INT16_MIN;
	int32_t t18 = -68483974;

	t18 = ((x73==x74)<=(x75^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x77 = 17U;
	volatile int16_t x78 = INT16_MIN;
	static volatile int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = -1;

	t19 = ((x77==x78)<=(x79^x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	static int32_t x82 = 1017511;
	int16_t x84 = 33;
	int32_t t20 = -1110;

	t20 = ((x81==x82)<=(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = UINT8_MAX;
	int16_t x88 = 26;
	int32_t t21 = -123144;

	t21 = ((x85==x86)<=(x87^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	static int32_t x90 = INT32_MIN;
	int64_t x91 = INT64_MIN;
	int16_t x92 = -2054;
	int32_t t22 = 777;

	t22 = ((x89==x90)<=(x91^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -1540;
	uint64_t x94 = UINT64_MAX;
	static int8_t x95 = INT8_MAX;
	static volatile int32_t t23 = 0;

	t23 = ((x93==x94)<=(x95^x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	static int8_t x100 = -1;
	int32_t t24 = 4301217;

	t24 = ((x97==x98)<=(x99^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 3154818167LLU;
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = 122LL;
	int32_t x104 = 10445;
	static int32_t t25 = -27891;

	t25 = ((x101==x102)<=(x103^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1517692;
	int16_t x106 = 1;
	volatile int8_t x107 = -1;
	int8_t x108 = -1;

	t26 = ((x105==x106)<=(x107^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 10U;
	int16_t x110 = INT16_MIN;
	static uint64_t x112 = 5941977LLU;
	int32_t t27 = 4;

	t27 = ((x109==x110)<=(x111^x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1LL;
	int16_t x114 = INT16_MIN;
	int64_t x115 = -1LL;
	volatile int8_t x116 = -1;

	t28 = ((x113==x114)<=(x115^x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = INT16_MIN;
	int64_t x120 = -431025783LL;
	volatile int32_t t29 = 24;

	t29 = ((x117==x118)<=(x119^x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x122 = -2;
	int64_t x123 = -3547111LL;
	uint32_t x124 = 1U;

	t30 = ((x121==x122)<=(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 89U;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = -65037;
	volatile int32_t t31 = -152;

	t31 = ((x125==x126)<=(x127^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	static int64_t x130 = -1LL;
	int16_t x131 = INT16_MIN;
	int32_t x132 = -1;

	t32 = ((x129==x130)<=(x131^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -3;
	volatile int16_t x134 = -1;
	uint8_t x135 = 1U;
	volatile uint8_t x136 = 109U;

	t33 = ((x133==x134)<=(x135^x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	int8_t x139 = -1;
	static int32_t x140 = INT32_MIN;
	static volatile int32_t t34 = 0;

	t34 = ((x137==x138)<=(x139^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 2U;
	volatile int16_t x143 = INT16_MIN;
	int16_t x144 = -1;

	t35 = ((x141==x142)<=(x143^x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = 51;
	int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MIN;
	static int16_t x148 = -501;

	t36 = ((x145==x146)<=(x147^x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x150 = 7;
	uint16_t x151 = 502U;
	static uint8_t x152 = UINT8_MAX;
	static int32_t t37 = 31244;

	t37 = ((x149==x150)<=(x151^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x154 = 448LLU;
	static int8_t x156 = 11;
	volatile int32_t t38 = 6196202;

	t38 = ((x153==x154)<=(x155^x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = 5U;
	volatile int8_t x160 = -1;

	t39 = ((x157==x158)<=(x159^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x162 = 53U;
	int8_t x163 = INT8_MIN;
	static uint32_t x164 = UINT32_MAX;
	volatile int32_t t40 = 6025140;

	t40 = ((x161==x162)<=(x163^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 1263U;
	static uint8_t x167 = 14U;
	int32_t t41 = -21148;

	t41 = ((x165==x166)<=(x167^x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 7;

	t42 = ((x169==x170)<=(x171^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = -2798LL;
	static int8_t x174 = -1;
	uint64_t x175 = 126LLU;
	uint32_t x176 = 309647U;

	t43 = ((x173==x174)<=(x175^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x178 = UINT32_MAX;
	volatile int8_t x179 = -1;
	int64_t x180 = 256286505856630LL;
	int32_t t44 = 2597;

	t44 = ((x177==x178)<=(x179^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x182 = UINT8_MAX;
	static volatile uint16_t x183 = 14U;
	int32_t x184 = -1;
	volatile int32_t t45 = -2184280;

	t45 = ((x181==x182)<=(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int16_t x186 = -102;
	int8_t x187 = -1;
	uint16_t x188 = 21U;
	int32_t t46 = -36;

	t46 = ((x185==x186)<=(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 123159871;
	uint8_t x191 = 83U;
	volatile int32_t x192 = -128795;
	volatile int32_t t47 = 185539;

	t47 = ((x189==x190)<=(x191^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MIN;
	volatile int32_t x194 = -5;
	int8_t x195 = 0;
	uint16_t x196 = 0U;
	int32_t t48 = 153821067;

	t48 = ((x193==x194)<=(x195^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -30;
	int8_t x198 = -1;
	static int32_t x199 = -1;
	volatile int32_t x200 = -1;

	t49 = ((x197==x198)<=(x199^x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -1;
	volatile int8_t x202 = -47;
	uint64_t x203 = 2LLU;
	static int8_t x204 = -1;

	t50 = ((x201==x202)<=(x203^x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -48278511;
	int64_t x206 = -1LL;
	static int16_t x207 = -1;
	int32_t x208 = INT32_MIN;
	int32_t t51 = -104958275;

	t51 = ((x205==x206)<=(x207^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 0U;
	static int8_t x210 = -9;
	uint32_t x211 = UINT32_MAX;
	uint8_t x212 = 5U;
	volatile int32_t t52 = 0;

	t52 = ((x209==x210)<=(x211^x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 19293980929LLU;
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 1211648312558965LLU;
	int64_t x216 = -245LL;
	int32_t t53 = -354;

	t53 = ((x213==x214)<=(x215^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x219 = INT32_MAX;
	static int32_t x220 = INT32_MAX;
	static int32_t t54 = 106;

	t54 = ((x217==x218)<=(x219^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	static int32_t x222 = INT32_MIN;
	static uint64_t x223 = 0LLU;
	volatile int8_t x224 = 1;
	volatile int32_t t55 = -862;

	t55 = ((x221==x222)<=(x223^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MAX;
	volatile uint32_t x226 = UINT32_MAX;
	uint16_t x227 = UINT16_MAX;

	t56 = ((x225==x226)<=(x227^x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 0U;
	int8_t x230 = 2;
	int16_t x231 = -2;
	int64_t x232 = 7776055948LL;
	volatile int32_t t57 = -6351983;

	t57 = ((x229==x230)<=(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 1974U;
	int8_t x234 = -1;
	uint64_t x236 = 73615687LLU;
	static volatile int32_t t58 = -9;

	t58 = ((x233==x234)<=(x235^x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MAX;
	static int32_t t59 = -483208777;

	t59 = ((x237==x238)<=(x239^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 460733919LL;
	int64_t x242 = INT64_MIN;
	volatile uint32_t x243 = 381U;
	int8_t x244 = -1;
	static volatile int32_t t60 = 59;

	t60 = ((x241==x242)<=(x243^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x247 = INT8_MAX;
	uint32_t x248 = UINT32_MAX;

	t61 = ((x245==x246)<=(x247^x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = 9U;
	static int32_t x251 = INT32_MAX;
	static int32_t t62 = -51;

	t62 = ((x249==x250)<=(x251^x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 16154U;
	static volatile int8_t x254 = -1;
	static int16_t x255 = -1;
	int32_t x256 = -1;
	volatile int32_t t63 = -29;

	t63 = ((x253==x254)<=(x255^x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x258 = 1U;
	int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = -1756864;

	t64 = ((x257==x258)<=(x259^x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	volatile int32_t x262 = -72435844;
	volatile uint16_t x263 = 125U;
	int16_t x264 = -994;
	static volatile int32_t t65 = 1;

	t65 = ((x261==x262)<=(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 0U;
	int16_t x267 = -1;
	uint8_t x268 = 25U;
	int32_t t66 = 27630654;

	t66 = ((x265==x266)<=(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	static int8_t x270 = -1;
	volatile int64_t x271 = 91270168967271071LL;
	int32_t x272 = -1;
	int32_t t67 = -11265;

	t67 = ((x269==x270)<=(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	int32_t x274 = INT32_MIN;
	int8_t x275 = 23;
	int32_t t68 = 37;

	t68 = ((x273==x274)<=(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	volatile int64_t x278 = -200045695952912739LL;
	int8_t x279 = INT8_MAX;
	int64_t x280 = -2183040226650LL;
	volatile int32_t t69 = 1;

	t69 = ((x277==x278)<=(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x281 = 0;
	int32_t x282 = INT32_MAX;
	static int64_t x283 = INT64_MAX;
	uint16_t x284 = 22U;
	static int32_t t70 = 1;

	t70 = ((x281==x282)<=(x283^x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	int8_t x286 = INT8_MIN;
	int16_t x287 = 2504;
	volatile int64_t x288 = 192104LL;
	volatile int32_t t71 = 895031346;

	t71 = ((x285==x286)<=(x287^x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	int16_t x290 = -172;
	static uint16_t x291 = 13111U;
	int32_t t72 = 38119688;

	t72 = ((x289==x290)<=(x291^x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	int16_t x294 = INT16_MAX;
	volatile int16_t x295 = INT16_MIN;
	int32_t x296 = INT32_MAX;
	volatile int32_t t73 = -27682;

	t73 = ((x293==x294)<=(x295^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x299 = -1LL;
	uint64_t x300 = UINT64_MAX;

	t74 = ((x297==x298)<=(x299^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = 107989652;
	int32_t x303 = 9;
	int32_t t75 = -212890562;

	t75 = ((x301==x302)<=(x303^x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = 0;
	static int64_t x306 = INT64_MIN;
	int64_t x307 = -7958325524081673LL;
	volatile int16_t x308 = INT16_MAX;
	int32_t t76 = 5;

	t76 = ((x305==x306)<=(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x310 = UINT8_MAX;
	int32_t x311 = -1;
	int8_t x312 = 0;
	volatile int32_t t77 = -9;

	t77 = ((x309==x310)<=(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	volatile int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MAX;
	int32_t x316 = INT32_MAX;
	static volatile int32_t t78 = 128006354;

	t78 = ((x313==x314)<=(x315^x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	volatile uint16_t x318 = 6U;
	int32_t x319 = -1;
	uint32_t x320 = 456005996U;

	t79 = ((x317==x318)<=(x319^x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = 2271867628083LLU;
	volatile int64_t x323 = 27237384038868100LL;
	volatile uint8_t x324 = 73U;
	static int32_t t80 = -1016367253;

	t80 = ((x321==x322)<=(x323^x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = 0U;
	static int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;
	int16_t x328 = -100;
	int32_t t81 = 126162774;

	t81 = ((x325==x326)<=(x327^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = INT16_MAX;
	uint16_t x330 = 8481U;
	int8_t x331 = INT8_MIN;
	int16_t x332 = -1;
	int32_t t82 = -10976591;

	t82 = ((x329==x330)<=(x331^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -1;
	uint32_t x334 = 59034976U;

	t83 = ((x333==x334)<=(x335^x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = -1176490912352689LL;
	uint8_t x339 = UINT8_MAX;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 255003;

	t84 = ((x337==x338)<=(x339^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x343 = 0U;
	int32_t t85 = 216877544;

	t85 = ((x341==x342)<=(x343^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MIN;
	volatile int32_t x347 = -41550613;
	int16_t x348 = INT16_MIN;
	int32_t t86 = 50;

	t86 = ((x345==x346)<=(x347^x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = -1LL;
	int8_t x350 = -1;
	int8_t x351 = -1;
	uint64_t x352 = 180219094983131LLU;
	int32_t t87 = 180420;

	t87 = ((x349==x350)<=(x351^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MIN;
	int8_t x354 = INT8_MIN;
	int64_t x355 = 360788LL;
	int32_t x356 = -1;
	int32_t t88 = 14;

	t88 = ((x353==x354)<=(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	uint64_t x359 = 95730294938223LLU;
	static int64_t x360 = INT64_MIN;
	static volatile int32_t t89 = 1;

	t89 = ((x357==x358)<=(x359^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	static volatile int32_t x362 = INT32_MIN;
	static uint8_t x364 = UINT8_MAX;
	int32_t t90 = 570;

	t90 = ((x361==x362)<=(x363^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	uint16_t x367 = 396U;

	t91 = ((x365==x366)<=(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	static int8_t x370 = INT8_MIN;
	uint64_t x371 = 1355648832453827LLU;
	int16_t x372 = INT16_MIN;
	int32_t t92 = -863;

	t92 = ((x369==x370)<=(x371^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 1595U;
	uint16_t x374 = 24649U;
	uint8_t x376 = UINT8_MAX;
	static int32_t t93 = 825986435;

	t93 = ((x373==x374)<=(x375^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 1LLU;
	int16_t x379 = -37;
	int16_t x380 = 75;

	t94 = ((x377==x378)<=(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	int32_t x382 = INT32_MAX;
	static int32_t t95 = 823551278;

	t95 = ((x381==x382)<=(x383^x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x386 = -23519;
	static uint16_t x388 = 86U;
	volatile int32_t t96 = -2102349;

	t96 = ((x385==x386)<=(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -1;
	int32_t x390 = 35184113;
	uint8_t x391 = 0U;
	volatile int32_t x392 = -1;
	int32_t t97 = 107761;

	t97 = ((x389==x390)<=(x391^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = INT8_MAX;
	int32_t x394 = 1343;
	int16_t x395 = 15566;
	int32_t t98 = -81259;

	t98 = ((x393==x394)<=(x395^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = 1;
	uint16_t x399 = 139U;
	uint16_t x400 = UINT16_MAX;
	int32_t t99 = -109728;

	t99 = ((x397==x398)<=(x399^x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

