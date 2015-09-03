#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
volatile int16_t x12 = INT16_MAX;
int32_t x15 = INT32_MIN;
int16_t x17 = INT16_MIN;
volatile int64_t t4 = 119275195920598662LL;
static int32_t x24 = -488730;
volatile int32_t t5 = 475058826;
volatile uint32_t x25 = 7047390U;
uint32_t t6 = 339U;
int64_t x31 = -1LL;
volatile int64_t t7 = -297977LL;
volatile uint64_t x33 = 1243776LLU;
int32_t x39 = INT32_MAX;
volatile int32_t t9 = 164603483;
int8_t x50 = INT8_MAX;
volatile uint8_t x52 = 1U;
int8_t x54 = INT8_MIN;
static volatile int8_t x55 = -12;
static int8_t x58 = -2;
int64_t t14 = 2044833LL;
int64_t x74 = INT64_MIN;
int16_t x83 = INT16_MIN;
volatile uint32_t t20 = 12U;
static int16_t x89 = 10;
int32_t x106 = INT32_MIN;
int32_t x108 = 25939466;
volatile int32_t x111 = INT32_MAX;
volatile int64_t t27 = 964261738229033LL;
static int8_t x118 = 0;
int32_t x123 = 335462;
static int8_t x126 = INT8_MAX;
uint32_t x127 = UINT32_MAX;
static uint32_t x130 = 130265551U;
uint16_t x136 = 5U;
int32_t x137 = 222005;
volatile uint8_t x139 = 5U;
volatile int32_t x146 = 130703744;
uint64_t x147 = 116165630LLU;
int64_t x148 = INT64_MAX;
volatile uint32_t x151 = UINT32_MAX;
int64_t x153 = 9254LL;
uint32_t x159 = 8062U;
int8_t x161 = INT8_MIN;
uint8_t x162 = 1U;
uint64_t t41 = 48938291677756LLU;
volatile int16_t x171 = INT16_MIN;
int64_t x178 = 13086384715210LL;
volatile uint64_t t44 = 92256296525042598LLU;
int64_t x182 = INT64_MIN;
uint32_t x192 = UINT32_MAX;
int32_t t48 = -39342752;
volatile int64_t t49 = 889659616809403079LL;
int16_t x203 = INT16_MIN;
int64_t x204 = INT64_MAX;
int64_t t50 = 44413854451540699LL;
static int64_t x207 = INT64_MIN;
volatile int64_t x208 = -1278666962886LL;
volatile int8_t x210 = INT8_MIN;
int32_t x212 = -1;
static int16_t x213 = INT16_MIN;
int64_t x218 = INT64_MIN;
int16_t x220 = INT16_MIN;
volatile int8_t x221 = -6;
volatile uint16_t x223 = 3U;
uint64_t x224 = UINT64_MAX;
static int32_t x226 = -764597414;
volatile int32_t t56 = 0;
static int16_t x233 = INT16_MIN;
volatile int32_t t58 = 1912005;
int8_t x238 = 8;
int32_t x252 = INT32_MAX;
uint64_t x254 = 7076953879LLU;
int64_t x257 = -1548717071009597300LL;
static int8_t x277 = INT8_MIN;
int64_t x284 = INT64_MIN;
int16_t x285 = -1815;
int32_t x289 = INT32_MIN;
uint16_t x291 = UINT16_MAX;
uint16_t x292 = 4U;
int64_t x302 = -16426539132933955LL;
static int32_t x304 = -1;
int8_t x305 = 0;
int8_t x309 = INT8_MIN;
uint8_t x316 = 27U;
static int32_t x318 = INT32_MAX;
volatile int16_t x330 = INT16_MIN;
int32_t t83 = 12486325;
uint32_t x340 = 7103159U;
static volatile int64_t x342 = 52987060038134180LL;
int32_t x349 = INT32_MIN;
volatile uint16_t x354 = 486U;
int8_t x358 = -1;
int64_t x362 = INT64_MIN;
int64_t t91 = INT64_MAX;
uint64_t x370 = 9LLU;
int8_t x371 = 1;
static uint64_t t92 = 536956LLU;
int32_t x375 = 14037036;
volatile int32_t x380 = 1343;
uint64_t t94 = 59050LLU;
int8_t x383 = -1;
volatile int64_t x385 = INT64_MIN;
int32_t t97 = 697;
uint8_t x394 = 48U;
volatile int64_t t98 = 10129052486149665LL;
static int8_t x399 = INT8_MIN;


void f0(void) {
	static uint8_t x1 = 2U;
	uint8_t x2 = UINT8_MAX;
	int32_t x3 = INT32_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -1;

	t0 = (x1^(x2|(x3^x4)));

	if (t0 != -2147450883) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 14;
	static uint32_t x7 = UINT32_MAX;
	int16_t x8 = 911;
	volatile uint32_t t1 = 0U;

	t1 = (x5^(x6|(x7^x8)));

	if (t1 != 31870U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int32_t x10 = INT32_MIN;
	static uint16_t x11 = 1U;
	uint32_t t2 = 3703U;

	t2 = (x9^(x10|(x11^x12)));

	if (t2 != 2147450881U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -1LL;
	volatile int64_t x14 = INT64_MAX;
	int64_t x16 = 58LL;
	static volatile int64_t t3 = -327269813975751LL;

	t3 = (x13^(x14|(x15^x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = INT64_MIN;
	int64_t x19 = -1LL;
	volatile uint16_t x20 = UINT16_MAX;

	t4 = (x17^(x18|(x19^x20)));

	if (t4 != 32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 14;
	volatile int32_t x22 = INT32_MAX;
	int16_t x23 = 21;

	t5 = (x21^(x22|(x23^x24)));

	if (t5 != -15) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 95645;
	static uint16_t x27 = UINT16_MAX;
	static int16_t x28 = INT16_MAX;

	t6 = (x25^(x26|(x27^x28)));

	if (t6 != 6978883U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 1U;
	uint16_t x30 = UINT16_MAX;
	int8_t x32 = 2;

	t7 = (x29^(x30|(x31^x32)));

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	static int8_t x35 = INT8_MAX;
	static int32_t x36 = 28359594;
	volatile uint64_t t8 = 61322321LLU;

	t8 = (x33^(x34|(x35^x36)));

	if (t8 != 18446744073708323157LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 82U;
	volatile uint8_t x38 = UINT8_MAX;
	int16_t x40 = INT16_MIN;

	t9 = (x37^(x38|(x39^x40)));

	if (t9 != -2147450963) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static uint32_t x42 = 13564205U;
	static int32_t x43 = INT32_MAX;
	volatile int32_t x44 = INT32_MAX;
	volatile int64_t t10 = 192663936LL;

	t10 = (x41^(x42|(x43^x44)));

	if (t10 != 9223372036841211602LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x45 = 0U;
	volatile int8_t x46 = -1;
	uint8_t x47 = 3U;
	int16_t x48 = -1;
	int32_t t11 = -235;

	t11 = (x45^(x46|(x47^x48)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MIN;
	uint16_t x51 = UINT16_MAX;
	int64_t t12 = -1LL;

	t12 = (x49^(x50|(x51^x52)));

	if (t12 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -38;

	t13 = (x53^(x54|(x55^x56)));

	if (t13 != 32756) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 834U;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = 3414413807500366154LL;

	t14 = (x57^(x58|(x59^x60)));

	if (t14 != -835LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 1595U;
	int64_t x62 = INT64_MIN;
	static int8_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	volatile int64_t t15 = 58766038236321LL;

	t15 = (x61^(x62|(x63^x64)));

	if (t15 != -1733LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = UINT64_MAX;
	volatile uint64_t x66 = UINT64_MAX;
	int8_t x67 = 31;
	static uint16_t x68 = 1521U;
	volatile uint64_t t16 = 2241457392290480813LLU;

	t16 = (x65^(x66|(x67^x68)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = 13;
	uint32_t x70 = UINT32_MAX;
	static uint16_t x71 = UINT16_MAX;
	volatile int8_t x72 = INT8_MIN;
	volatile uint32_t t17 = 32020708U;

	t17 = (x69^(x70|(x71^x72)));

	if (t17 != 4294967282U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int8_t x75 = 3;
	volatile uint64_t x76 = 5926050LLU;
	volatile uint64_t t18 = 197914081153LLU;

	t18 = (x73^(x74|(x75^x76)));

	if (t18 != 9223372036848872609LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	int8_t x78 = -6;
	static uint16_t x79 = 27464U;
	int8_t x80 = -1;
	static volatile int32_t t19 = -511609856;

	t19 = (x77^(x78|(x79^x80)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x81 = 13884628U;
	int16_t x82 = -4;
	volatile int8_t x84 = -6;

	t20 = (x81^(x82|(x83^x84)));

	if (t20 != 4281082666U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int16_t x86 = INT16_MAX;
	static uint16_t x87 = 8416U;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -151324066;

	t21 = (x85^(x86|(x87^x88)));

	if (t21 != 2147450880) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x90 = -1;
	uint8_t x91 = 17U;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t22 = -807229844;

	t22 = (x89^(x90|(x91^x92)));

	if (t22 != -11) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = -1;
	int64_t x94 = 14911494409LL;
	int32_t x95 = 345275;
	int8_t x96 = INT8_MAX;
	static volatile int64_t t23 = -1178978034LL;

	t23 = (x93^(x94|(x95^x96)));

	if (t23 != -14911757774LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	volatile uint8_t x98 = 3U;
	static volatile int8_t x99 = INT8_MAX;
	volatile int64_t x100 = INT64_MAX;
	int64_t t24 = 131869801589607400LL;

	t24 = (x97^(x98|(x99^x100)));

	if (t24 != -9223372036854775684LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -3763;
	int32_t x102 = INT32_MAX;
	int16_t x103 = -1;
	uint8_t x104 = 1U;
	volatile int32_t t25 = -32;

	t25 = (x101^(x102|(x103^x104)));

	if (t25 != 3762) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 8U;
	int8_t x107 = 1;
	volatile int32_t t26 = -14002898;

	t26 = (x105^(x106|(x107^x108)));

	if (t26 != -2121544189) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 535U;
	volatile int64_t x110 = INT64_MIN;
	volatile int32_t x112 = INT32_MIN;

	t27 = (x109^(x110|(x111^x112)));

	if (t27 != -536LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 0U;
	int16_t x114 = INT16_MIN;
	static int8_t x115 = -12;
	int64_t x116 = 919954451548688LL;
	int64_t t28 = -4431051516475666LL;

	t28 = (x113^(x114|(x115^x116)));

	if (t28 != -18972LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 17254318750LL;
	int64_t x119 = 4196976094LL;
	static volatile int8_t x120 = -1;
	volatile int64_t t29 = 1370172963LL;

	t29 = (x117^(x118|(x119^x120)));

	if (t29 != -21447100225LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	int32_t x122 = INT32_MAX;
	int16_t x124 = INT16_MIN;
	volatile uint64_t t30 = 54136LLU;

	t30 = (x121^(x122|(x123^x124)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 7347920977914LL;
	int64_t x128 = INT64_MIN;
	volatile int64_t t31 = 6357LL;

	t31 = (x125^(x126|(x127^x128)));

	if (t31 != -9223364691692634107LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 3U;
	int64_t x131 = INT64_MIN;
	volatile int32_t x132 = -28;
	volatile int64_t t32 = 772860829LL;

	t32 = (x129^(x130|(x131^x132)));

	if (t32 != 9223372036854775788LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = UINT64_MAX;
	uint8_t x134 = 73U;
	int8_t x135 = INT8_MIN;
	volatile uint64_t t33 = 7LLU;

	t33 = (x133^(x134|(x135^x136)));

	if (t33 != 50LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = -1;
	uint32_t x140 = 46972865U;
	uint32_t t34 = 1781586697U;

	t34 = (x137^(x138|(x139^x140)));

	if (t34 != 4294745290U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -1;
	int16_t x142 = 2638;
	uint16_t x143 = UINT16_MAX;
	volatile uint8_t x144 = 8U;
	int32_t t35 = 190;

	t35 = (x141^(x142|(x143^x144)));

	if (t35 != -65536) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	static uint64_t t36 = 217452562213LLU;

	t36 = (x145^(x146|(x147^x148)));

	if (t36 != 9223372034709686910LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	uint32_t x150 = 1585U;
	static volatile uint8_t x152 = 1U;
	static volatile int64_t t37 = 1209LL;

	t37 = (x149^(x150|(x151^x152)));

	if (t37 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MIN;
	static int8_t x156 = 1;
	int64_t t38 = -34785743224375815LL;

	t38 = (x153^(x154|(x155^x156)));

	if (t38 != -2147474393LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	volatile int64_t x158 = INT64_MAX;
	volatile uint32_t x160 = UINT32_MAX;
	int64_t t39 = 144LL;

	t39 = (x157^(x158|(x159^x160)));

	if (t39 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x163 = UINT8_MAX;
	static int64_t x164 = INT64_MAX;
	volatile int64_t t40 = 7161213LL;

	t40 = (x161^(x162|(x163^x164)));

	if (t40 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	uint64_t x166 = UINT64_MAX;
	uint32_t x167 = 125094U;
	int16_t x168 = INT16_MAX;

	t41 = (x165^(x166|(x167^x168)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 191U;
	static int8_t x170 = -20;
	int32_t x172 = 1;
	int32_t t42 = -1;

	t42 = (x169^(x170|(x171^x172)));

	if (t42 != -174) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x173 = 10U;
	int8_t x174 = INT8_MIN;
	uint64_t x175 = 145171LLU;
	volatile uint16_t x176 = UINT16_MAX;
	uint64_t t43 = 49187739798LLU;

	t43 = (x173^(x174|(x175^x176)));

	if (t43 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x179 = 1U;
	uint64_t x180 = 1007677088904447889LLU;

	t44 = (x177^(x178|(x179^x180)));

	if (t44 != 17439063657127376858LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	static int8_t x183 = 5;
	int8_t x184 = INT8_MAX;
	volatile int64_t t45 = 560355477061LL;

	t45 = (x181^(x182|(x183^x184)));

	if (t45 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	static volatile uint8_t x186 = 2U;
	uint64_t x187 = 2LLU;
	volatile int16_t x188 = -7485;
	volatile uint64_t t46 = 2LLU;

	t46 = (x185^(x186|(x187^x188)));

	if (t46 != 9223372036854783292LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 126U;
	volatile int32_t x190 = INT32_MAX;
	static uint32_t x191 = 219U;
	uint32_t t47 = 115008U;

	t47 = (x189^(x190|(x191^x192)));

	if (t47 != 4294967169U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	int16_t x194 = INT16_MAX;
	int8_t x195 = -1;
	int8_t x196 = INT8_MIN;

	t48 = (x193^(x194|(x195^x196)));

	if (t48 != 32512) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	uint8_t x198 = 1U;
	volatile int64_t x199 = -1LL;
	int8_t x200 = INT8_MIN;

	t49 = (x197^(x198|(x199^x200)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = -17;
	int64_t x202 = INT64_MIN;

	t50 = (x201^(x202|(x203^x204)));

	if (t50 != 9223372036854743056LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	int8_t x206 = INT8_MIN;
	volatile int64_t t51 = 3153408863LL;

	t51 = (x205^(x206|(x207^x208)));

	if (t51 != 69LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = 226080;
	uint8_t x211 = 11U;
	int32_t t52 = -13;

	t52 = (x209^(x210|(x211^x212)));

	if (t52 != -226092) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x214 = -1;
	volatile int32_t x215 = -398407;
	static volatile int64_t x216 = -1LL;
	int64_t t53 = 28899LL;

	t53 = (x213^(x214|(x215^x216)));

	if (t53 != 32767LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	uint32_t x219 = 235649U;
	int64_t t54 = -2881536654LL;

	t54 = (x217^(x218|(x219^x220)));

	if (t54 != -9223372036854519938LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x222 = INT64_MIN;
	uint64_t t55 = 143766443LLU;

	t55 = (x221^(x222|(x223^x224)));

	if (t55 != 6LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 2U;
	uint8_t x227 = 1U;
	int16_t x228 = 508;

	t56 = (x225^(x226|(x227^x228)));

	if (t56 != -764597251) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 0U;
	uint64_t x230 = 87LLU;
	int8_t x231 = INT8_MAX;
	volatile uint16_t x232 = UINT16_MAX;
	volatile uint64_t t57 = 35734756LLU;

	t57 = (x229^(x230|(x231^x232)));

	if (t57 != 65495LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x234 = 8485U;
	int8_t x235 = -2;
	int32_t x236 = INT32_MAX;

	t58 = (x233^(x234|(x235^x236)));

	if (t58 != 2147459365) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MAX;
	int32_t x239 = 1473937;
	int16_t x240 = -1;
	int32_t t59 = 336108;

	t59 = (x237^(x238|(x239^x240)));

	if (t59 != -2146009711) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MIN;
	static int16_t x242 = -1;
	uint32_t x243 = 137146062U;
	int16_t x244 = INT16_MIN;
	volatile uint32_t t60 = 14244097U;

	t60 = (x241^(x242|(x243^x244)));

	if (t60 != 127U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	volatile uint16_t x246 = UINT16_MAX;
	static int32_t x247 = INT32_MIN;
	static uint16_t x248 = 23226U;
	volatile int32_t t61 = -7;

	t61 = (x245^(x246|(x247^x248)));

	if (t61 != -65536) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	static volatile int64_t x250 = -33973955LL;
	int8_t x251 = -1;
	static uint64_t t62 = 4681491509557LLU;

	t62 = (x249^(x250|(x251^x252)));

	if (t62 != 33973954LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MAX;
	int64_t x255 = INT64_MIN;
	int32_t x256 = INT32_MIN;
	volatile uint64_t t63 = 92LLU;

	t63 = (x253^(x254|(x255^x256)));

	if (t63 != 9223372035341795176LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = 531020190;
	uint64_t x259 = UINT64_MAX;
	volatile int8_t x260 = 38;
	static volatile uint64_t t64 = 51590739634798458LLU;

	t64 = (x257^(x258|(x259^x260)));

	if (t64 != 1548717071009597267LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = 6;
	int32_t x262 = -1;
	int64_t x263 = 50LL;
	static int64_t x264 = INT64_MAX;
	static volatile int64_t t65 = 4440129743122LL;

	t65 = (x261^(x262|(x263^x264)));

	if (t65 != -7LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 0U;
	static uint64_t x266 = 1291LLU;
	volatile int8_t x267 = INT8_MIN;
	uint64_t x268 = UINT64_MAX;
	uint64_t t66 = 25979286696LLU;

	t66 = (x265^(x266|(x267^x268)));

	if (t66 != 1407LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = INT32_MIN;
	static int8_t x270 = -1;
	int16_t x271 = INT16_MIN;
	int32_t x272 = INT32_MAX;
	volatile int32_t t67 = INT32_MAX;

	t67 = (x269^(x270|(x271^x272)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -3;
	static int16_t x274 = -1;
	int8_t x275 = 14;
	volatile int16_t x276 = -1264;
	static volatile int32_t t68 = 2354;

	t68 = (x273^(x274|(x275^x276)));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x278 = 845U;
	int64_t x279 = INT64_MIN;
	int32_t x280 = -2;
	static volatile int64_t t69 = 6997514905983LL;

	t69 = (x277^(x278|(x279^x280)));

	if (t69 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1259089160074208940LL;
	int64_t x282 = 0LL;
	int8_t x283 = INT8_MAX;
	static int64_t t70 = 3689815372LL;

	t70 = (x281^(x282|(x283^x284)));

	if (t70 != 7964282876780566827LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x286 = -1;
	uint8_t x287 = UINT8_MAX;
	int32_t x288 = -11;
	int32_t t71 = 208549;

	t71 = (x285^(x286|(x287^x288)));

	if (t71 != 1814) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x290 = UINT32_MAX;
	volatile uint32_t t72 = 362U;

	t72 = (x289^(x290|(x291^x292)));

	if (t72 != 2147483647U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 31U;
	volatile uint32_t x294 = 183849U;
	int32_t x295 = -2;
	static int16_t x296 = 4;
	uint32_t t73 = 3013U;

	t73 = (x293^(x294|(x295^x296)));

	if (t73 != 4294967268U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	volatile int64_t x298 = INT64_MAX;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = -4;
	static int64_t t74 = -1138507282223LL;

	t74 = (x297^(x298|(x299^x300)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 326922070U;
	volatile int16_t x303 = INT16_MIN;
	volatile int64_t t75 = 1LL;

	t75 = (x301^(x302|(x303^x304)));

	if (t75 != -16426539412647767LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x306 = 1197U;
	uint32_t x307 = 296568U;
	int64_t x308 = -1LL;
	static volatile int64_t t76 = -92LL;

	t76 = (x305^(x306|(x307^x308)));

	if (t76 != -295505LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 25878416U;
	uint8_t x311 = 3U;
	static int8_t x312 = -1;
	uint32_t t77 = 517791659U;

	t77 = (x309^(x310|(x311^x312)));

	if (t77 != 124U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 55661272LLU;
	int16_t x314 = -1;
	volatile uint32_t x315 = 7U;
	uint64_t t78 = 15764906679218745LLU;

	t78 = (x313^(x314|(x315^x316)));

	if (t78 != 4239306023LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int32_t x319 = INT32_MIN;
	int16_t x320 = 1;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x317^(x318|(x319^x320)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = 449U;
	static volatile uint32_t x322 = 46073882U;
	uint8_t x323 = UINT8_MAX;
	volatile int32_t x324 = INT32_MIN;
	volatile uint32_t t80 = 57399U;

	t80 = (x321^(x322|(x323^x324)));

	if (t80 != 2193557822U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MAX;
	int16_t x326 = INT16_MIN;
	static volatile int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t81 = -99593788;

	t81 = (x325^(x326|(x327^x328)));

	if (t81 != -2147483521) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	uint64_t x331 = UINT64_MAX;
	uint16_t x332 = 61U;
	volatile uint64_t t82 = 123079311464LLU;

	t82 = (x329^(x330|(x331^x332)));

	if (t82 != 9223372036854775746LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = 755;
	static int16_t x334 = INT16_MAX;
	static int8_t x335 = INT8_MIN;
	uint16_t x336 = UINT16_MAX;

	t83 = (x333^(x334|(x335^x336)));

	if (t83 != -33524) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	uint32_t x338 = UINT32_MAX;
	int32_t x339 = INT32_MIN;
	uint32_t t84 = 2247076U;

	t84 = (x337^(x338|(x339^x340)));

	if (t84 != 32767U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	int64_t x343 = -1LL;
	static uint16_t x344 = 118U;
	int64_t t85 = 596441LL;

	t85 = (x341^(x342|(x343^x344)));

	if (t85 != -46LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	volatile int16_t x346 = -1;
	static uint8_t x347 = UINT8_MAX;
	int64_t x348 = 27326205727424LL;
	static int64_t t86 = -27665LL;

	t86 = (x345^(x346|(x347^x348)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = 10363U;
	int8_t x351 = -1;
	uint8_t x352 = UINT8_MAX;
	int32_t t87 = -126808190;

	t87 = (x349^(x350|(x351^x352)));

	if (t87 != 2147483515) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = INT16_MIN;
	volatile int16_t x355 = -1;
	int32_t x356 = INT32_MIN;
	int32_t t88 = -405452823;

	t88 = (x353^(x354|(x355^x356)));

	if (t88 != -2147450881) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x357 = 76276LLU;
	static uint16_t x359 = 7189U;
	uint32_t x360 = 1U;
	volatile uint64_t t89 = 632873746082LLU;

	t89 = (x357^(x358|(x359^x360)));

	if (t89 != 4294891019LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	volatile int64_t x363 = -11952269886LL;
	volatile int64_t x364 = -6641895699714606LL;
	int64_t t90 = -69570333304040LL;

	t90 = (x361^(x362|(x363^x364)));

	if (t90 != 9216730135922198416LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = -1;
	static volatile int8_t x367 = INT8_MIN;
	static int16_t x368 = INT16_MAX;

	t91 = (x365^(x366|(x367^x368)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int16_t x372 = INT16_MIN;

	t92 = (x369^(x370|(x371^x372)));

	if (t92 != 32758LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	int32_t x374 = 561;
	uint16_t x376 = 5956U;
	int32_t t93 = 124145;

	t93 = (x373^(x374|(x375^x376)));

	if (t93 != 14034822) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -68;
	int64_t x378 = -1LL;
	uint64_t x379 = 3776LLU;

	t94 = (x377^(x378|(x379^x380)));

	if (t94 != 67LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MIN;
	static int64_t x382 = INT64_MAX;
	volatile uint64_t x384 = 435LLU;
	uint64_t t95 = 18350732728724LLU;

	t95 = (x381^(x382|(x383^x384)));

	if (t95 != 2147483647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x386 = UINT16_MAX;
	uint32_t x387 = UINT32_MAX;
	uint16_t x388 = UINT16_MAX;
	static volatile int64_t t96 = -10317LL;

	t96 = (x385^(x386|(x387^x388)));

	if (t96 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 0U;
	volatile int8_t x390 = 30;
	uint16_t x391 = 0U;
	volatile int32_t x392 = 7;

	t97 = (x389^(x390|(x391^x392)));

	if (t97 != 31) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = 676275536;
	int64_t x395 = 3302LL;
	int8_t x396 = -1;

	t98 = (x393^(x394|(x395^x396)));

	if (t98 != -676276631LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	static uint32_t x398 = UINT32_MAX;
	uint64_t x400 = 26992631034LLU;
	uint64_t t99 = 86904733LLU;

	t99 = (x397^(x398|(x399^x400)));

	if (t99 != 18446744045792264192LLU) { NG(); } else { ; }
	
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

