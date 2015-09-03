#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
int64_t x6 = INT64_MIN;
int16_t x16 = -1;
volatile int32_t t3 = -3540058;
int32_t t4 = -655782222;
int32_t x21 = INT32_MIN;
uint32_t x22 = 2893U;
volatile int32_t t5 = -5;
static int64_t x28 = INT64_MIN;
int64_t x36 = -1LL;
uint32_t x39 = UINT32_MAX;
uint32_t x42 = 84U;
volatile int32_t t12 = 1;
int64_t x55 = -974LL;
static uint16_t x58 = 8U;
uint32_t x61 = UINT32_MAX;
volatile int16_t x63 = INT16_MAX;
static uint8_t x65 = 22U;
static uint32_t x69 = UINT32_MAX;
volatile int32_t x71 = 1529;
static volatile int32_t t19 = 494509899;
static uint16_t x87 = UINT16_MAX;
volatile int32_t t23 = -15754343;
uint16_t x103 = UINT16_MAX;
volatile int32_t t25 = 30;
volatile uint32_t x108 = 128U;
volatile int32_t t26 = 72;
volatile int32_t x110 = 258452;
int32_t t27 = 57;
static int32_t t29 = -77;
volatile int32_t t31 = -2341;
int64_t x129 = INT64_MIN;
volatile uint16_t x133 = UINT16_MAX;
static int64_t x147 = 11522144416LL;
volatile int32_t x149 = 6960252;
static uint64_t x152 = UINT64_MAX;
int32_t t38 = -13091856;
int32_t t39 = -3675;
uint32_t x163 = 3759896U;
static volatile int32_t t40 = 90;
uint64_t x167 = UINT64_MAX;
int32_t t45 = 23001;
volatile int16_t x188 = INT16_MIN;
int8_t x191 = INT8_MAX;
int32_t x193 = INT32_MIN;
static volatile int64_t x199 = INT64_MIN;
int32_t x202 = -1;
int8_t x204 = 23;
int64_t x207 = 4459019065666000LL;
volatile uint8_t x217 = UINT8_MAX;
uint64_t x218 = UINT64_MAX;
volatile int8_t x228 = INT8_MIN;
int8_t x232 = 12;
int32_t t57 = -1;
static uint64_t x235 = 722084286984LLU;
int8_t x238 = 16;
static int64_t x243 = -1LL;
int32_t t60 = -1;
int8_t x245 = -1;
int32_t x248 = INT32_MIN;
volatile int32_t t61 = -462173482;
int64_t x249 = 18210346LL;
int8_t x253 = -1;
uint8_t x256 = 6U;
uint16_t x270 = 4379U;
volatile uint8_t x281 = 51U;
int8_t x283 = INT8_MIN;
int32_t t70 = -1;
static volatile int8_t x285 = 1;
static uint8_t x286 = UINT8_MAX;
int32_t x287 = INT32_MIN;
int8_t x288 = INT8_MAX;
int32_t x289 = INT32_MAX;
int64_t x291 = -45745492101LL;
int32_t x295 = INT32_MAX;
static int8_t x298 = INT8_MIN;
int8_t x299 = INT8_MIN;
int64_t x303 = -1304198LL;
volatile int32_t t75 = 1;
volatile int32_t x308 = INT32_MIN;
uint16_t x311 = 36U;
int8_t x312 = -1;
static int32_t t78 = 6;
static int8_t x317 = INT8_MIN;
int16_t x322 = 28;
uint64_t x327 = 16725504913LLU;
static int16_t x328 = -262;
uint64_t x332 = 111283LLU;
volatile int8_t x333 = INT8_MIN;
int32_t x335 = INT32_MAX;
uint64_t x338 = 28LLU;
static int8_t x345 = 6;
int32_t x356 = -1;
int64_t x360 = INT64_MIN;
static int32_t x361 = -1;
volatile int32_t t93 = 400546;
int32_t t94 = 44;
uint16_t x396 = UINT16_MAX;
int16_t x397 = INT16_MIN;


void f0(void) {
	uint8_t x1 = 7U;
	static uint16_t x2 = UINT16_MAX;
	int64_t x3 = INT64_MIN;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 215;

	t0 = ((x1<x2)-(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x7 = UINT8_MAX;
	volatile uint64_t x8 = 16401219761019LLU;
	static int32_t t1 = 1;

	t1 = ((x5<x6)-(x7<x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile uint8_t x10 = 15U;
	static int64_t x11 = 97028236601591LL;
	int8_t x12 = 30;
	volatile int32_t t2 = 473;

	t2 = ((x9<x10)-(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = INT8_MIN;

	t3 = ((x13<x14)-(x15<x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	uint16_t x18 = UINT16_MAX;
	uint8_t x19 = 37U;
	static volatile uint32_t x20 = 647327469U;

	t4 = ((x17<x18)-(x19<x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x23 = 86U;
	int64_t x24 = -874255570148LL;

	t5 = ((x21<x22)-(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint8_t x26 = 108U;
	uint64_t x27 = UINT64_MAX;
	int32_t t6 = -106460523;

	t6 = ((x25<x26)-(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = -1;
	static int64_t x30 = -1LL;
	volatile int16_t x31 = -18;
	volatile int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 387554529;

	t7 = ((x29<x30)-(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint32_t x34 = 185136343U;
	int64_t x35 = INT64_MAX;
	int32_t t8 = -2781593;

	t8 = ((x33<x34)-(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	volatile int32_t x38 = -1;
	int64_t x40 = -3LL;
	static volatile int32_t t9 = -27891502;

	t9 = ((x37<x38)-(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -745;
	int64_t x43 = INT64_MIN;
	static uint8_t x44 = 5U;
	int32_t t10 = 10;

	t10 = ((x41<x42)-(x43<x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 3052181805802688LL;
	volatile int64_t x46 = INT64_MIN;
	uint8_t x47 = UINT8_MAX;
	uint32_t x48 = 59140U;
	int32_t t11 = 7;

	t11 = ((x45<x46)-(x47<x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 56;
	int64_t x50 = INT64_MIN;
	uint8_t x51 = 1U;
	uint64_t x52 = UINT64_MAX;

	t12 = ((x49<x50)-(x51<x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -9;
	int8_t x54 = INT8_MIN;
	int64_t x56 = -1LL;
	volatile int32_t t13 = 83006430;

	t13 = ((x53<x54)-(x55<x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = 96;
	uint64_t x59 = 16LLU;
	int64_t x60 = -1LL;
	volatile int32_t t14 = 112;

	t14 = ((x57<x58)-(x59<x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x62 = INT32_MIN;
	int32_t x64 = 4;
	int32_t t15 = 11162536;

	t15 = ((x61<x62)-(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MAX;
	static int32_t x68 = INT32_MIN;
	int32_t t16 = 1;

	t16 = ((x65<x66)-(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	uint64_t x72 = UINT64_MAX;
	static int32_t t17 = -910636;

	t17 = ((x69<x70)-(x71<x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	volatile int64_t x74 = INT64_MIN;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = -1;
	volatile int32_t t18 = 62651;

	t18 = ((x73<x74)-(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 1183LLU;
	int64_t x78 = 48773976LL;
	int32_t x79 = INT32_MIN;
	static int32_t x80 = INT32_MIN;

	t19 = ((x77<x78)-(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 19;
	uint32_t x82 = 31721U;
	volatile int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 346038135;

	t20 = ((x81<x82)-(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 28U;
	static volatile uint16_t x86 = UINT16_MAX;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -377;

	t21 = ((x85<x86)-(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MIN;
	int64_t x90 = 1023983123522317LL;
	volatile int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = 119642705;

	t22 = ((x89<x90)-(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 1224865196U;
	static uint64_t x94 = UINT64_MAX;
	static uint64_t x95 = 4756883272390025685LLU;
	int64_t x96 = -201279932426604LL;

	t23 = ((x93<x94)-(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 6014LLU;
	volatile int16_t x98 = -2;
	int32_t x99 = 5;
	int16_t x100 = INT16_MIN;
	int32_t t24 = 6;

	t24 = ((x97<x98)-(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 96U;
	static uint64_t x102 = 528836966LLU;
	static int16_t x104 = INT16_MIN;

	t25 = ((x101<x102)-(x103<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	volatile int32_t x106 = -1;
	static volatile int32_t x107 = INT32_MAX;

	t26 = ((x105<x106)-(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x111 = 84U;
	static int64_t x112 = -1LL;

	t27 = ((x109<x110)-(x111<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 13U;
	int16_t x114 = INT16_MAX;
	int16_t x115 = INT16_MIN;
	volatile uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = 742566;

	t28 = ((x113<x114)-(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	static int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	static volatile int8_t x120 = INT8_MIN;

	t29 = ((x117<x118)-(x119<x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	uint64_t x122 = UINT64_MAX;
	uint32_t x123 = 260921U;
	static int64_t x124 = -1LL;
	volatile int32_t t30 = 2363753;

	t30 = ((x121<x122)-(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MIN;
	uint16_t x126 = UINT16_MAX;
	static int8_t x127 = -3;
	static int8_t x128 = 5;

	t31 = ((x125<x126)-(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	volatile int16_t x131 = 28;
	static volatile int64_t x132 = -1LL;
	static int32_t t32 = 189388;

	t32 = ((x129<x130)-(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = 229;
	int8_t x135 = -1;
	volatile int64_t x136 = 8556669028LL;
	int32_t t33 = 25;

	t33 = ((x133<x134)-(x135<x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	volatile uint64_t x138 = 3355666627974LLU;
	int16_t x139 = 4;
	int64_t x140 = INT64_MAX;
	int32_t t34 = 257638;

	t34 = ((x137<x138)-(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	static uint8_t x142 = UINT8_MAX;
	static uint64_t x143 = 5806908583319LLU;
	int64_t x144 = 312987393603313LL;
	volatile int32_t t35 = 957589662;

	t35 = ((x141<x142)-(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	uint32_t x146 = 122081652U;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -5026497;

	t36 = ((x145<x146)-(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x150 = INT16_MAX;
	int32_t x151 = INT32_MIN;
	volatile int32_t t37 = 1;

	t37 = ((x149<x150)-(x151<x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 13918;
	uint64_t x154 = UINT64_MAX;
	int8_t x155 = INT8_MIN;
	uint64_t x156 = 176267784LLU;

	t38 = ((x153<x154)-(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = 677777;
	int32_t x158 = -1;
	static volatile int16_t x159 = 2;
	int8_t x160 = 8;

	t39 = ((x157<x158)-(x159<x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	volatile int64_t x162 = INT64_MIN;
	static int16_t x164 = -393;

	t40 = ((x161<x162)-(x163<x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = -1;
	int8_t x166 = -1;
	volatile uint16_t x168 = 28U;
	volatile int32_t t41 = 3340097;

	t41 = ((x165<x166)-(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 21U;
	int8_t x170 = -3;
	int32_t x171 = -1;
	volatile int32_t x172 = INT32_MAX;
	int32_t t42 = 212071655;

	t42 = ((x169<x170)-(x171<x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	static volatile int32_t x174 = 147995;
	volatile int8_t x175 = -1;
	uint64_t x176 = UINT64_MAX;
	int32_t t43 = -3622;

	t43 = ((x173<x174)-(x175<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	static int8_t x178 = -1;
	int16_t x179 = 227;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 425814;

	t44 = ((x177<x178)-(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = 1036210U;
	volatile int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MAX;
	volatile int64_t x184 = 512974LL;

	t45 = ((x181<x182)-(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = -1767930285006215LL;
	int32_t x186 = -875;
	int8_t x187 = -1;
	volatile int32_t t46 = -337400452;

	t46 = ((x185<x186)-(x187<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MIN;
	static int8_t x190 = -38;
	static volatile int32_t x192 = INT32_MIN;
	volatile int32_t t47 = 122090;

	t47 = ((x189<x190)-(x191<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x194 = INT64_MIN;
	int64_t x195 = -1LL;
	uint8_t x196 = 44U;
	int32_t t48 = 7;

	t48 = ((x193<x194)-(x195<x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 8U;
	int64_t x198 = INT64_MAX;
	uint16_t x200 = 1231U;
	static int32_t t49 = 30351;

	t49 = ((x197<x198)-(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 2026U;
	static uint64_t x203 = UINT64_MAX;
	int32_t t50 = -1;

	t50 = ((x201<x202)-(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -95;
	uint8_t x206 = 5U;
	int32_t x208 = INT32_MIN;
	int32_t t51 = 118157;

	t51 = ((x205<x206)-(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MIN;
	int64_t x211 = -1LL;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t52 = -5814;

	t52 = ((x209<x210)-(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = 408178LL;
	static int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MIN;
	static int32_t t53 = 15812080;

	t53 = ((x213<x214)-(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x219 = INT64_MIN;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t54 = 1;

	t54 = ((x217<x218)-(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MAX;
	static int64_t x222 = INT64_MIN;
	uint64_t x223 = UINT64_MAX;
	int64_t x224 = -195714385345750747LL;
	volatile int32_t t55 = 218415825;

	t55 = ((x221<x222)-(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	volatile int64_t x226 = INT64_MIN;
	uint64_t x227 = 0LLU;
	int32_t t56 = -10027;

	t56 = ((x225<x226)-(x227<x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MIN;
	static volatile int16_t x231 = INT16_MAX;

	t57 = ((x229<x230)-(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	uint64_t x234 = 20375147215LLU;
	volatile int16_t x236 = INT16_MIN;
	static volatile int32_t t58 = 1523607;

	t58 = ((x233<x234)-(x235<x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = -728706078;
	int32_t x239 = INT32_MAX;
	uint8_t x240 = 10U;
	int32_t t59 = -2;

	t59 = ((x237<x238)-(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x241 = 39U;
	volatile int32_t x242 = -1;
	static uint64_t x244 = UINT64_MAX;

	t60 = ((x241<x242)-(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = UINT32_MAX;
	int8_t x247 = -1;

	t61 = ((x245<x246)-(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 11696033LLU;
	uint8_t x251 = UINT8_MAX;
	static uint32_t x252 = UINT32_MAX;
	static int32_t t62 = 1132;

	t62 = ((x249<x250)-(x251<x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MIN;
	volatile int32_t t63 = -35308;

	t63 = ((x253<x254)-(x255<x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	int64_t x258 = INT64_MIN;
	volatile uint8_t x259 = UINT8_MAX;
	int8_t x260 = INT8_MAX;
	int32_t t64 = 534734998;

	t64 = ((x257<x258)-(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 57U;
	int64_t x262 = INT64_MIN;
	volatile int8_t x263 = -1;
	int64_t x264 = -1LL;
	int32_t t65 = -1985767;

	t65 = ((x261<x262)-(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	static volatile int16_t x266 = -4;
	uint16_t x267 = 470U;
	uint64_t x268 = 57764069028077LLU;
	int32_t t66 = 129845027;

	t66 = ((x265<x266)-(x267<x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = 986847065U;
	volatile int8_t x271 = INT8_MIN;
	int64_t x272 = 7937934459LL;
	volatile int32_t t67 = -814563;

	t67 = ((x269<x270)-(x271<x272));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	int32_t x274 = INT32_MAX;
	volatile uint8_t x275 = 4U;
	int64_t x276 = -124742158209227LL;
	volatile int32_t t68 = 198586328;

	t68 = ((x273<x274)-(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = 28301U;
	int32_t x278 = 681;
	int8_t x279 = INT8_MIN;
	int8_t x280 = INT8_MIN;
	volatile int32_t t69 = 102;

	t69 = ((x277<x278)-(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = INT16_MIN;
	uint8_t x284 = 0U;

	t70 = ((x281<x282)-(x283<x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t t71 = 0;

	t71 = ((x285<x286)-(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = -1034;
	static uint8_t x292 = 1U;
	int32_t t72 = -398092;

	t72 = ((x289<x290)-(x291<x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x293 = 15605U;
	static int8_t x294 = INT8_MAX;
	int16_t x296 = -1;
	volatile int32_t t73 = -126996;

	t73 = ((x293<x294)-(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	uint16_t x300 = UINT16_MAX;
	static volatile int32_t t74 = 0;

	t74 = ((x297<x298)-(x299<x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 0LL;
	volatile int8_t x302 = -1;
	int64_t x304 = INT64_MIN;

	t75 = ((x301<x302)-(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int64_t x306 = 45667821764LL;
	int8_t x307 = INT8_MAX;
	int32_t t76 = 533;

	t76 = ((x305<x306)-(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 1134U;
	int8_t x310 = INT8_MIN;
	volatile int32_t t77 = -9553596;

	t77 = ((x309<x310)-(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	volatile int8_t x314 = 1;
	int16_t x315 = -1;
	int64_t x316 = INT64_MAX;

	t78 = ((x313<x314)-(x315<x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = 688129026;
	static uint16_t x319 = 14799U;
	uint32_t x320 = 3226584U;
	volatile int32_t t79 = -2;

	t79 = ((x317<x318)-(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint32_t x323 = 497255U;
	static int8_t x324 = -1;
	volatile int32_t t80 = -23;

	t80 = ((x321<x322)-(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	static int64_t x326 = -487LL;
	int32_t t81 = -1;

	t81 = ((x325<x326)-(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = 38559893947126LLU;
	volatile int16_t x330 = 4655;
	volatile int8_t x331 = INT8_MIN;
	static int32_t t82 = 36804473;

	t82 = ((x329<x330)-(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = INT64_MAX;
	uint8_t x336 = 1U;
	volatile int32_t t83 = 13;

	t83 = ((x333<x334)-(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = -16;
	uint8_t x339 = UINT8_MAX;
	int64_t x340 = INT64_MIN;
	int32_t t84 = 1280173;

	t84 = ((x337<x338)-(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	int64_t x342 = -101LL;
	volatile uint32_t x343 = 19190899U;
	int16_t x344 = -1;
	int32_t t85 = 467;

	t85 = ((x341<x342)-(x343<x344));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x346 = -2186LL;
	volatile uint32_t x347 = 101U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 2991;

	t86 = ((x345<x346)-(x347<x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MAX;
	int32_t x351 = -175258;
	volatile uint16_t x352 = UINT16_MAX;
	int32_t t87 = 7489570;

	t87 = ((x349<x350)-(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	int8_t x354 = INT8_MAX;
	int64_t x355 = INT64_MIN;
	volatile int32_t t88 = 123386;

	t88 = ((x353<x354)-(x355<x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = -356473507556205LL;
	int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MIN;
	volatile int32_t t89 = 871;

	t89 = ((x357<x358)-(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x362 = 1019;
	int32_t x363 = INT32_MAX;
	uint8_t x364 = 4U;
	volatile int32_t t90 = -22095;

	t90 = ((x361<x362)-(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 26U;
	int16_t x366 = -1;
	uint8_t x367 = 11U;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = -36;

	t91 = ((x365<x366)-(x367<x368));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	uint64_t x370 = 0LLU;
	volatile int16_t x371 = INT16_MIN;
	uint16_t x372 = UINT16_MAX;
	int32_t t92 = -742;

	t92 = ((x369<x370)-(x371<x372));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x373 = INT64_MIN;
	uint64_t x374 = 884057693852933LLU;
	int32_t x375 = 3610864;
	volatile int32_t x376 = 15291573;

	t93 = ((x373<x374)-(x375<x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 53U;
	int32_t x378 = 161713798;
	int8_t x379 = INT8_MIN;
	int64_t x380 = 57400967867LL;

	t94 = ((x377<x378)-(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = -1;
	uint8_t x382 = 3U;
	static volatile uint64_t x383 = 1887486965612LLU;
	int32_t x384 = INT32_MAX;
	static volatile int32_t t95 = -102949;

	t95 = ((x381<x382)-(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = UINT8_MAX;
	int32_t x386 = -135490;
	uint8_t x387 = 6U;
	int64_t x388 = INT64_MAX;
	static volatile int32_t t96 = 28;

	t96 = ((x385<x386)-(x387<x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	uint16_t x390 = 668U;
	static uint8_t x391 = 1U;
	int16_t x392 = INT16_MIN;
	int32_t t97 = -32178490;

	t97 = ((x389<x390)-(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = -15729;
	static int32_t x394 = 1504876;
	int32_t x395 = INT32_MIN;
	volatile int32_t t98 = -2114;

	t98 = ((x393<x394)-(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = -744;
	static int32_t x399 = 4829003;
	uint8_t x400 = 91U;
	int32_t t99 = 442174;

	t99 = ((x397<x398)-(x399<x400));

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

