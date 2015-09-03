#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = UINT8_MAX;
int32_t t0 = 9;
int64_t x12 = -3747LL;
int8_t x14 = INT8_MIN;
int64_t x17 = INT64_MAX;
uint32_t x21 = 171789382U;
int16_t x23 = -1;
volatile int32_t t5 = 78024;
int16_t x25 = INT16_MIN;
volatile uint8_t x26 = 0U;
int8_t x28 = INT8_MAX;
static int32_t t6 = 603485703;
static uint16_t x31 = 137U;
int32_t t8 = 13583;
int32_t x38 = -30215;
int8_t x46 = INT8_MIN;
int32_t x48 = -1;
volatile int32_t t11 = 7853661;
int8_t x49 = -1;
static volatile uint32_t x54 = 267126619U;
int64_t x55 = INT64_MIN;
uint64_t x62 = UINT64_MAX;
int8_t x65 = -1;
uint8_t x72 = 86U;
int32_t x74 = INT32_MIN;
int32_t x82 = INT32_MAX;
volatile int16_t x83 = -1;
uint16_t x84 = UINT16_MAX;
volatile int8_t x86 = INT8_MAX;
int32_t t22 = 39954550;
static int32_t t23 = 1780956;
int64_t x99 = INT64_MAX;
int32_t t24 = 3;
volatile int8_t x103 = INT8_MIN;
volatile int32_t t25 = 4816100;
static uint8_t x112 = UINT8_MAX;
int32_t t28 = 474044726;
uint8_t x117 = 40U;
static int64_t x118 = INT64_MAX;
int32_t t30 = 31;
volatile uint64_t x125 = 35765346536LLU;
static uint64_t x133 = 8121413949174635281LLU;
static volatile int32_t t33 = -584762;
int8_t x139 = 1;
volatile uint32_t x143 = 22499U;
uint32_t x144 = 174129U;
int32_t t35 = -1;
static int8_t x148 = INT8_MIN;
int8_t x149 = INT8_MIN;
int32_t x152 = -1;
int64_t x154 = -1LL;
static int32_t x155 = INT32_MAX;
volatile int64_t x158 = 466851923126LL;
volatile int16_t x162 = INT16_MAX;
int32_t x163 = 25177383;
int8_t x164 = INT8_MIN;
int64_t x169 = 14LL;
volatile int32_t t42 = -1701;
static volatile int32_t t43 = 296;
volatile int32_t x179 = -1841;
uint64_t x190 = 1LLU;
uint8_t x191 = 2U;
uint16_t x206 = 168U;
uint64_t x208 = 88169180624891028LLU;
static uint16_t x216 = UINT16_MAX;
volatile uint32_t x220 = 6U;
volatile int32_t t54 = 0;
volatile int32_t t55 = 977;
uint64_t x228 = 0LLU;
int64_t x234 = 50742LL;
int16_t x247 = -1;
static int64_t x250 = 7607557697444674LL;
int32_t t62 = 0;
volatile int32_t x254 = 38;
uint8_t x255 = 0U;
static int16_t x265 = INT16_MIN;
int32_t x268 = -155280457;
int8_t x271 = INT8_MAX;
volatile int32_t t68 = 347;
volatile uint8_t x280 = 3U;
int32_t t69 = -2586;
int64_t x287 = 9046620851067363LL;
int8_t x288 = 3;
int32_t x293 = INT32_MIN;
uint8_t x294 = 5U;
uint32_t x298 = 70U;
int32_t t74 = 1699876;
int64_t x303 = INT64_MIN;
static int32_t t76 = 12952266;
static int16_t x315 = INT16_MIN;
int32_t t78 = 6261;
uint32_t x326 = 162U;
int32_t x334 = INT32_MIN;
volatile int32_t t85 = -921436305;
uint64_t x346 = 5158071072399836695LLU;
volatile int64_t x349 = 865310616LL;
uint32_t x358 = 192U;
int16_t x365 = INT16_MIN;
int16_t x367 = -7;
int16_t x369 = -39;
int32_t x377 = INT32_MAX;
int32_t t95 = -4;
volatile int32_t t96 = -525262;
uint8_t x392 = 11U;
volatile int16_t x394 = INT16_MIN;
int32_t x397 = -1;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	int32_t x3 = -93040698;
	uint8_t x4 = 10U;

	t0 = (x1<=(x2<=(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MIN;
	static int8_t x7 = -1;
	static uint8_t x8 = 30U;
	volatile int32_t t1 = 50;

	t1 = (x5<=(x6<=(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -59;
	int8_t x10 = -1;
	volatile int64_t x11 = -432106101855LL;
	int32_t t2 = 421;

	t2 = (x9<=(x10<=(x11^x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	volatile int32_t x15 = INT32_MIN;
	static volatile uint64_t x16 = UINT64_MAX;
	int32_t t3 = 2780;

	t3 = (x13<=(x14<=(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = UINT32_MAX;
	static uint16_t x19 = 28836U;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = -783585;

	t4 = (x17<=(x18<=(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x22 = 169137133275807040LLU;
	static uint64_t x24 = 3LLU;

	t5 = (x21<=(x22<=(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x27 = -15663LL;

	t6 = (x25<=(x26<=(x27^x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	int32_t x30 = INT32_MIN;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -562502;

	t7 = (x29<=(x30<=(x31^x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint32_t x34 = 388830U;
	int32_t x35 = INT32_MAX;
	static int64_t x36 = 1485751708601971779LL;

	t8 = (x33<=(x34<=(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 7537652U;
	uint32_t x39 = UINT32_MAX;
	int8_t x40 = 1;
	volatile int32_t t9 = -7;

	t9 = (x37<=(x38<=(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	static int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	int32_t x44 = -1;
	volatile int32_t t10 = -438676;

	t10 = (x41<=(x42<=(x43^x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 424LL;
	int32_t x47 = INT32_MAX;

	t11 = (x45<=(x46<=(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MAX;
	int64_t x51 = -1LL;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 13140010;

	t12 = (x49<=(x50<=(x51^x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 112754559351LLU;
	int16_t x56 = -1;
	volatile int32_t t13 = 7;

	t13 = (x53<=(x54<=(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	uint64_t x58 = 3824LLU;
	int32_t x59 = INT32_MIN;
	static volatile int64_t x60 = INT64_MIN;
	volatile int32_t t14 = -218;

	t14 = (x57<=(x58<=(x59^x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int16_t x63 = -1;
	static volatile uint32_t x64 = 979U;
	static int32_t t15 = -3195;

	t15 = (x61<=(x62<=(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x66 = UINT16_MAX;
	volatile uint32_t x67 = 7165382U;
	int16_t x68 = 3;
	int32_t t16 = 2;

	t16 = (x65<=(x66<=(x67^x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint8_t x70 = 10U;
	int8_t x71 = INT8_MAX;
	int32_t t17 = -32428;

	t17 = (x69<=(x70<=(x71^x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = 545U;
	int32_t t18 = -1810;

	t18 = (x73<=(x74<=(x75^x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	static uint8_t x78 = 5U;
	int16_t x79 = INT16_MAX;
	volatile uint32_t x80 = 380340U;
	int32_t t19 = 15;

	t19 = (x77<=(x78<=(x79^x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t t20 = 1;

	t20 = (x81<=(x82<=(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = 40U;
	uint8_t x87 = UINT8_MAX;
	uint16_t x88 = 70U;
	static volatile int32_t t21 = -1078536;

	t21 = (x85<=(x86<=(x87^x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 1U;
	int8_t x90 = INT8_MIN;
	int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MIN;

	t22 = (x89<=(x90<=(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = -1;
	int32_t x95 = -6469985;
	int32_t x96 = -23789;

	t23 = (x93<=(x94<=(x95^x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	uint8_t x98 = UINT8_MAX;
	static int8_t x100 = -1;

	t24 = (x97<=(x98<=(x99^x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1015;
	volatile uint8_t x102 = 53U;
	int16_t x104 = -1;

	t25 = (x101<=(x102<=(x103^x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	volatile int32_t x106 = INT32_MIN;
	int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MAX;
	static int32_t t26 = 3692153;

	t26 = (x105<=(x106<=(x107^x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	static int8_t x110 = 0;
	volatile int16_t x111 = INT16_MIN;
	int32_t t27 = 353;

	t27 = (x109<=(x110<=(x111^x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MAX;
	uint16_t x114 = 4584U;
	static uint32_t x115 = 735U;
	int64_t x116 = 2LL;

	t28 = (x113<=(x114<=(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x119 = 3425828U;
	int32_t x120 = 736555;
	volatile int32_t t29 = 62599;

	t29 = (x117<=(x118<=(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	static int32_t x122 = -1;
	volatile int64_t x123 = INT64_MAX;
	int16_t x124 = INT16_MIN;

	t30 = (x121<=(x122<=(x123^x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = INT16_MAX;
	int8_t x127 = INT8_MAX;
	int8_t x128 = INT8_MAX;
	int32_t t31 = 51475287;

	t31 = (x125<=(x126<=(x127^x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 8U;
	int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	volatile int32_t t32 = -3;

	t32 = (x129<=(x130<=(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = 785558343U;
	int32_t x135 = -1;
	int16_t x136 = -1;

	t33 = (x133<=(x134<=(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MIN;
	volatile int16_t x138 = INT16_MAX;
	int8_t x140 = -1;
	int32_t t34 = 1095784;

	t34 = (x137<=(x138<=(x139^x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = 155259960;
	int16_t x142 = 708;

	t35 = (x141<=(x142<=(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 625138U;
	volatile int8_t x146 = INT8_MIN;
	volatile int16_t x147 = INT16_MIN;
	int32_t t36 = -2122209;

	t36 = (x145<=(x146<=(x147^x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = 2741062989284380LLU;
	volatile int8_t x151 = 33;
	int32_t t37 = 1674;

	t37 = (x149<=(x150<=(x151^x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = 2839U;
	static volatile int8_t x156 = -1;
	volatile int32_t t38 = 0;

	t38 = (x153<=(x154<=(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x157 = 530LLU;
	uint16_t x159 = UINT16_MAX;
	static int32_t x160 = INT32_MIN;
	int32_t t39 = -88;

	t39 = (x157<=(x158<=(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = INT32_MIN;
	volatile int32_t t40 = 4;

	t40 = (x161<=(x162<=(x163^x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 118U;
	uint16_t x166 = 1U;
	int64_t x167 = -210LL;
	int16_t x168 = INT16_MIN;
	int32_t t41 = -53;

	t41 = (x165<=(x166<=(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -1;
	static volatile uint16_t x171 = 281U;
	int8_t x172 = INT8_MIN;

	t42 = (x169<=(x170<=(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -4195LL;
	int8_t x174 = 45;
	static uint64_t x175 = UINT64_MAX;
	int16_t x176 = INT16_MIN;

	t43 = (x173<=(x174<=(x175^x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int64_t x178 = INT64_MAX;
	volatile int64_t x180 = -1LL;
	static int32_t t44 = -865;

	t44 = (x177<=(x178<=(x179^x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	int8_t x182 = INT8_MIN;
	uint32_t x183 = UINT32_MAX;
	volatile int16_t x184 = INT16_MIN;
	int32_t t45 = 14;

	t45 = (x181<=(x182<=(x183^x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 174U;
	int16_t x186 = -76;
	int8_t x187 = 0;
	uint8_t x188 = 0U;
	volatile int32_t t46 = 1509;

	t46 = (x185<=(x186<=(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 9226719845625LL;
	volatile int16_t x192 = -1;
	int32_t t47 = -1032;

	t47 = (x189<=(x190<=(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = 120;
	int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	static int8_t x196 = -1;
	int32_t t48 = -120;

	t48 = (x193<=(x194<=(x195^x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	static int64_t x198 = INT64_MIN;
	int64_t x199 = 91009LL;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = -96;

	t49 = (x197<=(x198<=(x199^x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	static volatile int32_t x202 = INT32_MIN;
	uint64_t x203 = UINT64_MAX;
	uint32_t x204 = UINT32_MAX;
	static volatile int32_t t50 = 67348;

	t50 = (x201<=(x202<=(x203^x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = 0LL;
	static volatile uint32_t x207 = UINT32_MAX;
	volatile int32_t t51 = -221342;

	t51 = (x205<=(x206<=(x207^x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = 8293LLU;
	volatile int16_t x210 = -1;
	uint64_t x211 = 19795945017LLU;
	int16_t x212 = -117;
	volatile int32_t t52 = 104;

	t52 = (x209<=(x210<=(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 2617U;
	volatile int32_t x214 = -64845;
	volatile int16_t x215 = 337;
	int32_t t53 = -5121;

	t53 = (x213<=(x214<=(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = -1;
	uint8_t x218 = 7U;
	static int8_t x219 = 0;

	t54 = (x217<=(x218<=(x219^x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	uint16_t x222 = UINT16_MAX;
	int64_t x223 = INT64_MIN;
	volatile int64_t x224 = -1LL;

	t55 = (x221<=(x222<=(x223^x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	static uint8_t x226 = 57U;
	volatile int16_t x227 = INT16_MIN;
	volatile int32_t t56 = 2;

	t56 = (x225<=(x226<=(x227^x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = UINT32_MAX;
	static int16_t x230 = INT16_MIN;
	int16_t x231 = -71;
	uint8_t x232 = 0U;
	int32_t t57 = -11484;

	t57 = (x229<=(x230<=(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MIN;
	static volatile int64_t x235 = -1LL;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t58 = 1343;

	t58 = (x233<=(x234<=(x235^x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	volatile uint64_t x238 = 766LLU;
	uint64_t x239 = UINT64_MAX;
	uint16_t x240 = 71U;
	volatile int32_t t59 = 10585696;

	t59 = (x237<=(x238<=(x239^x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MAX;
	int64_t x243 = -1LL;
	volatile int64_t x244 = INT64_MIN;
	volatile int32_t t60 = 74952517;

	t60 = (x241<=(x242<=(x243^x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = UINT8_MAX;
	uint32_t x246 = 1U;
	int32_t x248 = 7989259;
	volatile int32_t t61 = -96;

	t61 = (x245<=(x246<=(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	static int16_t x251 = -22;
	int32_t x252 = -1;

	t62 = (x249<=(x250<=(x251^x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int8_t x256 = -1;
	volatile int32_t t63 = 7004;

	t63 = (x253<=(x254<=(x255^x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = 42651U;
	uint16_t x258 = 523U;
	uint16_t x259 = 22U;
	int16_t x260 = 13312;
	static volatile int32_t t64 = 1;

	t64 = (x257<=(x258<=(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 8U;
	uint8_t x262 = 94U;
	volatile int8_t x263 = 21;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t65 = 336560904;

	t65 = (x261<=(x262<=(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = -1;
	int64_t x267 = -67809617295LL;
	static volatile int32_t t66 = 91784;

	t66 = (x265<=(x266<=(x267^x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -15LL;
	uint16_t x270 = UINT16_MAX;
	volatile int64_t x272 = INT64_MIN;
	int32_t t67 = 208;

	t67 = (x269<=(x270<=(x271^x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	int16_t x274 = INT16_MIN;
	int64_t x275 = -1LL;
	int8_t x276 = -7;

	t68 = (x273<=(x274<=(x275^x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 58827806329LLU;
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MAX;

	t69 = (x277<=(x278<=(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	volatile int32_t x282 = -6948;
	int32_t x283 = 573055252;
	int32_t x284 = INT32_MAX;
	volatile int32_t t70 = 46302;

	t70 = (x281<=(x282<=(x283^x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	uint32_t x286 = 133U;
	static volatile int32_t t71 = 180146;

	t71 = (x285<=(x286<=(x287^x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x289 = -878469LL;
	int16_t x290 = INT16_MIN;
	uint16_t x291 = UINT16_MAX;
	static volatile int64_t x292 = 1277LL;
	int32_t t72 = -1739459;

	t72 = (x289<=(x290<=(x291^x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x295 = 1960U;
	int16_t x296 = 940;
	volatile int32_t t73 = -46;

	t73 = (x293<=(x294<=(x295^x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MAX;
	volatile uint64_t x299 = 97108300844608LLU;
	int16_t x300 = 19;

	t74 = (x297<=(x298<=(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MIN;
	uint8_t x302 = UINT8_MAX;
	uint16_t x304 = 52U;
	int32_t t75 = 139461154;

	t75 = (x301<=(x302<=(x303^x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MIN;
	uint16_t x306 = 329U;
	volatile int8_t x307 = INT8_MAX;
	int32_t x308 = -1;

	t76 = (x305<=(x306<=(x307^x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = -1LL;
	static int64_t x310 = 772672LL;
	static int8_t x311 = 0;
	int64_t x312 = INT64_MAX;
	volatile int32_t t77 = -832656;

	t77 = (x309<=(x310<=(x311^x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 1555627555871944LLU;
	uint8_t x314 = 1U;
	volatile int8_t x316 = -1;

	t78 = (x313<=(x314<=(x315^x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	int64_t x319 = 15597LL;
	int32_t x320 = INT32_MAX;
	static volatile int32_t t79 = -574926;

	t79 = (x317<=(x318<=(x319^x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	int8_t x324 = 2;
	int32_t t80 = -194004;

	t80 = (x321<=(x322<=(x323^x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	int32_t x327 = -1;
	int16_t x328 = -3;
	int32_t t81 = 81248537;

	t81 = (x325<=(x326<=(x327^x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = -318052754725848LL;
	uint32_t x330 = 3U;
	int64_t x331 = -1LL;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -31;

	t82 = (x329<=(x330<=(x331^x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	volatile int16_t x335 = 6079;
	uint64_t x336 = 1336LLU;
	static int32_t t83 = -13865;

	t83 = (x333<=(x334<=(x335^x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = UINT16_MAX;
	int64_t x338 = INT64_MIN;
	uint8_t x339 = 26U;
	int8_t x340 = -1;
	int32_t t84 = 697;

	t84 = (x337<=(x338<=(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 4819317LLU;
	int16_t x342 = 5579;
	int64_t x343 = INT64_MAX;
	int8_t x344 = INT8_MAX;

	t85 = (x341<=(x342<=(x343^x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = 702391725LL;
	volatile int32_t t86 = -607877426;

	t86 = (x345<=(x346<=(x347^x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -1154;
	static volatile int16_t x351 = -5972;
	static uint16_t x352 = UINT16_MAX;
	int32_t t87 = -1625903;

	t87 = (x349<=(x350<=(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	uint32_t x354 = UINT32_MAX;
	int16_t x355 = INT16_MAX;
	static uint16_t x356 = 1U;
	volatile int32_t t88 = 1001;

	t88 = (x353<=(x354<=(x355^x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	volatile int8_t x359 = INT8_MIN;
	int16_t x360 = -1;
	volatile int32_t t89 = -37096667;

	t89 = (x357<=(x358<=(x359^x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = 0;
	static uint16_t x362 = 0U;
	uint32_t x363 = 6U;
	int16_t x364 = -1;
	volatile int32_t t90 = -240981;

	t90 = (x361<=(x362<=(x363^x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -1LL;
	volatile uint32_t x368 = UINT32_MAX;
	int32_t t91 = -880;

	t91 = (x365<=(x366<=(x367^x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x370 = 3582682;
	volatile uint64_t x371 = UINT64_MAX;
	volatile uint64_t x372 = 12867576LLU;
	volatile int32_t t92 = -132978;

	t92 = (x369<=(x370<=(x371^x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = UINT64_MAX;
	int16_t x374 = -1;
	int8_t x375 = -1;
	uint16_t x376 = 18432U;
	static volatile int32_t t93 = -20726029;

	t93 = (x373<=(x374<=(x375^x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MIN;
	uint16_t x380 = UINT16_MAX;
	int32_t t94 = 5;

	t94 = (x377<=(x378<=(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 111U;
	static int8_t x382 = INT8_MIN;
	volatile int8_t x383 = INT8_MIN;
	uint8_t x384 = 3U;

	t95 = (x381<=(x382<=(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 0U;
	int16_t x386 = INT16_MIN;
	int8_t x387 = -3;
	uint64_t x388 = UINT64_MAX;

	t96 = (x385<=(x386<=(x387^x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -12;
	uint8_t x390 = UINT8_MAX;
	int8_t x391 = 26;
	int32_t t97 = -28;

	t97 = (x389<=(x390<=(x391^x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x393 = UINT8_MAX;
	static volatile uint16_t x395 = 15370U;
	int16_t x396 = INT16_MAX;
	static int32_t t98 = -31066543;

	t98 = (x393<=(x394<=(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x398 = INT8_MIN;
	uint32_t x399 = 97U;
	uint8_t x400 = 1U;
	int32_t t99 = -469;

	t99 = (x397<=(x398<=(x399^x400)));

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

