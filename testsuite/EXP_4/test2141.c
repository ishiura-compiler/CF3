#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x15 = INT64_MAX;
int64_t x16 = INT64_MIN;
static int16_t x22 = INT16_MIN;
int8_t x28 = 1;
int16_t x29 = INT16_MIN;
volatile int32_t t7 = -162383;
uint8_t x35 = UINT8_MAX;
int16_t x36 = INT16_MIN;
uint8_t x38 = UINT8_MAX;
volatile int32_t t13 = -25;
uint32_t x57 = UINT32_MAX;
uint64_t x62 = UINT64_MAX;
int16_t x63 = -284;
uint64_t x64 = 7195077727791LLU;
static int32_t t15 = 19211967;
static int32_t t19 = 1824622;
int32_t t23 = -2069847;
int16_t x97 = -191;
int16_t x99 = -1;
int32_t x100 = 220896;
volatile int32_t t24 = -160163;
int32_t x102 = INT32_MIN;
static uint64_t x103 = UINT64_MAX;
static int8_t x109 = -14;
static int8_t x112 = -1;
int32_t x121 = -1;
uint64_t x122 = UINT64_MAX;
int8_t x123 = -56;
static uint8_t x134 = UINT8_MAX;
int32_t x135 = -1;
volatile int32_t t33 = -4508;
int64_t x139 = -1LL;
static int64_t x142 = INT64_MIN;
int8_t x144 = -1;
int16_t x145 = -1;
int64_t x155 = -1LL;
int32_t x157 = INT32_MAX;
uint8_t x161 = UINT8_MAX;
uint64_t x162 = 133479854631472LLU;
int64_t x164 = INT64_MIN;
volatile uint64_t x176 = UINT64_MAX;
int32_t x178 = INT32_MIN;
int32_t t44 = 2025;
static int32_t x183 = INT32_MAX;
int16_t x186 = INT16_MIN;
static volatile int32_t x188 = INT32_MAX;
volatile int32_t t46 = 31;
int16_t x189 = -1755;
uint8_t x192 = UINT8_MAX;
int32_t t47 = -456;
uint8_t x194 = UINT8_MAX;
volatile int64_t x195 = INT64_MAX;
volatile int32_t x199 = INT32_MIN;
int32_t t49 = 33303059;
int64_t x203 = INT64_MAX;
int8_t x204 = 16;
int32_t x210 = INT32_MIN;
int64_t x211 = INT64_MIN;
uint32_t x214 = 0U;
int64_t x218 = INT64_MIN;
static volatile int32_t t55 = -436;
uint8_t x225 = UINT8_MAX;
int16_t x226 = INT16_MIN;
int32_t t57 = -201827;
int16_t x237 = INT16_MAX;
int64_t x243 = 19LL;
int8_t x247 = INT8_MIN;
int64_t x261 = -1LL;
int64_t x262 = INT64_MIN;
volatile int8_t x264 = -2;
static int32_t x268 = INT32_MIN;
uint64_t x269 = UINT64_MAX;
volatile int32_t t68 = 21251;
uint8_t x277 = 3U;
static volatile int32_t t69 = 21519;
uint8_t x281 = UINT8_MAX;
int32_t t70 = 55473;
int8_t x288 = -25;
static volatile int64_t x291 = INT64_MAX;
static volatile int64_t x297 = -6032649780471LL;
volatile int32_t x298 = INT32_MAX;
static uint32_t x300 = 1807591735U;
volatile int32_t t74 = -843333;
int16_t x308 = -1;
int32_t t76 = 20;
static volatile int8_t x316 = -5;
volatile int32_t t79 = 13573;
volatile int16_t x322 = INT16_MAX;
int16_t x324 = -14;
static uint8_t x327 = UINT8_MAX;
static int16_t x328 = INT16_MIN;
volatile int32_t x340 = -1;
volatile int32_t t84 = 5975;
volatile int8_t x350 = -1;
static int16_t x353 = INT16_MIN;
int64_t x356 = INT64_MIN;
int32_t x357 = INT32_MAX;
static uint16_t x366 = UINT16_MAX;
uint32_t x371 = 2377920U;
uint8_t x372 = UINT8_MAX;
uint16_t x375 = 0U;
static uint16_t x378 = 1345U;
int32_t t94 = 0;
static int16_t x381 = -1;
int16_t x389 = -1;


void f0(void) {
	int8_t x1 = 1;
	int16_t x2 = INT16_MIN;
	static uint32_t x3 = 6U;
	int64_t x4 = INT64_MIN;
	static int32_t t0 = 181;

	t0 = (x1<(x2<(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = -50968208;
	volatile uint16_t x7 = 798U;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 253298912;

	t1 = (x5<(x6<(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	int64_t x10 = 8613457745572LL;
	static int8_t x11 = -1;
	int64_t x12 = -1LL;
	static int32_t t2 = -11547405;

	t2 = (x9<(x10<(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 260159U;
	uint8_t x14 = UINT8_MAX;
	int32_t t3 = -581105;

	t3 = (x13<(x14<(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 219183U;
	int32_t x18 = INT32_MAX;
	volatile uint64_t x19 = 24844473LLU;
	uint32_t x20 = UINT32_MAX;
	volatile int32_t t4 = -1;

	t4 = (x17<(x18<(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 31859223U;
	int32_t x23 = -102555930;
	int64_t x24 = INT64_MIN;
	int32_t t5 = 13593520;

	t5 = (x21<(x22<(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	int64_t x27 = INT64_MIN;
	volatile int32_t t6 = 1554;

	t6 = (x25<(x26<(x27^x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x30 = 6U;
	int32_t x31 = -1;
	uint8_t x32 = UINT8_MAX;

	t7 = (x29<(x30<(x31^x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MIN;
	volatile int32_t t8 = 2;

	t8 = (x33<(x34<(x35^x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;
	int32_t t9 = -50608;

	t9 = (x37<(x38<(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	int8_t x42 = INT8_MIN;
	uint64_t x43 = 59026LLU;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 3;

	t10 = (x41<(x42<(x43^x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 5U;
	static volatile uint16_t x46 = 11582U;
	volatile uint32_t x47 = 1530U;
	static uint64_t x48 = 863LLU;
	int32_t t11 = -3338;

	t11 = (x45<(x46<(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	uint8_t x50 = 2U;
	uint32_t x51 = 1537U;
	static uint32_t x52 = 943U;
	volatile int32_t t12 = 0;

	t12 = (x49<(x50<(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 925260434U;
	int64_t x54 = -402230803233249741LL;
	int32_t x55 = INT32_MIN;
	static uint32_t x56 = 1939809495U;

	t13 = (x53<(x54<(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	volatile uint32_t x60 = 564886U;
	volatile int32_t t14 = 89;

	t14 = (x57<(x58<(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = 1053278354362LL;

	t15 = (x61<(x62<(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -35545LL;
	int8_t x66 = 0;
	uint32_t x67 = UINT32_MAX;
	volatile int16_t x68 = INT16_MIN;
	int32_t t16 = -234;

	t16 = (x65<(x66<(x67^x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	uint32_t x70 = 22408U;
	volatile int16_t x71 = -1;
	volatile int64_t x72 = INT64_MIN;
	int32_t t17 = -492965;

	t17 = (x69<(x70<(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	static int32_t x74 = 1;
	int16_t x75 = -1;
	static volatile uint32_t x76 = 171304184U;
	static int32_t t18 = -321;

	t18 = (x73<(x74<(x75^x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x77 = 5U;
	uint16_t x78 = 53U;
	int8_t x79 = -15;
	int64_t x80 = INT64_MIN;

	t19 = (x77<(x78<(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -34;
	volatile int32_t x82 = -16101;
	int8_t x83 = 1;
	uint64_t x84 = 16LLU;
	volatile int32_t t20 = -187;

	t20 = (x81<(x82<(x83^x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	volatile int32_t x86 = INT32_MAX;
	int16_t x87 = 281;
	static uint16_t x88 = 3U;
	static int32_t t21 = 1050;

	t21 = (x85<(x86<(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -3408LL;
	int64_t x90 = 110LL;
	int32_t x91 = 158666265;
	int8_t x92 = 1;
	volatile int32_t t22 = 807071430;

	t22 = (x89<(x90<(x91^x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MAX;
	int8_t x94 = 0;
	volatile uint32_t x95 = 27876268U;
	int64_t x96 = INT64_MIN;

	t23 = (x93<(x94<(x95^x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x98 = -1;

	t24 = (x97<(x98<(x99^x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int8_t x104 = INT8_MAX;
	int32_t t25 = -30697872;

	t25 = (x101<(x102<(x103^x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 1482613U;
	uint32_t x106 = 4210U;
	uint16_t x107 = UINT16_MAX;
	static int8_t x108 = -1;
	volatile int32_t t26 = -282308812;

	t26 = (x105<(x106<(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = -984841451LL;
	static int32_t t27 = 10449;

	t27 = (x109<(x110<(x111^x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	volatile int64_t x114 = -1LL;
	uint16_t x115 = 1U;
	int16_t x116 = -1;
	volatile int32_t t28 = -249158950;

	t28 = (x113<(x114<(x115^x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -6748676;
	int16_t x118 = INT16_MIN;
	static uint64_t x119 = UINT64_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	int32_t t29 = -29;

	t29 = (x117<(x118<(x119^x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x124 = 6619992286893543340LLU;
	volatile int32_t t30 = -24;

	t30 = (x121<(x122<(x123^x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static uint32_t x126 = 4413U;
	uint32_t x127 = UINT32_MAX;
	int32_t x128 = INT32_MAX;
	int32_t t31 = 1;

	t31 = (x125<(x126<(x127^x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 1;
	int64_t x130 = INT64_MIN;
	static int64_t x131 = 6305LL;
	uint32_t x132 = 53993037U;
	int32_t t32 = 29980965;

	t32 = (x129<(x130<(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	uint64_t x136 = 11012LLU;

	t33 = (x133<(x134<(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 14526U;
	int64_t x138 = -168LL;
	static volatile int64_t x140 = -1807LL;
	int32_t t34 = -501;

	t34 = (x137<(x138<(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	volatile uint8_t x143 = UINT8_MAX;
	volatile int32_t t35 = 5;

	t35 = (x141<(x142<(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x146 = 63830502U;
	int32_t x147 = 3596113;
	uint64_t x148 = 218984LLU;
	volatile int32_t t36 = -320681869;

	t36 = (x145<(x146<(x147^x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	static uint64_t x150 = UINT64_MAX;
	uint8_t x151 = 48U;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -1177918;

	t37 = (x149<(x150<(x151^x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	static int32_t x154 = -3872258;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -6736761;

	t38 = (x153<(x154<(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = UINT32_MAX;
	int8_t x159 = -1;
	volatile int8_t x160 = INT8_MIN;
	static int32_t t39 = -18;

	t39 = (x157<(x158<(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x163 = INT16_MAX;
	int32_t t40 = 1134;

	t40 = (x161<(x162<(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	uint32_t x166 = 1118524359U;
	uint8_t x167 = 13U;
	static volatile uint16_t x168 = 3U;
	int32_t t41 = 3;

	t41 = (x165<(x166<(x167^x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 2994412366748718LL;
	int16_t x170 = -1;
	int32_t x171 = -1;
	static uint64_t x172 = 11016802247334296LLU;
	static volatile int32_t t42 = 71295378;

	t42 = (x169<(x170<(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = UINT64_MAX;
	uint16_t x174 = 58U;
	int32_t x175 = INT32_MIN;
	volatile int32_t t43 = 228;

	t43 = (x173<(x174<(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 2117U;
	int32_t x179 = INT32_MIN;
	static int32_t x180 = INT32_MIN;

	t44 = (x177<(x178<(x179^x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 45U;
	uint8_t x182 = 2U;
	int16_t x184 = -610;
	volatile int32_t t45 = -40;

	t45 = (x181<(x182<(x183^x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int16_t x187 = 1;

	t46 = (x185<(x186<(x187^x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x190 = 11U;
	int8_t x191 = 1;

	t47 = (x189<(x190<(x191^x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	int16_t x196 = INT16_MAX;
	static int32_t t48 = -855730;

	t48 = (x193<(x194<(x195^x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -27;
	static int8_t x198 = INT8_MAX;
	uint64_t x200 = 23824900LLU;

	t49 = (x197<(x198<(x199^x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MIN;
	static int8_t x202 = -1;
	volatile int32_t t50 = -73577;

	t50 = (x201<(x202<(x203^x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 2009;
	uint8_t x206 = UINT8_MAX;
	uint32_t x207 = 63U;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = 30584;

	t51 = (x205<(x206<(x207^x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 855060;
	int16_t x212 = INT16_MAX;
	static int32_t t52 = 3275;

	t52 = (x209<(x210<(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int64_t x215 = -1737460861066LL;
	int32_t x216 = -1;
	int32_t t53 = 1;

	t53 = (x213<(x214<(x215^x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int16_t x219 = INT16_MIN;
	uint32_t x220 = UINT32_MAX;
	static int32_t t54 = 20;

	t54 = (x217<(x218<(x219^x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = INT64_MAX;
	uint16_t x222 = 23929U;
	volatile int16_t x223 = INT16_MAX;
	int16_t x224 = INT16_MAX;

	t55 = (x221<(x222<(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x227 = 347298901020LLU;
	int64_t x228 = INT64_MAX;
	volatile int32_t t56 = 1049;

	t56 = (x225<(x226<(x227^x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 17U;
	int32_t x230 = INT32_MIN;
	volatile int16_t x231 = -24;
	int16_t x232 = INT16_MIN;

	t57 = (x229<(x230<(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	volatile int16_t x234 = 0;
	uint16_t x235 = UINT16_MAX;
	volatile int8_t x236 = -1;
	volatile int32_t t58 = -1;

	t58 = (x233<(x234<(x235^x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = INT64_MIN;
	static int64_t x239 = 58LL;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t59 = 811108279;

	t59 = (x237<(x238<(x239^x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	int32_t x244 = -23550160;
	int32_t t60 = -345787692;

	t60 = (x241<(x242<(x243^x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	uint64_t x246 = 749645238379LLU;
	int64_t x248 = INT64_MIN;
	int32_t t61 = 21562337;

	t61 = (x245<(x246<(x247^x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MAX;
	volatile int16_t x250 = 6;
	static int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MIN;
	static int32_t t62 = 248823;

	t62 = (x249<(x250<(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	volatile int64_t x254 = 89836072245LL;
	static int32_t x255 = -587642;
	int16_t x256 = INT16_MAX;
	int32_t t63 = -37612;

	t63 = (x253<(x254<(x255^x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	uint8_t x258 = 20U;
	int32_t x259 = 687354;
	volatile int32_t x260 = INT32_MAX;
	static volatile int32_t t64 = -2205008;

	t64 = (x257<(x258<(x259^x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x263 = -11071;
	volatile int32_t t65 = 13757483;

	t65 = (x261<(x262<(x263^x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MIN;
	uint8_t x266 = 12U;
	volatile int32_t x267 = -1;
	static int32_t t66 = 56659;

	t66 = (x265<(x266<(x267^x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x270 = -2572815;
	int16_t x271 = -1;
	uint8_t x272 = UINT8_MAX;
	int32_t t67 = 475;

	t67 = (x269<(x270<(x271^x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	static volatile int16_t x274 = 1;
	volatile int8_t x275 = INT8_MIN;
	int32_t x276 = INT32_MAX;

	t68 = (x273<(x274<(x275^x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = INT64_MAX;
	volatile int64_t x279 = INT64_MIN;
	static int16_t x280 = -1;

	t69 = (x277<(x278<(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x282 = 1189019735LLU;
	static int16_t x283 = -1;
	int8_t x284 = -1;

	t70 = (x281<(x282<(x283^x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int8_t x286 = -1;
	int64_t x287 = -1LL;
	static volatile int32_t t71 = -1;

	t71 = (x285<(x286<(x287^x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	int16_t x290 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	static volatile int32_t t72 = 526887;

	t72 = (x289<(x290<(x291^x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	static volatile int64_t x294 = INT64_MIN;
	static int32_t x295 = 10450443;
	volatile int8_t x296 = INT8_MAX;
	int32_t t73 = 0;

	t73 = (x293<(x294<(x295^x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x299 = 55232;

	t74 = (x297<(x298<(x299^x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 4149869U;
	int8_t x302 = INT8_MIN;
	uint16_t x303 = 2U;
	int32_t x304 = -1;
	int32_t t75 = 114166;

	t75 = (x301<(x302<(x303^x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	uint16_t x306 = 0U;
	int64_t x307 = INT64_MIN;

	t76 = (x305<(x306<(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	static uint32_t x310 = 778054U;
	int32_t x311 = -568231;
	int64_t x312 = INT64_MIN;
	static int32_t t77 = 20909;

	t77 = (x309<(x310<(x311^x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	volatile int32_t x314 = 71838360;
	int16_t x315 = INT16_MIN;
	volatile int32_t t78 = -10;

	t78 = (x313<(x314<(x315^x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	static int64_t x318 = INT64_MIN;
	volatile int64_t x319 = 0LL;
	uint8_t x320 = 2U;

	t79 = (x317<(x318<(x319^x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 15166727U;
	static volatile uint8_t x323 = 26U;
	int32_t t80 = -751;

	t80 = (x321<(x322<(x323^x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	uint64_t x326 = 64961053269814621LLU;
	volatile int32_t t81 = 425210850;

	t81 = (x325<(x326<(x327^x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = -1;
	int16_t x330 = INT16_MIN;
	uint8_t x331 = UINT8_MAX;
	uint64_t x332 = 82LLU;
	volatile int32_t t82 = -535621600;

	t82 = (x329<(x330<(x331^x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MAX;
	int16_t x334 = 20;
	int32_t x335 = INT32_MIN;
	volatile int16_t x336 = -1;
	static volatile int32_t t83 = -2;

	t83 = (x333<(x334<(x335^x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = 16716U;
	volatile int16_t x338 = INT16_MIN;
	uint16_t x339 = 963U;

	t84 = (x337<(x338<(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 7096;
	int16_t x342 = 250;
	int16_t x343 = -1298;
	static uint8_t x344 = UINT8_MAX;
	volatile int32_t t85 = 70158;

	t85 = (x341<(x342<(x343^x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 0U;
	int64_t x346 = INT64_MIN;
	uint64_t x347 = UINT64_MAX;
	uint8_t x348 = UINT8_MAX;
	int32_t t86 = 0;

	t86 = (x345<(x346<(x347^x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int32_t x351 = -1;
	int32_t x352 = 21;
	volatile int32_t t87 = -72399;

	t87 = (x349<(x350<(x351^x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x354 = -5195772;
	int64_t x355 = 1465LL;
	static int32_t t88 = -13952349;

	t88 = (x353<(x354<(x355^x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MAX;
	int8_t x360 = 0;
	volatile int32_t t89 = 37;

	t89 = (x357<(x358<(x359^x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 6714U;
	int64_t x362 = 637945LL;
	uint32_t x363 = 266947U;
	volatile uint32_t x364 = UINT32_MAX;
	volatile int32_t t90 = 1;

	t90 = (x361<(x362<(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	static int8_t x367 = INT8_MAX;
	int64_t x368 = 2899699845710848869LL;
	static volatile int32_t t91 = 1;

	t91 = (x365<(x366<(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -530038;
	int8_t x370 = INT8_MIN;
	int32_t t92 = -17809516;

	t92 = (x369<(x370<(x371^x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = INT32_MIN;
	static int64_t x374 = -15LL;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = -2293699;

	t93 = (x373<(x374<(x375^x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 244960;
	int16_t x379 = -1;
	uint16_t x380 = 90U;

	t94 = (x377<(x378<(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x382 = 0U;
	volatile int32_t x383 = INT32_MIN;
	static int16_t x384 = 64;
	static int32_t t95 = 8;

	t95 = (x381<(x382<(x383^x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	uint64_t x386 = UINT64_MAX;
	uint64_t x387 = UINT64_MAX;
	volatile uint32_t x388 = 5540U;
	static volatile int32_t t96 = 131578;

	t96 = (x385<(x386<(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x390 = INT32_MIN;
	volatile uint64_t x391 = 424099520723496954LLU;
	volatile int8_t x392 = INT8_MIN;
	volatile int32_t t97 = -90254;

	t97 = (x389<(x390<(x391^x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = -1;
	uint64_t x394 = UINT64_MAX;
	static volatile int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MIN;
	int32_t t98 = 15682;

	t98 = (x393<(x394<(x395^x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 76U;
	int8_t x398 = -1;
	uint32_t x399 = 71U;
	volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = 48042;

	t99 = (x397<(x398<(x399^x400)));

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

