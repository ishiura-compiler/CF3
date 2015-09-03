#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x12 = INT16_MAX;
static volatile int32_t t2 = 640254;
uint32_t x13 = 6270U;
int16_t x20 = -1390;
static int8_t x21 = -1;
int8_t x33 = INT8_MIN;
volatile int64_t t8 = 13655LL;
volatile int64_t t9 = 274038244364590LL;
int32_t x51 = INT32_MAX;
static int32_t x63 = INT32_MIN;
int32_t x64 = INT32_MIN;
uint64_t t14 = 28227000199050414LLU;
static uint32_t x71 = UINT32_MAX;
volatile int32_t t17 = 15740634;
uint16_t x82 = 38U;
int32_t x84 = INT32_MIN;
int16_t x86 = INT16_MIN;
static volatile uint64_t x87 = 157724LLU;
int32_t x91 = INT32_MIN;
int32_t t20 = 22;
volatile int32_t x97 = INT32_MAX;
static int32_t x100 = INT32_MAX;
static int16_t x102 = -1;
int32_t x103 = INT32_MIN;
uint64_t x113 = UINT64_MAX;
uint64_t t25 = 91LLU;
volatile int16_t x127 = INT16_MIN;
uint16_t x131 = UINT16_MAX;
uint8_t x132 = UINT8_MAX;
int8_t x133 = -1;
int8_t x135 = INT8_MAX;
int64_t x137 = -961562502637019233LL;
int64_t t31 = -7LL;
int16_t x146 = INT16_MAX;
volatile int32_t x149 = INT32_MIN;
static volatile uint64_t t35 = 349429LLU;
uint64_t x161 = UINT64_MAX;
int64_t x166 = 1145062LL;
int8_t x173 = INT8_MAX;
int64_t x176 = INT64_MIN;
volatile int32_t t42 = 2;
int16_t x191 = INT16_MIN;
uint32_t x201 = 305483U;
uint32_t x202 = 1154668461U;
volatile int64_t x204 = INT64_MIN;
int64_t t47 = -293509LL;
uint32_t x213 = 971170U;
uint32_t x216 = 779966U;
int32_t x217 = INT32_MIN;
static int8_t x219 = INT8_MIN;
volatile int64_t x226 = -945363690LL;
static uint64_t x231 = 37LLU;
static int16_t x239 = 164;
uint64_t t56 = 4015219278242985LLU;
static int16_t x247 = INT16_MIN;
static int16_t x251 = INT16_MAX;
uint32_t x254 = UINT32_MAX;
static int8_t x257 = -1;
int32_t x260 = INT32_MIN;
int32_t x262 = INT32_MIN;
uint8_t x264 = 2U;
uint16_t x265 = UINT16_MAX;
int16_t x268 = -113;
int64_t x271 = INT64_MIN;
int64_t x274 = INT64_MAX;
int64_t t68 = -64560LL;
int8_t x293 = 7;
int16_t x302 = INT16_MAX;
int64_t x310 = INT64_MIN;
int8_t x313 = -1;
int32_t x318 = INT32_MIN;
int64_t x319 = -1LL;
int64_t x323 = INT64_MIN;
uint16_t x326 = UINT16_MAX;
int64_t x329 = INT64_MIN;
int8_t x332 = -62;
static volatile int32_t x336 = -1;
uint32_t t79 = 725280U;
int8_t x342 = 3;
uint32_t t81 = 30058U;
int64_t t83 = -4293732977624497437LL;
uint32_t t84 = 15U;
volatile int8_t x360 = INT8_MIN;
volatile int32_t t90 = -36995;
uint16_t x381 = 88U;
int16_t x382 = -1;
int8_t x383 = INT8_MAX;
volatile uint32_t x384 = 5U;
volatile int16_t x390 = -18;
uint32_t x398 = 486U;
volatile int64_t t96 = 291287845653LL;
int32_t x406 = INT32_MIN;
int32_t x407 = -1;
volatile int32_t x413 = -1;
static int32_t x415 = -97099;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int64_t x2 = 131175246107218623LL;
	volatile uint32_t x3 = UINT32_MAX;
	uint64_t x4 = 10101159485388LLU;
	static uint64_t t0 = 352979816587121533LLU;

	t0 = (x1%((x2==x3)+x4));

	if (t0 != 3310746993008LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int64_t x6 = INT64_MAX;
	int16_t x7 = 16099;
	volatile int8_t x8 = -3;
	volatile int32_t t1 = 4984325;

	t1 = (x5%((x6==x7)+x8));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 0U;
	volatile int16_t x10 = INT16_MIN;
	int16_t x11 = 25;

	t2 = (x9%((x10==x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x14 = 23628U;
	int64_t x15 = INT64_MAX;
	static uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 7772274293LLU;

	t3 = (x13%((x14==x15)+x16));

	if (t3 != 6270LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 170U;
	uint8_t x18 = UINT8_MAX;
	uint16_t x19 = 675U;
	static volatile int32_t t4 = -51766;

	t4 = (x17%((x18==x19)+x20));

	if (t4 != 170) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	uint64_t x23 = 986LLU;
	uint64_t x24 = 6LLU;
	uint64_t t5 = 120210LLU;

	t5 = (x21%((x22==x23)+x24));

	if (t5 != 3LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int32_t x26 = -1;
	int8_t x27 = INT8_MIN;
	volatile int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = -43492;

	t6 = (x25%((x26==x27)+x28));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	uint16_t x30 = 19806U;
	int64_t x31 = -1LL;
	int8_t x32 = INT8_MIN;
	volatile uint32_t t7 = 2099505040U;

	t7 = (x29%((x30==x31)+x32));

	if (t7 != 127U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MAX;
	static volatile int64_t x35 = 8497882611LL;
	int64_t x36 = INT64_MIN;

	t8 = (x33%((x34==x35)+x36));

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 17U;
	uint32_t x46 = 3555U;
	volatile int64_t x47 = 823008215057LL;
	int64_t x48 = INT64_MIN;

	t9 = (x45%((x46==x47)+x48));

	if (t9 != 17LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = 0U;
	uint8_t x50 = UINT8_MAX;
	uint64_t x52 = 420753LLU;
	volatile uint64_t t10 = 1279275686988LLU;

	t10 = (x49%((x50==x51)+x52));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x53 = -2;
	int8_t x54 = INT8_MIN;
	volatile uint8_t x55 = 116U;
	int16_t x56 = -12707;
	int32_t t11 = -6247;

	t11 = (x53%((x54==x55)+x56));

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1585;
	volatile int8_t x58 = INT8_MIN;
	static uint8_t x59 = 3U;
	static uint32_t x60 = UINT32_MAX;
	uint32_t t12 = 1413099522U;

	t12 = (x57%((x58==x59)+x60));

	if (t12 != 4294965711U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = -1;
	static int64_t x62 = INT64_MIN;
	int32_t t13 = 1;

	t13 = (x61%((x62==x63)+x64));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 1LLU;
	int32_t x66 = INT32_MIN;
	int64_t x67 = -206079061554LL;
	static volatile int64_t x68 = -724854671566LL;

	t14 = (x65%((x66==x67)+x68));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = -1LL;
	int8_t x72 = -42;
	int32_t t15 = 114097964;

	t15 = (x69%((x70==x71)+x72));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	int32_t x74 = 1057;
	uint32_t x75 = UINT32_MAX;
	uint32_t x76 = UINT32_MAX;
	uint32_t t16 = 4883U;

	t16 = (x73%((x74==x75)+x76));

	if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MIN;
	uint64_t x78 = UINT64_MAX;
	volatile int8_t x79 = INT8_MAX;
	volatile int32_t x80 = -1;

	t17 = (x77%((x78==x79)+x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x81 = -1;
	int32_t x83 = INT32_MIN;
	int32_t t18 = 2426889;

	t18 = (x81%((x82==x83)+x84));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	uint16_t x88 = 3523U;
	volatile int32_t t19 = -981;

	t19 = (x85%((x86==x87)+x88));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = 4;
	static int32_t x90 = INT32_MAX;
	uint8_t x92 = UINT8_MAX;

	t20 = (x89%((x90==x91)+x92));

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x98 = 210924LLU;
	static int16_t x99 = INT16_MAX;
	volatile int32_t t21 = 13;

	t21 = (x97%((x98==x99)+x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = 8355;
	uint32_t x104 = 531578064U;
	static volatile uint32_t t22 = 307U;

	t22 = (x101%((x102==x103)+x104));

	if (t22 != 8355U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = -1;
	int8_t x106 = 0;
	uint32_t x107 = UINT32_MAX;
	int16_t x108 = -1;
	static volatile int32_t t23 = 0;

	t23 = (x105%((x106==x107)+x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = INT8_MIN;
	uint16_t x111 = 10U;
	int16_t x112 = -1;
	volatile int32_t t24 = -452;

	t24 = (x109%((x110==x111)+x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x114 = INT16_MIN;
	int16_t x115 = 12099;
	static int64_t x116 = -7141135LL;

	t25 = (x113%((x114==x115)+x116));

	if (t25 != 7141134LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = INT32_MIN;
	static uint8_t x119 = 19U;
	static int16_t x120 = INT16_MIN;
	int32_t t26 = -13;

	t26 = (x117%((x118==x119)+x120));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;
	uint8_t x122 = 2U;
	uint16_t x123 = 1U;
	int8_t x124 = INT8_MIN;
	volatile int32_t t27 = 57678280;

	t27 = (x121%((x122==x123)+x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 85LLU;
	int8_t x126 = 22;
	volatile uint64_t x128 = UINT64_MAX;
	volatile uint64_t t28 = 174745479701LLU;

	t28 = (x125%((x126==x127)+x128));

	if (t28 != 85LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x129 = 32U;
	int32_t x130 = INT32_MAX;
	volatile int32_t t29 = 14105193;

	t29 = (x129%((x130==x131)+x132));

	if (t29 != 32) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x134 = 117U;
	int32_t x136 = -1;
	int32_t t30 = 738;

	t30 = (x133%((x134==x135)+x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x138 = INT8_MAX;
	static volatile uint64_t x139 = 12LLU;
	int64_t x140 = -1LL;

	t31 = (x137%((x138==x139)+x140));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = 42;
	static volatile uint8_t x142 = 8U;
	volatile int8_t x143 = INT8_MAX;
	uint32_t x144 = 1704495U;
	uint32_t t32 = 7465077U;

	t32 = (x141%((x142==x143)+x144));

	if (t32 != 42U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -1;
	uint8_t x147 = 13U;
	int64_t x148 = -1LL;
	int64_t t33 = 260593509642LL;

	t33 = (x145%((x146==x147)+x148));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x150 = -7LL;
	volatile uint64_t x151 = 24078814383829LLU;
	volatile uint32_t x152 = UINT32_MAX;
	static volatile uint32_t t34 = 512U;

	t34 = (x149%((x150==x151)+x152));

	if (t34 != 2147483648U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = UINT64_MAX;
	static int16_t x158 = INT16_MIN;
	volatile uint8_t x159 = UINT8_MAX;
	int64_t x160 = INT64_MIN;

	t35 = (x157%((x158==x159)+x160));

	if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x162 = UINT64_MAX;
	volatile int32_t x163 = -337719648;
	uint16_t x164 = 3U;
	volatile uint64_t t36 = 3697092357399488171LLU;

	t36 = (x161%((x162==x163)+x164));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = -44;
	int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MIN;
	static int32_t t37 = 1698675;

	t37 = (x165%((x166==x167)+x168));

	if (t37 != -44) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -17;
	int8_t x170 = 6;
	uint16_t x171 = UINT16_MAX;
	int16_t x172 = 14768;
	int32_t t38 = -7092001;

	t38 = (x169%((x170==x171)+x172));

	if (t38 != -17) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x174 = 521083;
	static uint16_t x175 = 381U;
	static volatile int64_t t39 = -17409245485977LL;

	t39 = (x173%((x174==x175)+x176));

	if (t39 != 127LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = 20;
	uint32_t x178 = 108407U;
	int32_t x179 = INT32_MAX;
	int64_t x180 = INT64_MIN;
	static int64_t t40 = -3780326238LL;

	t40 = (x177%((x178==x179)+x180));

	if (t40 != 20LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = 0;
	static uint32_t x182 = 5187365U;
	static int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MIN;
	volatile int32_t t41 = 31780;

	t41 = (x181%((x182==x183)+x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -1;
	volatile int16_t x186 = -1;
	static uint16_t x187 = UINT16_MAX;
	int8_t x188 = -1;

	t42 = (x185%((x186==x187)+x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x189 = INT64_MIN;
	int8_t x190 = 0;
	int8_t x192 = INT8_MIN;
	volatile int64_t t43 = 921884722865536132LL;

	t43 = (x189%((x190==x191)+x192));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = 4571133011LL;
	int16_t x194 = -7;
	int64_t x195 = INT64_MIN;
	uint8_t x196 = 107U;
	volatile int64_t t44 = -1723705380775755596LL;

	t44 = (x193%((x194==x195)+x196));

	if (t44 != 28LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = 23;
	volatile int64_t x199 = 2064616521LL;
	uint64_t x200 = 8271049580723LLU;
	volatile uint64_t t45 = 1779134845223162756LLU;

	t45 = (x197%((x198==x199)+x200));

	if (t45 != 4156913820621LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x203 = 106505U;
	int64_t t46 = -1LL;

	t46 = (x201%((x202==x203)+x204));

	if (t46 != 305483LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = INT64_MIN;
	uint32_t x206 = 1750446017U;
	int8_t x207 = 6;
	int8_t x208 = -1;

	t47 = (x205%((x206==x207)+x208));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x209 = UINT8_MAX;
	static int16_t x210 = INT16_MAX;
	int64_t x211 = INT64_MIN;
	static uint16_t x212 = 82U;
	static int32_t t48 = 2;

	t48 = (x209%((x210==x211)+x212));

	if (t48 != 9) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x214 = -1;
	int32_t x215 = INT32_MIN;
	uint32_t t49 = 2U;

	t49 = (x213%((x214==x215)+x216));

	if (t49 != 191204U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x218 = 0;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t50 = 880018205;

	t50 = (x217%((x218==x219)+x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = -1;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = UINT16_MAX;
	static int8_t x224 = -1;
	volatile int32_t t51 = 3;

	t51 = (x221%((x222==x223)+x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x225 = INT32_MIN;
	volatile uint8_t x227 = 7U;
	int16_t x228 = 64;
	int32_t t52 = 45;

	t52 = (x225%((x226==x227)+x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x229 = UINT64_MAX;
	volatile uint32_t x230 = UINT32_MAX;
	uint16_t x232 = 990U;
	volatile uint64_t t53 = 14919328695LLU;

	t53 = (x229%((x230==x231)+x232));

	if (t53 != 15LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = INT64_MAX;
	uint32_t x234 = 3U;
	static volatile uint32_t x235 = UINT32_MAX;
	uint32_t x236 = 5405393U;
	int64_t t54 = -26092LL;

	t54 = (x233%((x234==x235)+x236));

	if (t54 != 1639687LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = 80400019988109355LL;
	uint8_t x238 = UINT8_MAX;
	static volatile int16_t x240 = INT16_MIN;
	volatile int64_t t55 = 1LL;

	t55 = (x237%((x238==x239)+x240));

	if (t55 != 22571LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x241 = INT8_MIN;
	uint64_t x242 = 2LLU;
	int32_t x243 = 59;
	uint64_t x244 = UINT64_MAX;

	t56 = (x241%((x242==x243)+x244));

	if (t56 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x245 = UINT32_MAX;
	static uint8_t x246 = 0U;
	static uint16_t x248 = 199U;
	volatile uint32_t t57 = 235286U;

	t57 = (x245%((x246==x247)+x248));

	if (t57 != 45U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = INT32_MAX;
	static uint16_t x252 = 141U;
	static volatile int32_t t58 = 21650;

	t58 = (x249%((x250==x251)+x252));

	if (t58 != -56) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x253 = INT8_MIN;
	int8_t x255 = -5;
	int32_t x256 = INT32_MIN;
	int32_t t59 = 1689570;

	t59 = (x253%((x254==x255)+x256));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x258 = -1;
	uint8_t x259 = UINT8_MAX;
	static int32_t t60 = 1796933;

	t60 = (x257%((x258==x259)+x260));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = -39;
	uint8_t x263 = UINT8_MAX;
	int32_t t61 = 1943;

	t61 = (x261%((x262==x263)+x264));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x266 = -435914021224969LL;
	int8_t x267 = -1;
	volatile int32_t t62 = 75;

	t62 = (x265%((x266==x267)+x268));

	if (t62 != 108) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = 30153747612601LLU;
	int32_t x270 = INT32_MAX;
	int16_t x272 = INT16_MAX;
	static uint64_t t63 = 645303686868052LLU;

	t63 = (x269%((x270==x271)+x272));

	if (t63 != 8257LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = 52319U;
	uint64_t x275 = UINT64_MAX;
	static int8_t x276 = 16;
	volatile uint32_t t64 = 0U;

	t64 = (x273%((x274==x275)+x276));

	if (t64 != 15U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x277 = 2U;
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = -10;
	int32_t x280 = INT32_MIN;
	int32_t t65 = 105082697;

	t65 = (x277%((x278==x279)+x280));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x281 = 1880174764529964661LLU;
	static uint64_t x282 = 2120892900525000873LLU;
	uint8_t x283 = 22U;
	volatile int16_t x284 = INT16_MIN;
	volatile uint64_t t66 = 517130900LLU;

	t66 = (x281%((x282==x283)+x284));

	if (t66 != 1880174764529964661LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x285 = 12726971460LLU;
	static volatile int64_t x286 = -1LL;
	volatile int32_t x287 = -1;
	int8_t x288 = 20;
	volatile uint64_t t67 = 22LLU;

	t67 = (x285%((x286==x287)+x288));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = INT64_MAX;
	uint8_t x290 = 0U;
	uint64_t x291 = 143342194062098272LLU;
	uint8_t x292 = 1U;

	t68 = (x289%((x290==x291)+x292));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x294 = -1;
	int32_t x295 = INT32_MIN;
	static int32_t x296 = INT32_MIN;
	volatile int32_t t69 = -1025798431;

	t69 = (x293%((x294==x295)+x296));

	if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MIN;
	static int32_t x298 = INT32_MIN;
	int64_t x299 = -1LL;
	volatile int8_t x300 = INT8_MAX;
	volatile int32_t t70 = 123;

	t70 = (x297%((x298==x299)+x300));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x301 = 405U;
	uint8_t x303 = 114U;
	uint32_t x304 = 71873678U;
	uint32_t t71 = 520371U;

	t71 = (x301%((x302==x303)+x304));

	if (t71 != 405U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = -1;
	int64_t x306 = INT64_MIN;
	static uint16_t x307 = 47U;
	uint8_t x308 = 42U;
	volatile int32_t t72 = 62542;

	t72 = (x305%((x306==x307)+x308));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x309 = 6U;
	volatile int64_t x311 = INT64_MAX;
	int32_t x312 = -1;
	static volatile int32_t t73 = -1576;

	t73 = (x309%((x310==x311)+x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x314 = -1;
	int32_t x315 = INT32_MAX;
	int32_t x316 = -1;
	int32_t t74 = 184867;

	t74 = (x313%((x314==x315)+x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = -1;
	int64_t x320 = INT64_MIN;
	volatile int64_t t75 = -1572653LL;

	t75 = (x317%((x318==x319)+x320));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = INT8_MAX;
	uint32_t x322 = 106U;
	volatile int16_t x324 = -3;
	volatile int32_t t76 = -56932;

	t76 = (x321%((x322==x323)+x324));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MAX;
	int8_t x327 = -1;
	static int64_t x328 = -430477LL;
	volatile int64_t t77 = 60LL;

	t77 = (x325%((x326==x327)+x328));

	if (t77 != 186850LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x330 = INT8_MIN;
	volatile int8_t x331 = INT8_MIN;
	int64_t t78 = 1015031853004102071LL;

	t78 = (x329%((x330==x331)+x332));

	if (t78 != -8LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x333 = UINT32_MAX;
	static int64_t x334 = 13LL;
	static uint8_t x335 = 2U;

	t79 = (x333%((x334==x335)+x336));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x337 = 1LLU;
	volatile int64_t x338 = 1768598772472945LL;
	int64_t x339 = INT64_MIN;
	int16_t x340 = INT16_MAX;
	uint64_t t80 = 4261LLU;

	t80 = (x337%((x338==x339)+x340));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = UINT8_MAX;
	int8_t x343 = -1;
	uint32_t x344 = 2216179U;

	t81 = (x341%((x342==x343)+x344));

	if (t81 != 255U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 1594382044U;
	uint16_t x346 = 61U;
	int32_t x347 = INT32_MAX;
	static volatile int8_t x348 = 1;
	uint32_t t82 = 178137095U;

	t82 = (x345%((x346==x347)+x348));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = 14191LL;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	int16_t x352 = -1;

	t83 = (x349%((x350==x351)+x352));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x353 = 1U;
	int16_t x354 = INT16_MIN;
	uint32_t x355 = 113187U;
	uint16_t x356 = 16U;

	t84 = (x353%((x354==x355)+x356));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x357 = 0LLU;
	uint16_t x358 = 3U;
	int8_t x359 = -63;
	uint64_t t85 = 3509766495022626LLU;

	t85 = (x357%((x358==x359)+x360));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = INT16_MIN;
	static int16_t x362 = INT16_MAX;
	int64_t x363 = INT64_MAX;
	int32_t x364 = INT32_MAX;
	static volatile int32_t t86 = -206;

	t86 = (x361%((x362==x363)+x364));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x365 = UINT8_MAX;
	uint64_t x366 = 387LLU;
	static volatile int32_t x367 = 746603;
	static int32_t x368 = INT32_MAX;
	int32_t t87 = -11948323;

	t87 = (x365%((x366==x367)+x368));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x369 = -42;
	uint16_t x370 = 1U;
	static volatile int16_t x371 = 3;
	volatile int16_t x372 = INT16_MIN;
	volatile int32_t t88 = -123;

	t88 = (x369%((x370==x371)+x372));

	if (t88 != -42) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x373 = UINT8_MAX;
	static int8_t x374 = INT8_MIN;
	int8_t x375 = INT8_MIN;
	uint64_t x376 = 232642LLU;
	uint64_t t89 = 59892418644015LLU;

	t89 = (x373%((x374==x375)+x376));

	if (t89 != 255LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x377 = INT32_MIN;
	static int16_t x378 = -1874;
	uint16_t x379 = 4U;
	int32_t x380 = -1;

	t90 = (x377%((x378==x379)+x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t t91 = 764024227U;

	t91 = (x381%((x382==x383)+x384));

	if (t91 != 3U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = -1;
	uint32_t x386 = 96401U;
	uint64_t x387 = 127LLU;
	static uint32_t x388 = UINT32_MAX;
	volatile uint32_t t92 = 10555770U;

	t92 = (x385%((x386==x387)+x388));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = 1;
	volatile int32_t x391 = INT32_MAX;
	static volatile int64_t x392 = -202866LL;
	int64_t t93 = -5826LL;

	t93 = (x389%((x390==x391)+x392));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MIN;
	volatile int16_t x394 = -1;
	int32_t x395 = -1;
	volatile int32_t x396 = -429;
	static int64_t t94 = 18991389598LL;

	t94 = (x393%((x394==x395)+x396));

	if (t94 != -260LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x397 = 8826394LLU;
	static int16_t x399 = INT16_MAX;
	volatile int8_t x400 = -3;
	uint64_t t95 = 595239LLU;

	t95 = (x397%((x398==x399)+x400));

	if (t95 != 8826394LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MAX;
	uint32_t x402 = UINT32_MAX;
	uint8_t x403 = 23U;
	int32_t x404 = 119406757;

	t96 = (x401%((x402==x403)+x404));

	if (t96 != 53132393LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x405 = 162384LLU;
	int32_t x408 = INT32_MAX;
	uint64_t t97 = 8995206958786LLU;

	t97 = (x405%((x406==x407)+x408));

	if (t97 != 162384LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x409 = 4146U;
	int32_t x410 = -1;
	volatile int8_t x411 = -39;
	int64_t x412 = -1LL;
	int64_t t98 = -12LL;

	t98 = (x409%((x410==x411)+x412));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x414 = INT8_MIN;
	volatile int8_t x416 = INT8_MIN;
	static volatile int32_t t99 = -233;

	t99 = (x413%((x414==x415)+x416));

	if (t99 != -1) { NG(); } else { ; }
	
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

