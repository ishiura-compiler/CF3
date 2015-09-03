#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = INT16_MAX;
int64_t x8 = INT64_MAX;
int64_t x22 = INT64_MIN;
static int16_t x28 = INT16_MIN;
int64_t x32 = INT64_MIN;
int32_t t8 = 1469187;
int16_t x41 = -1;
static int32_t t10 = -2040;
int16_t x53 = INT16_MIN;
volatile int8_t x54 = -1;
static volatile int16_t x60 = INT16_MIN;
uint16_t x62 = 2U;
int64_t x63 = INT64_MIN;
int16_t x64 = 19;
uint16_t x66 = UINT16_MAX;
volatile int32_t t15 = 16475677;
static int16_t x74 = -739;
static int32_t t17 = -156;
volatile int32_t t19 = -50412417;
int32_t x97 = -9;
static int16_t x100 = -1;
int32_t t22 = -21501;
static volatile int8_t x103 = INT8_MAX;
volatile int32_t x104 = -5952676;
static int32_t t23 = -6;
static int16_t x115 = INT16_MIN;
uint32_t x116 = 19632322U;
static int32_t x125 = -1;
uint8_t x129 = 2U;
int32_t x135 = -460;
uint64_t x148 = 414139071LLU;
volatile int32_t t34 = -347;
int64_t x153 = INT64_MAX;
int64_t x154 = 14355956369LL;
uint16_t x156 = 453U;
volatile int32_t t35 = -11620173;
int16_t x167 = INT16_MAX;
int64_t x175 = INT64_MIN;
volatile uint64_t x176 = 390566627000034472LLU;
static volatile uint32_t x201 = 1650U;
volatile int32_t t45 = 1;
int32_t t46 = 4034;
int8_t x211 = INT8_MIN;
uint16_t x212 = 3462U;
volatile int32_t t48 = 1029;
static int64_t x217 = 284154274323LL;
int32_t x219 = INT32_MIN;
uint32_t x222 = 24562U;
static int16_t x223 = INT16_MAX;
int8_t x224 = INT8_MAX;
int32_t t50 = 3;
int64_t x240 = INT64_MIN;
uint16_t x242 = 2813U;
uint32_t x243 = UINT32_MAX;
int32_t t55 = 507625236;
int8_t x248 = INT8_MAX;
int32_t x252 = -1;
static int8_t x254 = INT8_MIN;
uint8_t x262 = 6U;
uint32_t x264 = 1189U;
int8_t x265 = 2;
static int16_t x266 = 1;
uint8_t x274 = UINT8_MAX;
int32_t x285 = -1;
int8_t x296 = -1;
int16_t x299 = -1;
volatile int32_t x304 = -1;
volatile int32_t t69 = -704;
static int16_t x305 = 16208;
uint32_t x311 = 0U;
uint16_t x317 = 28697U;
volatile uint16_t x322 = 15698U;
volatile int32_t t74 = 24469;
int64_t x339 = INT64_MIN;
volatile int32_t x343 = -1;
int8_t x345 = -3;
volatile int64_t x346 = INT64_MIN;
uint8_t x349 = UINT8_MAX;
uint64_t x354 = 1029471261896555963LLU;
static int16_t x356 = INT16_MAX;
int32_t t81 = -7816;
int32_t t82 = 1;
static int64_t x366 = INT64_MAX;
int32_t t84 = -993833262;
uint64_t x384 = UINT64_MAX;
static volatile int32_t t86 = 102259902;
int8_t x391 = INT8_MIN;
static int8_t x396 = -1;
int16_t x397 = -7;
int32_t t89 = -1;
static int32_t t90 = -5992;
static uint64_t x409 = 12525927LLU;
int8_t x411 = -15;
static volatile int8_t x414 = INT8_MIN;
static int8_t x416 = 1;
static volatile int64_t x418 = 12289991LL;
int16_t x422 = 14015;
int8_t x435 = INT8_MAX;
int16_t x444 = 43;


void f0(void) {
	int16_t x6 = 520;
	int16_t x7 = INT16_MIN;
	volatile int32_t t0 = -1;

	t0 = ((x5-x6)<=(x7<x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 11884235463600LL;
	uint8_t x10 = UINT8_MAX;
	static int64_t x11 = -1LL;
	int64_t x12 = -204507788240999226LL;
	int32_t t1 = 22;

	t1 = ((x9-x10)<=(x11<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = -2159;
	int8_t x14 = -1;
	volatile uint32_t x15 = 2692476U;
	int32_t x16 = 3;
	volatile int32_t t2 = 32173;

	t2 = ((x13-x14)<=(x15<x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	uint32_t x18 = 6740726U;
	int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MIN;
	static int32_t t3 = 1576;

	t3 = ((x17-x18)<=(x19<x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint16_t x23 = UINT16_MAX;
	uint64_t x24 = 15610978701142427LLU;
	static int32_t t4 = 208804077;

	t4 = ((x21-x22)<=(x23<x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = -481;
	int32_t x27 = INT32_MIN;
	volatile int32_t t5 = -194523;

	t5 = ((x25-x26)<=(x27<x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x29 = 354393523U;
	int8_t x30 = INT8_MIN;
	uint64_t x31 = 1742LLU;
	int32_t t6 = 15;

	t6 = ((x29-x30)<=(x31<x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 1U;
	uint8_t x34 = 1U;
	uint16_t x35 = 2U;
	static int16_t x36 = INT16_MIN;
	int32_t t7 = 61519017;

	t7 = ((x33-x34)<=(x35<x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	volatile int64_t x38 = -2875207229736753452LL;
	static volatile int32_t x39 = 8102;
	uint8_t x40 = UINT8_MAX;

	t8 = ((x37-x38)<=(x39<x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x42 = 1967206417LLU;
	volatile uint64_t x43 = 684LLU;
	uint64_t x44 = 200384250806994169LLU;
	int32_t t9 = 3;

	t9 = ((x41-x42)<=(x43<x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 15480U;
	uint64_t x46 = 17871433166984725LLU;
	int8_t x47 = INT8_MAX;
	int16_t x48 = INT16_MIN;

	t10 = ((x45-x46)<=(x47<x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x49 = INT64_MAX;
	uint16_t x50 = 5621U;
	volatile int16_t x51 = -1;
	uint32_t x52 = 2273103U;
	int32_t t11 = -78912231;

	t11 = ((x49-x50)<=(x51<x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x55 = 363033;
	volatile uint16_t x56 = UINT16_MAX;
	int32_t t12 = -1568355;

	t12 = ((x53-x54)<=(x55<x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = -1;
	int32_t x59 = INT32_MIN;
	static int32_t t13 = 275;

	t13 = ((x57-x58)<=(x59<x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x61 = UINT16_MAX;
	volatile int32_t t14 = 1989861;

	t14 = ((x61-x62)<=(x63<x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MAX;
	static int32_t x67 = -23783;
	static volatile int64_t x68 = 19672637495LL;

	t15 = ((x65-x66)<=(x67<x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = INT32_MAX;
	int8_t x70 = INT8_MAX;
	static volatile int16_t x71 = -320;
	int64_t x72 = -1LL;
	static int32_t t16 = -36;

	t16 = ((x69-x70)<=(x71<x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 297685090;
	int64_t x75 = -1LL;
	volatile int16_t x76 = 5;

	t17 = ((x73-x74)<=(x75<x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 2U;
	volatile int16_t x78 = INT16_MIN;
	int32_t x79 = INT32_MAX;
	int8_t x80 = INT8_MIN;
	volatile int32_t t18 = -5;

	t18 = ((x77-x78)<=(x79<x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	static uint64_t x82 = 19255514702LLU;
	uint8_t x83 = UINT8_MAX;
	int32_t x84 = INT32_MAX;

	t19 = ((x81-x82)<=(x83<x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x90 = -1;
	static uint64_t x91 = 3768347LLU;
	static uint16_t x92 = 2U;
	volatile int32_t t20 = -94;

	t20 = ((x89-x90)<=(x91<x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x93 = 135797962U;
	uint8_t x94 = 3U;
	uint8_t x95 = 22U;
	uint64_t x96 = 5923705LLU;
	static int32_t t21 = 69243;

	t21 = ((x93-x94)<=(x95<x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x98 = 3U;
	volatile uint8_t x99 = 1U;

	t22 = ((x97-x98)<=(x99<x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 54U;
	uint64_t x102 = UINT64_MAX;

	t23 = ((x101-x102)<=(x103<x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = INT8_MIN;
	volatile int64_t x110 = 291592867904551LL;
	int32_t x111 = INT32_MIN;
	int16_t x112 = -1;
	static volatile int32_t t24 = 638915;

	t24 = ((x109-x110)<=(x111<x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x113 = INT16_MAX;
	volatile int32_t x114 = INT32_MAX;
	static int32_t t25 = 2352;

	t25 = ((x113-x114)<=(x115<x116));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x117 = 8102394991020402668LLU;
	int32_t x118 = INT32_MIN;
	int16_t x119 = -1;
	static int64_t x120 = INT64_MIN;
	int32_t t26 = -665015;

	t26 = ((x117-x118)<=(x119<x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = 1406861LLU;
	int8_t x122 = -5;
	volatile int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MIN;
	int32_t t27 = -3245927;

	t27 = ((x121-x122)<=(x123<x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x126 = 3U;
	int64_t x127 = INT64_MIN;
	int64_t x128 = 46509894460620928LL;
	volatile int32_t t28 = -151;

	t28 = ((x125-x126)<=(x127<x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x130 = 17U;
	static uint8_t x131 = UINT8_MAX;
	int32_t x132 = 1370124;
	volatile int32_t t29 = -13390309;

	t29 = ((x129-x130)<=(x131<x132));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = 5;
	uint16_t x134 = UINT16_MAX;
	int8_t x136 = 5;
	static int32_t t30 = -13;

	t30 = ((x133-x134)<=(x135<x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = 1;
	uint64_t x138 = UINT64_MAX;
	static volatile int32_t x139 = INT32_MAX;
	volatile uint16_t x140 = UINT16_MAX;
	static volatile int32_t t31 = 757189;

	t31 = ((x137-x138)<=(x139<x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = -1;
	uint16_t x142 = UINT16_MAX;
	int8_t x143 = INT8_MIN;
	volatile int64_t x144 = 317526161266LL;
	int32_t t32 = 115203719;

	t32 = ((x141-x142)<=(x143<x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 1531U;
	static volatile int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MAX;
	int32_t t33 = 454;

	t33 = ((x145-x146)<=(x147<x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = 38955704198314242LL;
	static int32_t x150 = INT32_MIN;
	volatile int16_t x151 = -9764;
	int8_t x152 = 3;

	t34 = ((x149-x150)<=(x151<x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x155 = 0;

	t35 = ((x153-x154)<=(x155<x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = UINT16_MAX;
	uint16_t x158 = 1U;
	int64_t x159 = INT64_MAX;
	int32_t x160 = 113;
	volatile int32_t t36 = 237046;

	t36 = ((x157-x158)<=(x159<x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = UINT8_MAX;
	int64_t x166 = -32147296536236936LL;
	int16_t x168 = INT16_MIN;
	static volatile int32_t t37 = 746;

	t37 = ((x165-x166)<=(x167<x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x169 = INT32_MIN;
	int8_t x170 = INT8_MIN;
	volatile uint8_t x171 = 116U;
	volatile uint64_t x172 = 132LLU;
	int32_t t38 = 28116;

	t38 = ((x169-x170)<=(x171<x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x173 = 0U;
	uint8_t x174 = UINT8_MAX;
	volatile int32_t t39 = 29536;

	t39 = ((x173-x174)<=(x175<x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MIN;
	static int32_t x179 = -418;
	uint32_t x180 = 2260048U;
	int32_t t40 = -650512039;

	t40 = ((x177-x178)<=(x179<x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 26675U;
	int32_t x182 = INT32_MAX;
	int16_t x183 = -63;
	int16_t x184 = INT16_MAX;
	int32_t t41 = -132343769;

	t41 = ((x181-x182)<=(x183<x184));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = 1U;
	volatile int32_t x186 = INT32_MIN;
	uint16_t x187 = UINT16_MAX;
	volatile uint32_t x188 = 0U;
	static volatile int32_t t42 = -3438;

	t42 = ((x185-x186)<=(x187<x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = 245U;
	static volatile int64_t x190 = INT64_MAX;
	static uint32_t x191 = 1268U;
	int32_t x192 = INT32_MIN;
	int32_t t43 = -5860699;

	t43 = ((x189-x190)<=(x191<x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MIN;
	static uint8_t x195 = UINT8_MAX;
	static int16_t x196 = INT16_MIN;
	int32_t t44 = 15;

	t44 = ((x193-x194)<=(x195<x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MAX;
	static int64_t x204 = -181428211LL;

	t45 = ((x201-x202)<=(x203<x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x205 = INT64_MAX;
	uint8_t x206 = UINT8_MAX;
	volatile int16_t x207 = INT16_MAX;
	volatile uint16_t x208 = 107U;

	t46 = ((x205-x206)<=(x207<x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = UINT32_MAX;
	uint64_t x210 = 2151609LLU;
	static volatile int32_t t47 = 7408;

	t47 = ((x209-x210)<=(x211<x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x213 = -768144827838222LL;
	static uint32_t x214 = 151897136U;
	volatile uint32_t x215 = 71257477U;
	uint32_t x216 = 9320383U;

	t48 = ((x213-x214)<=(x215<x216));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x218 = -1LL;
	static volatile int64_t x220 = INT64_MIN;
	int32_t t49 = 9;

	t49 = ((x217-x218)<=(x219<x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x221 = 6678767261018LL;

	t50 = ((x221-x222)<=(x223<x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = 1U;
	int64_t x226 = -59577012647702493LL;
	static int16_t x227 = -1;
	static uint16_t x228 = 7U;
	int32_t t51 = -1349;

	t51 = ((x225-x226)<=(x227<x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MIN;
	static int16_t x231 = INT16_MIN;
	static uint16_t x232 = 9648U;
	int32_t t52 = -146335391;

	t52 = ((x229-x230)<=(x231<x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = 15;
	uint16_t x234 = 3405U;
	volatile int8_t x235 = INT8_MAX;
	static uint64_t x236 = UINT64_MAX;
	static volatile int32_t t53 = -22;

	t53 = ((x233-x234)<=(x235<x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x237 = UINT8_MAX;
	int16_t x238 = INT16_MIN;
	int32_t x239 = -1;
	volatile int32_t t54 = -15;

	t54 = ((x237-x238)<=(x239<x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = 1LLU;
	volatile uint8_t x244 = UINT8_MAX;

	t55 = ((x241-x242)<=(x243<x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x245 = 6;
	int64_t x246 = -491LL;
	int16_t x247 = INT16_MAX;
	volatile int32_t t56 = 7884365;

	t56 = ((x245-x246)<=(x247<x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = -3191263012027767LL;
	static int8_t x250 = INT8_MIN;
	int64_t x251 = INT64_MAX;
	static volatile int32_t t57 = -19934;

	t57 = ((x249-x250)<=(x251<x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = -1;
	uint16_t x255 = 144U;
	volatile int8_t x256 = 1;
	int32_t t58 = 177468685;

	t58 = ((x253-x254)<=(x255<x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x257 = INT16_MIN;
	static int32_t x258 = -13818212;
	static uint64_t x259 = 31392LLU;
	uint8_t x260 = 14U;
	int32_t t59 = 3;

	t59 = ((x257-x258)<=(x259<x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x261 = INT32_MAX;
	static uint64_t x263 = UINT64_MAX;
	volatile int32_t t60 = -1;

	t60 = ((x261-x262)<=(x263<x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x267 = 52832231LL;
	volatile uint16_t x268 = 2752U;
	static int32_t t61 = 472;

	t61 = ((x265-x266)<=(x267<x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x269 = 6U;
	volatile int32_t x270 = INT32_MIN;
	volatile int64_t x271 = -3532680930552719LL;
	static int32_t x272 = INT32_MIN;
	int32_t t62 = 0;

	t62 = ((x269-x270)<=(x271<x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x273 = UINT8_MAX;
	static int16_t x275 = INT16_MIN;
	uint32_t x276 = 1207724188U;
	volatile int32_t t63 = -323442;

	t63 = ((x273-x274)<=(x275<x276));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = -1;
	int16_t x278 = 2;
	uint64_t x279 = UINT64_MAX;
	volatile int64_t x280 = INT64_MIN;
	int32_t t64 = -450;

	t64 = ((x277-x278)<=(x279<x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x281 = UINT64_MAX;
	static int32_t x282 = -1;
	int64_t x283 = INT64_MAX;
	volatile int64_t x284 = INT64_MIN;
	int32_t t65 = 2442180;

	t65 = ((x281-x282)<=(x283<x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x286 = 89U;
	uint8_t x287 = 5U;
	int8_t x288 = INT8_MAX;
	volatile int32_t t66 = 13541;

	t66 = ((x285-x286)<=(x287<x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x293 = 2154;
	int32_t x294 = -1;
	uint8_t x295 = 3U;
	static volatile int32_t t67 = 73111;

	t67 = ((x293-x294)<=(x295<x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x297 = INT8_MIN;
	volatile int16_t x298 = INT16_MIN;
	volatile int32_t x300 = INT32_MIN;
	int32_t t68 = -1;

	t68 = ((x297-x298)<=(x299<x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x301 = -1LL;
	uint8_t x302 = 3U;
	volatile int64_t x303 = -1314497479566984122LL;

	t69 = ((x301-x302)<=(x303<x304));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x306 = 128U;
	uint32_t x307 = 1930438005U;
	int64_t x308 = -1120512171660738LL;
	int32_t t70 = 329054;

	t70 = ((x305-x306)<=(x307<x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = -5165;
	static volatile int32_t x310 = -1;
	uint8_t x312 = 89U;
	int32_t t71 = 4;

	t71 = ((x309-x310)<=(x311<x312));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = 6;
	int32_t x314 = -1;
	uint32_t x315 = 164021U;
	static volatile int16_t x316 = -1;
	volatile int32_t t72 = 6348;

	t72 = ((x313-x314)<=(x315<x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x318 = 2;
	static uint8_t x319 = 21U;
	uint32_t x320 = 982U;
	int32_t t73 = -49014112;

	t73 = ((x317-x318)<=(x319<x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x321 = 2;
	uint16_t x323 = UINT16_MAX;
	volatile uint32_t x324 = 4086U;

	t74 = ((x321-x322)<=(x323<x324));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x325 = 0U;
	volatile int16_t x326 = INT16_MAX;
	int64_t x327 = -1LL;
	static uint16_t x328 = 7998U;
	volatile int32_t t75 = -7;

	t75 = ((x325-x326)<=(x327<x328));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x329 = INT16_MAX;
	int16_t x330 = INT16_MIN;
	volatile int16_t x331 = INT16_MIN;
	int16_t x332 = 9585;
	static int32_t t76 = -264299;

	t76 = ((x329-x330)<=(x331<x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x337 = 44U;
	uint16_t x338 = 3U;
	int32_t x340 = 0;
	volatile int32_t t77 = -13;

	t77 = ((x337-x338)<=(x339<x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x341 = INT64_MIN;
	static int32_t x342 = INT32_MIN;
	static int32_t x344 = INT32_MAX;
	int32_t t78 = -1864610;

	t78 = ((x341-x342)<=(x343<x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x347 = INT16_MIN;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t79 = -307568945;

	t79 = ((x345-x346)<=(x347<x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x350 = -1LL;
	uint8_t x351 = 1U;
	volatile uint8_t x352 = 98U;
	int32_t t80 = 894520;

	t80 = ((x349-x350)<=(x351<x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x353 = 405025257993576LLU;
	uint64_t x355 = UINT64_MAX;

	t81 = ((x353-x354)<=(x355<x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x357 = INT8_MIN;
	uint32_t x358 = 39638403U;
	static int16_t x359 = -2;
	uint8_t x360 = 3U;

	t82 = ((x357-x358)<=(x359<x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x365 = -1LL;
	static int32_t x367 = INT32_MAX;
	uint16_t x368 = 22U;
	int32_t t83 = -34;

	t83 = ((x365-x366)<=(x367<x368));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x373 = 703558LLU;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MIN;
	uint64_t x376 = 13207982127LLU;

	t84 = ((x373-x374)<=(x375<x376));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x377 = UINT8_MAX;
	int32_t x378 = -134629;
	static volatile int64_t x379 = -1LL;
	int16_t x380 = -1;
	volatile int32_t t85 = 207420;

	t85 = ((x377-x378)<=(x379<x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x381 = -7;
	uint32_t x382 = 5U;
	volatile int32_t x383 = INT32_MAX;

	t86 = ((x381-x382)<=(x383<x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x389 = 0U;
	int32_t x390 = -1;
	int8_t x392 = INT8_MAX;
	int32_t t87 = 0;

	t87 = ((x389-x390)<=(x391<x392));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x393 = INT16_MAX;
	static volatile int16_t x394 = INT16_MIN;
	volatile int16_t x395 = INT16_MIN;
	int32_t t88 = 342;

	t88 = ((x393-x394)<=(x395<x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x398 = -134;
	static uint16_t x399 = 433U;
	int64_t x400 = 182474093708283281LL;

	t89 = ((x397-x398)<=(x399<x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x405 = -1;
	static uint64_t x406 = 93243971LLU;
	volatile int16_t x407 = INT16_MIN;
	static int16_t x408 = INT16_MAX;

	t90 = ((x405-x406)<=(x407<x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x410 = 8031803616896LLU;
	int64_t x412 = INT64_MIN;
	int32_t t91 = -50446694;

	t91 = ((x409-x410)<=(x411<x412));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x413 = 29U;
	volatile int32_t x415 = -1;
	volatile int32_t t92 = -12255661;

	t92 = ((x413-x414)<=(x415<x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x417 = UINT16_MAX;
	volatile int16_t x419 = INT16_MAX;
	volatile uint8_t x420 = 2U;
	static volatile int32_t t93 = 1;

	t93 = ((x417-x418)<=(x419<x420));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x421 = 564;
	uint32_t x423 = UINT32_MAX;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t94 = 10670;

	t94 = ((x421-x422)<=(x423<x424));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x425 = 9743U;
	uint8_t x426 = 3U;
	uint32_t x427 = 0U;
	int64_t x428 = INT64_MIN;
	volatile int32_t t95 = -451959929;

	t95 = ((x425-x426)<=(x427<x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x429 = 56U;
	static uint8_t x430 = 46U;
	uint64_t x431 = UINT64_MAX;
	uint64_t x432 = 558LLU;
	volatile int32_t t96 = -6735294;

	t96 = ((x429-x430)<=(x431<x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x433 = -1;
	uint16_t x434 = 71U;
	int32_t x436 = INT32_MIN;
	static volatile int32_t t97 = -2;

	t97 = ((x433-x434)<=(x435<x436));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x437 = 1U;
	volatile int32_t x438 = -1;
	int8_t x439 = INT8_MIN;
	uint64_t x440 = 1LLU;
	int32_t t98 = -44;

	t98 = ((x437-x438)<=(x439<x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x441 = INT16_MIN;
	volatile int8_t x442 = INT8_MIN;
	volatile int16_t x443 = INT16_MAX;
	volatile int32_t t99 = 0;

	t99 = ((x441-x442)<=(x443<x444));

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

