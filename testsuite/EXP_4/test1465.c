#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
static uint8_t x3 = 1U;
static int32_t t1 = 260212642;
volatile uint8_t x10 = UINT8_MAX;
static uint16_t x15 = UINT16_MAX;
int16_t x16 = -6;
int32_t t3 = 1072727959;
int32_t x21 = 1;
int16_t x23 = INT16_MIN;
int16_t x24 = -1;
volatile int32_t t5 = 16693532;
uint64_t x34 = 946LLU;
volatile int32_t t8 = -6167;
volatile int32_t x42 = 65;
uint64_t x46 = 3592791601915LLU;
int64_t x49 = 703953LL;
static volatile int32_t t12 = -308979102;
int8_t x54 = INT8_MAX;
volatile int16_t x55 = INT16_MAX;
volatile int32_t t13 = -17367;
static volatile int32_t x61 = INT32_MIN;
int32_t t15 = 87158399;
int32_t x67 = INT32_MIN;
int32_t t16 = 994;
int16_t x71 = INT16_MAX;
static volatile int32_t t17 = 442483;
static int32_t x80 = -1;
int16_t x82 = -45;
uint32_t x87 = 2853U;
uint16_t x89 = 1U;
int8_t x90 = 0;
static int64_t x98 = INT64_MIN;
static uint16_t x100 = 747U;
volatile int32_t t25 = 166905726;
static int64_t x109 = INT64_MIN;
int8_t x110 = 0;
int64_t x111 = INT64_MAX;
volatile int8_t x112 = INT8_MAX;
volatile int8_t x114 = INT8_MIN;
static int32_t t28 = -1;
uint64_t x118 = UINT64_MAX;
uint32_t x123 = 46012U;
volatile int8_t x125 = INT8_MIN;
static int8_t x128 = INT8_MIN;
int16_t x138 = 26;
int8_t x168 = INT8_MIN;
volatile int8_t x172 = INT8_MIN;
static volatile int64_t x177 = -4373LL;
int16_t x179 = 881;
uint8_t x183 = UINT8_MAX;
static int32_t t46 = -1016;
int16_t x194 = INT16_MAX;
volatile int64_t x195 = INT64_MIN;
int32_t t49 = 2;
volatile int32_t t50 = -245;
int64_t x207 = -1LL;
int8_t x208 = INT8_MIN;
uint16_t x215 = UINT16_MAX;
int64_t x216 = INT64_MAX;
static uint8_t x218 = 0U;
int32_t x233 = 1851235;
volatile int32_t t58 = 7;
uint64_t x238 = UINT64_MAX;
int32_t x240 = INT32_MIN;
volatile int32_t t59 = -21738;
uint8_t x243 = 2U;
volatile int32_t t60 = 96640253;
int64_t x250 = -1LL;
static uint8_t x251 = 0U;
volatile int32_t t62 = 1;
volatile int8_t x257 = INT8_MIN;
static uint8_t x264 = 8U;
int64_t x265 = INT64_MIN;
int32_t x267 = INT32_MIN;
int8_t x271 = INT8_MIN;
static volatile uint64_t x275 = 21645147268721LLU;
uint16_t x277 = 26U;
int32_t x278 = 9539655;
int8_t x280 = -1;
int16_t x283 = INT16_MIN;
int32_t x287 = INT32_MIN;
int32_t t75 = 881022052;
static uint32_t x308 = 131U;
static volatile int32_t x312 = INT32_MIN;
volatile int32_t t77 = 108;
uint8_t x325 = 1U;
int32_t t81 = 1324;
int64_t x332 = INT64_MIN;
volatile int16_t x337 = INT16_MAX;
int16_t x340 = 0;
static int32_t x350 = INT32_MAX;
static uint32_t x351 = 26516796U;
int16_t x368 = -1;
static volatile int32_t x375 = 1;
static uint64_t x381 = 6952LLU;
int64_t x384 = -1LL;
int32_t x385 = 88154;
int64_t x388 = INT64_MIN;
uint64_t x391 = 4LLU;
uint8_t x394 = 77U;
int32_t x397 = INT32_MIN;


void f0(void) {
	uint64_t x2 = 27759448052LLU;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -9039739;

	t0 = (x1<(x2<(x3<x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	static uint32_t x6 = UINT32_MAX;
	volatile uint32_t x7 = UINT32_MAX;
	int64_t x8 = INT64_MIN;

	t1 = (x5<(x6<(x7<x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 2U;
	int16_t x11 = -1;
	static int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 529248068;

	t2 = (x9<(x10<(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint64_t x14 = 2157776934175LLU;

	t3 = (x13<(x14<(x15<x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int64_t x18 = INT64_MIN;
	static volatile int16_t x19 = 14;
	static int64_t x20 = -1LL;
	int32_t t4 = -25539;

	t4 = (x17<(x18<(x19<x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = 1040336608111LL;

	t5 = (x21<(x22<(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 233513822LL;
	int16_t x26 = -1;
	int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MIN;
	int32_t t6 = -7;

	t6 = (x25<(x26<(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1069531933;
	int64_t x30 = -1LL;
	static int8_t x31 = INT8_MAX;
	int64_t x32 = 379760583014553344LL;
	volatile int32_t t7 = -32215089;

	t7 = (x29<(x30<(x31<x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 36LLU;
	static int32_t x35 = -457173239;
	int32_t x36 = -4204;

	t8 = (x33<(x34<(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = -1;
	volatile int8_t x38 = INT8_MAX;
	uint32_t x39 = 1576U;
	int8_t x40 = -1;
	int32_t t9 = -130663;

	t9 = (x37<(x38<(x39<x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 77852250LLU;
	volatile int64_t x43 = 5550232167845LL;
	int64_t x44 = INT64_MIN;
	static volatile int32_t t10 = 1;

	t10 = (x41<(x42<(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 25;
	uint16_t x47 = 1U;
	volatile uint8_t x48 = UINT8_MAX;
	volatile int32_t t11 = 21;

	t11 = (x45<(x46<(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 7206788U;
	static uint8_t x51 = 20U;
	int32_t x52 = INT32_MAX;

	t12 = (x49<(x50<(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 1008070802;
	int32_t x56 = INT32_MIN;

	t13 = (x53<(x54<(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MAX;
	int16_t x58 = INT16_MAX;
	static int8_t x59 = INT8_MIN;
	int64_t x60 = 90LL;
	static int32_t t14 = 24349;

	t14 = (x57<(x58<(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = 0;
	static int16_t x63 = -33;
	uint32_t x64 = UINT32_MAX;

	t15 = (x61<(x62<(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = 390958U;
	static volatile uint16_t x66 = UINT16_MAX;
	int32_t x68 = INT32_MAX;

	t16 = (x65<(x66<(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 30LLU;
	volatile uint8_t x70 = UINT8_MAX;
	static int16_t x72 = INT16_MAX;

	t17 = (x69<(x70<(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	int16_t x74 = -4;
	int8_t x75 = INT8_MAX;
	int32_t x76 = -1;
	volatile int32_t t18 = 1;

	t18 = (x73<(x74<(x75<x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	uint16_t x78 = 2U;
	static int16_t x79 = -280;
	volatile int32_t t19 = 94185330;

	t19 = (x77<(x78<(x79<x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 0U;
	int8_t x83 = INT8_MIN;
	static int16_t x84 = INT16_MIN;
	int32_t t20 = 64835409;

	t20 = (x81<(x82<(x83<x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 811593203U;
	static uint16_t x86 = 8070U;
	uint32_t x88 = UINT32_MAX;
	int32_t t21 = -52924392;

	t21 = (x85<(x86<(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x91 = 3U;
	volatile int8_t x92 = INT8_MIN;
	int32_t t22 = -1;

	t22 = (x89<(x90<(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = 2;
	static uint32_t x96 = 6U;
	volatile int32_t t23 = -12;

	t23 = (x93<(x94<(x95<x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = -8815;
	volatile int32_t x99 = -2094365;
	volatile int32_t t24 = -74691545;

	t24 = (x97<(x98<(x99<x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 419245299384279LLU;
	int32_t x102 = INT32_MIN;
	volatile uint16_t x103 = UINT16_MAX;
	uint8_t x104 = 3U;

	t25 = (x101<(x102<(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	static uint32_t x106 = 12U;
	static int64_t x107 = INT64_MAX;
	volatile int8_t x108 = INT8_MIN;
	volatile int32_t t26 = 18113968;

	t26 = (x105<(x106<(x107<x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t t27 = 1;

	t27 = (x109<(x110<(x111<x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static int16_t x115 = -1;
	int16_t x116 = INT16_MIN;

	t28 = (x113<(x114<(x115<x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x117 = 707U;
	int16_t x119 = -1;
	int64_t x120 = -24543LL;
	static int32_t t29 = 23624753;

	t29 = (x117<(x118<(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static uint32_t x122 = 12867644U;
	int16_t x124 = -1;
	volatile int32_t t30 = 1;

	t30 = (x121<(x122<(x123<x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x126 = UINT32_MAX;
	int16_t x127 = INT16_MIN;
	int32_t t31 = -1;

	t31 = (x125<(x126<(x127<x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 41U;
	int16_t x130 = INT16_MIN;
	static volatile int8_t x131 = INT8_MAX;
	int32_t x132 = 23870;
	static volatile int32_t t32 = 2;

	t32 = (x129<(x130<(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	int8_t x134 = INT8_MAX;
	static int64_t x135 = -1LL;
	static int8_t x136 = -1;
	static int32_t t33 = -5;

	t33 = (x133<(x134<(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 19763LLU;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 105457856U;
	volatile int32_t t34 = -56092808;

	t34 = (x137<(x138<(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -3;
	uint32_t x142 = 99U;
	int8_t x143 = -1;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -139;

	t35 = (x141<(x142<(x143<x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	static int64_t x146 = INT64_MAX;
	static int64_t x147 = 0LL;
	int16_t x148 = INT16_MIN;
	static int32_t t36 = 79248;

	t36 = (x145<(x146<(x147<x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = 0;
	volatile int8_t x150 = INT8_MAX;
	int16_t x151 = -1;
	volatile int64_t x152 = -1LL;
	static int32_t t37 = 0;

	t37 = (x149<(x150<(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	int16_t x154 = -1;
	static volatile int64_t x155 = -1LL;
	static int64_t x156 = -1LL;
	int32_t t38 = 2248;

	t38 = (x153<(x154<(x155<x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 60877732U;
	uint16_t x158 = 1U;
	uint32_t x159 = 3U;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = 594;

	t39 = (x157<(x158<(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 451LLU;
	int8_t x162 = -53;
	int32_t x163 = -153;
	int32_t x164 = INT32_MIN;
	int32_t t40 = 51129;

	t40 = (x161<(x162<(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	int8_t x166 = 1;
	uint64_t x167 = 11218LLU;
	static int32_t t41 = -14506588;

	t41 = (x165<(x166<(x167<x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = -1LL;
	int16_t x170 = INT16_MIN;
	int64_t x171 = -1809LL;
	volatile int32_t t42 = -5311582;

	t42 = (x169<(x170<(x171<x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MAX;
	uint64_t x174 = 5749906LLU;
	int16_t x175 = -94;
	int16_t x176 = -1;
	int32_t t43 = 7;

	t43 = (x173<(x174<(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -1;
	int8_t x180 = INT8_MIN;
	int32_t t44 = 0;

	t44 = (x177<(x178<(x179<x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 34U;
	int8_t x182 = -23;
	int8_t x184 = 2;
	static volatile int32_t t45 = -40;

	t45 = (x181<(x182<(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = INT8_MAX;
	static int8_t x186 = -1;
	volatile int8_t x187 = 5;
	int32_t x188 = INT32_MAX;

	t46 = (x185<(x186<(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -690;
	uint16_t x190 = 1U;
	static int32_t x191 = INT32_MAX;
	int64_t x192 = INT64_MIN;
	int32_t t47 = 1665973;

	t47 = (x189<(x190<(x191<x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	int8_t x196 = -1;
	int32_t t48 = 939;

	t48 = (x193<(x194<(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	uint16_t x198 = UINT16_MAX;
	int16_t x199 = INT16_MIN;
	static int16_t x200 = 48;

	t49 = (x197<(x198<(x199<x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	int64_t x202 = INT64_MIN;
	volatile uint16_t x203 = 102U;
	int64_t x204 = INT64_MIN;

	t50 = (x201<(x202<(x203<x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	static int32_t x206 = INT32_MAX;
	int32_t t51 = 0;

	t51 = (x205<(x206<(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = -1LL;
	int8_t x210 = INT8_MIN;
	uint8_t x211 = 31U;
	int32_t x212 = INT32_MIN;
	int32_t t52 = 14433843;

	t52 = (x209<(x210<(x211<x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = -47214074544756871LL;
	volatile int32_t t53 = -467;

	t53 = (x213<(x214<(x215<x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MAX;
	int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = -156880;

	t54 = (x217<(x218<(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 2U;
	int16_t x222 = INT16_MIN;
	volatile int64_t x223 = INT64_MIN;
	volatile int16_t x224 = INT16_MAX;
	int32_t t55 = -49536;

	t55 = (x221<(x222<(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	uint8_t x226 = 5U;
	uint32_t x227 = 4037U;
	uint16_t x228 = UINT16_MAX;
	int32_t t56 = -73797;

	t56 = (x225<(x226<(x227<x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	static volatile int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MAX;
	volatile int8_t x232 = INT8_MAX;
	volatile int32_t t57 = 166;

	t57 = (x229<(x230<(x231<x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MAX;
	int8_t x236 = 26;

	t58 = (x233<(x234<(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -53;
	uint16_t x239 = UINT16_MAX;

	t59 = (x237<(x238<(x239<x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	static volatile int64_t x242 = 755088417179305373LL;
	int64_t x244 = -1LL;

	t60 = (x241<(x242<(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	static int32_t x246 = -1058073;
	uint64_t x247 = 9693834924396LLU;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t61 = -14798197;

	t61 = (x245<(x246<(x247<x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -20197;
	volatile uint32_t x252 = 1061469480U;

	t62 = (x249<(x250<(x251<x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 49585U;
	uint32_t x254 = UINT32_MAX;
	int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MAX;
	int32_t t63 = 4;

	t63 = (x253<(x254<(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x258 = 33U;
	int64_t x259 = INT64_MAX;
	int8_t x260 = -1;
	int32_t t64 = -531657;

	t64 = (x257<(x258<(x259<x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MIN;
	int64_t x262 = 66495950LL;
	int8_t x263 = INT8_MIN;
	int32_t t65 = 177445;

	t65 = (x261<(x262<(x263<x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x266 = 2;
	volatile uint16_t x268 = 12U;
	int32_t t66 = -1;

	t66 = (x265<(x266<(x267<x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	volatile uint64_t x270 = 788609446654446255LLU;
	int16_t x272 = 1;
	volatile int32_t t67 = 6783;

	t67 = (x269<(x270<(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	int64_t x276 = INT64_MIN;
	int32_t t68 = -1442;

	t68 = (x273<(x274<(x275<x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x279 = INT16_MIN;
	volatile int32_t t69 = -26;

	t69 = (x277<(x278<(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	int32_t x282 = 5874;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = -18;

	t70 = (x281<(x282<(x283<x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = 173072;
	uint8_t x286 = UINT8_MAX;
	int64_t x288 = -1LL;
	volatile int32_t t71 = 71578;

	t71 = (x285<(x286<(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MIN;
	static int64_t x291 = 57455818605LL;
	static int16_t x292 = -1;
	volatile int32_t t72 = 1105138;

	t72 = (x289<(x290<(x291<x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	uint32_t x294 = 63513U;
	static int16_t x295 = -1;
	uint32_t x296 = 0U;
	static int32_t t73 = 46;

	t73 = (x293<(x294<(x295<x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	static int16_t x298 = 36;
	volatile uint16_t x299 = 0U;
	int16_t x300 = INT16_MAX;
	volatile int32_t t74 = 28043;

	t74 = (x297<(x298<(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x301 = 2;
	volatile int8_t x302 = INT8_MIN;
	static int16_t x303 = -15917;
	int64_t x304 = INT64_MIN;

	t75 = (x301<(x302<(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = INT16_MAX;
	uint8_t x306 = 3U;
	volatile int8_t x307 = INT8_MAX;
	volatile int32_t t76 = 123;

	t76 = (x305<(x306<(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	uint64_t x311 = 7778LLU;

	t77 = (x309<(x310<(x311<x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -583480LL;
	int32_t x314 = -3;
	int16_t x315 = INT16_MAX;
	int8_t x316 = INT8_MIN;
	static int32_t t78 = 0;

	t78 = (x313<(x314<(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -39;
	volatile uint8_t x318 = 0U;
	volatile int16_t x319 = -1952;
	int16_t x320 = 1;
	int32_t t79 = -50;

	t79 = (x317<(x318<(x319<x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	volatile uint64_t x322 = 15389688972697701LLU;
	int16_t x323 = -1;
	int64_t x324 = 859315272LL;
	volatile int32_t t80 = -24;

	t80 = (x321<(x322<(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x326 = UINT8_MAX;
	static int8_t x327 = INT8_MAX;
	uint32_t x328 = UINT32_MAX;

	t81 = (x325<(x326<(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	uint64_t x330 = 1206690046076448LLU;
	static int16_t x331 = INT16_MIN;
	volatile int32_t t82 = -8044;

	t82 = (x329<(x330<(x331<x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	static uint8_t x334 = 26U;
	volatile int16_t x335 = 5378;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 24;

	t83 = (x333<(x334<(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = INT8_MIN;
	uint64_t x339 = 216LLU;
	volatile int32_t t84 = -22;

	t84 = (x337<(x338<(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 3U;
	uint8_t x342 = UINT8_MAX;
	static int64_t x343 = INT64_MIN;
	uint64_t x344 = 30933824891004485LLU;
	int32_t t85 = -925105;

	t85 = (x341<(x342<(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 37538140792LLU;
	uint16_t x346 = 48U;
	int8_t x347 = -60;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = 406;

	t86 = (x345<(x346<(x347<x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x349 = UINT16_MAX;
	uint16_t x352 = 1U;
	int32_t t87 = 373459512;

	t87 = (x349<(x350<(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MIN;
	uint16_t x354 = UINT16_MAX;
	volatile int16_t x355 = -1;
	static volatile uint32_t x356 = 23432259U;
	volatile int32_t t88 = -6535848;

	t88 = (x353<(x354<(x355<x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MAX;
	uint16_t x358 = UINT16_MAX;
	int8_t x359 = INT8_MAX;
	int64_t x360 = -124980059LL;
	int32_t t89 = 173054;

	t89 = (x357<(x358<(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	int64_t x363 = 1363707091LL;
	volatile uint32_t x364 = UINT32_MAX;
	volatile int32_t t90 = 0;

	t90 = (x361<(x362<(x363<x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -398493983114849LL;
	int64_t x366 = INT64_MAX;
	volatile int32_t x367 = -1;
	static volatile int32_t t91 = -3;

	t91 = (x365<(x366<(x367<x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MIN;
	static uint8_t x371 = 22U;
	volatile int8_t x372 = -1;
	static volatile int32_t t92 = 1130;

	t92 = (x369<(x370<(x371<x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 57;
	int16_t x374 = -1;
	static volatile int8_t x376 = 0;
	static volatile int32_t t93 = 1963138;

	t93 = (x373<(x374<(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MIN;
	int16_t x378 = INT16_MIN;
	int64_t x379 = -29LL;
	volatile int32_t x380 = 656035540;
	int32_t t94 = -26;

	t94 = (x377<(x378<(x379<x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MAX;
	static volatile int32_t t95 = -1;

	t95 = (x381<(x382<(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x386 = -7LL;
	uint8_t x387 = UINT8_MAX;
	volatile int32_t t96 = 68;

	t96 = (x385<(x386<(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = -1;
	int64_t x390 = -1LL;
	uint32_t x392 = UINT32_MAX;
	int32_t t97 = -112;

	t97 = (x389<(x390<(x391<x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int8_t x395 = INT8_MAX;
	int8_t x396 = -1;
	int32_t t98 = 4148201;

	t98 = (x393<(x394<(x395<x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MAX;
	uint16_t x399 = 0U;
	int32_t x400 = INT32_MIN;
	int32_t t99 = -2804;

	t99 = (x397<(x398<(x399<x400)));

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
