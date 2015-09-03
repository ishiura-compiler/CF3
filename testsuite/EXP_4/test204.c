#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 28469U;
int8_t x9 = 0;
volatile int16_t x10 = -1;
uint16_t x20 = UINT16_MAX;
volatile int16_t x35 = 12817;
volatile int64_t x41 = -1LL;
int64_t x44 = INT64_MAX;
int64_t x48 = INT64_MIN;
static volatile int32_t x52 = -23254;
int8_t x60 = -1;
volatile int32_t t8 = 732431;
uint16_t x77 = 404U;
volatile uint32_t x82 = UINT32_MAX;
int8_t x83 = -1;
uint64_t x94 = 212LLU;
int32_t x99 = INT32_MIN;
volatile int32_t t15 = -185;
int32_t x106 = -8;
int32_t x108 = -80;
static volatile int32_t t20 = 772004600;
static uint8_t x122 = UINT8_MAX;
uint64_t x125 = UINT64_MAX;
int16_t x126 = 0;
uint8_t x127 = UINT8_MAX;
static int32_t t22 = -159275;
int32_t x136 = INT32_MIN;
int32_t t24 = 420491984;
uint32_t x141 = 212095U;
volatile int32_t t26 = 4;
volatile int32_t x146 = -1;
int8_t x147 = INT8_MIN;
int64_t x150 = INT64_MAX;
uint64_t x153 = UINT64_MAX;
static int8_t x158 = INT8_MIN;
uint32_t x169 = 1076499U;
uint16_t x172 = 7865U;
volatile int32_t t31 = 0;
volatile int64_t x180 = -1LL;
uint8_t x184 = UINT8_MAX;
int8_t x192 = INT8_MIN;
static uint8_t x194 = 9U;
int32_t t37 = 1918;
int32_t x212 = -4730;
static int32_t t39 = 838;
static uint16_t x229 = UINT16_MAX;
static int8_t x232 = -40;
volatile int32_t t42 = 941;
int8_t x233 = -1;
volatile int16_t x234 = INT16_MIN;
int32_t t44 = 9977;
static volatile int32_t t47 = 61793917;
int16_t x263 = INT16_MIN;
static volatile int32_t x268 = 212;
int32_t x273 = INT32_MIN;
uint64_t x274 = 6718LLU;
volatile uint64_t x281 = 16996918662LLU;
static uint64_t x286 = 1019258LLU;
int64_t x289 = -1LL;
volatile int32_t t54 = -270136;
static uint64_t x302 = UINT64_MAX;
static volatile int32_t x312 = INT32_MAX;
int32_t t57 = -455018663;
int32_t x313 = -1;
int8_t x317 = -1;
volatile int16_t x319 = 89;
int16_t x327 = -1;
int8_t x342 = 0;
uint8_t x354 = 69U;
int32_t t62 = -514;
volatile int16_t x364 = -13;
static int32_t x365 = INT32_MAX;
int8_t x367 = INT8_MIN;
uint64_t x368 = 2197LLU;
int32_t t65 = -364;
volatile int64_t x376 = -1LL;
int8_t x389 = INT8_MAX;
int16_t x405 = 1;
int8_t x408 = INT8_MIN;
uint8_t x417 = 118U;
int8_t x424 = INT8_MIN;
static uint8_t x445 = 25U;
int8_t x447 = INT8_MIN;
uint16_t x459 = UINT16_MAX;
volatile int32_t t76 = -106538;
int32_t x465 = INT32_MAX;
uint8_t x472 = 10U;
volatile int32_t t79 = 323;
uint8_t x475 = 0U;
static volatile uint8_t x480 = UINT8_MAX;
uint8_t x485 = 6U;
static int8_t x491 = 0;
int32_t t84 = 12681706;
int8_t x525 = -1;
uint64_t x527 = 619143LLU;
static int16_t x539 = -1;
uint16_t x540 = 11011U;
int16_t x546 = INT16_MIN;
int64_t x547 = -113393125695671366LL;
volatile int32_t t88 = 122979;
volatile int32_t t89 = -485;
volatile int64_t x567 = INT64_MIN;
static volatile int32_t t92 = 2;
uint32_t x606 = UINT32_MAX;
volatile int32_t x617 = INT32_MAX;
volatile uint32_t x618 = UINT32_MAX;
int8_t x619 = INT8_MIN;
int32_t t99 = 682156563;


void f0(void) {
	int32_t x6 = -1;
	uint32_t x7 = 213U;
	int32_t x8 = INT32_MIN;
	int32_t t0 = -2;

	t0 = (x5<(x6*(x7-x8)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x11 = INT32_MIN;
	uint64_t x12 = 8016825862LLU;
	int32_t t1 = -3346;

	t1 = (x9<(x10*(x11-x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 0U;
	uint16_t x18 = 3913U;
	uint8_t x19 = 4U;
	int32_t t2 = 1550647;

	t2 = (x17<(x18*(x19-x20)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x33 = 1244057LLU;
	int64_t x34 = 111911LL;
	static int64_t x36 = -1738LL;
	static volatile int32_t t3 = -3;

	t3 = (x33<(x34*(x35-x36)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x42 = -1;
	volatile uint32_t x43 = UINT32_MAX;
	volatile int32_t t4 = 320011221;

	t4 = (x41<(x42*(x43-x44)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x45 = -29;
	uint32_t x46 = 2916U;
	int64_t x47 = INT64_MIN;
	int32_t t5 = 1829932;

	t5 = (x45<(x46*(x47-x48)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x49 = INT32_MAX;
	static int32_t x50 = INT32_MIN;
	uint32_t x51 = UINT32_MAX;
	int32_t t6 = 3826106;

	t6 = (x49<(x50*(x51-x52)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x53 = 268875569;
	int8_t x54 = -1;
	static uint32_t x55 = 2U;
	volatile int16_t x56 = INT16_MIN;
	static int32_t t7 = -9193904;

	t7 = (x53<(x54*(x55-x56)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x57 = INT64_MAX;
	uint8_t x58 = UINT8_MAX;
	volatile int16_t x59 = -21;

	t8 = (x57<(x58*(x59-x60)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x65 = -157426314;
	uint64_t x66 = 19435413521LLU;
	uint8_t x67 = UINT8_MAX;
	uint8_t x68 = 36U;
	volatile int32_t t9 = 1483720;

	t9 = (x65<(x66*(x67-x68)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x73 = 511032861LLU;
	volatile int8_t x74 = INT8_MAX;
	uint32_t x75 = 267410901U;
	volatile uint16_t x76 = UINT16_MAX;
	static int32_t t10 = 12487534;

	t10 = (x73<(x74*(x75-x76)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x78 = 1U;
	static volatile int32_t x79 = INT32_MIN;
	uint64_t x80 = 6833413936348724LLU;
	volatile int32_t t11 = -68741204;

	t11 = (x77<(x78*(x79-x80)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x81 = -386787;
	int8_t x84 = INT8_MIN;
	volatile int32_t t12 = 3619;

	t12 = (x81<(x82*(x83-x84)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x85 = 25815419673768LLU;
	int8_t x86 = -7;
	int64_t x87 = -1LL;
	int16_t x88 = 51;
	volatile int32_t t13 = -3748765;

	t13 = (x85<(x86*(x87-x88)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x93 = -4827;
	int8_t x95 = 0;
	uint64_t x96 = 833319910942487LLU;
	static volatile int32_t t14 = -79546934;

	t14 = (x93<(x94*(x95-x96)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x97 = 14743U;
	uint16_t x98 = 27600U;
	uint32_t x100 = UINT32_MAX;

	t15 = (x97<(x98*(x99-x100)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x101 = 818U;
	int64_t x102 = -1LL;
	int16_t x103 = INT16_MIN;
	volatile int16_t x104 = -1;
	static volatile int32_t t16 = -1;

	t16 = (x101<(x102*(x103-x104)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x105 = INT16_MIN;
	uint8_t x107 = 15U;
	int32_t t17 = -2030758;

	t17 = (x105<(x106*(x107-x108)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x109 = -1LL;
	static uint8_t x110 = 45U;
	int8_t x111 = 1;
	volatile int8_t x112 = 17;
	volatile int32_t t18 = -46541849;

	t18 = (x109<(x110*(x111-x112)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x113 = UINT8_MAX;
	int8_t x114 = 11;
	volatile int16_t x115 = INT16_MIN;
	static volatile uint8_t x116 = 29U;
	volatile int32_t t19 = 585297;

	t19 = (x113<(x114*(x115-x116)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x117 = 141646445U;
	int32_t x118 = -30078;
	uint8_t x119 = 6U;
	uint16_t x120 = UINT16_MAX;

	t20 = (x117<(x118*(x119-x120)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x121 = 58022419932LLU;
	int8_t x123 = INT8_MIN;
	int16_t x124 = -1;
	static volatile int32_t t21 = 3166096;

	t21 = (x121<(x122*(x123-x124)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x128 = 3;

	t22 = (x125<(x126*(x127-x128)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x129 = INT8_MIN;
	uint16_t x130 = 206U;
	int64_t x131 = -3LL;
	static uint16_t x132 = 406U;
	int32_t t23 = -174;

	t23 = (x129<(x130*(x131-x132)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x133 = INT32_MAX;
	int16_t x134 = -261;
	uint64_t x135 = 57879155LLU;

	t24 = (x133<(x134*(x135-x136)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x137 = 482U;
	int64_t x138 = 81LL;
	int64_t x139 = 2508576042LL;
	static volatile uint8_t x140 = UINT8_MAX;
	volatile int32_t t25 = -961989;

	t25 = (x137<(x138*(x139-x140)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MIN;

	t26 = (x141<(x142*(x143-x144)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x145 = INT8_MAX;
	uint16_t x148 = 1U;
	int32_t t27 = 10330880;

	t27 = (x145<(x146*(x147-x148)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x149 = UINT32_MAX;
	uint64_t x151 = 20981383LLU;
	int64_t x152 = INT64_MIN;
	int32_t t28 = 228020;

	t28 = (x149<(x150*(x151-x152)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x154 = -2036;
	uint16_t x155 = UINT16_MAX;
	int16_t x156 = INT16_MAX;
	volatile int32_t t29 = 32805;

	t29 = (x153<(x154*(x155-x156)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x157 = -1;
	uint32_t x159 = 13U;
	int16_t x160 = 10;
	int32_t t30 = -3721263;

	t30 = (x157<(x158*(x159-x160)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x170 = INT8_MIN;
	static uint32_t x171 = 4044616U;

	t31 = (x169<(x170*(x171-x172)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x177 = 4106050999LL;
	uint32_t x178 = 1108U;
	int8_t x179 = 14;
	volatile int32_t t32 = 33637;

	t32 = (x177<(x178*(x179-x180)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x181 = UINT8_MAX;
	int16_t x182 = 847;
	int32_t x183 = -1;
	volatile int32_t t33 = 15949;

	t33 = (x181<(x182*(x183-x184)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x185 = 234303LLU;
	uint8_t x186 = UINT8_MAX;
	static int8_t x187 = -1;
	int8_t x188 = 0;
	int32_t t34 = 2995338;

	t34 = (x185<(x186*(x187-x188)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x189 = 30105364LLU;
	uint8_t x190 = 108U;
	static int8_t x191 = INT8_MAX;
	int32_t t35 = 2186;

	t35 = (x189<(x190*(x191-x192)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = INT16_MIN;
	int8_t x195 = -1;
	static uint16_t x196 = 1U;
	static int32_t t36 = 597006;

	t36 = (x193<(x194*(x195-x196)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x201 = INT8_MIN;
	uint32_t x202 = 363448U;
	uint16_t x203 = UINT16_MAX;
	volatile int32_t x204 = -1;

	t37 = (x201<(x202*(x203-x204)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x209 = 16;
	int16_t x210 = INT16_MAX;
	uint32_t x211 = 8056U;
	volatile int32_t t38 = 30507030;

	t38 = (x209<(x210*(x211-x212)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x217 = -1454;
	int32_t x218 = 1;
	uint64_t x219 = UINT64_MAX;
	int8_t x220 = INT8_MAX;

	t39 = (x217<(x218*(x219-x220)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x221 = 28186974;
	int32_t x222 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	uint32_t x224 = UINT32_MAX;
	int32_t t40 = 62;

	t40 = (x221<(x222*(x223-x224)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x225 = 127079U;
	volatile int8_t x226 = -1;
	volatile uint16_t x227 = 6U;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t41 = 227292;

	t41 = (x225<(x226*(x227-x228)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x230 = 28U;
	uint64_t x231 = 952969LLU;

	t42 = (x229<(x230*(x231-x232)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x235 = INT16_MIN;
	static int16_t x236 = -1;
	static int32_t t43 = -12721346;

	t43 = (x233<(x234*(x235-x236)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x241 = 4017LLU;
	uint16_t x242 = 11U;
	static uint8_t x243 = 0U;
	int8_t x244 = INT8_MAX;

	t44 = (x241<(x242*(x243-x244)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x249 = -156;
	volatile uint8_t x250 = UINT8_MAX;
	volatile int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MAX;
	int32_t t45 = -4;

	t45 = (x249<(x250*(x251-x252)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x253 = 0LLU;
	int16_t x254 = -164;
	uint64_t x255 = 160629LLU;
	int64_t x256 = -24LL;
	int32_t t46 = 846;

	t46 = (x253<(x254*(x255-x256)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x257 = -20515923932LL;
	int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MIN;
	uint32_t x260 = 255621U;

	t47 = (x257<(x258*(x259-x260)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x261 = 40U;
	volatile uint64_t x262 = 89448LLU;
	volatile uint64_t x264 = 371390396513651553LLU;
	volatile int32_t t48 = 9038;

	t48 = (x261<(x262*(x263-x264)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x265 = 12333240057460LLU;
	int8_t x266 = -1;
	volatile int32_t x267 = -201400566;
	int32_t t49 = -121;

	t49 = (x265<(x266*(x267-x268)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x269 = UINT32_MAX;
	static volatile int8_t x270 = -1;
	static int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t50 = -1058;

	t50 = (x269<(x270*(x271-x272)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x275 = INT16_MAX;
	int16_t x276 = INT16_MAX;
	int32_t t51 = 22;

	t51 = (x273<(x274*(x275-x276)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x282 = 0;
	static uint8_t x283 = UINT8_MAX;
	int32_t x284 = -916220005;
	volatile int32_t t52 = 255248719;

	t52 = (x281<(x282*(x283-x284)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x285 = INT16_MIN;
	uint32_t x287 = 1U;
	uint32_t x288 = 1172581741U;
	static volatile int32_t t53 = -3324207;

	t53 = (x285<(x286*(x287-x288)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x290 = -1;
	static volatile uint16_t x291 = UINT16_MAX;
	volatile uint8_t x292 = 5U;

	t54 = (x289<(x290*(x291-x292)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x293 = 1;
	int16_t x294 = INT16_MAX;
	int8_t x295 = INT8_MIN;
	volatile uint16_t x296 = 244U;
	static volatile int32_t t55 = 2833;

	t55 = (x293<(x294*(x295-x296)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x301 = 250LLU;
	uint64_t x303 = UINT64_MAX;
	volatile int32_t x304 = -1;
	static int32_t t56 = 0;

	t56 = (x301<(x302*(x303-x304)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x309 = INT32_MAX;
	int64_t x310 = -26100402LL;
	int64_t x311 = -1LL;

	t57 = (x309<(x310*(x311-x312)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x314 = 16;
	uint64_t x315 = 255451676724866LLU;
	int32_t x316 = -1;
	static volatile int32_t t58 = -9501;

	t58 = (x313<(x314*(x315-x316)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x318 = 2U;
	int16_t x320 = INT16_MIN;
	int32_t t59 = 607438647;

	t59 = (x317<(x318*(x319-x320)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x325 = INT32_MAX;
	int32_t x326 = -1;
	uint8_t x328 = 2U;
	volatile int32_t t60 = -831127841;

	t60 = (x325<(x326*(x327-x328)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x341 = INT8_MIN;
	static uint32_t x343 = 6936U;
	int8_t x344 = 24;
	volatile int32_t t61 = 223;

	t61 = (x341<(x342*(x343-x344)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x353 = 512LLU;
	static int16_t x355 = -23;
	int64_t x356 = -1LL;

	t62 = (x353<(x354*(x355-x356)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x361 = 2;
	static int64_t x362 = -7416LL;
	uint8_t x363 = 30U;
	volatile int32_t t63 = -103;

	t63 = (x361<(x362*(x363-x364)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x366 = UINT32_MAX;
	volatile int32_t t64 = 14869;

	t64 = (x365<(x366*(x367-x368)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x369 = 140019425393LL;
	static int16_t x370 = -1;
	static int8_t x371 = INT8_MAX;
	int8_t x372 = INT8_MIN;

	t65 = (x369<(x370*(x371-x372)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x373 = -1LL;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = 18;
	static volatile int32_t t66 = -535504390;

	t66 = (x373<(x374*(x375-x376)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x377 = INT8_MAX;
	int64_t x378 = -1LL;
	static int64_t x379 = -1LL;
	static uint64_t x380 = 380033911584LLU;
	int32_t t67 = -438;

	t67 = (x377<(x378*(x379-x380)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x385 = UINT16_MAX;
	static int16_t x386 = -5;
	volatile int16_t x387 = -1;
	static uint8_t x388 = 57U;
	static int32_t t68 = -196;

	t68 = (x385<(x386*(x387-x388)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x390 = INT64_MIN;
	uint64_t x391 = UINT64_MAX;
	int32_t x392 = -44100;
	volatile int32_t t69 = 11432;

	t69 = (x389<(x390*(x391-x392)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x406 = 2031U;
	static uint64_t x407 = 656676303821LLU;
	static volatile int32_t t70 = -471;

	t70 = (x405<(x406*(x407-x408)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x418 = -5782LL;
	static uint8_t x419 = UINT8_MAX;
	int8_t x420 = 12;
	volatile int32_t t71 = 3765;

	t71 = (x417<(x418*(x419-x420)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x421 = INT64_MIN;
	static uint64_t x422 = UINT64_MAX;
	int16_t x423 = INT16_MAX;
	volatile int32_t t72 = -37998;

	t72 = (x421<(x422*(x423-x424)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x433 = -525979LL;
	uint16_t x434 = 7U;
	volatile int16_t x435 = INT16_MIN;
	static volatile uint32_t x436 = 8U;
	volatile int32_t t73 = -1;

	t73 = (x433<(x434*(x435-x436)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x446 = 8519U;
	static int32_t x448 = 652;
	int32_t t74 = 378152274;

	t74 = (x445<(x446*(x447-x448)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x453 = 13361U;
	int64_t x454 = -72644134448LL;
	uint16_t x455 = 109U;
	int16_t x456 = INT16_MIN;
	volatile int32_t t75 = -43223845;

	t75 = (x453<(x454*(x455-x456)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x457 = -1;
	volatile int16_t x458 = -1;
	uint16_t x460 = UINT16_MAX;

	t76 = (x457<(x458*(x459-x460)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x461 = INT64_MIN;
	static uint16_t x462 = UINT16_MAX;
	volatile int16_t x463 = -1;
	int32_t x464 = -58;
	int32_t t77 = 4815460;

	t77 = (x461<(x462*(x463-x464)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x466 = -5369755205086LL;
	int16_t x467 = INT16_MIN;
	static int8_t x468 = -1;
	volatile int32_t t78 = 1;

	t78 = (x465<(x466*(x467-x468)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x469 = 488U;
	int16_t x470 = INT16_MIN;
	uint16_t x471 = UINT16_MAX;

	t79 = (x469<(x470*(x471-x472)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x473 = -1;
	volatile int8_t x474 = -2;
	int16_t x476 = INT16_MIN;
	int32_t t80 = 523522078;

	t80 = (x473<(x474*(x475-x476)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x477 = INT64_MIN;
	int16_t x478 = -1;
	int64_t x479 = -1LL;
	volatile int32_t t81 = -1039458540;

	t81 = (x477<(x478*(x479-x480)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x486 = 21U;
	uint8_t x487 = 0U;
	uint64_t x488 = 3179925723LLU;
	int32_t t82 = 1160;

	t82 = (x485<(x486*(x487-x488)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x489 = 510594881312152112LLU;
	uint64_t x490 = 90711066355587425LLU;
	static volatile uint16_t x492 = UINT16_MAX;
	volatile int32_t t83 = -71767;

	t83 = (x489<(x490*(x491-x492)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x497 = INT8_MAX;
	uint64_t x498 = 42LLU;
	int64_t x499 = -15377679711225LL;
	uint64_t x500 = 3LLU;

	t84 = (x497<(x498*(x499-x500)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x505 = 4U;
	int32_t x506 = -42801728;
	uint32_t x507 = UINT32_MAX;
	volatile int8_t x508 = -7;
	int32_t t85 = 41940;

	t85 = (x505<(x506*(x507-x508)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x526 = -1;
	static int32_t x528 = 21;
	int32_t t86 = -173;

	t86 = (x525<(x526*(x527-x528)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x537 = INT16_MIN;
	int32_t x538 = -1;
	static volatile int32_t t87 = 4787090;

	t87 = (x537<(x538*(x539-x540)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x545 = 18;
	uint64_t x548 = 681476820LLU;

	t88 = (x545<(x546*(x547-x548)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x553 = UINT8_MAX;
	int16_t x554 = INT16_MAX;
	uint8_t x555 = UINT8_MAX;
	uint32_t x556 = 128790U;

	t89 = (x553<(x554*(x555-x556)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x561 = UINT32_MAX;
	static int64_t x562 = -8450LL;
	uint32_t x563 = 30570927U;
	int64_t x564 = 120184LL;
	static volatile int32_t t90 = 6365823;

	t90 = (x561<(x562*(x563-x564)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x565 = -1;
	volatile int32_t x566 = INT32_MAX;
	uint64_t x568 = 60796761426493348LLU;
	static int32_t t91 = 63506983;

	t91 = (x565<(x566*(x567-x568)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x573 = INT64_MIN;
	static uint8_t x574 = UINT8_MAX;
	int64_t x575 = -5291282LL;
	volatile int16_t x576 = INT16_MIN;

	t92 = (x573<(x574*(x575-x576)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x577 = 369;
	uint8_t x578 = UINT8_MAX;
	static int64_t x579 = 249LL;
	static uint64_t x580 = 10962722981314808LLU;
	static int32_t t93 = -1911;

	t93 = (x577<(x578*(x579-x580)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x585 = -2LL;
	int8_t x586 = 52;
	volatile int64_t x587 = INT64_MIN;
	static int64_t x588 = INT64_MIN;
	volatile int32_t t94 = 0;

	t94 = (x585<(x586*(x587-x588)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x589 = -1;
	int64_t x590 = -6484LL;
	volatile int16_t x591 = INT16_MIN;
	int8_t x592 = -1;
	int32_t t95 = 194736;

	t95 = (x589<(x590*(x591-x592)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x601 = INT16_MAX;
	static uint64_t x602 = 4109603154720LLU;
	volatile int16_t x603 = -1226;
	volatile int64_t x604 = -1LL;
	volatile int32_t t96 = -9;

	t96 = (x601<(x602*(x603-x604)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x605 = INT16_MIN;
	int8_t x607 = INT8_MIN;
	uint64_t x608 = UINT64_MAX;
	int32_t t97 = 720084;

	t97 = (x605<(x606*(x607-x608)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x609 = INT16_MIN;
	static int8_t x610 = INT8_MIN;
	int32_t x611 = -492055991;
	static uint32_t x612 = 364049U;
	int32_t t98 = 2;

	t98 = (x609<(x610*(x611-x612)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x620 = UINT8_MAX;

	t99 = (x617<(x618*(x619-x620)));

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

