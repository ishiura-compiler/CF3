#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = INT32_MIN;
int8_t x11 = INT8_MIN;
static int64_t x12 = INT64_MIN;
static int32_t t2 = -470514;
int64_t x20 = INT64_MIN;
static int64_t x21 = INT64_MAX;
volatile int32_t t5 = 3;
volatile int32_t t7 = -33;
uint32_t x42 = 581952U;
uint8_t x44 = 79U;
int32_t x45 = -1;
int32_t x53 = -1;
static int64_t x63 = INT64_MIN;
int16_t x67 = 23;
static uint16_t x70 = UINT16_MAX;
volatile int32_t t17 = 221914619;
volatile int32_t t19 = 2;
int8_t x88 = INT8_MIN;
int32_t t21 = 2583504;
static int8_t x96 = INT8_MIN;
int32_t x108 = -1;
volatile int32_t t27 = 0;
static uint64_t x113 = 496778283LLU;
static int8_t x114 = -1;
static int8_t x119 = INT8_MAX;
int8_t x122 = INT8_MIN;
int64_t x125 = -1LL;
uint8_t x127 = UINT8_MAX;
int8_t x129 = 1;
int16_t x132 = INT16_MIN;
int32_t t33 = 64;
uint32_t x139 = UINT32_MAX;
volatile int32_t t34 = -4951;
int32_t t35 = 98283159;
uint16_t x146 = UINT16_MAX;
int16_t x147 = INT16_MIN;
static uint32_t x149 = 856U;
static int32_t x152 = -5509404;
uint8_t x168 = 3U;
int64_t x174 = INT64_MIN;
int32_t t44 = 10250013;
int64_t x185 = 151872527LL;
static int8_t x186 = 11;
int32_t t46 = -1507;
volatile int32_t t47 = 660092;
volatile int32_t t48 = -1;
volatile uint16_t x199 = UINT16_MAX;
volatile uint16_t x200 = UINT16_MAX;
static uint64_t x201 = 591994271LLU;
int16_t x208 = INT16_MIN;
int32_t x215 = INT32_MIN;
int16_t x220 = -4;
volatile int32_t t54 = -1736589;
static uint16_t x232 = 8U;
uint8_t x235 = 120U;
int16_t x238 = INT16_MIN;
int32_t t59 = 3;
int32_t t60 = 497562;
static uint8_t x245 = 25U;
int8_t x248 = 30;
int8_t x253 = INT8_MIN;
int16_t x255 = INT16_MAX;
volatile int32_t t66 = 189587;
volatile uint64_t x276 = UINT64_MAX;
int64_t x277 = 11122455561LL;
uint16_t x280 = UINT16_MAX;
int32_t t69 = -1160757;
uint16_t x290 = 691U;
volatile int64_t x291 = INT64_MIN;
volatile int32_t t74 = -7658796;
volatile uint8_t x302 = 1U;
volatile int64_t x307 = -1LL;
volatile uint64_t x308 = UINT64_MAX;
int16_t x315 = INT16_MIN;
volatile int16_t x318 = 26;
int16_t x322 = -1;
static int8_t x327 = INT8_MAX;
static volatile int32_t t81 = -28124827;
int16_t x334 = INT16_MIN;
static uint16_t x335 = UINT16_MAX;
volatile int32_t t84 = -3475738;
uint8_t x341 = UINT8_MAX;
static volatile int32_t t85 = 28918871;
int16_t x347 = -10263;
int32_t x354 = -3135729;
int8_t x357 = 0;
int64_t x361 = INT64_MIN;
uint16_t x365 = UINT16_MAX;
static volatile uint32_t x366 = UINT32_MAX;
int32_t t91 = -48713;
static uint64_t x372 = 137953318172807LLU;
volatile int32_t t92 = 944399062;
volatile int64_t x376 = INT64_MIN;
static int32_t t95 = -86571429;
volatile uint64_t x388 = 50LLU;
static int32_t t97 = -1;
volatile int32_t x395 = -132;
int8_t x397 = INT8_MAX;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	static uint32_t x2 = 1U;
	int16_t x3 = 1;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 942;

	t0 = (x1==(x2^(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x7 = INT64_MIN;
	static uint16_t x8 = 707U;
	int32_t t1 = -163388297;

	t1 = (x5==(x6^(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	uint8_t x10 = 63U;

	t2 = (x9==(x10^(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 169;
	volatile int16_t x14 = -1;
	static uint8_t x15 = 3U;
	uint16_t x16 = 3721U;
	int32_t t3 = 289951837;

	t3 = (x13==(x14^(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	static uint32_t x18 = 20U;
	volatile uint64_t x19 = 408LLU;
	volatile int32_t t4 = 11344143;

	t4 = (x17==(x18^(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 5277U;
	volatile int32_t x23 = INT32_MIN;
	uint8_t x24 = 105U;

	t5 = (x21==(x22^(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 1U;
	int16_t x26 = INT16_MIN;
	int16_t x27 = 7653;
	int8_t x28 = -4;
	static int32_t t6 = 114464;

	t6 = (x25==(x26^(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -527741LL;
	int32_t x30 = 57362;
	int16_t x31 = -1;
	int32_t x32 = INT32_MAX;

	t7 = (x29==(x30^(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 73629511952525LLU;
	int8_t x34 = INT8_MAX;
	int8_t x35 = 1;
	int32_t x36 = -75055760;
	int32_t t8 = 339864459;

	t8 = (x33==(x34^(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	static int64_t x38 = INT64_MAX;
	static uint8_t x39 = 7U;
	volatile int64_t x40 = INT64_MIN;
	static volatile int32_t t9 = -216073996;

	t9 = (x37==(x38^(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint16_t x43 = UINT16_MAX;
	static int32_t t10 = -36243888;

	t10 = (x41==(x42^(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MAX;
	uint64_t x47 = 6LLU;
	static volatile uint16_t x48 = UINT16_MAX;
	int32_t t11 = -1916;

	t11 = (x45==(x46^(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	int64_t x50 = 30608728553081LL;
	static int16_t x51 = INT16_MIN;
	static int16_t x52 = -1;
	volatile int32_t t12 = -307751123;

	t12 = (x49==(x50^(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	uint8_t x55 = 3U;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = -9429;

	t13 = (x53==(x54^(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	uint8_t x58 = UINT8_MAX;
	static int8_t x59 = -1;
	int32_t x60 = -1;
	int32_t t14 = 249364500;

	t14 = (x57==(x58^(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	static int16_t x62 = -1;
	int64_t x64 = -1LL;
	volatile int32_t t15 = 1152202;

	t15 = (x61==(x62^(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -1822;
	uint64_t x66 = 14546816924303504LLU;
	uint16_t x68 = 7U;
	int32_t t16 = 2443;

	t16 = (x65==(x66^(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	volatile int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MAX;

	t17 = (x69==(x70^(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int16_t x74 = 13;
	uint32_t x75 = UINT32_MAX;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = -1;

	t18 = (x73==(x74^(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MAX;
	int32_t x78 = 451950387;
	volatile int32_t x79 = -905228;
	volatile int16_t x80 = INT16_MAX;

	t19 = (x77==(x78^(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	static uint32_t x82 = 13832340U;
	int16_t x83 = INT16_MIN;
	int8_t x84 = -1;
	volatile int32_t t20 = -1498;

	t20 = (x81==(x82^(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	volatile uint64_t x86 = UINT64_MAX;
	int32_t x87 = INT32_MAX;

	t21 = (x85==(x86^(x87^x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MIN;
	int64_t x91 = -1LL;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -2878;

	t22 = (x89==(x90^(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	int64_t x94 = -1LL;
	volatile uint16_t x95 = UINT16_MAX;
	int32_t t23 = 997142;

	t23 = (x93==(x94^(x95^x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	volatile int64_t x98 = -3LL;
	volatile int16_t x99 = 3244;
	int8_t x100 = INT8_MAX;
	volatile int32_t t24 = -76;

	t24 = (x97==(x98^(x99^x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	uint32_t x102 = 228U;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = -1;
	int32_t t25 = 1335215;

	t25 = (x101==(x102^(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 0U;
	int32_t x106 = 371;
	uint64_t x107 = 1426539723916LLU;
	volatile int32_t t26 = 1636;

	t26 = (x105==(x106^(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 51598818U;
	int8_t x110 = INT8_MIN;
	uint16_t x111 = 16539U;
	int32_t x112 = INT32_MAX;

	t27 = (x109==(x110^(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x115 = 7U;
	volatile int32_t x116 = 46;
	static int32_t t28 = 1379728;

	t28 = (x113==(x114^(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = INT8_MIN;
	uint8_t x118 = 3U;
	volatile int8_t x120 = INT8_MIN;
	int32_t t29 = -45393875;

	t29 = (x117==(x118^(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	int64_t x123 = -1LL;
	static uint64_t x124 = 944LLU;
	static int32_t t30 = 172518;

	t30 = (x121==(x122^(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = UINT16_MAX;
	static int16_t x128 = -1;
	static volatile int32_t t31 = -737;

	t31 = (x125==(x126^(x127^x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x130 = -1;
	static int32_t x131 = INT32_MIN;
	int32_t t32 = -509727;

	t32 = (x129==(x130^(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MAX;
	static int32_t x135 = INT32_MIN;
	uint16_t x136 = UINT16_MAX;

	t33 = (x133==(x134^(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 0LL;
	int8_t x138 = INT8_MAX;
	int64_t x140 = 2914LL;

	t34 = (x137==(x138^(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MAX;
	volatile int16_t x142 = 201;
	uint64_t x143 = 903253483528024664LLU;
	int64_t x144 = INT64_MIN;

	t35 = (x141==(x142^(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -3846;
	volatile int16_t x148 = 3241;
	int32_t t36 = -178025748;

	t36 = (x145==(x146^(x147^x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x150 = INT32_MIN;
	volatile uint64_t x151 = 132508237513LLU;
	volatile int32_t t37 = 832524;

	t37 = (x149==(x150^(x151^x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 39533990U;
	static uint16_t x154 = 2U;
	int64_t x155 = -1LL;
	static uint16_t x156 = 26932U;
	volatile int32_t t38 = -104278;

	t38 = (x153==(x154^(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -770LL;
	uint64_t x158 = 5LLU;
	static uint64_t x159 = 12760LLU;
	static uint8_t x160 = 17U;
	static int32_t t39 = 4;

	t39 = (x157==(x158^(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 0U;
	static int64_t x162 = -409288920938LL;
	int16_t x163 = INT16_MIN;
	uint32_t x164 = 411612U;
	volatile int32_t t40 = 180128125;

	t40 = (x161==(x162^(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 30U;
	uint16_t x166 = 40U;
	int8_t x167 = INT8_MAX;
	int32_t t41 = 201068;

	t41 = (x165==(x166^(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x169 = 11716041;
	int16_t x170 = -11;
	int64_t x171 = INT64_MIN;
	static int16_t x172 = -1;
	int32_t t42 = -16119;

	t42 = (x169==(x170^(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	uint64_t x175 = 24066851160LLU;
	static volatile int32_t x176 = INT32_MIN;
	static volatile int32_t t43 = -10;

	t43 = (x173==(x174^(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MAX;
	uint32_t x178 = 5562142U;
	volatile int32_t x179 = INT32_MAX;
	int16_t x180 = 159;

	t44 = (x177==(x178^(x179^x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -58308400LL;
	int16_t x182 = INT16_MAX;
	uint8_t x183 = 1U;
	uint8_t x184 = 56U;
	int32_t t45 = 177739;

	t45 = (x181==(x182^(x183^x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x187 = -15317438188517LL;
	int64_t x188 = INT64_MAX;

	t46 = (x185==(x186^(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -269041905;
	int32_t x190 = INT32_MIN;
	int8_t x191 = -1;
	volatile uint16_t x192 = UINT16_MAX;

	t47 = (x189==(x190^(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	static int16_t x194 = INT16_MIN;
	uint16_t x195 = 1U;
	static uint16_t x196 = 1U;

	t48 = (x193==(x194^(x195^x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MIN;
	static int64_t x198 = -1LL;
	int32_t t49 = -223112;

	t49 = (x197==(x198^(x199^x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = 1;
	int64_t x203 = -36355797468792029LL;
	volatile int8_t x204 = INT8_MAX;
	volatile int32_t t50 = 6758;

	t50 = (x201==(x202^(x203^x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 106684U;
	int8_t x206 = -1;
	int8_t x207 = INT8_MIN;
	int32_t t51 = -377485553;

	t51 = (x205==(x206^(x207^x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	int64_t x210 = INT64_MIN;
	uint32_t x211 = 1U;
	volatile int64_t x212 = INT64_MIN;
	int32_t t52 = -555164;

	t52 = (x209==(x210^(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = 4211U;
	int64_t x214 = INT64_MIN;
	uint64_t x216 = 153801090444LLU;
	volatile int32_t t53 = -169548995;

	t53 = (x213==(x214^(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = 770609;
	int32_t x218 = INT32_MAX;
	int32_t x219 = -1;

	t54 = (x217==(x218^(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	int16_t x222 = -1;
	volatile uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MIN;
	int32_t t55 = -386194;

	t55 = (x221==(x222^(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MAX;
	int16_t x226 = 5550;
	static uint8_t x227 = UINT8_MAX;
	volatile int16_t x228 = INT16_MIN;
	static volatile int32_t t56 = 25431858;

	t56 = (x225==(x226^(x227^x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = -1;
	uint8_t x230 = 5U;
	uint64_t x231 = 489989241208LLU;
	static int32_t t57 = 104;

	t57 = (x229==(x230^(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 1046750121LLU;
	static uint32_t x234 = 926780U;
	static uint32_t x236 = 222699395U;
	int32_t t58 = -30177;

	t58 = (x233==(x234^(x235^x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	int32_t x239 = INT32_MIN;
	int32_t x240 = -1;

	t59 = (x237==(x238^(x239^x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	static int32_t x242 = -1;
	int64_t x243 = -1LL;
	static int64_t x244 = -1LL;

	t60 = (x241==(x242^(x243^x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x246 = INT8_MIN;
	int64_t x247 = -1LL;
	int32_t t61 = 0;

	t61 = (x245==(x246^(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 23175945U;
	int8_t x250 = INT8_MAX;
	volatile int16_t x251 = INT16_MAX;
	int8_t x252 = 2;
	int32_t t62 = -1;

	t62 = (x249==(x250^(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = -1;
	int16_t x256 = -1;
	volatile int32_t t63 = -118617347;

	t63 = (x253==(x254^(x255^x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	uint16_t x258 = 151U;
	uint8_t x259 = 7U;
	uint64_t x260 = 5390906142150LLU;
	volatile int32_t t64 = 193791786;

	t64 = (x257==(x258^(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	int16_t x262 = 8009;
	uint64_t x263 = 174489LLU;
	volatile uint64_t x264 = 30LLU;
	int32_t t65 = 0;

	t65 = (x261==(x262^(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x266 = -1;
	int16_t x267 = -20;
	int8_t x268 = 10;

	t66 = (x265==(x266^(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = -1;
	int16_t x271 = 1;
	static uint16_t x272 = 89U;
	static volatile int32_t t67 = 50;

	t67 = (x269==(x270^(x271^x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	uint32_t x274 = 4373747U;
	int64_t x275 = -1LL;
	static volatile int32_t t68 = -20807860;

	t68 = (x273==(x274^(x275^x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x278 = -1;
	volatile int16_t x279 = INT16_MIN;

	t69 = (x277==(x278^(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 103U;
	static int8_t x282 = INT8_MAX;
	int16_t x283 = -1;
	static uint32_t x284 = 56U;
	volatile int32_t t70 = -1710258;

	t70 = (x281==(x282^(x283^x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x285 = 927979645LLU;
	static uint8_t x286 = 33U;
	int16_t x287 = INT16_MIN;
	static int64_t x288 = 214855318309LL;
	volatile int32_t t71 = 32639679;

	t71 = (x285==(x286^(x287^x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x289 = UINT64_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 27;

	t72 = (x289==(x290^(x291^x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = 1;
	volatile int16_t x294 = INT16_MIN;
	int32_t x295 = INT32_MAX;
	static uint32_t x296 = 26858U;
	int32_t t73 = 1;

	t73 = (x293==(x294^(x295^x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 3U;
	uint8_t x298 = 16U;
	int16_t x299 = -82;
	int16_t x300 = -1;

	t74 = (x297==(x298^(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = 403LLU;
	static volatile int16_t x303 = INT16_MIN;
	static uint16_t x304 = 83U;
	int32_t t75 = 63;

	t75 = (x301==(x302^(x303^x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x305 = -18;
	int16_t x306 = INT16_MIN;
	volatile int32_t t76 = -1666;

	t76 = (x305==(x306^(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 10U;
	int64_t x310 = INT64_MAX;
	int32_t x311 = -1;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = 114;

	t77 = (x309==(x310^(x311^x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 7199274;
	static int64_t x314 = -52LL;
	int8_t x316 = -1;
	volatile int32_t t78 = -79;

	t78 = (x313==(x314^(x315^x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MIN;
	int64_t x319 = 107LL;
	int64_t x320 = INT64_MAX;
	static volatile int32_t t79 = -1710;

	t79 = (x317==(x318^(x319^x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 849LLU;
	uint8_t x323 = 34U;
	volatile uint16_t x324 = 2U;
	int32_t t80 = 1600675;

	t80 = (x321==(x322^(x323^x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = 1LL;
	int16_t x326 = 282;
	int8_t x328 = INT8_MIN;

	t81 = (x325==(x326^(x327^x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	int64_t x330 = INT64_MAX;
	uint8_t x331 = UINT8_MAX;
	int32_t x332 = -23376;
	int32_t t82 = -3343641;

	t82 = (x329==(x330^(x331^x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 1U;
	volatile int32_t x336 = 14;
	volatile int32_t t83 = 3136;

	t83 = (x333==(x334^(x335^x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x337 = 535621295U;
	uint16_t x338 = UINT16_MAX;
	int32_t x339 = INT32_MAX;
	static uint64_t x340 = UINT64_MAX;

	t84 = (x337==(x338^(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = -1LL;
	uint64_t x343 = 10LLU;
	int32_t x344 = -1;

	t85 = (x341==(x342^(x343^x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = 2222U;
	static int16_t x346 = INT16_MIN;
	int16_t x348 = -1;
	volatile int32_t t86 = -3005;

	t86 = (x345==(x346^(x347^x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 53;
	uint64_t x350 = 0LLU;
	int8_t x351 = -1;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 1;

	t87 = (x349==(x350^(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	uint16_t x355 = UINT16_MAX;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t88 = 3;

	t88 = (x353==(x354^(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x358 = UINT8_MAX;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = 4128025;

	t89 = (x357==(x358^(x359^x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = INT8_MIN;
	uint8_t x363 = 0U;
	int32_t x364 = -1;
	volatile int32_t t90 = -2951100;

	t90 = (x361==(x362^(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x367 = -223;
	static int8_t x368 = INT8_MAX;

	t91 = (x365==(x366^(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	int16_t x370 = 1;
	volatile uint8_t x371 = 120U;

	t92 = (x369==(x370^(x371^x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -57;
	static int16_t x374 = INT16_MIN;
	static uint32_t x375 = 237068050U;
	volatile int32_t t93 = 28;

	t93 = (x373==(x374^(x375^x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 16U;
	static int32_t x378 = 182540;
	volatile int32_t x379 = -627166;
	volatile int64_t x380 = -1LL;
	int32_t t94 = 6;

	t94 = (x377==(x378^(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = INT16_MAX;
	uint32_t x382 = 82791U;
	uint64_t x383 = 27500764LLU;
	int8_t x384 = INT8_MIN;

	t95 = (x381==(x382^(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 0;
	int8_t x386 = INT8_MAX;
	uint64_t x387 = UINT64_MAX;
	static int32_t t96 = 1272148;

	t96 = (x385==(x386^(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -20568630394LL;
	int8_t x390 = 7;
	uint16_t x391 = UINT16_MAX;
	volatile int32_t x392 = 140108721;

	t97 = (x389==(x390^(x391^x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -7;
	uint64_t x394 = 7668091LLU;
	uint32_t x396 = 162U;
	volatile int32_t t98 = -29;

	t98 = (x393==(x394^(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = 1;
	int32_t x399 = 1679;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t99 = -42868374;

	t99 = (x397==(x398^(x399^x400)));

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

