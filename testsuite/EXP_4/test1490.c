#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 1U;
int32_t t0 = -94;
uint64_t x8 = UINT64_MAX;
uint8_t x9 = 61U;
static uint16_t x12 = 14U;
int16_t x14 = INT16_MAX;
volatile int32_t t3 = 1;
int8_t x20 = INT8_MIN;
uint64_t x29 = 27690281916LLU;
static uint16_t x36 = 1003U;
volatile int8_t x39 = 1;
int64_t x43 = INT64_MAX;
int32_t t10 = -2500528;
int32_t t11 = -9388;
volatile int16_t x51 = -12;
static uint64_t x53 = 822LLU;
volatile int32_t t14 = -520810;
int32_t t15 = 27053;
static int32_t x68 = INT32_MIN;
static int64_t x74 = INT64_MIN;
int8_t x82 = -48;
int32_t t20 = 27373554;
static uint32_t x85 = UINT32_MAX;
int32_t x88 = INT32_MIN;
volatile int32_t t21 = -254;
volatile int64_t x90 = 699334128517925431LL;
volatile int32_t t22 = 280;
static int32_t t23 = 7200;
uint32_t x99 = 7732U;
int64_t x101 = -798009LL;
int16_t x102 = -1;
uint8_t x107 = 25U;
int32_t t26 = 7;
static volatile uint16_t x114 = 10820U;
int32_t x125 = INT32_MIN;
volatile uint8_t x141 = 58U;
int64_t x151 = 330110LL;
volatile uint32_t x152 = 843U;
volatile int16_t x156 = 1802;
int32_t t38 = 438762517;
static int8_t x161 = INT8_MAX;
int64_t x166 = INT64_MIN;
int8_t x168 = INT8_MIN;
int32_t t42 = 194;
int16_t x175 = INT16_MAX;
uint8_t x181 = 0U;
int16_t x185 = 7;
int32_t x191 = 178;
int32_t x195 = INT32_MAX;
volatile int16_t x196 = -1;
uint64_t x199 = 541678337981LLU;
static volatile int16_t x202 = INT16_MAX;
int32_t t51 = -26091;
volatile uint16_t x209 = UINT16_MAX;
static int8_t x211 = 10;
int16_t x214 = INT16_MIN;
int32_t x218 = 1463275;
volatile uint16_t x219 = UINT16_MAX;
int64_t x223 = INT64_MIN;
int32_t x225 = -1;
int64_t x227 = INT64_MAX;
int8_t x228 = INT8_MIN;
static volatile uint16_t x230 = UINT16_MAX;
uint8_t x246 = 117U;
volatile uint16_t x249 = 31U;
volatile uint32_t x259 = 271U;
int8_t x265 = INT8_MAX;
int32_t x266 = INT32_MIN;
volatile int32_t x275 = INT32_MIN;
volatile int32_t t68 = 144657;
static int64_t x278 = -66706LL;
int32_t x285 = INT32_MAX;
int32_t x289 = INT32_MIN;
int8_t x290 = -1;
uint8_t x296 = UINT8_MAX;
volatile int8_t x314 = 3;
static volatile int32_t t79 = 889508;
volatile uint8_t x327 = 7U;
volatile int32_t t81 = -35054;
int8_t x331 = -1;
int8_t x337 = INT8_MIN;
volatile int32_t x341 = INT32_MIN;
int32_t t85 = 133897796;
static int8_t x345 = INT8_MIN;
volatile uint16_t x350 = 1270U;
int8_t x358 = -1;
uint32_t x377 = UINT32_MAX;
static int32_t x379 = INT32_MAX;
int8_t x383 = -1;
static int32_t x394 = INT32_MIN;
static volatile uint32_t x397 = 2058173U;


void f0(void) {
	volatile int64_t x2 = -12008LL;
	uint64_t x3 = UINT64_MAX;
	int16_t x4 = INT16_MIN;

	t0 = (x1==(x2&(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int64_t x6 = -99256LL;
	int8_t x7 = INT8_MAX;
	volatile int32_t t1 = -94406;

	t1 = (x5==(x6&(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -6317186445741524LL;
	int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -3879306;

	t2 = (x9==(x10&(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	volatile int16_t x15 = INT16_MAX;
	int32_t x16 = INT32_MIN;

	t3 = (x13==(x14&(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int16_t x18 = INT16_MIN;
	static int64_t x19 = INT64_MIN;
	int32_t t4 = -3;

	t4 = (x17==(x18&(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	static int8_t x22 = INT8_MIN;
	uint8_t x23 = UINT8_MAX;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 1034124929;

	t5 = (x21==(x22&(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 8;
	int64_t x26 = INT64_MIN;
	int16_t x27 = -874;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -6387;

	t6 = (x25==(x26&(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -1513980225652267336LL;
	uint16_t x31 = UINT16_MAX;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 2090;

	t7 = (x29==(x30&(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	volatile uint32_t x34 = UINT32_MAX;
	int32_t x35 = INT32_MIN;
	volatile int32_t t8 = -7;

	t8 = (x33==(x34&(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MAX;
	int64_t x40 = INT64_MIN;
	int32_t t9 = -401720948;

	t9 = (x37==(x38&(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	volatile int16_t x42 = 293;
	uint8_t x44 = 50U;

	t10 = (x41==(x42&(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int64_t x46 = -1892LL;
	uint8_t x47 = 20U;
	uint16_t x48 = 12U;

	t11 = (x45==(x46&(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	int8_t x50 = INT8_MAX;
	volatile int64_t x52 = 3904LL;
	static volatile int32_t t12 = -116876;

	t12 = (x49==(x50&(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = 33;
	volatile int32_t x56 = -175234;
	static volatile int32_t t13 = 186945;

	t13 = (x53==(x54&(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	static uint8_t x58 = UINT8_MAX;
	static int8_t x59 = 1;
	int64_t x60 = -339616980LL;

	t14 = (x57==(x58&(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 16U;
	int8_t x62 = 2;
	volatile uint16_t x63 = UINT16_MAX;
	int64_t x64 = INT64_MAX;

	t15 = (x61==(x62&(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	int16_t x66 = INT16_MIN;
	volatile uint16_t x67 = 37U;
	static int32_t t16 = 3052062;

	t16 = (x65==(x66&(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x69 = 47892758991LLU;
	int8_t x70 = 9;
	uint16_t x71 = 2977U;
	volatile uint8_t x72 = UINT8_MAX;
	static int32_t t17 = 372;

	t17 = (x69==(x70&(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	uint8_t x75 = 37U;
	uint16_t x76 = 1219U;
	static volatile int32_t t18 = -15;

	t18 = (x73==(x74&(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 2U;
	uint64_t x78 = 753862606516948LLU;
	static uint8_t x79 = 2U;
	uint16_t x80 = 1736U;
	static int32_t t19 = 28957;

	t19 = (x77==(x78&(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int64_t x83 = -1LL;
	uint16_t x84 = UINT16_MAX;

	t20 = (x81==(x82&(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -619;
	uint64_t x87 = UINT64_MAX;

	t21 = (x85==(x86&(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	uint32_t x91 = UINT32_MAX;
	static uint32_t x92 = 3463078U;

	t22 = (x89==(x90&(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	uint16_t x94 = UINT16_MAX;
	static volatile int16_t x95 = INT16_MAX;
	int16_t x96 = 3233;

	t23 = (x93==(x94&(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 0;
	int16_t x98 = INT16_MAX;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -3;

	t24 = (x97==(x98&(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x103 = INT32_MAX;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t25 = 342;

	t25 = (x101==(x102&(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int16_t x106 = -1;
	int8_t x108 = INT8_MIN;

	t26 = (x105==(x106&(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MIN;
	int64_t x111 = 14878604236LL;
	int64_t x112 = -1LL;
	int32_t t27 = 75734;

	t27 = (x109==(x110&(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	int8_t x115 = INT8_MIN;
	int8_t x116 = -42;
	int32_t t28 = 108;

	t28 = (x113==(x114&(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 6;
	int64_t x118 = INT64_MIN;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = INT32_MAX;
	int32_t t29 = 479;

	t29 = (x117==(x118&(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -126;
	uint64_t x122 = UINT64_MAX;
	static int32_t x123 = INT32_MIN;
	int64_t x124 = 106974763LL;
	int32_t t30 = 57123560;

	t30 = (x121==(x122&(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = -179LL;
	static int16_t x127 = INT16_MAX;
	int64_t x128 = -853287230231LL;
	static volatile int32_t t31 = -3;

	t31 = (x125==(x126&(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	static int8_t x130 = -1;
	static uint16_t x131 = UINT16_MAX;
	uint64_t x132 = UINT64_MAX;
	static volatile int32_t t32 = 25623250;

	t32 = (x129==(x130&(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static volatile int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	uint8_t x136 = 6U;
	int32_t t33 = 13;

	t33 = (x133==(x134&(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	volatile uint16_t x138 = 1779U;
	int32_t x139 = INT32_MAX;
	int16_t x140 = 1027;
	volatile int32_t t34 = -23312437;

	t34 = (x137==(x138&(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	volatile int32_t x144 = INT32_MIN;
	volatile int32_t t35 = 689;

	t35 = (x141==(x142&(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 249;
	int8_t x146 = INT8_MAX;
	int16_t x147 = INT16_MIN;
	static int8_t x148 = INT8_MIN;
	static volatile int32_t t36 = 33419948;

	t36 = (x145==(x146&(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = 1273064306275385LL;
	int8_t x150 = 16;
	static volatile int32_t t37 = 100099;

	t37 = (x149==(x150&(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	static int32_t x154 = INT32_MIN;
	volatile uint64_t x155 = 32802742339186608LLU;

	t38 = (x153==(x154&(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -1;
	int8_t x158 = INT8_MIN;
	static int8_t x159 = -1;
	int64_t x160 = 14307649369LL;
	volatile int32_t t39 = 226;

	t39 = (x157==(x158&(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x162 = 602U;
	int32_t x163 = 3831983;
	uint64_t x164 = 61434778990362LLU;
	static int32_t t40 = 1292102;

	t40 = (x161==(x162&(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 2;
	uint16_t x167 = 15U;
	volatile int32_t t41 = 23997104;

	t41 = (x165==(x166&(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 13;
	volatile int32_t x170 = -1;
	int32_t x171 = 6308;
	int16_t x172 = INT16_MIN;

	t42 = (x169==(x170&(x171<x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MAX;
	int16_t x174 = INT16_MAX;
	volatile uint64_t x176 = 3195LLU;
	int32_t t43 = -1;

	t43 = (x173==(x174&(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MIN;
	static int8_t x179 = INT8_MAX;
	volatile uint32_t x180 = 659U;
	volatile int32_t t44 = 18917491;

	t44 = (x177==(x178&(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = INT32_MIN;
	static int16_t x183 = -1;
	int64_t x184 = -3LL;
	static int32_t t45 = 49066804;

	t45 = (x181==(x182&(x183<x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = 4048LL;
	uint64_t x187 = 47003LLU;
	int64_t x188 = INT64_MAX;
	int32_t t46 = -1003092;

	t46 = (x185==(x186&(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MAX;
	volatile uint64_t x192 = 188LLU;
	int32_t t47 = -115;

	t47 = (x189==(x190&(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 25332U;
	volatile uint8_t x194 = UINT8_MAX;
	volatile int32_t t48 = 74448482;

	t48 = (x193==(x194&(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	uint8_t x198 = 3U;
	int64_t x200 = INT64_MAX;
	int32_t t49 = -2517116;

	t49 = (x197==(x198&(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	uint16_t x203 = 74U;
	volatile int32_t x204 = -111290423;
	int32_t t50 = 1564;

	t50 = (x201==(x202&(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = 6;
	int64_t x206 = INT64_MIN;
	int8_t x207 = INT8_MIN;
	int64_t x208 = -1LL;

	t51 = (x205==(x206&(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MIN;
	int16_t x212 = INT16_MIN;
	int32_t t52 = -612299923;

	t52 = (x209==(x210&(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MIN;
	volatile uint16_t x215 = 38U;
	int32_t x216 = INT32_MAX;
	volatile int32_t t53 = 892884;

	t53 = (x213==(x214&(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	static volatile int64_t x220 = INT64_MIN;
	volatile int32_t t54 = 5503468;

	t54 = (x217==(x218&(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 13121U;
	static int64_t x222 = -62812211546986LL;
	int8_t x224 = INT8_MAX;
	static int32_t t55 = -390;

	t55 = (x221==(x222&(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x226 = INT64_MAX;
	int32_t t56 = 452888;

	t56 = (x225==(x226&(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	int16_t x231 = -1;
	int8_t x232 = INT8_MIN;
	int32_t t57 = -18818;

	t57 = (x229==(x230&(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	uint32_t x234 = 41U;
	uint32_t x235 = UINT32_MAX;
	static int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 59845;

	t58 = (x233==(x234&(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	volatile uint16_t x238 = UINT16_MAX;
	uint16_t x239 = 1U;
	int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 106789311;

	t59 = (x237==(x238&(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MAX;
	uint32_t x242 = 35296081U;
	int32_t x243 = -1921467;
	uint64_t x244 = 3430LLU;
	static volatile int32_t t60 = -37648;

	t60 = (x241==(x242&(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int8_t x247 = -1;
	static volatile int16_t x248 = INT16_MAX;
	volatile int32_t t61 = -30140;

	t61 = (x245==(x246&(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x250 = INT32_MIN;
	static int16_t x251 = -605;
	int16_t x252 = INT16_MIN;
	int32_t t62 = 1423038;

	t62 = (x249==(x250&(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -1LL;
	int64_t x254 = INT64_MIN;
	uint16_t x255 = 3U;
	static uint16_t x256 = 260U;
	volatile int32_t t63 = 2;

	t63 = (x253==(x254&(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 12;
	int16_t x258 = -2;
	static int64_t x260 = INT64_MAX;
	int32_t t64 = 20925753;

	t64 = (x257==(x258&(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 315230U;
	int64_t x262 = INT64_MIN;
	volatile int8_t x263 = INT8_MAX;
	volatile int16_t x264 = -924;
	volatile int32_t t65 = 3889;

	t65 = (x261==(x262&(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x267 = INT32_MIN;
	static uint16_t x268 = 895U;
	int32_t t66 = 324126;

	t66 = (x265==(x266&(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = -669308;
	int8_t x270 = INT8_MIN;
	int8_t x271 = -5;
	volatile int8_t x272 = -1;
	int32_t t67 = 73125459;

	t67 = (x269==(x270&(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 31U;
	int16_t x274 = INT16_MAX;
	int16_t x276 = INT16_MIN;

	t68 = (x273==(x274&(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	uint32_t x279 = 22U;
	static uint16_t x280 = UINT16_MAX;
	int32_t t69 = -312399156;

	t69 = (x277==(x278&(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	uint64_t x282 = UINT64_MAX;
	volatile int16_t x283 = -1;
	static int16_t x284 = -1;
	int32_t t70 = 0;

	t70 = (x281==(x282&(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = 62U;
	int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MIN;
	volatile int32_t t71 = 21;

	t71 = (x285==(x286&(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x291 = 4U;
	static volatile int8_t x292 = INT8_MAX;
	volatile int32_t t72 = -91046251;

	t72 = (x289==(x290&(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = 733;
	static int16_t x294 = INT16_MIN;
	int8_t x295 = 3;
	int32_t t73 = 0;

	t73 = (x293==(x294&(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x297 = UINT32_MAX;
	int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	int64_t x300 = -1LL;
	static int32_t t74 = -56;

	t74 = (x297==(x298&(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	int32_t x302 = INT32_MAX;
	uint32_t x303 = 341164U;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t75 = 374;

	t75 = (x301==(x302&(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 229U;
	static uint16_t x306 = 201U;
	uint32_t x307 = 7108073U;
	int64_t x308 = INT64_MIN;
	int32_t t76 = 0;

	t76 = (x305==(x306&(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = 136;
	int16_t x310 = INT16_MIN;
	int16_t x311 = -2728;
	int32_t x312 = INT32_MIN;
	static int32_t t77 = 5322;

	t77 = (x309==(x310&(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = -1LL;
	static uint32_t x315 = 329313U;
	static int16_t x316 = -1;
	volatile int32_t t78 = 1252662;

	t78 = (x313==(x314&(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	static int8_t x318 = INT8_MIN;
	uint16_t x319 = 3774U;
	uint64_t x320 = 858618LLU;

	t79 = (x317==(x318&(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x322 = UINT32_MAX;
	int16_t x323 = -1;
	int8_t x324 = 1;
	int32_t t80 = 501875090;

	t80 = (x321==(x322&(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = UINT32_MAX;
	uint32_t x326 = 4434U;
	static int32_t x328 = 1293;

	t81 = (x325==(x326&(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	uint64_t x330 = 241876LLU;
	volatile uint16_t x332 = UINT16_MAX;
	int32_t t82 = -66778;

	t82 = (x329==(x330&(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	uint16_t x334 = 466U;
	uint64_t x335 = 80267391LLU;
	uint64_t x336 = UINT64_MAX;
	volatile int32_t t83 = 10064157;

	t83 = (x333==(x334&(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = INT16_MAX;
	static volatile uint8_t x339 = 4U;
	int8_t x340 = INT8_MAX;
	int32_t t84 = 19390;

	t84 = (x337==(x338&(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MAX;
	uint8_t x343 = 12U;
	int32_t x344 = -1;

	t85 = (x341==(x342&(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = -7;
	volatile int8_t x347 = INT8_MIN;
	volatile int8_t x348 = -5;
	volatile int32_t t86 = 4972385;

	t86 = (x345==(x346&(x347<x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 1458U;
	volatile int8_t x351 = -1;
	int16_t x352 = INT16_MIN;
	int32_t t87 = -22745;

	t87 = (x349==(x350&(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -12601;
	int64_t x354 = -332LL;
	volatile int64_t x355 = -1LL;
	static int16_t x356 = -3;
	int32_t t88 = -1;

	t88 = (x353==(x354&(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 165U;
	volatile uint64_t x359 = 7535557404271761LLU;
	int64_t x360 = INT64_MIN;
	static int32_t t89 = -34;

	t89 = (x357==(x358&(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 2024U;
	int64_t x362 = 36168082355LL;
	int8_t x363 = INT8_MIN;
	int64_t x364 = INT64_MIN;
	int32_t t90 = -359639788;

	t90 = (x361==(x362&(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	uint16_t x366 = 922U;
	int32_t x367 = 109169;
	int16_t x368 = INT16_MIN;
	int32_t t91 = -27024568;

	t91 = (x365==(x366&(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MIN;
	int64_t x370 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	static int8_t x372 = INT8_MIN;
	volatile int32_t t92 = 7507001;

	t92 = (x369==(x370&(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x373 = UINT16_MAX;
	int8_t x374 = -9;
	int32_t x375 = INT32_MAX;
	int16_t x376 = INT16_MAX;
	volatile int32_t t93 = 3852901;

	t93 = (x373==(x374&(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x378 = UINT8_MAX;
	static uint64_t x380 = UINT64_MAX;
	volatile int32_t t94 = 561037;

	t94 = (x377==(x378&(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	int8_t x382 = INT8_MAX;
	int64_t x384 = 78881267467745325LL;
	int32_t t95 = 0;

	t95 = (x381==(x382&(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x386 = INT8_MIN;
	uint16_t x387 = 7083U;
	int64_t x388 = INT64_MIN;
	int32_t t96 = 4993936;

	t96 = (x385==(x386&(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x389 = 27U;
	static uint16_t x390 = UINT16_MAX;
	volatile int16_t x391 = INT16_MIN;
	volatile int16_t x392 = -1;
	volatile int32_t t97 = -4100069;

	t97 = (x389==(x390&(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 15143518104848LLU;
	static int32_t x395 = INT32_MIN;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t98 = 1428;

	t98 = (x393==(x394&(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t99 = -1;

	t99 = (x397==(x398&(x399<x400)));

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

