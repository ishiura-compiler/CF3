#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -3;
static uint16_t x20 = UINT16_MAX;
uint16_t x21 = UINT16_MAX;
volatile int64_t x22 = 374566292LL;
volatile uint8_t x23 = 55U;
int32_t x24 = 1;
uint64_t x28 = UINT64_MAX;
static uint64_t x38 = 784462564668LLU;
volatile int32_t t9 = -18259622;
uint64_t t10 = 249162101LLU;
int8_t x49 = 0;
int64_t x51 = INT64_MIN;
uint32_t x74 = 378856U;
uint16_t x82 = 30U;
int64_t x83 = INT64_MIN;
static int32_t t18 = -8158534;
int64_t x88 = INT64_MAX;
int32_t x90 = INT32_MIN;
static int32_t x91 = INT32_MIN;
static int8_t x96 = -1;
static int32_t x113 = -3980;
int64_t x115 = INT64_MAX;
int8_t x118 = INT8_MIN;
volatile uint64_t t27 = 11145142910LLU;
volatile int16_t x124 = INT16_MAX;
int8_t x128 = -1;
volatile uint64_t t29 = 208544634LLU;
uint32_t x129 = 15321255U;
int16_t x132 = INT16_MIN;
uint16_t x134 = 4U;
int8_t x144 = INT8_MIN;
volatile int32_t t33 = INT32_MIN;
static int16_t x145 = INT16_MAX;
uint8_t x148 = 126U;
volatile int16_t x152 = INT16_MAX;
int8_t x153 = -1;
uint32_t x157 = 0U;
static uint64_t x166 = UINT64_MAX;
volatile int8_t x167 = INT8_MIN;
int64_t x173 = INT64_MIN;
volatile int8_t x182 = INT8_MAX;
int32_t t43 = -32179;
uint64_t x197 = 2642771408LLU;
int8_t x198 = -1;
uint8_t x199 = 19U;
volatile int32_t t47 = 126603338;
volatile uint64_t t48 = 403879289LLU;
uint8_t x218 = UINT8_MAX;
uint64_t x224 = 406856508LLU;
static uint32_t x235 = 2U;
uint64_t x239 = 54111921LLU;
int16_t x242 = INT16_MIN;
static int16_t x243 = INT16_MIN;
volatile int32_t t57 = 1;
int64_t t58 = 968168169LL;
int32_t x249 = INT32_MAX;
int16_t x250 = INT16_MAX;
volatile int64_t t60 = 4965LL;
int16_t x277 = -510;
uint16_t x280 = 6U;
int64_t x290 = -1LL;
int32_t t68 = -163822;
uint16_t x293 = 6618U;
volatile uint64_t x298 = 31390LLU;
int8_t x299 = INT8_MIN;
uint64_t x300 = 97477LLU;
static volatile uint64_t x303 = 736LLU;
uint64_t x305 = UINT64_MAX;
int64_t x313 = -1LL;
int8_t x315 = INT8_MIN;
int64_t t74 = 30040972876LL;
volatile uint64_t x321 = 634542978511521LLU;
int32_t x324 = -1;
static uint64_t t78 = 105606492499196LLU;
static volatile uint8_t x334 = 13U;
int16_t x335 = -141;
volatile int32_t t79 = INT32_MIN;
uint16_t x347 = 1U;
uint64_t x354 = 1540838121987520LLU;
int32_t t84 = 59298;
int64_t x359 = -1LL;
static uint8_t x367 = UINT8_MAX;
int8_t x375 = INT8_MIN;
static volatile int64_t t90 = -728240LL;
uint64_t x383 = 436398776126769260LLU;
int32_t x402 = INT32_MAX;
int16_t x406 = -1;
static uint32_t x409 = UINT32_MAX;
static int64_t x410 = INT64_MIN;


void f0(void) {
	int16_t x1 = -1;
	static volatile uint8_t x2 = 62U;
	int8_t x3 = 14;
	static uint32_t x4 = 83306070U;

	t0 = (x1-(x2<=(x3%x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 26833U;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = INT16_MIN;
	static int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 1;

	t1 = (x5-(x6<=(x7%x8)));

	if (t1 != 26833) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = 3929;
	int64_t x10 = INT64_MIN;
	static int32_t x11 = INT32_MIN;
	uint32_t x12 = 92U;
	volatile int32_t t2 = -1023428;

	t2 = (x9-(x10<=(x11%x12)));

	if (t2 != 3928) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x17 = UINT64_MAX;
	int16_t x18 = 1;
	int32_t x19 = INT32_MAX;
	volatile uint64_t t3 = 14791638890007LLU;

	t3 = (x17-(x18<=(x19%x20)));

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t t4 = -37;

	t4 = (x21-(x22<=(x23%x24)));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 2U;
	volatile int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MIN;
	volatile int32_t t5 = -6639069;

	t5 = (x25-(x26<=(x27%x28)));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 61U;
	volatile int64_t x30 = INT64_MIN;
	int64_t x31 = -1LL;
	int32_t x32 = INT32_MIN;
	static uint32_t t6 = 994146505U;

	t6 = (x29-(x30<=(x31%x32)));

	if (t6 != 60U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 3;
	volatile uint16_t x34 = 1727U;
	uint8_t x35 = 37U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t7 = 2;

	t7 = (x33-(x34<=(x35%x36)));

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	int64_t x39 = INT64_MAX;
	int32_t x40 = 3663;
	static uint64_t t8 = UINT64_MAX;

	t8 = (x37-(x38<=(x39%x40)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 3;
	static int32_t x42 = -1;
	static int16_t x43 = INT16_MIN;
	int16_t x44 = 13351;

	t9 = (x41-(x42<=(x43%x44)));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 396LLU;
	int64_t x46 = INT64_MIN;
	static uint16_t x47 = 59U;
	int32_t x48 = INT32_MIN;

	t10 = (x45-(x46<=(x47%x48)));

	if (t10 != 395LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x50 = UINT16_MAX;
	int32_t x52 = -1;
	static volatile int32_t t11 = -7752226;

	t11 = (x49-(x50<=(x51%x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = INT64_MAX;
	uint16_t x58 = 4100U;
	int16_t x59 = INT16_MIN;
	int8_t x60 = INT8_MAX;
	int64_t t12 = INT64_MAX;

	t12 = (x57-(x58<=(x59%x60)));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = UINT64_MAX;
	static int64_t x62 = -256599458360306LL;
	int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MAX;
	volatile uint64_t t13 = 8334548200125LLU;

	t13 = (x61-(x62<=(x63%x64)));

	if (t13 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = INT16_MIN;
	int64_t x66 = INT64_MIN;
	volatile int64_t x67 = INT64_MAX;
	int8_t x68 = -7;
	int32_t t14 = -23185;

	t14 = (x65-(x66<=(x67%x68)));

	if (t14 != -32769) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 5096U;
	volatile uint8_t x70 = 0U;
	int8_t x71 = INT8_MAX;
	volatile int8_t x72 = INT8_MAX;
	volatile int32_t t15 = 0;

	t15 = (x69-(x70<=(x71%x72)));

	if (t15 != 5095) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	static volatile int16_t x75 = 15468;
	int16_t x76 = -14;
	volatile int32_t t16 = -75998;

	t16 = (x73-(x74<=(x75%x76)));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 2U;
	int32_t x78 = INT32_MIN;
	uint64_t x79 = 2076672LLU;
	int32_t x80 = INT32_MIN;
	volatile int32_t t17 = 3450;

	t17 = (x77-(x78<=(x79%x80)));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1027601;
	volatile uint8_t x84 = 11U;

	t18 = (x81-(x82<=(x83%x84)));

	if (t18 != -1027601) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = -1;
	volatile int64_t x86 = INT64_MIN;
	uint32_t x87 = UINT32_MAX;
	volatile int32_t t19 = -240766605;

	t19 = (x85-(x86<=(x87%x88)));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MAX;
	static uint64_t x92 = 14LLU;
	static int32_t t20 = -10487954;

	t20 = (x89-(x90<=(x91%x92)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 119982523U;
	int8_t x94 = INT8_MIN;
	volatile int8_t x95 = -1;
	volatile uint32_t t21 = 214U;

	t21 = (x93-(x94<=(x95%x96)));

	if (t21 != 119982522U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = 147216330LL;
	static int16_t x98 = 1;
	static int32_t x99 = 2;
	uint8_t x100 = 40U;
	volatile int64_t t22 = -86705LL;

	t22 = (x97-(x98<=(x99%x100)));

	if (t22 != 147216329LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = 3U;
	int8_t x102 = INT8_MIN;
	uint16_t x103 = 2U;
	int64_t x104 = INT64_MAX;
	volatile int32_t t23 = 49809;

	t23 = (x101-(x102<=(x103%x104)));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = 0;
	int8_t x106 = 1;
	int64_t x107 = INT64_MIN;
	int16_t x108 = -1;
	volatile int32_t t24 = -6672;

	t24 = (x105-(x106<=(x107%x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = -1;
	static uint8_t x110 = 126U;
	volatile int64_t x111 = INT64_MIN;
	int32_t x112 = INT32_MIN;
	volatile int32_t t25 = 5;

	t25 = (x109-(x110<=(x111%x112)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x114 = 222307996U;
	int64_t x116 = -1LL;
	volatile int32_t t26 = 226;

	t26 = (x113-(x114<=(x115%x116)));

	if (t26 != -3980) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 859677310160000097LLU;
	int16_t x119 = INT16_MIN;
	static int16_t x120 = -822;

	t27 = (x117-(x118<=(x119%x120)));

	if (t27 != 859677310160000097LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -1;
	static uint64_t x122 = UINT64_MAX;
	uint64_t x123 = UINT64_MAX;
	static volatile int32_t t28 = -164940;

	t28 = (x121-(x122<=(x123%x124)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 573842815LLU;
	int8_t x126 = INT8_MIN;
	int16_t x127 = -1;

	t29 = (x125-(x126<=(x127%x128)));

	if (t29 != 573842814LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x130 = -1;
	uint16_t x131 = 1U;
	uint32_t t30 = 19U;

	t30 = (x129-(x130<=(x131%x132)));

	if (t30 != 15321254U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MAX;
	volatile uint64_t x135 = 15240961353LLU;
	int16_t x136 = 2;
	static int64_t t31 = INT64_MAX;

	t31 = (x133-(x134<=(x135%x136)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile uint8_t x138 = 50U;
	volatile uint32_t x139 = 5U;
	int8_t x140 = -1;
	int32_t t32 = -2;

	t32 = (x137-(x138<=(x139%x140)));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MIN;
	static uint32_t x142 = UINT32_MAX;
	static int32_t x143 = -3;

	t33 = (x141-(x142<=(x143%x144)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x146 = INT32_MIN;
	int32_t x147 = -15;
	int32_t t34 = -27;

	t34 = (x145-(x146<=(x147%x148)));

	if (t34 != 32766) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = -1;
	static int8_t x150 = INT8_MIN;
	uint32_t x151 = UINT32_MAX;
	volatile int32_t t35 = 125146;

	t35 = (x149-(x150<=(x151%x152)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x154 = 44U;
	volatile int64_t x155 = -1LL;
	volatile int8_t x156 = 3;
	volatile int32_t t36 = 375;

	t36 = (x153-(x154<=(x155%x156)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x158 = INT32_MAX;
	static volatile uint8_t x159 = UINT8_MAX;
	uint32_t x160 = 3050U;
	volatile uint32_t t37 = 116U;

	t37 = (x157-(x158<=(x159%x160)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MIN;
	uint8_t x162 = UINT8_MAX;
	volatile int64_t x163 = -1741039LL;
	int16_t x164 = -1;
	int32_t t38 = INT32_MIN;

	t38 = (x161-(x162<=(x163%x164)));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = -28;
	static int64_t x168 = INT64_MAX;
	static volatile int32_t t39 = 873688;

	t39 = (x165-(x166<=(x167%x168)));

	if (t39 != -28) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x169 = INT8_MIN;
	int8_t x170 = INT8_MAX;
	static int8_t x171 = -6;
	uint64_t x172 = UINT64_MAX;
	int32_t t40 = -8308;

	t40 = (x169-(x170<=(x171%x172)));

	if (t40 != -129) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x174 = UINT8_MAX;
	static int8_t x175 = INT8_MIN;
	int8_t x176 = -5;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x173-(x174<=(x175%x176)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = 78219LLU;
	int16_t x178 = -1;
	volatile int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	uint64_t t42 = 532882426339511592LLU;

	t42 = (x177-(x178<=(x179%x180)));

	if (t42 != 78218LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = UINT8_MAX;
	int32_t x183 = -1;
	uint8_t x184 = 48U;

	t43 = (x181-(x182<=(x183%x184)));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 7288271U;
	int64_t x186 = INT64_MIN;
	uint32_t x187 = 25U;
	uint64_t x188 = 1172LLU;
	volatile uint32_t t44 = 6020U;

	t44 = (x185-(x186<=(x187%x188)));

	if (t44 != 7288271U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = 1810U;
	volatile int64_t x190 = -1LL;
	uint32_t x191 = 770U;
	volatile uint8_t x192 = UINT8_MAX;
	volatile uint32_t t45 = 1910296971U;

	t45 = (x189-(x190<=(x191%x192)));

	if (t45 != 1809U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x200 = 2189460420223LL;
	static uint64_t t46 = 605633566753LLU;

	t46 = (x197-(x198<=(x199%x200)));

	if (t46 != 2642771407LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x201 = INT8_MIN;
	static uint16_t x202 = 8045U;
	uint8_t x203 = 38U;
	volatile uint64_t x204 = 30856687643536195LLU;

	t47 = (x201-(x202<=(x203%x204)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x205 = 488095579627833LLU;
	int64_t x206 = INT64_MIN;
	volatile uint16_t x207 = 1U;
	uint16_t x208 = UINT16_MAX;

	t48 = (x205-(x206<=(x207%x208)));

	if (t48 != 488095579627832LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MAX;
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MAX;
	static int16_t x212 = -1;
	static int64_t t49 = -4014950700044978LL;

	t49 = (x209-(x210<=(x211%x212)));

	if (t49 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x213 = 694U;
	int16_t x214 = INT16_MAX;
	static volatile uint16_t x215 = 3998U;
	uint32_t x216 = UINT32_MAX;
	int32_t t50 = 6;

	t50 = (x213-(x214<=(x215%x216)));

	if (t50 != 694) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = INT32_MIN;
	int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

	t51 = (x217-(x218<=(x219%x220)));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -1;
	static uint8_t x222 = UINT8_MAX;
	uint32_t x223 = 122U;
	volatile int32_t t52 = 3;

	t52 = (x221-(x222<=(x223%x224)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = -53;
	volatile uint16_t x226 = 3U;
	int64_t x227 = INT64_MIN;
	int8_t x228 = INT8_MIN;
	volatile int32_t t53 = -468;

	t53 = (x225-(x226<=(x227%x228)));

	if (t53 != -53) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MAX;
	int32_t x230 = INT32_MIN;
	uint8_t x231 = UINT8_MAX;
	uint8_t x232 = 6U;
	int64_t t54 = -510LL;

	t54 = (x229-(x230<=(x231%x232)));

	if (t54 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = 2921U;
	volatile int32_t x234 = -74;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t55 = 1;

	t55 = (x233-(x234<=(x235%x236)));

	if (t55 != 2921) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x237 = 140U;
	uint32_t x238 = UINT32_MAX;
	uint32_t x240 = 580U;
	int32_t t56 = -51647513;

	t56 = (x237-(x238<=(x239%x240)));

	if (t56 != 140) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x241 = INT8_MAX;
	volatile int64_t x244 = -1LL;

	t57 = (x241-(x242<=(x243%x244)));

	if (t57 != 126) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = -5248460864282LL;
	int8_t x246 = INT8_MAX;
	static int32_t x247 = -1;
	static int32_t x248 = INT32_MAX;

	t58 = (x245-(x246<=(x247%x248)));

	if (t58 != -5248460864282LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x251 = INT16_MAX;
	int64_t x252 = -3LL;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x249-(x250<=(x251%x252)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x253 = INT64_MAX;
	static int64_t x254 = INT64_MIN;
	int64_t x255 = 90612824891739616LL;
	int64_t x256 = -1LL;

	t60 = (x253-(x254<=(x255%x256)));

	if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x257 = 4U;
	static volatile int64_t x258 = INT64_MIN;
	volatile int64_t x259 = INT64_MAX;
	volatile int64_t x260 = INT64_MIN;
	volatile int32_t t61 = 21;

	t61 = (x257-(x258<=(x259%x260)));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x261 = 11;
	static int8_t x262 = INT8_MIN;
	static int32_t x263 = INT32_MAX;
	int64_t x264 = -1001030LL;
	int32_t t62 = 26;

	t62 = (x261-(x262<=(x263%x264)));

	if (t62 != 10) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x265 = 244938LLU;
	uint8_t x266 = UINT8_MAX;
	uint32_t x267 = 971U;
	int32_t x268 = INT32_MIN;
	volatile uint64_t t63 = 2944577648208096267LLU;

	t63 = (x265-(x266<=(x267%x268)));

	if (t63 != 244937LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = -1237LL;
	int64_t x270 = INT64_MIN;
	int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MIN;
	static volatile int64_t t64 = 4082160LL;

	t64 = (x269-(x270<=(x271%x272)));

	if (t64 != -1238LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = 6;
	volatile uint64_t x274 = 1248288742210180467LLU;
	volatile uint16_t x275 = 13895U;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t65 = -2;

	t65 = (x273-(x274<=(x275%x276)));

	if (t65 != 6) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x278 = 23U;
	uint32_t x279 = 3U;
	volatile int32_t t66 = 9;

	t66 = (x277-(x278<=(x279%x280)));

	if (t66 != -510) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = -1;
	uint64_t x282 = UINT64_MAX;
	static int16_t x283 = INT16_MIN;
	uint16_t x284 = 14U;
	int32_t t67 = -302032369;

	t67 = (x281-(x282<=(x283%x284)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = 25U;
	uint16_t x291 = 7974U;
	int64_t x292 = INT64_MIN;

	t68 = (x289-(x290<=(x291%x292)));

	if (t68 != 24) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x294 = -1;
	static int64_t x295 = INT64_MIN;
	volatile int8_t x296 = -4;
	volatile int32_t t69 = 84;

	t69 = (x293-(x294<=(x295%x296)));

	if (t69 != 6617) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int32_t t70 = 12248866;

	t70 = (x297-(x298<=(x299%x300)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = UINT8_MAX;
	int32_t x302 = -19764097;
	uint64_t x304 = 196115361925821028LLU;
	volatile int32_t t71 = -8407693;

	t71 = (x301-(x302<=(x303%x304)));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x306 = INT16_MIN;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	uint64_t t72 = UINT64_MAX;

	t72 = (x305-(x306<=(x307%x308)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = 1044389711505LL;
	volatile int16_t x310 = 7792;
	volatile int64_t x311 = -1LL;
	int64_t x312 = INT64_MAX;
	volatile int64_t t73 = -47LL;

	t73 = (x309-(x310<=(x311%x312)));

	if (t73 != 1044389711505LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x314 = UINT8_MAX;
	int8_t x316 = -13;

	t74 = (x313-(x314<=(x315%x316)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x317 = -1;
	int64_t x318 = -906529LL;
	int64_t x319 = INT64_MAX;
	uint64_t x320 = 46556786899033LLU;
	volatile int32_t t75 = -5;

	t75 = (x317-(x318<=(x319%x320)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x322 = 4U;
	volatile int64_t x323 = 65499778529501241LL;
	volatile uint64_t t76 = 17222701881587399LLU;

	t76 = (x321-(x322<=(x323%x324)));

	if (t76 != 634542978511521LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = -1LL;
	int32_t x326 = INT32_MIN;
	uint8_t x327 = 0U;
	volatile int32_t x328 = -8345990;
	int64_t t77 = 6485510LL;

	t77 = (x325-(x326<=(x327%x328)));

	if (t77 != -2LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x329 = UINT64_MAX;
	int64_t x330 = INT64_MIN;
	static uint8_t x331 = 7U;
	uint8_t x332 = 31U;

	t78 = (x329-(x330<=(x331%x332)));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x333 = INT32_MIN;
	int32_t x336 = -1;

	t79 = (x333-(x334<=(x335%x336)));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = 2U;
	volatile int16_t x338 = INT16_MAX;
	uint64_t x339 = 3216690819LLU;
	int8_t x340 = INT8_MIN;
	int32_t t80 = 863296;

	t80 = (x337-(x338<=(x339%x340)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x341 = 1U;
	int16_t x342 = -1;
	uint32_t x343 = 298990U;
	uint64_t x344 = UINT64_MAX;
	volatile int32_t t81 = -1;

	t81 = (x341-(x342<=(x343%x344)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = UINT32_MAX;
	static uint32_t x346 = 444895674U;
	volatile uint8_t x348 = 118U;
	volatile uint32_t t82 = UINT32_MAX;

	t82 = (x345-(x346<=(x347%x348)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = INT16_MIN;
	uint32_t x350 = 2U;
	static volatile int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	int32_t t83 = -4041;

	t83 = (x349-(x350<=(x351%x352)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x353 = 1U;
	uint64_t x355 = 4LLU;
	uint64_t x356 = 10552899328611LLU;

	t84 = (x353-(x354<=(x355%x356)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = 1001U;
	int64_t x358 = -489758551LL;
	static int8_t x360 = -1;
	volatile int32_t t85 = 401120078;

	t85 = (x357-(x358<=(x359%x360)));

	if (t85 != 1000) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x361 = 2U;
	uint32_t x362 = UINT32_MAX;
	int16_t x363 = INT16_MAX;
	uint8_t x364 = 99U;
	static volatile int32_t t86 = -75537;

	t86 = (x361-(x362<=(x363%x364)));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MIN;
	int8_t x366 = -1;
	int16_t x368 = -1;
	int32_t t87 = 0;

	t87 = (x365-(x366<=(x367%x368)));

	if (t87 != -32769) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = -15;
	static uint16_t x370 = 0U;
	int16_t x371 = -60;
	volatile uint64_t x372 = 304436625LLU;
	static int32_t t88 = 8;

	t88 = (x369-(x370<=(x371%x372)));

	if (t88 != -16) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x373 = UINT8_MAX;
	int32_t x374 = INT32_MIN;
	int16_t x376 = 29;
	volatile int32_t t89 = -33029495;

	t89 = (x373-(x374<=(x375%x376)));

	if (t89 != 254) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = 1627556740528192583LL;
	int16_t x378 = INT16_MAX;
	uint64_t x379 = UINT64_MAX;
	uint64_t x380 = UINT64_MAX;

	t90 = (x377-(x378<=(x379%x380)));

	if (t90 != 1627556740528192583LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MIN;
	static int32_t x382 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	int32_t t91 = -754681;

	t91 = (x381-(x382<=(x383%x384)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MAX;
	int64_t x386 = INT64_MAX;
	volatile int8_t x387 = -1;
	static int32_t x388 = INT32_MAX;
	volatile int32_t t92 = INT32_MAX;

	t92 = (x385-(x386<=(x387%x388)));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x389 = 38U;
	static volatile uint64_t x390 = UINT64_MAX;
	int32_t x391 = INT32_MAX;
	static int16_t x392 = 175;
	int32_t t93 = -5601320;

	t93 = (x389-(x390<=(x391%x392)));

	if (t93 != 38) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = -1;
	static int64_t x395 = INT64_MIN;
	static int32_t x396 = INT32_MIN;
	int32_t t94 = -8217289;

	t94 = (x393-(x394<=(x395%x396)));

	if (t94 != -32769) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x397 = UINT64_MAX;
	int16_t x398 = -140;
	uint64_t x399 = UINT64_MAX;
	int64_t x400 = INT64_MIN;
	static uint64_t t95 = UINT64_MAX;

	t95 = (x397-(x398<=(x399%x400)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x401 = -1;
	static uint32_t x403 = 1602U;
	int8_t x404 = INT8_MIN;
	int32_t t96 = -1454;

	t96 = (x401-(x402<=(x403%x404)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x405 = 1;
	uint8_t x407 = 1U;
	static int64_t x408 = INT64_MIN;
	volatile int32_t t97 = -12;

	t97 = (x405-(x406<=(x407%x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x411 = -1LL;
	int16_t x412 = INT16_MAX;
	uint32_t t98 = 0U;

	t98 = (x409-(x410<=(x411%x412)));

	if (t98 != 4294967294U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = 34U;
	int16_t x414 = -1;
	int32_t x415 = INT32_MIN;
	static int64_t x416 = INT64_MIN;
	int32_t t99 = -15279802;

	t99 = (x413-(x414<=(x415%x416)));

	if (t99 != 34) { NG(); } else { ; }
	
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

