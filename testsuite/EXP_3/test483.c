#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MAX;
uint32_t t0 = 1889U;
int32_t x16 = -396733;
volatile uint64_t t1 = 4LLU;
int32_t x18 = 564;
static uint16_t x27 = UINT16_MAX;
uint8_t x30 = 0U;
static uint32_t x39 = UINT32_MAX;
static int16_t x40 = 37;
volatile int64_t x42 = INT64_MIN;
static int8_t x46 = -10;
uint64_t x52 = 5791LLU;
int16_t x60 = -1;
static int8_t x63 = 0;
int8_t x79 = INT8_MIN;
int8_t x80 = -7;
volatile int32_t t18 = -120421477;
int8_t x89 = -1;
int16_t x96 = INT16_MIN;
int8_t x100 = INT8_MIN;
static volatile uint8_t x103 = 122U;
volatile int8_t x109 = 0;
int32_t x110 = -1;
int16_t x122 = INT16_MAX;
static uint64_t x135 = UINT64_MAX;
static uint8_t x136 = 0U;
volatile uint64_t t28 = 819094205971108LLU;
uint16_t x139 = 14U;
int64_t x142 = INT64_MIN;
int64_t x154 = 277403LL;
int64_t x155 = 15124105405LL;
volatile int32_t x158 = INT32_MIN;
uint64_t x160 = 11467477982280945LLU;
uint64_t x168 = 334051620130530354LLU;
int64_t x169 = 15701901453122LL;
static int8_t x170 = INT8_MIN;
uint8_t x171 = UINT8_MAX;
uint32_t x177 = 17779U;
int8_t x180 = INT8_MIN;
uint16_t x184 = 34U;
uint64_t x187 = 52244LLU;
uint16_t x191 = 0U;
int32_t x197 = 5854;
uint64_t x199 = UINT64_MAX;
int64_t x200 = INT64_MIN;
int32_t x204 = INT32_MIN;
uint64_t t42 = 128779126LLU;
int16_t x207 = INT16_MIN;
int64_t t44 = 243573LL;
int8_t x213 = 5;
static int64_t x216 = 1738883LL;
uint32_t x220 = 118042081U;
static volatile int32_t x221 = INT32_MIN;
static volatile int32_t x227 = INT32_MIN;
volatile uint32_t x233 = 35U;
static int64_t x235 = INT64_MIN;
volatile int64_t t52 = 28004622005876LL;
uint8_t x250 = 2U;
int8_t x251 = INT8_MIN;
volatile int32_t t55 = -41403894;
volatile int32_t x262 = INT32_MIN;
static int8_t x269 = INT8_MIN;
uint64_t t58 = 5579498695217525LLU;
int64_t x296 = -3LL;
int16_t x298 = 4722;
volatile uint32_t x305 = 353U;
volatile int16_t x307 = INT16_MIN;
static volatile uint32_t t62 = 451703U;
int8_t x312 = -1;
int8_t x325 = INT8_MIN;
int16_t x326 = INT16_MIN;
static uint64_t x328 = 32526091LLU;
int16_t x342 = INT16_MAX;
static int32_t t70 = 17718125;
int16_t x346 = -1;
int8_t x351 = INT8_MIN;
int32_t x354 = 72944150;
int8_t x359 = INT8_MAX;
volatile uint16_t x368 = UINT16_MAX;
volatile int8_t x369 = INT8_MIN;
int16_t x370 = INT16_MAX;
static uint64_t t77 = 142798316LLU;
int64_t t78 = 61202040993059LL;
static volatile uint16_t x386 = 2U;
uint16_t x388 = UINT16_MAX;
static int16_t x404 = -3;
int32_t t82 = -9222;
volatile int64_t t84 = -114409701850LL;
static uint64_t x459 = 506187LLU;
int8_t x470 = 23;
static int16_t x471 = INT16_MIN;
uint8_t x491 = 118U;
uint32_t x494 = 1510356769U;
volatile int32_t x513 = INT32_MAX;
static int8_t x514 = -1;
volatile int8_t x515 = INT8_MIN;
uint64_t x517 = UINT64_MAX;
volatile uint16_t x518 = UINT16_MAX;
int64_t x526 = INT64_MIN;
volatile uint32_t x531 = UINT32_MAX;
uint32_t t99 = 73873309U;


void f0(void) {
	static uint16_t x1 = 9457U;
	volatile uint32_t x2 = UINT32_MAX;
	uint16_t x3 = UINT16_MAX;

	t0 = ((x1|x2)-(x3*x4));

	if (t0 != 4286644350U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MAX;
	static uint64_t x14 = UINT64_MAX;
	static uint8_t x15 = 13U;

	t1 = ((x13|x14)-(x15*x16));

	if (t1 != 5157528LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x17 = 68717424207646901LLU;
	volatile int16_t x19 = 13;
	static int16_t x20 = INT16_MAX;
	static volatile uint64_t t2 = 1295LLU;

	t2 = ((x17|x18)-(x19*x20));

	if (t2 != 68717424207221442LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = 2160136300207809LLU;
	static int16_t x26 = INT16_MAX;
	int64_t x28 = -1LL;
	static uint64_t t3 = 429LLU;

	t3 = ((x25|x26)-(x27*x28));

	if (t3 != 2160136300298238LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x29 = INT16_MIN;
	int8_t x31 = -1;
	volatile uint32_t x32 = 61948U;
	volatile uint32_t t4 = 1981U;

	t4 = ((x29|x30)-(x31*x32));

	if (t4 != 29180U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = UINT8_MAX;
	int16_t x34 = INT16_MAX;
	int32_t x35 = -167003959;
	int8_t x36 = -1;
	static int32_t t5 = 429;

	t5 = ((x33|x34)-(x35*x36));

	if (t5 != -166971192) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x37 = 112LLU;
	int32_t x38 = -1;
	uint64_t t6 = 1836185LLU;

	t6 = ((x37|x38)-(x39*x40));

	if (t6 != 18446744069414584356LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = 448U;
	volatile uint8_t x43 = 34U;
	int16_t x44 = INT16_MIN;
	volatile int64_t t7 = -2425079LL;

	t7 = ((x41|x42)-(x43*x44));

	if (t7 != -9223372036853661248LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = INT32_MIN;
	volatile int16_t x47 = 0;
	int64_t x48 = INT64_MIN;
	volatile int64_t t8 = -47963709204551572LL;

	t8 = ((x45|x46)-(x47*x48));

	if (t8 != -10LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x49 = INT8_MAX;
	int8_t x50 = 23;
	uint32_t x51 = 8U;
	volatile uint64_t t9 = 39153143LLU;

	t9 = ((x49|x50)-(x51*x52));

	if (t9 != 18446744073709505415LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x53 = 19U;
	int16_t x54 = INT16_MAX;
	static uint64_t x55 = 92514135016107408LLU;
	int64_t x56 = -1LL;
	uint64_t t10 = 2223855481830774726LLU;

	t10 = ((x53|x54)-(x55*x56));

	if (t10 != 92514135016140175LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = -1;
	int64_t x58 = INT64_MIN;
	int16_t x59 = -2;
	volatile int64_t t11 = -4235313262LL;

	t11 = ((x57|x58)-(x59*x60));

	if (t11 != -3LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -334430241LL;
	int64_t x62 = 0LL;
	static volatile int8_t x64 = INT8_MAX;
	int64_t t12 = -1LL;

	t12 = ((x61|x62)-(x63*x64));

	if (t12 != -334430241LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = 134;
	int64_t x66 = INT64_MAX;
	uint16_t x67 = 1U;
	volatile int16_t x68 = INT16_MAX;
	static int64_t t13 = 1084869252778LL;

	t13 = ((x65|x66)-(x67*x68));

	if (t13 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = UINT8_MAX;
	int64_t x70 = INT64_MIN;
	int16_t x71 = INT16_MIN;
	uint8_t x72 = 105U;
	int64_t t14 = 497920439LL;

	t14 = ((x69|x70)-(x71*x72));

	if (t14 != -9223372036851334913LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x73 = UINT8_MAX;
	int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MAX;
	uint8_t x76 = UINT8_MAX;
	int64_t t15 = -13057LL;

	t15 = ((x73|x74)-(x75*x76));

	if (t15 != 9223372036846420222LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 58594181883LLU;
	uint32_t x78 = UINT32_MAX;
	volatile uint64_t t16 = 77380904244LLU;

	t16 = ((x77|x78)-(x79*x80));

	if (t16 != 60129541247LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = UINT16_MAX;
	volatile uint16_t x82 = UINT16_MAX;
	volatile int64_t x83 = 49LL;
	int8_t x84 = INT8_MAX;
	int64_t t17 = 10806111358LL;

	t17 = ((x81|x82)-(x83*x84));

	if (t17 != 59312LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MAX;
	volatile int8_t x87 = -1;
	int8_t x88 = INT8_MIN;

	t18 = ((x85|x86)-(x87*x88));

	if (t18 != -129) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = -1LL;
	volatile uint16_t x92 = 0U;
	int64_t t19 = 314LL;

	t19 = ((x89|x90)-(x91*x92));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MIN;
	uint16_t x94 = 1646U;
	volatile uint16_t x95 = UINT16_MAX;
	volatile int32_t t20 = -236781940;

	t20 = ((x93|x94)-(x95*x96));

	if (t20 != 2147419758) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = -1;
	int32_t x98 = 69554668;
	volatile uint32_t x99 = 900U;
	uint32_t t21 = 2U;

	t21 = ((x97|x98)-(x99*x100));

	if (t21 != 115199U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = UINT32_MAX;
	int8_t x102 = INT8_MAX;
	static int8_t x104 = -1;
	volatile uint32_t t22 = 49U;

	t22 = ((x101|x102)-(x103*x104));

	if (t22 != 121U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x111 = UINT8_MAX;
	static int16_t x112 = 673;
	volatile int32_t t23 = 490;

	t23 = ((x109|x110)-(x111*x112));

	if (t23 != -171616) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x113 = INT16_MIN;
	volatile uint32_t x114 = UINT32_MAX;
	int16_t x115 = INT16_MIN;
	int64_t x116 = 6185521LL;
	int64_t t24 = -2590853611680LL;

	t24 = ((x113|x114)-(x115*x116));

	if (t24 != 206982119423LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 73LLU;
	static int64_t x123 = 33996517LL;
	volatile int8_t x124 = INT8_MAX;
	volatile uint64_t t25 = 22027LLU;

	t25 = ((x121|x122)-(x123*x124));

	if (t25 != 18446744069392026724LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x125 = INT32_MIN;
	int32_t x126 = 13255;
	volatile int16_t x127 = INT16_MIN;
	uint32_t x128 = 330373055U;
	uint32_t t26 = 28840565U;

	t26 = ((x125|x126)-(x127*x128));

	if (t26 != 199209927U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = 11575715;
	int16_t x130 = 1;
	uint64_t x131 = UINT64_MAX;
	int64_t x132 = -1LL;
	volatile uint64_t t27 = 215797477069LLU;

	t27 = ((x129|x130)-(x131*x132));

	if (t27 != 11575714LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = 9177440817426422LLU;
	static uint16_t x134 = UINT16_MAX;

	t28 = ((x133|x134)-(x135*x136));

	if (t28 != 9177440817446911LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = -240;
	static int16_t x138 = INT16_MAX;
	int16_t x140 = -3650;
	volatile int32_t t29 = -52870;

	t29 = ((x137|x138)-(x139*x140));

	if (t29 != 51099) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = INT32_MIN;
	int8_t x143 = -1;
	int16_t x144 = 34;
	int64_t t30 = 64027865138155LL;

	t30 = ((x141|x142)-(x143*x144));

	if (t30 != -2147483614LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x145 = 517LLU;
	volatile uint8_t x146 = 61U;
	static int64_t x147 = 11913223LL;
	static int16_t x148 = -2;
	volatile uint64_t t31 = 14171119742703906LLU;

	t31 = ((x145|x146)-(x147*x148));

	if (t31 != 23827019LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = -131;
	volatile int16_t x151 = -1;
	int8_t x152 = -1;
	volatile int32_t t32 = -13587443;

	t32 = ((x149|x150)-(x151*x152));

	if (t32 != -132) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = -541771121LL;
	static int8_t x156 = INT8_MIN;
	int64_t t33 = -40LL;

	t33 = ((x153|x154)-(x155*x156));

	if (t33 != 1935343720991LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x157 = -49;
	int8_t x159 = 10;
	uint64_t t34 = 2142013654955502LLU;

	t34 = ((x157|x158)-(x159*x160));

	if (t34 != 18332069293886742117LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = UINT8_MAX;
	int32_t x166 = 1;
	uint32_t x167 = UINT32_MAX;
	static volatile uint64_t t35 = 181732704LLU;

	t35 = ((x165|x166)-(x167*x168));

	if (t35 != 5340325758739293489LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x172 = UINT32_MAX;
	int64_t t36 = -1573LL;

	t36 = ((x169|x170)-(x171*x172));

	if (t36 != -4294967103LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x178 = 1394646564527LLU;
	uint8_t x179 = UINT8_MAX;
	uint64_t t37 = 79385321782LLU;

	t37 = ((x177|x178)-(x179*x180));

	if (t37 != 1394646613887LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x181 = 57767U;
	int8_t x182 = INT8_MIN;
	volatile uint8_t x183 = 3U;
	uint32_t t38 = 3610067U;

	t38 = ((x181|x182)-(x183*x184));

	if (t38 != 4294967105U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = 268;
	volatile int8_t x186 = 1;
	int16_t x188 = -1;
	static uint64_t t39 = 15656051658676108LLU;

	t39 = ((x185|x186)-(x187*x188));

	if (t39 != 52513LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = 12638;
	static uint8_t x190 = 1U;
	uint32_t x192 = 623434U;
	uint32_t t40 = 260171U;

	t40 = ((x189|x190)-(x191*x192));

	if (t40 != 12639U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x198 = INT8_MAX;
	static uint64_t t41 = 63485LLU;

	t41 = ((x197|x198)-(x199*x200));

	if (t41 != 9223372036854781695LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = INT8_MAX;
	int32_t x202 = INT32_MAX;
	uint64_t x203 = 18841770LLU;

	t42 = ((x201|x202)-(x203*x204));

	if (t42 != 40462395121860607LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x205 = 272U;
	volatile uint16_t x206 = 3U;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t43 = 2934LLU;

	t43 = ((x205|x206)-(x207*x208));

	if (t43 != 18446744073709519123LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x209 = -1LL;
	int64_t x210 = INT64_MAX;
	int16_t x211 = INT16_MIN;
	static int16_t x212 = -1;

	t44 = ((x209|x210)-(x211*x212));

	if (t44 != -32769LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x214 = -1;
	uint8_t x215 = 41U;
	volatile int64_t t45 = 24154304407578LL;

	t45 = ((x213|x214)-(x215*x216));

	if (t45 != -71294204LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x217 = -74432733;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MAX;
	volatile uint32_t t46 = 0U;

	t46 = ((x217|x218)-(x219*x220));

	if (t46 != 2188524804U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x222 = -35525;
	uint8_t x223 = 5U;
	int16_t x224 = -1;
	volatile int32_t t47 = -125;

	t47 = ((x221|x222)-(x223*x224));

	if (t47 != -35520) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = INT32_MIN;
	volatile int64_t x226 = 477LL;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t48 = 7603LLU;

	t48 = ((x225|x226)-(x227*x228));

	if (t48 != 18446744069414584797LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = -1LL;
	int16_t x230 = INT16_MAX;
	int16_t x231 = INT16_MAX;
	uint8_t x232 = UINT8_MAX;
	volatile int64_t t49 = -51522378789LL;

	t49 = ((x229|x230)-(x231*x232));

	if (t49 != -8355586LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x234 = INT32_MIN;
	volatile int16_t x236 = 0;
	int64_t t50 = 786317LL;

	t50 = ((x233|x234)-(x235*x236));

	if (t50 != 2147483683LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x237 = 2765663U;
	uint64_t x238 = 28215703056LLU;
	uint64_t x239 = 94LLU;
	int32_t x240 = -1806778;
	volatile uint64_t t51 = 16754926103069011LLU;

	t51 = ((x237|x238)-(x239*x240));

	if (t51 != 28387768747LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x241 = -115;
	int64_t x242 = INT64_MIN;
	static int8_t x243 = INT8_MIN;
	uint32_t x244 = UINT32_MAX;

	t52 = ((x241|x242)-(x243*x244));

	if (t52 != -243LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = INT8_MAX;
	int16_t x252 = -481;
	static int32_t t53 = 109647;

	t53 = ((x249|x250)-(x251*x252));

	if (t53 != -61441) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x253 = 22U;
	int64_t x254 = INT64_MAX;
	int16_t x255 = -1;
	int8_t x256 = -1;
	volatile int64_t t54 = 26638422LL;

	t54 = ((x253|x254)-(x255*x256));

	if (t54 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = INT16_MAX;
	volatile uint8_t x258 = 1U;
	int8_t x259 = INT8_MIN;
	int8_t x260 = -3;

	t55 = ((x257|x258)-(x259*x260));

	if (t55 != 32383) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x261 = UINT32_MAX;
	uint32_t x263 = 10309434U;
	volatile int8_t x264 = -1;
	volatile uint32_t t56 = 1492548U;

	t56 = ((x261|x262)-(x263*x264));

	if (t56 != 10309433U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x270 = INT64_MAX;
	int8_t x271 = 0;
	volatile int8_t x272 = 6;
	volatile int64_t t57 = 27175122360441372LL;

	t57 = ((x269|x270)-(x271*x272));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x281 = -1;
	int64_t x282 = -1LL;
	uint64_t x283 = 847365449LLU;
	int16_t x284 = INT16_MIN;

	t58 = ((x281|x282)-(x283*x284));

	if (t58 != 27766471032831LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = INT8_MIN;
	volatile uint16_t x286 = UINT16_MAX;
	static int64_t x287 = -1LL;
	int8_t x288 = -7;
	volatile int64_t t59 = -11353524798557LL;

	t59 = ((x285|x286)-(x287*x288));

	if (t59 != -8LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x293 = UINT32_MAX;
	int32_t x294 = -38;
	uint16_t x295 = 0U;
	volatile int64_t t60 = 14079LL;

	t60 = ((x293|x294)-(x295*x296));

	if (t60 != 4294967295LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x297 = UINT16_MAX;
	static int32_t x299 = -1;
	static uint64_t x300 = 31902093583LLU;
	volatile uint64_t t61 = 53LLU;

	t61 = ((x297|x298)-(x299*x300));

	if (t61 != 31902159118LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x306 = 0;
	int8_t x308 = INT8_MIN;

	t62 = ((x305|x306)-(x307*x308));

	if (t62 != 4290773345U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x309 = -2015018;
	int32_t x310 = INT32_MIN;
	static int16_t x311 = INT16_MIN;
	static int32_t t63 = 800290603;

	t63 = ((x309|x310)-(x311*x312));

	if (t63 != -2047786) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x313 = 313U;
	static volatile uint64_t x314 = 1955294LLU;
	int8_t x315 = INT8_MAX;
	int16_t x316 = -1;
	volatile uint64_t t64 = 4024434406LLU;

	t64 = ((x313|x314)-(x315*x316));

	if (t64 != 1955454LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = INT32_MAX;
	int64_t x318 = 10145994606043475LL;
	int8_t x319 = INT8_MIN;
	uint64_t x320 = 16445LLU;
	volatile uint64_t t65 = 12169844497175LLU;

	t65 = ((x317|x318)-(x319*x320));

	if (t65 != 10145994802994815LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x321 = INT16_MIN;
	int64_t x322 = -1166LL;
	uint32_t x323 = UINT32_MAX;
	volatile uint16_t x324 = 4818U;
	static volatile int64_t t66 = 4067060LL;

	t66 = ((x321|x322)-(x323*x324));

	if (t66 != -4294963644LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x327 = INT8_MAX;
	static volatile uint64_t t67 = 3790456812754416657LLU;

	t67 = ((x325|x326)-(x327*x328));

	if (t67 != 18446744069578737931LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x329 = 11242U;
	int16_t x330 = INT16_MIN;
	uint64_t x331 = UINT64_MAX;
	int16_t x332 = -7904;
	uint64_t t68 = 196326929LLU;

	t68 = ((x329|x330)-(x331*x332));

	if (t68 != 18446744073709522186LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x333 = -1;
	uint8_t x334 = 0U;
	volatile int16_t x335 = INT16_MIN;
	int16_t x336 = INT16_MIN;
	int32_t t69 = -4035;

	t69 = ((x333|x334)-(x335*x336));

	if (t69 != -1073741825) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x341 = INT16_MIN;
	static volatile uint16_t x343 = 17666U;
	int16_t x344 = 0;

	t70 = ((x341|x342)-(x343*x344));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x345 = 3;
	static uint16_t x347 = 62U;
	int64_t x348 = 281468003497020LL;
	int64_t t71 = 25765367LL;

	t71 = ((x345|x346)-(x347*x348));

	if (t71 != -17451016216815241LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x349 = INT64_MIN;
	int16_t x350 = -1;
	int8_t x352 = -1;
	volatile int64_t t72 = 41343252LL;

	t72 = ((x349|x350)-(x351*x352));

	if (t72 != -129LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x353 = INT64_MAX;
	volatile uint16_t x355 = 2342U;
	uint8_t x356 = 27U;
	int64_t t73 = -4255210LL;

	t73 = ((x353|x354)-(x355*x356));

	if (t73 != 9223372036854712573LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x357 = INT8_MIN;
	static uint16_t x358 = UINT16_MAX;
	static uint32_t x360 = 28960316U;
	volatile uint32_t t74 = 8U;

	t74 = ((x357|x358)-(x359*x360));

	if (t74 != 617007163U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x365 = -1;
	int32_t x366 = -119;
	static int16_t x367 = INT16_MAX;
	int32_t t75 = 377797;

	t75 = ((x365|x366)-(x367*x368));

	if (t75 != -2147385346) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x371 = 126;
	static uint16_t x372 = 57U;
	volatile int32_t t76 = -82;

	t76 = ((x369|x370)-(x371*x372));

	if (t76 != -7183) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x377 = UINT64_MAX;
	uint16_t x378 = 109U;
	uint8_t x379 = 31U;
	int64_t x380 = 30LL;

	t77 = ((x377|x378)-(x379*x380));

	if (t77 != 18446744073709550685LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x381 = -41735042468568LL;
	int8_t x382 = INT8_MAX;
	uint16_t x383 = 40U;
	static int8_t x384 = -1;

	t78 = ((x381|x382)-(x383*x384));

	if (t78 != -41735042468441LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x385 = UINT8_MAX;
	int8_t x387 = INT8_MIN;
	volatile int32_t t79 = 12956;

	t79 = ((x385|x386)-(x387*x388));

	if (t79 != 8388735) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x393 = INT64_MIN;
	static int64_t x394 = INT64_MIN;
	uint64_t x395 = 578619569598LLU;
	static int16_t x396 = INT16_MIN;
	static uint64_t t80 = 37273089LLU;

	t80 = ((x393|x394)-(x395*x396));

	if (t80 != 9242332242911363072LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x397 = INT8_MIN;
	static volatile uint64_t x398 = 230096LLU;
	int8_t x399 = INT8_MIN;
	int8_t x400 = -3;
	volatile uint64_t t81 = 3LLU;

	t81 = ((x397|x398)-(x399*x400));

	if (t81 != 18446744073709551184LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x401 = 9U;
	int8_t x402 = INT8_MAX;
	int8_t x403 = INT8_MAX;

	t82 = ((x401|x402)-(x403*x404));

	if (t82 != 508) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x409 = -3732;
	static volatile int8_t x410 = -1;
	volatile int16_t x411 = INT16_MIN;
	int16_t x412 = INT16_MIN;
	volatile int32_t t83 = -1622109;

	t83 = ((x409|x410)-(x411*x412));

	if (t83 != -1073741825) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x417 = 2;
	int8_t x418 = INT8_MAX;
	static int16_t x419 = 1850;
	int64_t x420 = -1LL;

	t84 = ((x417|x418)-(x419*x420));

	if (t84 != 1977LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x429 = -1;
	int32_t x430 = -1;
	volatile int16_t x431 = INT16_MIN;
	uint8_t x432 = 20U;
	int32_t t85 = -3732;

	t85 = ((x429|x430)-(x431*x432));

	if (t85 != 655359) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x433 = 721LL;
	int16_t x434 = -1;
	volatile int32_t x435 = -652899525;
	int64_t x436 = -933LL;
	int64_t t86 = -1899159600LL;

	t86 = ((x433|x434)-(x435*x436));

	if (t86 != -609155256826LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x457 = -13536121LL;
	volatile int64_t x458 = INT64_MIN;
	uint32_t x460 = 2757972U;
	volatile uint64_t t87 = 122673429928263LLU;

	t87 = ((x457|x458)-(x459*x460));

	if (t87 != 18446742677646442731LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x461 = INT8_MIN;
	static int16_t x462 = INT16_MIN;
	int8_t x463 = -1;
	static int32_t x464 = -1;
	static volatile int32_t t88 = -25328824;

	t88 = ((x461|x462)-(x463*x464));

	if (t88 != -129) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x469 = 127797771832706392LLU;
	int8_t x472 = INT8_MAX;
	uint64_t t89 = 82LLU;

	t89 = ((x469|x470)-(x471*x472));

	if (t89 != 127797771836867935LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x481 = UINT64_MAX;
	static int16_t x482 = -1;
	int16_t x483 = -10974;
	int64_t x484 = -99107171834842LL;
	static uint64_t t90 = 143LLU;

	t90 = ((x481|x482)-(x483*x484));

	if (t90 != 17359141969993995507LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x489 = 42693355490104LL;
	int8_t x490 = INT8_MAX;
	uint32_t x492 = 15240400U;
	volatile int64_t t91 = -58LL;

	t91 = ((x489|x490)-(x491*x492));

	if (t91 != 42691557122975LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x493 = -2122934843564697999LL;
	static int64_t x495 = 4LL;
	int8_t x496 = INT8_MIN;
	int64_t t92 = 4520795179172040LL;

	t92 = ((x493|x494)-(x495*x496));

	if (t92 != -2122934843396916879LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x505 = 6962850057995087078LLU;
	int64_t x506 = 1957858786121210842LL;
	static int64_t x507 = 1LL;
	static uint32_t x508 = 584U;
	static uint64_t t93 = 1013LLU;

	t93 = ((x505|x506)-(x507*x508));

	if (t93 != 8911417764518559158LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x509 = 0LLU;
	uint8_t x510 = 10U;
	int8_t x511 = 57;
	volatile int64_t x512 = -65369573341600LL;
	uint64_t t94 = 644682028989684762LLU;

	t94 = ((x509|x510)-(x511*x512));

	if (t94 != 3726065680471210LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x516 = -1LL;
	int64_t t95 = -204LL;

	t95 = ((x513|x514)-(x515*x516));

	if (t95 != -129LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x519 = UINT8_MAX;
	volatile int16_t x520 = INT16_MAX;
	uint64_t t96 = 24031LLU;

	t96 = ((x517|x518)-(x519*x520));

	if (t96 != 18446744073701196030LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x521 = 74U;
	uint64_t x522 = 84582LLU;
	uint64_t x523 = 22409LLU;
	int8_t x524 = INT8_MAX;
	static volatile uint64_t t97 = 349238621504040LLU;

	t97 = ((x521|x522)-(x523*x524));

	if (t97 != 18446744073706790263LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x525 = 187370733LLU;
	static volatile int32_t x527 = -1;
	static uint8_t x528 = UINT8_MAX;
	static volatile uint64_t t98 = 216104858693547416LLU;

	t98 = ((x525|x526)-(x527*x528));

	if (t98 != 9223372037042146796LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x529 = -3;
	uint16_t x530 = 3U;
	uint32_t x532 = UINT32_MAX;

	t99 = ((x529|x530)-(x531*x532));

	if (t99 != 4294967294U) { NG(); } else { ; }
	
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

