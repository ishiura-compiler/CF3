#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MAX;
int8_t x10 = 3;
int8_t x16 = INT8_MIN;
int32_t x18 = 3870454;
uint8_t x24 = UINT8_MAX;
int8_t x35 = INT8_MIN;
static int32_t t8 = -240;
static int32_t t9 = -455;
static int64_t x47 = INT64_MAX;
static volatile int64_t x50 = -1219198293LL;
static int8_t x59 = -1;
volatile int32_t x65 = 1;
volatile int8_t x66 = -1;
static volatile int32_t x76 = INT32_MIN;
static volatile int32_t t18 = 12927905;
int64_t x77 = INT64_MAX;
static uint8_t x83 = 25U;
int64_t t20 = INT64_MAX;
uint8_t x85 = 70U;
int32_t t21 = -3;
static uint8_t x95 = 23U;
volatile uint64_t t23 = UINT64_MAX;
int32_t t24 = -128333;
int16_t x101 = INT16_MIN;
static int32_t t26 = 1;
int64_t x109 = -1LL;
int32_t t29 = -2431379;
int32_t x127 = INT32_MIN;
int32_t x129 = -1;
int16_t x134 = -1;
int64_t x136 = INT64_MIN;
uint16_t x137 = 24901U;
volatile int32_t t33 = 15;
static int32_t x141 = 79700526;
volatile int32_t t37 = 713828275;
int64_t x159 = 127616LL;
static int32_t x164 = -1;
volatile uint8_t x166 = 48U;
uint32_t x168 = 176U;
static uint64_t x173 = UINT64_MAX;
int32_t x193 = -3;
static uint8_t x196 = 1U;
int32_t t47 = 1038748;
uint64_t x198 = 1017305973043601LLU;
static uint32_t x203 = UINT32_MAX;
uint32_t x209 = 525U;
uint8_t x211 = 15U;
uint32_t t51 = 352311U;
int64_t x213 = 45858507LL;
volatile int32_t t54 = INT32_MAX;
static uint16_t x238 = 8787U;
int8_t x239 = INT8_MIN;
uint64_t t58 = UINT64_MAX;
int16_t x250 = -404;
volatile int32_t t61 = -300560;
static volatile uint32_t x253 = 2500387U;
uint16_t x254 = 0U;
uint32_t x269 = 16207U;
int8_t x272 = INT8_MAX;
uint16_t x278 = 0U;
static volatile uint32_t x279 = 0U;
int32_t t68 = 232286064;
uint64_t x282 = 42285LLU;
volatile uint32_t x284 = 1U;
uint16_t x286 = UINT16_MAX;
static int64_t t73 = -2212904LL;
int64_t x307 = INT64_MIN;
volatile int16_t x308 = -15927;
int32_t x313 = 735;
volatile int16_t x318 = INT16_MIN;
int32_t x320 = 3191;
uint8_t x324 = 30U;
int16_t x326 = -1;
int16_t x329 = INT16_MIN;
static uint8_t x335 = 15U;
volatile int32_t t82 = INT32_MAX;
volatile uint64_t x344 = 5709783822251LLU;
static int32_t t84 = 31372;
int32_t x349 = 14516;
static int64_t x352 = INT64_MIN;
int32_t t86 = 3420155;
uint32_t x359 = 1080U;
int64_t t88 = 114LL;
uint64_t x369 = 1825769868795906250LLU;
int16_t x372 = -1;
volatile int64_t x375 = INT64_MIN;
volatile int8_t x382 = -3;
uint64_t x398 = 23LLU;
static int32_t t96 = 1361;
volatile int32_t t97 = 16181;


void f0(void) {
	uint64_t x1 = 505472641990LLU;
	static int8_t x2 = -24;
	uint32_t x3 = 298879U;
	static int64_t x4 = INT64_MIN;
	volatile uint64_t t0 = 1LLU;

	t0 = (x1+(x2<=(x3<x4)));

	if (t0 != 505472641991LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 0U;
	int32_t x6 = 3506;
	static volatile uint8_t x8 = UINT8_MAX;
	volatile uint32_t t1 = 36058919U;

	t1 = (x5+(x6<=(x7<x8)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	volatile int64_t x11 = -23290993519841LL;
	int32_t x12 = -1;
	static volatile int32_t t2 = INT32_MAX;

	t2 = (x9+(x10<=(x11<x12)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	int16_t x14 = -1;
	uint32_t x15 = UINT32_MAX;
	volatile int32_t t3 = -60;

	t3 = (x13+(x14<=(x15<x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x17 = UINT16_MAX;
	volatile int64_t x19 = -1LL;
	volatile uint16_t x20 = 17296U;
	volatile int32_t t4 = 1;

	t4 = (x17+(x18<=(x19<x20)));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x21 = 42868U;
	int64_t x22 = INT64_MIN;
	int8_t x23 = INT8_MIN;
	uint32_t t5 = 700U;

	t5 = (x21+(x22<=(x23<x24)));

	if (t5 != 42869U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = 125;

	t6 = (x25+(x26<=(x27<x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	static int8_t x30 = -1;
	int64_t x31 = INT64_MAX;
	volatile int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 105918;

	t7 = (x29+(x30<=(x31<x32)));

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -2;
	int64_t x34 = INT64_MAX;
	volatile int16_t x36 = 329;

	t8 = (x33+(x34<=(x35<x36)));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = 30;
	static uint16_t x38 = 80U;
	int32_t x39 = INT32_MAX;
	uint64_t x40 = 60005267324016LLU;

	t9 = (x37+(x38<=(x39<x40)));

	if (t9 != 30) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int8_t x42 = -1;
	int8_t x43 = -1;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t10 = -47174;

	t10 = (x41+(x42<=(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 1U;
	uint8_t x46 = 3U;
	int32_t x48 = INT32_MIN;
	static int32_t t11 = 40740;

	t11 = (x45+(x46<=(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = UINT32_MAX;
	int64_t t12 = 1296662198LL;

	t12 = (x49+(x50<=(x51<x52)));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int64_t x54 = -1LL;
	volatile uint8_t x55 = UINT8_MAX;
	uint8_t x56 = 65U;
	static volatile int32_t t13 = 58;

	t13 = (x53+(x54<=(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 6688561362605987LLU;
	volatile int8_t x58 = -20;
	int16_t x60 = 1;
	volatile uint64_t t14 = 2083908258563LLU;

	t14 = (x57+(x58<=(x59<x60)));

	if (t14 != 6688561362605988LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	volatile int16_t x62 = INT16_MIN;
	int8_t x63 = -1;
	static int64_t x64 = INT64_MIN;
	volatile int64_t t15 = -55850197156494LL;

	t15 = (x61+(x62<=(x63<x64)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x67 = 8;
	int32_t x68 = INT32_MIN;
	int32_t t16 = -135915;

	t16 = (x65+(x66<=(x67<x68)));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint64_t x70 = 800LLU;
	static int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;
	uint64_t t17 = UINT64_MAX;

	t17 = (x69+(x70<=(x71<x72)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int64_t x74 = INT64_MIN;
	int8_t x75 = 1;

	t18 = (x73+(x74<=(x75<x76)));

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 47U;
	volatile int8_t x79 = INT8_MIN;
	uint8_t x80 = 61U;
	static volatile int64_t t19 = INT64_MAX;

	t19 = (x77+(x78<=(x79<x80)));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	static uint32_t x82 = UINT32_MAX;
	int8_t x84 = 47;

	t20 = (x81+(x82<=(x83<x84)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = INT8_MIN;
	uint64_t x87 = 341549LLU;
	int32_t x88 = -786;

	t21 = (x85+(x86<=(x87<x88)));

	if (t21 != 71) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = 509;
	uint16_t x90 = 725U;
	int8_t x91 = INT8_MAX;
	uint64_t x92 = 125914260450LLU;
	int32_t t22 = 1083911;

	t22 = (x89+(x90<=(x91<x92)));

	if (t22 != 509) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x94 = 2765;
	uint8_t x96 = 13U;

	t23 = (x93+(x94<=(x95<x96)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1925;
	int32_t x98 = INT32_MAX;
	volatile int16_t x99 = INT16_MAX;
	static uint32_t x100 = UINT32_MAX;

	t24 = (x97+(x98<=(x99<x100)));

	if (t24 != -1925) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 1U;
	uint32_t x103 = 19U;
	int64_t x104 = -8LL;
	static int32_t t25 = 0;

	t25 = (x101+(x102<=(x103<x104)));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	volatile int64_t x106 = -1LL;
	int16_t x107 = 241;
	uint64_t x108 = 7400705689498LLU;

	t26 = (x105+(x106<=(x107<x108)));

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 1;
	int64_t x111 = -7299469081794730LL;
	volatile int32_t x112 = INT32_MIN;
	volatile int64_t t27 = 18LL;

	t27 = (x109+(x110<=(x111<x112)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	volatile int8_t x114 = INT8_MAX;
	static int64_t x115 = 961LL;
	int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 91966986;

	t28 = (x113+(x114<=(x115<x116)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = INT8_MIN;
	int64_t x122 = -1LL;
	int8_t x123 = -1;
	int64_t x124 = INT64_MIN;

	t29 = (x121+(x122<=(x123<x124)));

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x125 = 27U;
	int8_t x126 = -12;
	volatile int16_t x128 = INT16_MIN;
	static int32_t t30 = 6016587;

	t30 = (x125+(x126<=(x127<x128)));

	if (t30 != 28) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x130 = 299;
	int64_t x131 = INT64_MIN;
	uint32_t x132 = 36U;
	static int32_t t31 = -3873;

	t31 = (x129+(x130<=(x131<x132)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	int16_t x135 = -4187;
	static volatile int32_t t32 = 12083878;

	t32 = (x133+(x134<=(x135<x136)));

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x138 = -1;
	int8_t x139 = INT8_MAX;
	uint32_t x140 = UINT32_MAX;

	t33 = (x137+(x138<=(x139<x140)));

	if (t33 != 24902) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x142 = 3U;
	uint16_t x143 = 8U;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t34 = 4;

	t34 = (x141+(x142<=(x143<x144)));

	if (t34 != 79700526) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x145 = UINT8_MAX;
	int64_t x146 = INT64_MIN;
	volatile int64_t x147 = INT64_MIN;
	uint64_t x148 = 13180903220746274LLU;
	volatile int32_t t35 = 3240611;

	t35 = (x145+(x146<=(x147<x148)));

	if (t35 != 256) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 46;
	int32_t x150 = -5;
	static uint32_t x151 = 2U;
	volatile int8_t x152 = INT8_MIN;
	volatile int32_t t36 = -6;

	t36 = (x149+(x150<=(x151<x152)));

	if (t36 != 47) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x153 = 0U;
	volatile uint16_t x154 = 104U;
	uint16_t x155 = 14271U;
	volatile int32_t x156 = -74;

	t37 = (x153+(x154<=(x155<x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -510591;
	int16_t x158 = INT16_MIN;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t38 = -44777257;

	t38 = (x157+(x158<=(x159<x160)));

	if (t38 != -510590) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = INT64_MAX;
	int32_t x162 = 241709;
	int32_t x163 = INT32_MIN;
	static int64_t t39 = INT64_MAX;

	t39 = (x161+(x162<=(x163<x164)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 26046U;
	int32_t x167 = -2018834;
	int32_t t40 = 5895;

	t40 = (x165+(x166<=(x167<x168)));

	if (t40 != 26046) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MAX;
	int64_t x170 = 1697105LL;
	volatile int8_t x171 = INT8_MAX;
	volatile uint64_t x172 = 5336127686LLU;
	volatile int64_t t41 = INT64_MAX;

	t41 = (x169+(x170<=(x171<x172)));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x174 = UINT16_MAX;
	volatile uint64_t x175 = UINT64_MAX;
	uint32_t x176 = 14U;
	uint64_t t42 = UINT64_MAX;

	t42 = (x173+(x174<=(x175<x176)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x177 = INT32_MIN;
	int8_t x178 = INT8_MIN;
	volatile int64_t x179 = INT64_MIN;
	int32_t x180 = -76;
	volatile int32_t t43 = -2512;

	t43 = (x177+(x178<=(x179<x180)));

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x181 = 0U;
	volatile int8_t x182 = -1;
	int64_t x183 = INT64_MAX;
	uint64_t x184 = 83686092286225LLU;
	volatile int32_t t44 = 29;

	t44 = (x181+(x182<=(x183<x184)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x185 = 0;
	volatile int32_t x186 = INT32_MAX;
	volatile int8_t x187 = INT8_MIN;
	volatile uint16_t x188 = 1497U;
	volatile int32_t t45 = -863;

	t45 = (x185+(x186<=(x187<x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = -1LL;
	int16_t x190 = INT16_MIN;
	int8_t x191 = 4;
	int32_t x192 = 9493780;
	volatile int64_t t46 = -6630772LL;

	t46 = (x189+(x190<=(x191<x192)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x194 = INT8_MAX;
	uint64_t x195 = UINT64_MAX;

	t47 = (x193+(x194<=(x195<x196)));

	if (t47 != -3) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 20U;
	uint16_t x199 = 11U;
	volatile int8_t x200 = INT8_MIN;
	int32_t t48 = -326;

	t48 = (x197+(x198<=(x199<x200)));

	if (t48 != 20) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = 38208127605LLU;
	static int16_t x202 = INT16_MAX;
	int8_t x204 = -1;
	uint64_t t49 = 234108054996950605LLU;

	t49 = (x201+(x202<=(x203<x204)));

	if (t49 != 38208127605LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x205 = 6376874426LLU;
	int16_t x206 = INT16_MAX;
	int16_t x207 = INT16_MAX;
	static int16_t x208 = 835;
	volatile uint64_t t50 = 128404860099LLU;

	t50 = (x205+(x206<=(x207<x208)));

	if (t50 != 6376874426LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = 913977;
	static int16_t x212 = 21;

	t51 = (x209+(x210<=(x211<x212)));

	if (t51 != 525U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x214 = INT32_MIN;
	volatile uint32_t x215 = UINT32_MAX;
	int32_t x216 = -1;
	int64_t t52 = 760916926190LL;

	t52 = (x213+(x214<=(x215<x216)));

	if (t52 != 45858508LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = -31469;
	int32_t x218 = -745;
	volatile uint64_t x219 = 15604858LLU;
	volatile int32_t x220 = INT32_MAX;
	int32_t t53 = -35151529;

	t53 = (x217+(x218<=(x219<x220)));

	if (t53 != -31468) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x221 = INT32_MAX;
	uint8_t x222 = 15U;
	static uint32_t x223 = 2045740U;
	static volatile int64_t x224 = INT64_MIN;

	t54 = (x221+(x222<=(x223<x224)));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x225 = INT32_MIN;
	static int16_t x226 = -2268;
	static int64_t x227 = INT64_MIN;
	int16_t x228 = INT16_MAX;
	volatile int32_t t55 = -223026091;

	t55 = (x225+(x226<=(x227<x228)));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MAX;
	uint64_t x231 = 0LLU;
	static uint64_t x232 = UINT64_MAX;
	volatile int32_t t56 = 0;

	t56 = (x229+(x230<=(x231<x232)));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 43382LLU;
	uint64_t x234 = 743616LLU;
	uint8_t x235 = UINT8_MAX;
	uint64_t x236 = 10477137102858LLU;
	volatile uint64_t t57 = 485103593240998LLU;

	t57 = (x233+(x234<=(x235<x236)));

	if (t57 != 43382LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x237 = UINT64_MAX;
	int16_t x240 = 1;

	t58 = (x237+(x238<=(x239<x240)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MIN;
	volatile uint8_t x242 = 117U;
	static int16_t x243 = 2;
	uint64_t x244 = 56301LLU;
	int32_t t59 = -4034553;

	t59 = (x241+(x242<=(x243<x244)));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x245 = UINT16_MAX;
	volatile uint8_t x246 = 94U;
	volatile int8_t x247 = INT8_MIN;
	uint64_t x248 = UINT64_MAX;
	static volatile int32_t t60 = -185081;

	t60 = (x245+(x246<=(x247<x248)));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MIN;
	int32_t x251 = -1;
	int32_t x252 = -131;

	t61 = (x249+(x250<=(x251<x252)));

	if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x255 = 1U;
	int32_t x256 = INT32_MAX;
	volatile uint32_t t62 = 29303U;

	t62 = (x253+(x254<=(x255<x256)));

	if (t62 != 2500388U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MAX;
	int16_t x258 = -3312;
	volatile uint64_t x259 = UINT64_MAX;
	int16_t x260 = 1;
	int32_t t63 = 629940254;

	t63 = (x257+(x258<=(x259<x260)));

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = -1;
	uint32_t x262 = 2U;
	int8_t x263 = INT8_MAX;
	volatile uint32_t x264 = 8167888U;
	int32_t t64 = -10495267;

	t64 = (x261+(x262<=(x263<x264)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = -2;
	int32_t x267 = 7527394;
	int8_t x268 = INT8_MIN;
	int32_t t65 = -8145;

	t65 = (x265+(x266<=(x267<x268)));

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x270 = -1;
	int64_t x271 = INT64_MAX;
	volatile uint32_t t66 = 46359U;

	t66 = (x269+(x270<=(x271<x272)));

	if (t66 != 16208U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = 132247846835LL;
	uint32_t x274 = 114U;
	int16_t x275 = -1;
	int32_t x276 = INT32_MIN;
	volatile int64_t t67 = 3464387LL;

	t67 = (x273+(x274<=(x275<x276)));

	if (t67 != 132247846835LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = -1;
	uint32_t x280 = 1U;

	t68 = (x277+(x278<=(x279<x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x281 = 107417410LLU;
	uint16_t x283 = UINT16_MAX;
	uint64_t t69 = 9LLU;

	t69 = (x281+(x282<=(x283<x284)));

	if (t69 != 107417410LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x285 = 34587;
	int32_t x287 = 22468475;
	int8_t x288 = -1;
	volatile int32_t t70 = -1330;

	t70 = (x285+(x286<=(x287<x288)));

	if (t70 != 34587) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x289 = INT64_MIN;
	volatile uint16_t x290 = 761U;
	int8_t x291 = -6;
	uint8_t x292 = 0U;
	volatile int64_t t71 = INT64_MIN;

	t71 = (x289+(x290<=(x291<x292)));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = 30469U;
	int32_t x294 = -1;
	int64_t x295 = INT64_MIN;
	volatile uint32_t x296 = UINT32_MAX;
	volatile int32_t t72 = -603;

	t72 = (x293+(x294<=(x295<x296)));

	if (t72 != 30470) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = -72420803634371648LL;
	uint16_t x298 = 22872U;
	int16_t x299 = -7153;
	volatile int8_t x300 = INT8_MIN;

	t73 = (x297+(x298<=(x299<x300)));

	if (t73 != -72420803634371648LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = -3578751590666LL;
	int16_t x302 = INT16_MAX;
	uint16_t x303 = 11950U;
	int16_t x304 = INT16_MIN;
	int64_t t74 = -25475LL;

	t74 = (x301+(x302<=(x303<x304)));

	if (t74 != -3578751590666LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = 4337;
	volatile int64_t x306 = -1LL;
	int32_t t75 = -22981;

	t75 = (x305+(x306<=(x307<x308)));

	if (t75 != 4338) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = 7;
	static volatile uint64_t x310 = UINT64_MAX;
	int64_t x311 = INT64_MAX;
	uint32_t x312 = UINT32_MAX;
	static volatile int32_t t76 = 0;

	t76 = (x309+(x310<=(x311<x312)));

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x314 = 0U;
	volatile int64_t x315 = 0LL;
	static volatile int32_t x316 = -255219;
	int32_t t77 = 38376431;

	t77 = (x313+(x314<=(x315<x316)));

	if (t77 != 736) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x317 = 1385197097U;
	int8_t x319 = INT8_MIN;
	uint32_t t78 = 13U;

	t78 = (x317+(x318<=(x319<x320)));

	if (t78 != 1385197098U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = 0;
	volatile uint8_t x322 = 1U;
	static uint32_t x323 = UINT32_MAX;
	int32_t t79 = -985822;

	t79 = (x321+(x322<=(x323<x324)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x325 = INT64_MIN;
	volatile int64_t x327 = INT64_MAX;
	int32_t x328 = -44073;
	static int64_t t80 = 2369913377540558065LL;

	t80 = (x325+(x326<=(x327<x328)));

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x330 = INT32_MAX;
	static volatile int64_t x331 = -5205566LL;
	int32_t x332 = INT32_MIN;
	volatile int32_t t81 = 56066548;

	t81 = (x329+(x330<=(x331<x332)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x333 = INT32_MAX;
	uint16_t x334 = 1872U;
	static int64_t x336 = INT64_MAX;

	t82 = (x333+(x334<=(x335<x336)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x337 = INT16_MIN;
	static uint64_t x338 = 3051607LLU;
	uint8_t x339 = UINT8_MAX;
	volatile int8_t x340 = INT8_MIN;
	int32_t t83 = -867;

	t83 = (x337+(x338<=(x339<x340)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x341 = -428;
	static volatile int32_t x342 = INT32_MIN;
	uint16_t x343 = 2U;

	t84 = (x341+(x342<=(x343<x344)));

	if (t84 != -427) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MIN;
	volatile int8_t x346 = -1;
	volatile uint8_t x347 = 4U;
	int32_t x348 = INT32_MIN;
	int32_t t85 = 828466184;

	t85 = (x345+(x346<=(x347<x348)));

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x350 = UINT64_MAX;
	static int64_t x351 = INT64_MIN;

	t86 = (x349+(x350<=(x351<x352)));

	if (t86 != 14516) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x357 = 75387367LLU;
	int16_t x358 = 35;
	int32_t x360 = 1;
	static volatile uint64_t t87 = 310262LLU;

	t87 = (x357+(x358<=(x359<x360)));

	if (t87 != 75387367LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = -8075626321901LL;
	int64_t x362 = INT64_MIN;
	uint8_t x363 = 1U;
	static volatile int16_t x364 = 797;

	t88 = (x361+(x362<=(x363<x364)));

	if (t88 != -8075626321900LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = 0U;
	int8_t x366 = INT8_MIN;
	uint16_t x367 = 19U;
	static int64_t x368 = INT64_MIN;
	volatile int32_t t89 = 106006647;

	t89 = (x365+(x366<=(x367<x368)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x370 = 4237486236958320LLU;
	volatile uint16_t x371 = 2U;
	uint64_t t90 = 377732906503556787LLU;

	t90 = (x369+(x370<=(x371<x372)));

	if (t90 != 1825769868795906250LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x373 = 612U;
	int16_t x374 = -13;
	int8_t x376 = INT8_MIN;
	static volatile uint32_t t91 = 3443444U;

	t91 = (x373+(x374<=(x375<x376)));

	if (t91 != 613U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = INT32_MIN;
	int16_t x378 = -25;
	int32_t x379 = 90360655;
	static int32_t x380 = 71224;
	volatile int32_t t92 = -68069665;

	t92 = (x377+(x378<=(x379<x380)));

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = INT8_MIN;
	int16_t x383 = -14120;
	int16_t x384 = INT16_MIN;
	int32_t t93 = -6994023;

	t93 = (x381+(x382<=(x383<x384)));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x389 = 3U;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = 6U;
	static uint64_t x392 = 1LLU;
	uint32_t t94 = 106846026U;

	t94 = (x389+(x390<=(x391<x392)));

	if (t94 != 4U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = -9;
	int16_t x394 = -3724;
	uint16_t x395 = 2U;
	static int16_t x396 = INT16_MAX;
	int32_t t95 = 72230;

	t95 = (x393+(x394<=(x395<x396)));

	if (t95 != -8) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x397 = 10U;
	static volatile int16_t x399 = -1;
	int16_t x400 = -1;

	t96 = (x397+(x398<=(x399<x400)));

	if (t96 != 10) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MAX;
	int16_t x402 = INT16_MIN;
	int64_t x403 = -883LL;
	static int32_t x404 = INT32_MIN;

	t97 = (x401+(x402<=(x403<x404)));

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = -1LL;
	int16_t x406 = INT16_MIN;
	int64_t x407 = INT64_MIN;
	static int64_t x408 = INT64_MIN;
	int64_t t98 = -109315375405545280LL;

	t98 = (x405+(x406<=(x407<x408)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = -1881344472267869430LL;
	volatile int16_t x410 = -3;
	int32_t x411 = INT32_MIN;
	int32_t x412 = -4;
	volatile int64_t t99 = 0LL;

	t99 = (x409+(x410<=(x411<x412)));

	if (t99 != -1881344472267869429LL) { NG(); } else { ; }
	
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

