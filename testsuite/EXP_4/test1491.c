#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MAX;
int32_t x13 = INT32_MAX;
static volatile int16_t x15 = INT16_MIN;
int64_t x17 = -2326020296022132316LL;
static uint64_t x19 = UINT64_MAX;
static volatile int16_t x26 = -94;
volatile uint64_t x27 = 782070963251404LLU;
int16_t x28 = INT16_MAX;
int32_t x30 = 440;
volatile int32_t t8 = 574775;
int32_t x43 = INT32_MIN;
int32_t x45 = INT32_MIN;
volatile int32_t t12 = 0;
int16_t x66 = INT16_MIN;
volatile int32_t t16 = -7524;
static uint16_t x70 = 170U;
static volatile int32_t x78 = INT32_MIN;
uint32_t x79 = 130812U;
static int32_t t20 = 1121;
int16_t x85 = INT16_MIN;
volatile uint32_t x89 = UINT32_MAX;
static int32_t t23 = 616;
uint16_t x101 = 43U;
static volatile int32_t x115 = 12;
int16_t x116 = -250;
uint64_t x124 = 1224LLU;
int16_t x125 = INT16_MAX;
int32_t x128 = INT32_MAX;
volatile int32_t t36 = -16274382;
volatile int16_t x149 = 1031;
static volatile int32_t t38 = 167768;
volatile uint64_t x163 = 1998808094234926LLU;
uint64_t x164 = UINT64_MAX;
volatile uint16_t x165 = UINT16_MAX;
volatile int16_t x166 = 4761;
volatile int32_t t43 = -5;
int8_t x180 = INT8_MIN;
int8_t x195 = -1;
int32_t x196 = 0;
uint8_t x197 = 55U;
int64_t x198 = -909638135070441015LL;
uint64_t x208 = 2129241117060198LLU;
int8_t x209 = INT8_MIN;
volatile int32_t x212 = INT32_MIN;
volatile int16_t x213 = INT16_MIN;
volatile int32_t t53 = 696287647;
volatile int8_t x221 = -1;
int64_t x223 = -955832532941LL;
volatile uint16_t x225 = 737U;
uint32_t x226 = 119108677U;
volatile int32_t t56 = -9;
uint64_t x236 = UINT64_MAX;
static volatile int32_t t58 = -114670148;
uint16_t x238 = UINT16_MAX;
int32_t t59 = 48881661;
int8_t x243 = INT8_MAX;
static uint8_t x245 = 0U;
volatile uint8_t x250 = 12U;
uint64_t x251 = 943245569716875LLU;
uint8_t x252 = 3U;
int32_t x255 = -186935132;
int8_t x256 = -1;
static volatile int32_t t63 = 15;
static int16_t x258 = INT16_MIN;
volatile uint32_t x264 = UINT32_MAX;
static volatile int16_t x271 = INT16_MIN;
volatile int32_t t67 = 1489808;
int32_t t68 = -9379607;
int32_t t69 = -3898770;
int64_t x287 = -651LL;
int32_t t71 = -21;
int8_t x289 = INT8_MIN;
static volatile int32_t t72 = -21815;
volatile int64_t x296 = INT64_MAX;
int32_t t73 = -1;
static uint64_t x297 = 1246737333320390540LLU;
int64_t x299 = -96007749LL;
volatile uint16_t x306 = 7972U;
int64_t x316 = INT64_MIN;
volatile int32_t x318 = INT32_MIN;
volatile int32_t t80 = -63909;
uint8_t x325 = UINT8_MAX;
int16_t x326 = INT16_MIN;
uint8_t x327 = UINT8_MAX;
volatile uint8_t x328 = 5U;
int8_t x329 = INT8_MAX;
int8_t x335 = -7;
static uint16_t x336 = UINT16_MAX;
uint8_t x343 = 88U;
volatile int64_t x344 = -1LL;
volatile uint16_t x345 = UINT16_MAX;
volatile int32_t t86 = 13525658;
static uint8_t x353 = UINT8_MAX;
int16_t x358 = -91;
static int32_t t89 = 128116;
volatile int32_t x370 = -44809;
uint8_t x378 = 23U;
static int16_t x384 = INT16_MAX;
uint32_t x391 = 76U;


void f0(void) {
	static uint64_t x1 = 257737LLU;
	uint8_t x3 = UINT8_MAX;
	int64_t x4 = -1LL;
	volatile int32_t t0 = -8032;

	t0 = (x1<(x2&(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	static volatile uint64_t x6 = 2357831084817310679LLU;
	volatile int16_t x7 = INT16_MAX;
	static uint64_t x8 = 233LLU;
	static volatile int32_t t1 = 232660;

	t1 = (x5<(x6&(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 449868905622LLU;
	int32_t x10 = -1;
	int32_t x11 = INT32_MIN;
	uint16_t x12 = 8U;
	int32_t t2 = 9;

	t2 = (x9<(x10&(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	volatile int32_t x16 = -1;
	volatile int32_t t3 = 7082582;

	t3 = (x13<(x14&(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -28;
	static int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -441108;

	t4 = (x17<(x18&(x19<x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 0;
	static int16_t x22 = INT16_MIN;
	int8_t x23 = 0;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = 128;

	t5 = (x21<(x22&(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t t6 = 53784201;

	t6 = (x25<(x26&(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 138U;
	int64_t x31 = -5LL;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -3495;

	t7 = (x29<(x30&(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 1;
	static volatile int16_t x34 = INT16_MIN;
	static int64_t x35 = -6271438456976513LL;
	volatile int8_t x36 = -1;

	t8 = (x33<(x34&(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	uint8_t x38 = UINT8_MAX;
	volatile int32_t x39 = INT32_MIN;
	static uint8_t x40 = 0U;
	static volatile int32_t t9 = 53642004;

	t9 = (x37<(x38&(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 28740U;
	int32_t x42 = -1;
	int8_t x44 = 1;
	volatile int32_t t10 = 11545838;

	t10 = (x41<(x42&(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MAX;
	uint64_t x47 = 20551011360LLU;
	uint64_t x48 = 111439LLU;
	static int32_t t11 = 0;

	t11 = (x45<(x46&(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	static int16_t x50 = 6;
	uint8_t x51 = 126U;
	static volatile uint32_t x52 = UINT32_MAX;

	t12 = (x49<(x50&(x51<x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = INT16_MAX;
	uint64_t x54 = UINT64_MAX;
	int64_t x55 = 385185120758202633LL;
	static uint8_t x56 = 2U;
	static volatile int32_t t13 = -1;

	t13 = (x53<(x54&(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -13;
	volatile int8_t x58 = INT8_MIN;
	int16_t x59 = -1;
	static volatile int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -69;

	t14 = (x57<(x58&(x59<x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = 5;
	volatile uint32_t x62 = 381U;
	uint16_t x63 = 20728U;
	uint32_t x64 = 197173577U;
	int32_t t15 = 2707086;

	t15 = (x61<(x62&(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = UINT64_MAX;
	volatile int32_t x67 = INT32_MIN;
	volatile uint32_t x68 = 711U;

	t16 = (x65<(x66&(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = UINT32_MAX;
	uint32_t x71 = 765647735U;
	volatile uint64_t x72 = 73951253LLU;
	int32_t t17 = -119234099;

	t17 = (x69<(x70&(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 0U;
	int32_t x74 = 2859;
	int8_t x75 = INT8_MIN;
	int16_t x76 = -49;
	volatile int32_t t18 = 154726788;

	t18 = (x73<(x74&(x75<x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = -3;

	t19 = (x77<(x78&(x79<x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -1LL;
	int8_t x82 = -1;
	int8_t x83 = -1;
	int64_t x84 = INT64_MIN;

	t20 = (x81<(x82&(x83<x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -1;
	int64_t x87 = INT64_MAX;
	uint64_t x88 = 4488LLU;
	volatile int32_t t21 = 107025;

	t21 = (x85<(x86&(x87<x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x90 = UINT8_MAX;
	static int8_t x91 = INT8_MAX;
	volatile int16_t x92 = INT16_MAX;
	int32_t t22 = 13616631;

	t22 = (x89<(x90&(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 8772U;
	int64_t x94 = INT64_MIN;
	int16_t x95 = 0;
	static int64_t x96 = 2LL;

	t23 = (x93<(x94&(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	int8_t x98 = INT8_MIN;
	uint16_t x99 = 3801U;
	static uint32_t x100 = 4684352U;
	static int32_t t24 = -186217;

	t24 = (x97<(x98&(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = 4U;
	int16_t x103 = INT16_MIN;
	uint8_t x104 = 98U;
	volatile int32_t t25 = -11;

	t25 = (x101<(x102&(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static volatile int32_t x106 = INT32_MAX;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = 80954333308064LLU;
	static int32_t t26 = 3254;

	t26 = (x105<(x106&(x107<x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	uint64_t x110 = UINT64_MAX;
	static int16_t x111 = INT16_MIN;
	uint32_t x112 = 140173102U;
	int32_t t27 = -17760;

	t27 = (x109<(x110&(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x113 = -1;
	uint8_t x114 = UINT8_MAX;
	volatile int32_t t28 = -84258;

	t28 = (x113<(x114&(x115<x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = -6430657;
	int32_t x118 = INT32_MAX;
	int8_t x119 = -1;
	volatile int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 1;

	t29 = (x117<(x118&(x119<x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 482U;
	uint16_t x122 = 29645U;
	uint16_t x123 = 214U;
	int32_t t30 = -1439261;

	t30 = (x121<(x122&(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = 276LLU;
	volatile uint32_t x127 = UINT32_MAX;
	volatile int32_t t31 = -12200;

	t31 = (x125<(x126&(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x129 = INT32_MAX;
	volatile uint8_t x130 = 1U;
	int16_t x131 = -42;
	int16_t x132 = 793;
	volatile int32_t t32 = 14874142;

	t32 = (x129<(x130&(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	static int16_t x136 = INT16_MIN;
	int32_t t33 = -28;

	t33 = (x133<(x134&(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 9U;
	int16_t x138 = 1;
	volatile int32_t x139 = -467420619;
	uint64_t x140 = 688140366889099LLU;
	volatile int32_t t34 = -2;

	t34 = (x137<(x138&(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x141 = INT16_MIN;
	static uint64_t x142 = UINT64_MAX;
	int8_t x143 = -1;
	int32_t x144 = INT32_MIN;
	int32_t t35 = 36;

	t35 = (x141<(x142&(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 28147822LLU;
	int16_t x146 = INT16_MIN;
	static volatile uint8_t x147 = 3U;
	volatile int8_t x148 = INT8_MIN;

	t36 = (x145<(x146&(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x150 = 2;
	int32_t x151 = 773683985;
	int64_t x152 = -407217LL;
	int32_t t37 = -2160;

	t37 = (x149<(x150&(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	static int16_t x154 = 56;
	uint32_t x155 = 52912U;
	int8_t x156 = -1;

	t38 = (x153<(x154&(x155<x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 3LLU;
	int64_t x158 = INT64_MAX;
	static int64_t x159 = INT64_MIN;
	uint16_t x160 = 188U;
	int32_t t39 = -6797483;

	t39 = (x157<(x158&(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -58946229983807LL;
	static uint16_t x162 = 4082U;
	static int32_t t40 = 88;

	t40 = (x161<(x162&(x163<x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x167 = INT64_MAX;
	uint32_t x168 = 27206U;
	static int32_t t41 = -1916976;

	t41 = (x165<(x166&(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = 0LLU;
	static uint64_t x170 = UINT64_MAX;
	uint32_t x171 = 12U;
	int8_t x172 = -1;
	int32_t t42 = 9;

	t42 = (x169<(x170&(x171<x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 63671504;
	volatile uint16_t x174 = 0U;
	int64_t x175 = 3699753282873002LL;
	volatile int8_t x176 = INT8_MAX;

	t43 = (x173<(x174&(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int64_t x178 = INT64_MIN;
	static volatile uint16_t x179 = UINT16_MAX;
	static volatile int32_t t44 = 263554741;

	t44 = (x177<(x178&(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x181 = 47990222U;
	static volatile int32_t x182 = 7833;
	int32_t x183 = -2129;
	int16_t x184 = INT16_MIN;
	static int32_t t45 = 25399;

	t45 = (x181<(x182&(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	static int32_t x186 = INT32_MIN;
	uint16_t x187 = 896U;
	int8_t x188 = -2;
	static volatile int32_t t46 = -1447461;

	t46 = (x185<(x186&(x187<x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	static int32_t x190 = 477;
	static int8_t x191 = -1;
	volatile int64_t x192 = INT64_MIN;
	int32_t t47 = 267592;

	t47 = (x189<(x190&(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -6017;
	uint32_t x194 = UINT32_MAX;
	int32_t t48 = 1;

	t48 = (x193<(x194&(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x199 = 29;
	int8_t x200 = 0;
	int32_t t49 = -377;

	t49 = (x197<(x198&(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	static int32_t x202 = INT32_MIN;
	volatile int64_t x203 = INT64_MIN;
	int16_t x204 = -1;
	volatile int32_t t50 = -63731;

	t50 = (x201<(x202&(x203<x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	static volatile int32_t x206 = INT32_MIN;
	uint16_t x207 = 48U;
	int32_t t51 = -40769592;

	t51 = (x205<(x206&(x207<x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MAX;
	int32_t t52 = -26471;

	t52 = (x209<(x210&(x211<x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = 15;
	uint32_t x215 = 19091016U;
	static uint16_t x216 = 339U;

	t53 = (x213<(x214&(x215<x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = 7U;
	uint32_t x218 = 21668U;
	int16_t x219 = 4418;
	static int16_t x220 = -1;
	volatile int32_t t54 = 1;

	t54 = (x217<(x218&(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x222 = 1U;
	volatile uint16_t x224 = 115U;
	volatile int32_t t55 = -1;

	t55 = (x221<(x222&(x223<x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x227 = -1;
	int64_t x228 = INT64_MAX;

	t56 = (x225<(x226&(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -162;
	uint64_t x230 = 31383186630LLU;
	int8_t x231 = -11;
	int64_t x232 = INT64_MIN;
	int32_t t57 = 3711;

	t57 = (x229<(x230&(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 1043795LL;
	uint8_t x234 = 1U;
	volatile int32_t x235 = -1;

	t58 = (x233<(x234&(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = 1951;
	int32_t x239 = -1;
	uint64_t x240 = UINT64_MAX;

	t59 = (x237<(x238&(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = -189885659045287LL;
	uint16_t x242 = 968U;
	int32_t x244 = -6782;
	volatile int32_t t60 = 8387;

	t60 = (x241<(x242&(x243<x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x246 = UINT32_MAX;
	volatile uint32_t x247 = 32U;
	int16_t x248 = INT16_MAX;
	int32_t t61 = 175540;

	t61 = (x245<(x246&(x247<x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	int32_t t62 = -86;

	t62 = (x249<(x250&(x251<x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 1;
	static uint64_t x254 = 307404663510420361LLU;

	t63 = (x253<(x254&(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = 0U;
	int32_t x259 = INT32_MIN;
	volatile int32_t x260 = 190;
	static int32_t t64 = -9;

	t64 = (x257<(x258&(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MAX;
	uint16_t x262 = 7U;
	int16_t x263 = 0;
	static int32_t t65 = 2;

	t65 = (x261<(x262&(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static uint64_t x266 = 5LLU;
	int64_t x267 = INT64_MIN;
	uint16_t x268 = UINT16_MAX;
	static int32_t t66 = -6726;

	t66 = (x265<(x266&(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 25U;
	int64_t x270 = -6050612311LL;
	uint32_t x272 = 112724712U;

	t67 = (x269<(x270&(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int32_t x274 = INT32_MIN;
	uint64_t x275 = UINT64_MAX;
	volatile int64_t x276 = INT64_MAX;

	t68 = (x273<(x274&(x275<x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = 28;
	int8_t x278 = -1;
	int32_t x279 = INT32_MIN;
	uint64_t x280 = UINT64_MAX;

	t69 = (x277<(x278&(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 250U;
	int16_t x282 = INT16_MIN;
	uint32_t x283 = UINT32_MAX;
	int8_t x284 = -1;
	int32_t t70 = 3325872;

	t70 = (x281<(x282&(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 22969340104218LLU;
	uint16_t x286 = UINT16_MAX;
	volatile uint8_t x288 = 1U;

	t71 = (x285<(x286&(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x290 = INT16_MIN;
	int64_t x291 = -5450LL;
	volatile int32_t x292 = INT32_MIN;

	t72 = (x289<(x290&(x291<x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = 0LL;
	static int8_t x294 = INT8_MIN;
	volatile uint16_t x295 = UINT16_MAX;

	t73 = (x293<(x294&(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = INT8_MAX;
	uint64_t x300 = 6991868LLU;
	volatile int32_t t74 = -1026218782;

	t74 = (x297<(x298&(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = -21;
	volatile int8_t x302 = INT8_MIN;
	uint8_t x303 = 4U;
	uint8_t x304 = 99U;
	volatile int32_t t75 = 594;

	t75 = (x301<(x302&(x303<x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static uint64_t x307 = 5241LLU;
	static int64_t x308 = -1LL;
	int32_t t76 = -1960;

	t76 = (x305<(x306&(x307<x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	static volatile uint32_t x310 = 266U;
	int8_t x311 = 1;
	int64_t x312 = INT64_MIN;
	static int32_t t77 = 159768;

	t77 = (x309<(x310&(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	int32_t x314 = INT32_MIN;
	uint64_t x315 = 250134309888943LLU;
	int32_t t78 = 5256107;

	t78 = (x313<(x314&(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 5557912583673593LL;
	static int64_t x319 = -197939880632LL;
	int32_t x320 = INT32_MAX;
	int32_t t79 = 26;

	t79 = (x317<(x318&(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -5;
	int8_t x322 = INT8_MIN;
	static uint8_t x323 = 53U;
	int8_t x324 = INT8_MIN;

	t80 = (x321<(x322&(x323<x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t t81 = -1005774;

	t81 = (x325<(x326&(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x330 = INT64_MIN;
	int16_t x331 = -1;
	volatile int8_t x332 = INT8_MIN;
	volatile int32_t t82 = -12299;

	t82 = (x329<(x330&(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	static int32_t x334 = INT32_MIN;
	volatile int32_t t83 = 49;

	t83 = (x333<(x334&(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 12271U;
	int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	int8_t x340 = -3;
	int32_t t84 = 116948323;

	t84 = (x337<(x338&(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 3171;
	volatile uint16_t x342 = UINT16_MAX;
	int32_t t85 = -1;

	t85 = (x341<(x342&(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MIN;
	static uint16_t x347 = UINT16_MAX;
	uint64_t x348 = 734137168345LLU;

	t86 = (x345<(x346&(x347<x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = UINT8_MAX;
	static volatile int16_t x350 = INT16_MIN;
	volatile int64_t x351 = INT64_MIN;
	int64_t x352 = 34965649478293031LL;
	int32_t t87 = -33569;

	t87 = (x349<(x350&(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t88 = -8;

	t88 = (x353<(x354&(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int16_t x359 = -1;
	int16_t x360 = INT16_MAX;

	t89 = (x357<(x358&(x359<x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 4556732U;
	volatile uint32_t x362 = 0U;
	volatile uint64_t x363 = 831785695895246LLU;
	uint32_t x364 = 3107332U;
	volatile int32_t t90 = -7408;

	t90 = (x361<(x362&(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 338153456175LLU;
	int64_t x366 = -4777LL;
	static int8_t x367 = INT8_MIN;
	int16_t x368 = 973;
	int32_t t91 = -286;

	t91 = (x365<(x366&(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	int32_t x371 = -1;
	int16_t x372 = -7078;
	volatile int32_t t92 = 124;

	t92 = (x369<(x370&(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x373 = UINT32_MAX;
	int8_t x374 = INT8_MIN;
	static uint64_t x375 = 24050LLU;
	uint8_t x376 = 3U;
	static volatile int32_t t93 = -212;

	t93 = (x373<(x374&(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = 90U;
	int16_t x379 = INT16_MAX;
	static uint64_t x380 = 33227LLU;
	static volatile int32_t t94 = 949240162;

	t94 = (x377<(x378&(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	int16_t x382 = -1;
	uint16_t x383 = 9261U;
	volatile int32_t t95 = 293059;

	t95 = (x381<(x382&(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	uint32_t x386 = 4U;
	static int64_t x387 = INT64_MAX;
	static int8_t x388 = INT8_MIN;
	static int32_t t96 = 25360;

	t96 = (x385<(x386&(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	uint16_t x390 = UINT16_MAX;
	int16_t x392 = INT16_MAX;
	volatile int32_t t97 = 23;

	t97 = (x389<(x390&(x391<x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x393 = 40U;
	volatile uint64_t x394 = UINT64_MAX;
	static int8_t x395 = 3;
	int32_t x396 = INT32_MAX;
	static volatile int32_t t98 = 84;

	t98 = (x393<(x394&(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	int32_t x398 = INT32_MAX;
	int16_t x399 = -1;
	int16_t x400 = INT16_MAX;
	static int32_t t99 = -12226773;

	t99 = (x397<(x398&(x399<x400)));

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

